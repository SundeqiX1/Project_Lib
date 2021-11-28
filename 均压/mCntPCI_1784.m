function [maskdisplay] = mCntPCI_1784(channel, boardType) %#ok

% MADADLINK - InitFcn and Mask Initialization for ADLINK PCI-9114 A/D section
% Copyright 2011 Tong Zhizhong HIT.
% $Revision: 1.0 $ $Date: 2011/11/10 22:27:44 $
      
      maskdisplay='disp(''PCI-1784\nUESTC\n';

    maskdisplay=[maskdisplay,'Motor Counter'');'];
    for i=1:length(channel)/2
      maskdisplay = [maskdisplay,'port_label(''output'',',num2str(i),',''',strcat('Cnt',num2str(channel(i))),''');']; %#ok+num2str(channel(i))
    end
    
    for i=(length(channel)/2)+1:length(channel)
      maskdisplay = [maskdisplay,'port_label(''output'',',num2str(i),',''',strcat('Index',num2str(channel(i)-4)),''');']; %#ok+num2str(channel(i))
    end

    if size(channel,1)~=1
      error('xPCTarget:PCI1784:Config', 'Channel Vector must be a row vector');
    end    
  end
