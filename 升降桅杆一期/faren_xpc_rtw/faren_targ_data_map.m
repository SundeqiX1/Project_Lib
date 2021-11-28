  function targMap = targDataMap(),

  ;%***********************
  ;% Create Parameter Map *
  ;%***********************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 2;
    sectIdxOffset = 0;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc paramMap
    ;%
    paramMap.nSections           = nTotSects;
    paramMap.sectIdxOffset       = sectIdxOffset;
      paramMap.sections(nTotSects) = dumSection; %prealloc
    paramMap.nTotData            = -1;
    
    ;%
    ;% Auto data (faren_P)
    ;%
      section.nData     = 63;
      section.data(63)  = dumData; %prealloc
      
	  ;% faren_P.Constant24_Value
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% faren_P.Constant18_Value
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 1;
	
	  ;% faren_P.Constant17_Value
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 2;
	
	  ;% faren_P.Constant19_Value
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 3;
	
	  ;% faren_P.Constant20_Value
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 4;
	
	  ;% faren_P.Constant21_Value
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 5;
	
	  ;% faren_P.Constant22_Value
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 6;
	
	  ;% faren_P.Constant23_Value
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 7;
	
	  ;% faren_P.Constant7_Value
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 8;
	
	  ;% faren_P.Constant16_Value
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 9;
	
	  ;% faren_P.Constant1_Value
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 10;
	
	  ;% faren_P.Constant2_Value
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 11;
	
	  ;% faren_P.Constant3_Value
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 12;
	
	  ;% faren_P.Constant4_Value
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 13;
	
	  ;% faren_P.Constant5_Value
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 14;
	
	  ;% faren_P.Constant6_Value
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 15;
	
	  ;% faren_P.Constant15_Value
	  section.data(17).logicalSrcIdx = 16;
	  section.data(17).dtTransOffset = 16;
	
	  ;% faren_P.Constant9_Value
	  section.data(18).logicalSrcIdx = 17;
	  section.data(18).dtTransOffset = 17;
	
	  ;% faren_P.Constant8_Value
	  section.data(19).logicalSrcIdx = 18;
	  section.data(19).dtTransOffset = 18;
	
	  ;% faren_P.Constant10_Value
	  section.data(20).logicalSrcIdx = 19;
	  section.data(20).dtTransOffset = 19;
	
	  ;% faren_P.Constant11_Value
	  section.data(21).logicalSrcIdx = 20;
	  section.data(21).dtTransOffset = 20;
	
	  ;% faren_P.Constant12_Value
	  section.data(22).logicalSrcIdx = 21;
	  section.data(22).dtTransOffset = 21;
	
	  ;% faren_P.Constant13_Value
	  section.data(23).logicalSrcIdx = 22;
	  section.data(23).dtTransOffset = 22;
	
	  ;% faren_P.Constant14_Value
	  section.data(24).logicalSrcIdx = 23;
	  section.data(24).dtTransOffset = 23;
	
	  ;% faren_P.Setup_P1_Size
	  section.data(25).logicalSrcIdx = 24;
	  section.data(25).dtTransOffset = 24;
	
	  ;% faren_P.Setup_P1
	  section.data(26).logicalSrcIdx = 25;
	  section.data(26).dtTransOffset = 26;
	
	  ;% faren_P.Setup_P2_Size
	  section.data(27).logicalSrcIdx = 26;
	  section.data(27).dtTransOffset = 30;
	
	  ;% faren_P.Setup_P2
	  section.data(28).logicalSrcIdx = 27;
	  section.data(28).dtTransOffset = 32;
	
	  ;% faren_P.Setup_P3_Size
	  section.data(29).logicalSrcIdx = 28;
	  section.data(29).dtTransOffset = 36;
	
	  ;% faren_P.Setup_P4_Size
	  section.data(30).logicalSrcIdx = 30;
	  section.data(30).dtTransOffset = 38;
	
	  ;% faren_P.Setup_P5_Size
	  section.data(31).logicalSrcIdx = 32;
	  section.data(31).dtTransOffset = 40;
	
	  ;% faren_P.Setup_P5
	  section.data(32).logicalSrcIdx = 33;
	  section.data(32).dtTransOffset = 42;
	
	  ;% faren_P.Setup_P6_Size
	  section.data(33).logicalSrcIdx = 34;
	  section.data(33).dtTransOffset = 43;
	
	  ;% faren_P.Setup_P6
	  section.data(34).logicalSrcIdx = 35;
	  section.data(34).dtTransOffset = 45;
	
	  ;% faren_P.Setup_P7_Size
	  section.data(35).logicalSrcIdx = 36;
	  section.data(35).dtTransOffset = 47;
	
	  ;% faren_P.Setup_P8_Size
	  section.data(36).logicalSrcIdx = 38;
	  section.data(36).dtTransOffset = 49;
	
	  ;% faren_P.Setup_P9_Size
	  section.data(37).logicalSrcIdx = 40;
	  section.data(37).dtTransOffset = 51;
	
	  ;% faren_P.Setup_P10_Size
	  section.data(38).logicalSrcIdx = 42;
	  section.data(38).dtTransOffset = 53;
	
	  ;% faren_P.Setup_P11_Size
	  section.data(39).logicalSrcIdx = 44;
	  section.data(39).dtTransOffset = 55;
	
	  ;% faren_P.Setup_P12_Size
	  section.data(40).logicalSrcIdx = 46;
	  section.data(40).dtTransOffset = 57;
	
	  ;% faren_P.Setup_P13_Size
	  section.data(41).logicalSrcIdx = 48;
	  section.data(41).dtTransOffset = 59;
	
	  ;% faren_P.Setup_P13
	  section.data(42).logicalSrcIdx = 49;
	  section.data(42).dtTransOffset = 61;
	
	  ;% faren_P.Setup_P14_Size
	  section.data(43).logicalSrcIdx = 50;
	  section.data(43).dtTransOffset = 63;
	
	  ;% faren_P.Setup_P15_Size
	  section.data(44).logicalSrcIdx = 52;
	  section.data(44).dtTransOffset = 65;
	
	  ;% faren_P.Setup_P15
	  section.data(45).logicalSrcIdx = 53;
	  section.data(45).dtTransOffset = 67;
	
	  ;% faren_P.Setup_P16_Size
	  section.data(46).logicalSrcIdx = 54;
	  section.data(46).dtTransOffset = 68;
	
	  ;% faren_P.Setup_P16
	  section.data(47).logicalSrcIdx = 55;
	  section.data(47).dtTransOffset = 70;
	
	  ;% faren_P.Setup_P17_Size
	  section.data(48).logicalSrcIdx = 56;
	  section.data(48).dtTransOffset = 71;
	
	  ;% faren_P.Setup_P17
	  section.data(49).logicalSrcIdx = 57;
	  section.data(49).dtTransOffset = 73;
	
	  ;% faren_P.Setup_P18_Size
	  section.data(50).logicalSrcIdx = 58;
	  section.data(50).dtTransOffset = 74;
	
	  ;% faren_P.Setup_P18
	  section.data(51).logicalSrcIdx = 59;
	  section.data(51).dtTransOffset = 76;
	
	  ;% faren_P.Setup_P19_Size
	  section.data(52).logicalSrcIdx = 60;
	  section.data(52).dtTransOffset = 77;
	
	  ;% faren_P.Setup_P19
	  section.data(53).logicalSrcIdx = 61;
	  section.data(53).dtTransOffset = 79;
	
	  ;% faren_P.Setup_P20_Size
	  section.data(54).logicalSrcIdx = 62;
	  section.data(54).dtTransOffset = 80;
	
	  ;% faren_P.Setup_P20
	  section.data(55).logicalSrcIdx = 63;
	  section.data(55).dtTransOffset = 82;
	
	  ;% faren_P.Setup_P21_Size
	  section.data(56).logicalSrcIdx = 64;
	  section.data(56).dtTransOffset = 83;
	
	  ;% faren_P.Setup_P21
	  section.data(57).logicalSrcIdx = 65;
	  section.data(57).dtTransOffset = 85;
	
	  ;% faren_P.Setup_P22_Size
	  section.data(58).logicalSrcIdx = 66;
	  section.data(58).dtTransOffset = 86;
	
	  ;% faren_P.Setup_P22
	  section.data(59).logicalSrcIdx = 67;
	  section.data(59).dtTransOffset = 88;
	
	  ;% faren_P.Setup_P23_Size
	  section.data(60).logicalSrcIdx = 68;
	  section.data(60).dtTransOffset = 89;
	
	  ;% faren_P.Setup_P23
	  section.data(61).logicalSrcIdx = 69;
	  section.data(61).dtTransOffset = 91;
	
	  ;% faren_P.Setup_P24_Size
	  section.data(62).logicalSrcIdx = 70;
	  section.data(62).dtTransOffset = 92;
	
	  ;% faren_P.Setup_P24
	  section.data(63).logicalSrcIdx = 71;
	  section.data(63).dtTransOffset = 94;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(1) = section;
      clear section
      
      section.nData     = 4;
      section.data(4)  = dumData; %prealloc
      
	  ;% faren_P.Constant_Value
	  section.data(1).logicalSrcIdx = 72;
	  section.data(1).dtTransOffset = 0;
	
	  ;% faren_P.SwitchControl_Threshold
	  section.data(2).logicalSrcIdx = 73;
	  section.data(2).dtTransOffset = 1;
	
	  ;% faren_P.Constant_Value_h
	  section.data(3).logicalSrcIdx = 74;
	  section.data(3).dtTransOffset = 2;
	
	  ;% faren_P.SwitchControl_Threshold_d
	  section.data(4).logicalSrcIdx = 75;
	  section.data(4).dtTransOffset = 3;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(2) = section;
      clear section
      
    
      ;%
      ;% Non-auto Data (parameter)
      ;%
    

    ;%
    ;% Add final counts to struct.
    ;%
    paramMap.nTotData = nTotData;
    


  ;%**************************
  ;% Create Block Output Map *
  ;%**************************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 3;
    sectIdxOffset = 0;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc sigMap
    ;%
    sigMap.nSections           = nTotSects;
    sigMap.sectIdxOffset       = sectIdxOffset;
      sigMap.sections(nTotSects) = dumSection; %prealloc
    sigMap.nTotData            = -1;
    
    ;%
    ;% Auto data (faren_B)
    ;%
      section.nData     = 7;
      section.data(7)  = dumData; %prealloc
      
	  ;% faren_B.CANbitpacking3
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% faren_B.CANbitpacking2
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 1;
	
	  ;% faren_B.CANbitpacking1
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 2;
	
	  ;% faren_B.SwitchControl
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 3;
	
	  ;% faren_B.u02Receive
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 4;
	
	  ;% faren_B.u02Receive2
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 5;
	
	  ;% faren_B.SwitchControl_c
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 6;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(1) = section;
      clear section
      
      section.nData     = 5;
      section.data(5)  = dumData; %prealloc
      
	  ;% faren_B.CANbitunpacking_o1
	  section.data(1).logicalSrcIdx = 7;
	  section.data(1).dtTransOffset = 0;
	
	  ;% faren_B.CANbitunpacking_o2
	  section.data(2).logicalSrcIdx = 8;
	  section.data(2).dtTransOffset = 1;
	
	  ;% faren_B.CANbitunpacking_o3
	  section.data(3).logicalSrcIdx = 9;
	  section.data(3).dtTransOffset = 2;
	
	  ;% faren_B.CANbitunpacking_o4
	  section.data(4).logicalSrcIdx = 10;
	  section.data(4).dtTransOffset = 3;
	
	  ;% faren_B.f
	  section.data(5).logicalSrcIdx = 11;
	  section.data(5).dtTransOffset = 4;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(2) = section;
      clear section
      
      section.nData     = 32;
      section.data(32)  = dumData; %prealloc
      
	  ;% faren_B.DataTypeConversion24
	  section.data(1).logicalSrcIdx = 12;
	  section.data(1).dtTransOffset = 0;
	
	  ;% faren_B.DataTypeConversion18
	  section.data(2).logicalSrcIdx = 13;
	  section.data(2).dtTransOffset = 1;
	
	  ;% faren_B.DataTypeConversion17
	  section.data(3).logicalSrcIdx = 14;
	  section.data(3).dtTransOffset = 2;
	
	  ;% faren_B.DataTypeConversion19
	  section.data(4).logicalSrcIdx = 15;
	  section.data(4).dtTransOffset = 3;
	
	  ;% faren_B.DataTypeConversion20
	  section.data(5).logicalSrcIdx = 16;
	  section.data(5).dtTransOffset = 4;
	
	  ;% faren_B.DataTypeConversion21
	  section.data(6).logicalSrcIdx = 17;
	  section.data(6).dtTransOffset = 5;
	
	  ;% faren_B.DataTypeConversion22
	  section.data(7).logicalSrcIdx = 18;
	  section.data(7).dtTransOffset = 6;
	
	  ;% faren_B.DataTypeConversion23
	  section.data(8).logicalSrcIdx = 19;
	  section.data(8).dtTransOffset = 7;
	
	  ;% faren_B.DataTypeConversion7
	  section.data(9).logicalSrcIdx = 20;
	  section.data(9).dtTransOffset = 8;
	
	  ;% faren_B.DataTypeConversion16
	  section.data(10).logicalSrcIdx = 21;
	  section.data(10).dtTransOffset = 9;
	
	  ;% faren_B.DataTypeConversion1
	  section.data(11).logicalSrcIdx = 22;
	  section.data(11).dtTransOffset = 10;
	
	  ;% faren_B.DataTypeConversion2
	  section.data(12).logicalSrcIdx = 23;
	  section.data(12).dtTransOffset = 11;
	
	  ;% faren_B.DataTypeConversion3
	  section.data(13).logicalSrcIdx = 24;
	  section.data(13).dtTransOffset = 12;
	
	  ;% faren_B.DataTypeConversion4
	  section.data(14).logicalSrcIdx = 25;
	  section.data(14).dtTransOffset = 13;
	
	  ;% faren_B.DataTypeConversion5
	  section.data(15).logicalSrcIdx = 26;
	  section.data(15).dtTransOffset = 14;
	
	  ;% faren_B.DataTypeConversion6
	  section.data(16).logicalSrcIdx = 27;
	  section.data(16).dtTransOffset = 15;
	
	  ;% faren_B.DataTypeConversion15
	  section.data(17).logicalSrcIdx = 28;
	  section.data(17).dtTransOffset = 16;
	
	  ;% faren_B.DataTypeConversion9
	  section.data(18).logicalSrcIdx = 29;
	  section.data(18).dtTransOffset = 17;
	
	  ;% faren_B.DataTypeConversion8
	  section.data(19).logicalSrcIdx = 30;
	  section.data(19).dtTransOffset = 18;
	
	  ;% faren_B.DataTypeConversion10
	  section.data(20).logicalSrcIdx = 31;
	  section.data(20).dtTransOffset = 19;
	
	  ;% faren_B.DataTypeConversion11
	  section.data(21).logicalSrcIdx = 32;
	  section.data(21).dtTransOffset = 20;
	
	  ;% faren_B.DataTypeConversion12
	  section.data(22).logicalSrcIdx = 33;
	  section.data(22).dtTransOffset = 21;
	
	  ;% faren_B.DataTypeConversion13
	  section.data(23).logicalSrcIdx = 34;
	  section.data(23).dtTransOffset = 22;
	
	  ;% faren_B.DataTypeConversion14
	  section.data(24).logicalSrcIdx = 35;
	  section.data(24).dtTransOffset = 23;
	
	  ;% faren_B.CANbitunpacking1_o1
	  section.data(25).logicalSrcIdx = 36;
	  section.data(25).dtTransOffset = 24;
	
	  ;% faren_B.CANbitunpacking1_o2
	  section.data(26).logicalSrcIdx = 37;
	  section.data(26).dtTransOffset = 25;
	
	  ;% faren_B.CANbitunpacking1_o3
	  section.data(27).logicalSrcIdx = 38;
	  section.data(27).dtTransOffset = 26;
	
	  ;% faren_B.CANbitunpacking1_o4
	  section.data(28).logicalSrcIdx = 39;
	  section.data(28).dtTransOffset = 27;
	
	  ;% faren_B.CANbitunpacking1_o5
	  section.data(29).logicalSrcIdx = 40;
	  section.data(29).dtTransOffset = 28;
	
	  ;% faren_B.CANbitunpacking1_o6
	  section.data(30).logicalSrcIdx = 41;
	  section.data(30).dtTransOffset = 29;
	
	  ;% faren_B.CANbitunpacking1_o7
	  section.data(31).logicalSrcIdx = 42;
	  section.data(31).dtTransOffset = 30;
	
	  ;% faren_B.CANbitunpacking1_o8
	  section.data(32).logicalSrcIdx = 43;
	  section.data(32).dtTransOffset = 31;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(3) = section;
      clear section
      
    
      ;%
      ;% Non-auto Data (signal)
      ;%
    

    ;%
    ;% Add final counts to struct.
    ;%
    sigMap.nTotData = nTotData;
    


  ;%*******************
  ;% Create DWork Map *
  ;%*******************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 0;
    sectIdxOffset = 3;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc dworkMap
    ;%
    dworkMap.nSections           = nTotSects;
    dworkMap.sectIdxOffset       = sectIdxOffset;
    dworkMap.nTotData            = -1;
    
    ;%
    ;% Auto data (faren_DWork)
    ;%
    
      ;%
      ;% Non-auto Data (dwork)
      ;%
    

    ;%
    ;% Add final counts to struct.
    ;%
    dworkMap.nTotData = nTotData;
    


  ;%
  ;% Add individual maps to base struct.
  ;%

  targMap.paramMap  = paramMap;    
  targMap.signalMap = sigMap;
  targMap.dworkMap  = dworkMap;
  
  ;%
  ;% Add checksums to base struct.
  ;%


  targMap.checksum0 = 449843495;
  targMap.checksum1 = 144573948;
  targMap.checksum2 = 2985269037;
  targMap.checksum3 = 2876042375;

