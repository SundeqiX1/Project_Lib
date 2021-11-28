  function targMap = targDataMap(),

  ;%***********************
  ;% Create Parameter Map *
  ;%***********************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 1;
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
    ;% Auto data (Copy_3_of_canceshi_P)
    ;%
      section.nData     = 58;
      section.data(58)  = dumData; %prealloc
      
	  ;% Copy_3_of_canceshi_P.baozhuay_Value
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% Copy_3_of_canceshi_P.IntegerDelay_InitialCondition
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 1;
	
	  ;% Copy_3_of_canceshi_P.constant1_Value
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 2;
	
	  ;% Copy_3_of_canceshi_P.constant6_Value
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 3;
	
	  ;% Copy_3_of_canceshi_P.constant9_Value
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 4;
	
	  ;% Copy_3_of_canceshi_P.constant2_Value
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 5;
	
	  ;% Copy_3_of_canceshi_P.constant10_Value
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 6;
	
	  ;% Copy_3_of_canceshi_P.constant11_Value
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 7;
	
	  ;% Copy_3_of_canceshi_P.shengjiangy_Value
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 8;
	
	  ;% Copy_3_of_canceshi_P.IntegerDelay_InitialCondition_a
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 9;
	
	  ;% Copy_3_of_canceshi_P.constant4_Value
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 10;
	
	  ;% Copy_3_of_canceshi_P.constant12_Value
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 11;
	
	  ;% Copy_3_of_canceshi_P.constant13_Value
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 12;
	
	  ;% Copy_3_of_canceshi_P.xuanzhuany_Value
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 13;
	
	  ;% Copy_3_of_canceshi_P.IntegerDelay_InitialCondition_d
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 14;
	
	  ;% Copy_3_of_canceshi_P.constant5_Value
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 15;
	
	  ;% Copy_3_of_canceshi_P.constant14_Value
	  section.data(17).logicalSrcIdx = 16;
	  section.data(17).dtTransOffset = 16;
	
	  ;% Copy_3_of_canceshi_P.constant15_Value
	  section.data(18).logicalSrcIdx = 17;
	  section.data(18).dtTransOffset = 17;
	
	  ;% Copy_3_of_canceshi_P.Setup_P1_Size
	  section.data(19).logicalSrcIdx = 18;
	  section.data(19).dtTransOffset = 18;
	
	  ;% Copy_3_of_canceshi_P.Setup_P1
	  section.data(20).logicalSrcIdx = 19;
	  section.data(20).dtTransOffset = 20;
	
	  ;% Copy_3_of_canceshi_P.Setup_P2_Size
	  section.data(21).logicalSrcIdx = 20;
	  section.data(21).dtTransOffset = 24;
	
	  ;% Copy_3_of_canceshi_P.Setup_P2
	  section.data(22).logicalSrcIdx = 21;
	  section.data(22).dtTransOffset = 26;
	
	  ;% Copy_3_of_canceshi_P.Setup_P3_Size
	  section.data(23).logicalSrcIdx = 22;
	  section.data(23).dtTransOffset = 30;
	
	  ;% Copy_3_of_canceshi_P.Setup_P3
	  section.data(24).logicalSrcIdx = 23;
	  section.data(24).dtTransOffset = 32;
	
	  ;% Copy_3_of_canceshi_P.Setup_P4_Size
	  section.data(25).logicalSrcIdx = 24;
	  section.data(25).dtTransOffset = 33;
	
	  ;% Copy_3_of_canceshi_P.Setup_P5_Size
	  section.data(26).logicalSrcIdx = 26;
	  section.data(26).dtTransOffset = 35;
	
	  ;% Copy_3_of_canceshi_P.Setup_P5
	  section.data(27).logicalSrcIdx = 27;
	  section.data(27).dtTransOffset = 37;
	
	  ;% Copy_3_of_canceshi_P.Setup_P6_Size
	  section.data(28).logicalSrcIdx = 28;
	  section.data(28).dtTransOffset = 40;
	
	  ;% Copy_3_of_canceshi_P.Setup_P6
	  section.data(29).logicalSrcIdx = 29;
	  section.data(29).dtTransOffset = 42;
	
	  ;% Copy_3_of_canceshi_P.Setup_P7_Size
	  section.data(30).logicalSrcIdx = 30;
	  section.data(30).dtTransOffset = 46;
	
	  ;% Copy_3_of_canceshi_P.Setup_P8_Size
	  section.data(31).logicalSrcIdx = 32;
	  section.data(31).dtTransOffset = 48;
	
	  ;% Copy_3_of_canceshi_P.Setup_P9_Size
	  section.data(32).logicalSrcIdx = 34;
	  section.data(32).dtTransOffset = 50;
	
	  ;% Copy_3_of_canceshi_P.Setup_P10_Size
	  section.data(33).logicalSrcIdx = 36;
	  section.data(33).dtTransOffset = 52;
	
	  ;% Copy_3_of_canceshi_P.Setup_P11_Size
	  section.data(34).logicalSrcIdx = 38;
	  section.data(34).dtTransOffset = 54;
	
	  ;% Copy_3_of_canceshi_P.Setup_P12_Size
	  section.data(35).logicalSrcIdx = 40;
	  section.data(35).dtTransOffset = 56;
	
	  ;% Copy_3_of_canceshi_P.Setup_P13_Size
	  section.data(36).logicalSrcIdx = 42;
	  section.data(36).dtTransOffset = 58;
	
	  ;% Copy_3_of_canceshi_P.Setup_P13
	  section.data(37).logicalSrcIdx = 43;
	  section.data(37).dtTransOffset = 60;
	
	  ;% Copy_3_of_canceshi_P.Setup_P14_Size
	  section.data(38).logicalSrcIdx = 44;
	  section.data(38).dtTransOffset = 64;
	
	  ;% Copy_3_of_canceshi_P.Setup_P15_Size
	  section.data(39).logicalSrcIdx = 46;
	  section.data(39).dtTransOffset = 66;
	
	  ;% Copy_3_of_canceshi_P.Setup_P15
	  section.data(40).logicalSrcIdx = 47;
	  section.data(40).dtTransOffset = 68;
	
	  ;% Copy_3_of_canceshi_P.Setup_P16_Size
	  section.data(41).logicalSrcIdx = 48;
	  section.data(41).dtTransOffset = 69;
	
	  ;% Copy_3_of_canceshi_P.Setup_P16
	  section.data(42).logicalSrcIdx = 49;
	  section.data(42).dtTransOffset = 71;
	
	  ;% Copy_3_of_canceshi_P.Setup_P17_Size
	  section.data(43).logicalSrcIdx = 50;
	  section.data(43).dtTransOffset = 72;
	
	  ;% Copy_3_of_canceshi_P.Setup_P17
	  section.data(44).logicalSrcIdx = 51;
	  section.data(44).dtTransOffset = 74;
	
	  ;% Copy_3_of_canceshi_P.Setup_P18_Size
	  section.data(45).logicalSrcIdx = 52;
	  section.data(45).dtTransOffset = 75;
	
	  ;% Copy_3_of_canceshi_P.Setup_P18
	  section.data(46).logicalSrcIdx = 53;
	  section.data(46).dtTransOffset = 77;
	
	  ;% Copy_3_of_canceshi_P.Setup_P19_Size
	  section.data(47).logicalSrcIdx = 54;
	  section.data(47).dtTransOffset = 78;
	
	  ;% Copy_3_of_canceshi_P.Setup_P19
	  section.data(48).logicalSrcIdx = 55;
	  section.data(48).dtTransOffset = 80;
	
	  ;% Copy_3_of_canceshi_P.Setup_P20_Size
	  section.data(49).logicalSrcIdx = 56;
	  section.data(49).dtTransOffset = 81;
	
	  ;% Copy_3_of_canceshi_P.Setup_P20
	  section.data(50).logicalSrcIdx = 57;
	  section.data(50).dtTransOffset = 83;
	
	  ;% Copy_3_of_canceshi_P.Setup_P21_Size
	  section.data(51).logicalSrcIdx = 58;
	  section.data(51).dtTransOffset = 84;
	
	  ;% Copy_3_of_canceshi_P.Setup_P21
	  section.data(52).logicalSrcIdx = 59;
	  section.data(52).dtTransOffset = 86;
	
	  ;% Copy_3_of_canceshi_P.Setup_P22_Size
	  section.data(53).logicalSrcIdx = 60;
	  section.data(53).dtTransOffset = 87;
	
	  ;% Copy_3_of_canceshi_P.Setup_P22
	  section.data(54).logicalSrcIdx = 61;
	  section.data(54).dtTransOffset = 89;
	
	  ;% Copy_3_of_canceshi_P.Setup_P23_Size
	  section.data(55).logicalSrcIdx = 62;
	  section.data(55).dtTransOffset = 90;
	
	  ;% Copy_3_of_canceshi_P.Setup_P23
	  section.data(56).logicalSrcIdx = 63;
	  section.data(56).dtTransOffset = 92;
	
	  ;% Copy_3_of_canceshi_P.Setup_P24_Size
	  section.data(57).logicalSrcIdx = 64;
	  section.data(57).dtTransOffset = 93;
	
	  ;% Copy_3_of_canceshi_P.Setup_P24
	  section.data(58).logicalSrcIdx = 65;
	  section.data(58).dtTransOffset = 95;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(1) = section;
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
    ;% Auto data (Copy_3_of_canceshi_B)
    ;%
      section.nData     = 26;
      section.data(26)  = dumData; %prealloc
      
	  ;% Copy_3_of_canceshi_B.IntegerDelay
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% Copy_3_of_canceshi_B.baozhuaa
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 1;
	
	  ;% Copy_3_of_canceshi_B.CANbitpacking
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 2;
	
	  ;% Copy_3_of_canceshi_B.CANbitpacking4
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 3;
	
	  ;% Copy_3_of_canceshi_B.MultiportSwitch
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 4;
	
	  ;% Copy_3_of_canceshi_B.CANbitpacking1
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 5;
	
	  ;% Copy_3_of_canceshi_B.CANbitpacking5
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 6;
	
	  ;% Copy_3_of_canceshi_B.MultiportSwitch1
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 7;
	
	  ;% Copy_3_of_canceshi_B.IntegerDelay_j
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 8;
	
	  ;% Copy_3_of_canceshi_B.shengjianga
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 9;
	
	  ;% Copy_3_of_canceshi_B.CANbitpacking2
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 10;
	
	  ;% Copy_3_of_canceshi_B.CANbitpacking6
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 11;
	
	  ;% Copy_3_of_canceshi_B.MultiportSwitch2
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 12;
	
	  ;% Copy_3_of_canceshi_B.IntegerDelay_d
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 13;
	
	  ;% Copy_3_of_canceshi_B.xuanzhuana
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 14;
	
	  ;% Copy_3_of_canceshi_B.CANbitpacking3
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 15;
	
	  ;% Copy_3_of_canceshi_B.CANbitpacking7
	  section.data(17).logicalSrcIdx = 16;
	  section.data(17).dtTransOffset = 16;
	
	  ;% Copy_3_of_canceshi_B.MultiportSwitch3
	  section.data(18).logicalSrcIdx = 17;
	  section.data(18).dtTransOffset = 17;
	
	  ;% Copy_3_of_canceshi_B.u02Receive1_o1
	  section.data(19).logicalSrcIdx = 18;
	  section.data(19).dtTransOffset = 18;
	
	  ;% Copy_3_of_canceshi_B.u02Receive1_o2
	  section.data(20).logicalSrcIdx = 19;
	  section.data(20).dtTransOffset = 19;
	
	  ;% Copy_3_of_canceshi_B.u02Receive1_o3
	  section.data(21).logicalSrcIdx = 20;
	  section.data(21).dtTransOffset = 20;
	
	  ;% Copy_3_of_canceshi_B.u02Receive1_o4
	  section.data(22).logicalSrcIdx = 21;
	  section.data(22).dtTransOffset = 21;
	
	  ;% Copy_3_of_canceshi_B.a
	  section.data(23).logicalSrcIdx = 22;
	  section.data(23).dtTransOffset = 22;
	
	  ;% Copy_3_of_canceshi_B.b
	  section.data(24).logicalSrcIdx = 23;
	  section.data(24).dtTransOffset = 26;
	
	  ;% Copy_3_of_canceshi_B.c
	  section.data(25).logicalSrcIdx = 24;
	  section.data(25).dtTransOffset = 30;
	
	  ;% Copy_3_of_canceshi_B.d
	  section.data(26).logicalSrcIdx = 25;
	  section.data(26).dtTransOffset = 35;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(1) = section;
      clear section
      
      section.nData     = 34;
      section.data(34)  = dumData; %prealloc
      
	  ;% Copy_3_of_canceshi_B.DataTypeConversion
	  section.data(1).logicalSrcIdx = 26;
	  section.data(1).dtTransOffset = 0;
	
	  ;% Copy_3_of_canceshi_B.DataTypeConversion5
	  section.data(2).logicalSrcIdx = 27;
	  section.data(2).dtTransOffset = 1;
	
	  ;% Copy_3_of_canceshi_B.DataTypeConversion12
	  section.data(3).logicalSrcIdx = 28;
	  section.data(3).dtTransOffset = 2;
	
	  ;% Copy_3_of_canceshi_B.DataTypeConversion13
	  section.data(4).logicalSrcIdx = 29;
	  section.data(4).dtTransOffset = 3;
	
	  ;% Copy_3_of_canceshi_B.DataTypeConversion6
	  section.data(5).logicalSrcIdx = 30;
	  section.data(5).dtTransOffset = 4;
	
	  ;% Copy_3_of_canceshi_B.DataTypeConversion7
	  section.data(6).logicalSrcIdx = 31;
	  section.data(6).dtTransOffset = 5;
	
	  ;% Copy_3_of_canceshi_B.DataTypeConversion14
	  section.data(7).logicalSrcIdx = 32;
	  section.data(7).dtTransOffset = 6;
	
	  ;% Copy_3_of_canceshi_B.DataTypeConversion15
	  section.data(8).logicalSrcIdx = 33;
	  section.data(8).dtTransOffset = 7;
	
	  ;% Copy_3_of_canceshi_B.DataTypeConversion8
	  section.data(9).logicalSrcIdx = 34;
	  section.data(9).dtTransOffset = 8;
	
	  ;% Copy_3_of_canceshi_B.DataTypeConversion9
	  section.data(10).logicalSrcIdx = 35;
	  section.data(10).dtTransOffset = 9;
	
	  ;% Copy_3_of_canceshi_B.DataTypeConversion16
	  section.data(11).logicalSrcIdx = 36;
	  section.data(11).dtTransOffset = 10;
	
	  ;% Copy_3_of_canceshi_B.DataTypeConversion17
	  section.data(12).logicalSrcIdx = 37;
	  section.data(12).dtTransOffset = 11;
	
	  ;% Copy_3_of_canceshi_B.DataTypeConversion10
	  section.data(13).logicalSrcIdx = 38;
	  section.data(13).dtTransOffset = 12;
	
	  ;% Copy_3_of_canceshi_B.DataTypeConversion11
	  section.data(14).logicalSrcIdx = 39;
	  section.data(14).dtTransOffset = 13;
	
	  ;% Copy_3_of_canceshi_B.DataTypeConversion18
	  section.data(15).logicalSrcIdx = 40;
	  section.data(15).dtTransOffset = 14;
	
	  ;% Copy_3_of_canceshi_B.DataTypeConversion19
	  section.data(16).logicalSrcIdx = 41;
	  section.data(16).dtTransOffset = 15;
	
	  ;% Copy_3_of_canceshi_B.CANbitunpacking4_o1
	  section.data(17).logicalSrcIdx = 42;
	  section.data(17).dtTransOffset = 16;
	
	  ;% Copy_3_of_canceshi_B.CANbitunpacking4_o2
	  section.data(18).logicalSrcIdx = 43;
	  section.data(18).dtTransOffset = 17;
	
	  ;% Copy_3_of_canceshi_B.CANbitunpacking4_o3
	  section.data(19).logicalSrcIdx = 44;
	  section.data(19).dtTransOffset = 18;
	
	  ;% Copy_3_of_canceshi_B.CANbitunpacking4_o4
	  section.data(20).logicalSrcIdx = 45;
	  section.data(20).dtTransOffset = 19;
	
	  ;% Copy_3_of_canceshi_B.CANbitunpacking4_o5
	  section.data(21).logicalSrcIdx = 46;
	  section.data(21).dtTransOffset = 20;
	
	  ;% Copy_3_of_canceshi_B.CANbitunpacking2_o1
	  section.data(22).logicalSrcIdx = 47;
	  section.data(22).dtTransOffset = 21;
	
	  ;% Copy_3_of_canceshi_B.CANbitunpacking2_o2
	  section.data(23).logicalSrcIdx = 48;
	  section.data(23).dtTransOffset = 22;
	
	  ;% Copy_3_of_canceshi_B.CANbitunpacking2_o3
	  section.data(24).logicalSrcIdx = 49;
	  section.data(24).dtTransOffset = 23;
	
	  ;% Copy_3_of_canceshi_B.CANbitunpacking2_o4
	  section.data(25).logicalSrcIdx = 50;
	  section.data(25).dtTransOffset = 24;
	
	  ;% Copy_3_of_canceshi_B.CANbitunpacking3_o1
	  section.data(26).logicalSrcIdx = 51;
	  section.data(26).dtTransOffset = 25;
	
	  ;% Copy_3_of_canceshi_B.CANbitunpacking3_o2
	  section.data(27).logicalSrcIdx = 52;
	  section.data(27).dtTransOffset = 26;
	
	  ;% Copy_3_of_canceshi_B.CANbitunpacking3_o3
	  section.data(28).logicalSrcIdx = 53;
	  section.data(28).dtTransOffset = 27;
	
	  ;% Copy_3_of_canceshi_B.CANbitunpacking3_o4
	  section.data(29).logicalSrcIdx = 54;
	  section.data(29).dtTransOffset = 28;
	
	  ;% Copy_3_of_canceshi_B.CANbitunpacking5_o1
	  section.data(30).logicalSrcIdx = 55;
	  section.data(30).dtTransOffset = 29;
	
	  ;% Copy_3_of_canceshi_B.CANbitunpacking5_o2
	  section.data(31).logicalSrcIdx = 56;
	  section.data(31).dtTransOffset = 30;
	
	  ;% Copy_3_of_canceshi_B.CANbitunpacking5_o3
	  section.data(32).logicalSrcIdx = 57;
	  section.data(32).dtTransOffset = 31;
	
	  ;% Copy_3_of_canceshi_B.CANbitunpacking5_o4
	  section.data(33).logicalSrcIdx = 58;
	  section.data(33).dtTransOffset = 32;
	
	  ;% Copy_3_of_canceshi_B.CANbitunpacking5_o5
	  section.data(34).logicalSrcIdx = 59;
	  section.data(34).dtTransOffset = 33;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(2) = section;
      clear section
      
      section.nData     = 3;
      section.data(3)  = dumData; %prealloc
      
	  ;% Copy_3_of_canceshi_B.RelationalOperator
	  section.data(1).logicalSrcIdx = 60;
	  section.data(1).dtTransOffset = 0;
	
	  ;% Copy_3_of_canceshi_B.RelationalOperator_h
	  section.data(2).logicalSrcIdx = 61;
	  section.data(2).dtTransOffset = 1;
	
	  ;% Copy_3_of_canceshi_B.RelationalOperator_e
	  section.data(3).logicalSrcIdx = 62;
	  section.data(3).dtTransOffset = 2;
	
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
    nTotSects     = 1;
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
      dworkMap.sections(nTotSects) = dumSection; %prealloc
    dworkMap.nTotData            = -1;
    
    ;%
    ;% Auto data (Copy_3_of_canceshi_DWork)
    ;%
      section.nData     = 3;
      section.data(3)  = dumData; %prealloc
      
	  ;% Copy_3_of_canceshi_DWork.IntegerDelay_X
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% Copy_3_of_canceshi_DWork.IntegerDelay_X_b
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 1;
	
	  ;% Copy_3_of_canceshi_DWork.IntegerDelay_X_h
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 2;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(1) = section;
      clear section
      
    
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


  targMap.checksum0 = 3703714187;
  targMap.checksum1 = 1042132195;
  targMap.checksum2 = 868196520;
  targMap.checksum3 = 2652085318;

