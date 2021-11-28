function bio=pci1756abio
bio = [];
bio(1).blkName='PCI1';
bio(1).sigName='';
bio(1).portIdx=0;
bio(1).dim=[32,1];
bio(1).sigWidth=32;
bio(1).sigAddress='&pci1756a_B.PCI1[0]';
bio(1).ndims=2;
bio(1).size=[];
bio(1).isStruct=false;
bio(getlenBIO) = bio(1);

function len = getlenBIO
len = 1;

