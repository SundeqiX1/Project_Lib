function [maskdisplay, oreset, oinitval]= ...
    mdaadlink6208(when, channel, reset, initval, pciSlot) %#ok

%   Copyright 1996-2007 The MathWorks, Inc.
%   $Revision: 1.1.8.2 $   $Date: 2007/12/10 22:28:16 $

  maskdisplay = 'disp(''PCI-6208A\nAdlink\n';
  maxChannel  = 8;
  mType       = get_param( gcb, 'MaskType' );

if when == 1
  blocks = find_system(bdroot,'FollowLinks','on','LookUnderMasks','all', ...
                       'MaskType', mType);
  if length(blocks)>1
    % loop over all blocks and collect all information for cross-block checking
    for block=1:length(blocks)
      % PCI-slot (physical board reference
      tmp=eval(get_param(blocks{block},'pcislot'));
      if length(tmp)==2
        info.pci(block)=tmp(1)*256+tmp(2);
      else
        info.pci(block)=tmp(1);
      end
    end
    % do cross-block checking by using the collected information
    % check for multiple instances using the same physical board
    if length(info.pci)~=length(unique(info.pci))
      error('xPCTarget:Adlink:Board',...
            ['Only one instance of the Adlink ',description,' D/A block per physical board allowed in a model']);
    end
  end
end

if when == 2
  maskdisplay=[maskdisplay,'Analog Output'');'];
  for i=1:length(channel)
    maskdisplay=[maskdisplay,'port_label(''input'',',num2str(i),',''',num2str(channel(i)),''');']; %#ok
  end
  
  if size(channel,1)~=1
    error('xPCTarget:Adlink:Config',...
          'Channel Vector must be a row vector');
  end
  
  chUsed=zeros(1,32);
  for i=1:length(channel)
    chan=round(channel(i));
    if chan < 1 || chan > maxChannel
      error('xPCTarget:Adlink:Config',...
            ['Channel Vector elements have to be in the range: 1..',num2str(maxChannel)]);
    end
    if chUsed(chan)
      error('xPCTarget:Adlink:Config',...
            ['channel ',num2str(chan),' already in use']);
    else
      chUsed(chan)=1;
    end
  end

  rlength = length(reset);
  clength = length(channel);
  if( rlength == 1 && clength > 1 )
    oreset = ones( 1, clength ) * reset;
  else
    oreset = reset;
  end
  if( length( oreset ) ~= clength )
    error('xPCTarget:Adlink:Config',...
          ['Length of the reset vector must be either 1 or the same length '...
           'as the channel vector']);
  end

  ilength = length(initval);
  if( ilength == 1 && clength > 1 )
    oinitval = ones( 1, clength ) * initval;
  else
    oinitval = initval;
  end
  if( length( oinitval ) ~= clength )
    error('xPCTarget:Adlink:Config',...
          ['Length of the initial value vector must be either 1 or the same '...
           'length as the channel vector']);
  end
end
