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
    ;% Auto data (untitled2_P)
    ;%
      section.nData     = 45;
      section.data(45)  = dumData; %prealloc
      
	  ;% untitled2_P.xuanzhuany1_Value
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% untitled2_P.xuanzhuany_Value
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 1;
	
	  ;% untitled2_P.IntegerDelay_InitialCondition
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 2;
	
	  ;% untitled2_P.constant7_Value
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 3;
	
	  ;% untitled2_P.constant3_Value
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 4;
	
	  ;% untitled2_P.constant5_Value
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 5;
	
	  ;% untitled2_P.Setup_P1_Size
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 6;
	
	  ;% untitled2_P.Setup_P1
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 8;
	
	  ;% untitled2_P.Setup_P2_Size
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 12;
	
	  ;% untitled2_P.Setup_P2
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 14;
	
	  ;% untitled2_P.Setup_P3_Size
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 18;
	
	  ;% untitled2_P.Setup_P4_Size
	  section.data(12).logicalSrcIdx = 12;
	  section.data(12).dtTransOffset = 20;
	
	  ;% untitled2_P.Setup_P5_Size
	  section.data(13).logicalSrcIdx = 14;
	  section.data(13).dtTransOffset = 22;
	
	  ;% untitled2_P.Setup_P5
	  section.data(14).logicalSrcIdx = 15;
	  section.data(14).dtTransOffset = 24;
	
	  ;% untitled2_P.Setup_P6_Size
	  section.data(15).logicalSrcIdx = 16;
	  section.data(15).dtTransOffset = 25;
	
	  ;% untitled2_P.Setup_P6
	  section.data(16).logicalSrcIdx = 17;
	  section.data(16).dtTransOffset = 27;
	
	  ;% untitled2_P.Setup_P7_Size
	  section.data(17).logicalSrcIdx = 18;
	  section.data(17).dtTransOffset = 31;
	
	  ;% untitled2_P.Setup_P8_Size
	  section.data(18).logicalSrcIdx = 20;
	  section.data(18).dtTransOffset = 33;
	
	  ;% untitled2_P.Setup_P9_Size
	  section.data(19).logicalSrcIdx = 22;
	  section.data(19).dtTransOffset = 35;
	
	  ;% untitled2_P.Setup_P10_Size
	  section.data(20).logicalSrcIdx = 24;
	  section.data(20).dtTransOffset = 37;
	
	  ;% untitled2_P.Setup_P11_Size
	  section.data(21).logicalSrcIdx = 26;
	  section.data(21).dtTransOffset = 39;
	
	  ;% untitled2_P.Setup_P12_Size
	  section.data(22).logicalSrcIdx = 28;
	  section.data(22).dtTransOffset = 41;
	
	  ;% untitled2_P.Setup_P13_Size
	  section.data(23).logicalSrcIdx = 30;
	  section.data(23).dtTransOffset = 43;
	
	  ;% untitled2_P.Setup_P13
	  section.data(24).logicalSrcIdx = 31;
	  section.data(24).dtTransOffset = 45;
	
	  ;% untitled2_P.Setup_P14_Size
	  section.data(25).logicalSrcIdx = 32;
	  section.data(25).dtTransOffset = 49;
	
	  ;% untitled2_P.Setup_P15_Size
	  section.data(26).logicalSrcIdx = 34;
	  section.data(26).dtTransOffset = 51;
	
	  ;% untitled2_P.Setup_P15
	  section.data(27).logicalSrcIdx = 35;
	  section.data(27).dtTransOffset = 53;
	
	  ;% untitled2_P.Setup_P16_Size
	  section.data(28).logicalSrcIdx = 36;
	  section.data(28).dtTransOffset = 54;
	
	  ;% untitled2_P.Setup_P16
	  section.data(29).logicalSrcIdx = 37;
	  section.data(29).dtTransOffset = 56;
	
	  ;% untitled2_P.Setup_P17_Size
	  section.data(30).logicalSrcIdx = 38;
	  section.data(30).dtTransOffset = 57;
	
	  ;% untitled2_P.Setup_P17
	  section.data(31).logicalSrcIdx = 39;
	  section.data(31).dtTransOffset = 59;
	
	  ;% untitled2_P.Setup_P18_Size
	  section.data(32).logicalSrcIdx = 40;
	  section.data(32).dtTransOffset = 60;
	
	  ;% untitled2_P.Setup_P18
	  section.data(33).logicalSrcIdx = 41;
	  section.data(33).dtTransOffset = 62;
	
	  ;% untitled2_P.Setup_P19_Size
	  section.data(34).logicalSrcIdx = 42;
	  section.data(34).dtTransOffset = 63;
	
	  ;% untitled2_P.Setup_P19
	  section.data(35).logicalSrcIdx = 43;
	  section.data(35).dtTransOffset = 65;
	
	  ;% untitled2_P.Setup_P20_Size
	  section.data(36).logicalSrcIdx = 44;
	  section.data(36).dtTransOffset = 66;
	
	  ;% untitled2_P.Setup_P20
	  section.data(37).logicalSrcIdx = 45;
	  section.data(37).dtTransOffset = 68;
	
	  ;% untitled2_P.Setup_P21_Size
	  section.data(38).logicalSrcIdx = 46;
	  section.data(38).dtTransOffset = 69;
	
	  ;% untitled2_P.Setup_P21
	  section.data(39).logicalSrcIdx = 47;
	  section.data(39).dtTransOffset = 71;
	
	  ;% untitled2_P.Setup_P22_Size
	  section.data(40).logicalSrcIdx = 48;
	  section.data(40).dtTransOffset = 72;
	
	  ;% untitled2_P.Setup_P22
	  section.data(41).logicalSrcIdx = 49;
	  section.data(41).dtTransOffset = 74;
	
	  ;% untitled2_P.Setup_P23_Size
	  section.data(42).logicalSrcIdx = 50;
	  section.data(42).dtTransOffset = 75;
	
	  ;% untitled2_P.Setup_P23
	  section.data(43).logicalSrcIdx = 51;
	  section.data(43).dtTransOffset = 77;
	
	  ;% untitled2_P.Setup_P24_Size
	  section.data(44).logicalSrcIdx = 52;
	  section.data(44).dtTransOffset = 78;
	
	  ;% untitled2_P.Setup_P24
	  section.data(45).logicalSrcIdx = 53;
	  section.data(45).dtTransOffset = 80;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(1) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% untitled2_P.Constant_Value
	  section.data(1).logicalSrcIdx = 54;
	  section.data(1).dtTransOffset = 0;
	
	  ;% untitled2_P.SwitchControl_Threshold
	  section.data(2).logicalSrcIdx = 55;
	  section.data(2).dtTransOffset = 1;
	
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
    ;% Auto data (untitled2_B)
    ;%
      section.nData     = 10;
      section.data(10)  = dumData; %prealloc
      
	  ;% untitled2_B.u02Receive1_o1
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% untitled2_B.u02Receive1_o2
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 1;
	
	  ;% untitled2_B.u02Receive1_o3
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 2;
	
	  ;% untitled2_B.u02Receive1_o4
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 3;
	
	  ;% untitled2_B.SwitchControl
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 4;
	
	  ;% untitled2_B.IntegerDelay
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 5;
	
	  ;% untitled2_B.xuanzhuana
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 6;
	
	  ;% untitled2_B.CANbitpacking1
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 7;
	
	  ;% untitled2_B.CANbitpacking7
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 8;
	
	  ;% untitled2_B.MultiportSwitch3
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 9;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(1) = section;
      clear section
      
      section.nData     = 24;
      section.data(24)  = dumData; %prealloc
      
	  ;% untitled2_B.CANbitunpacking1_o1
	  section.data(1).logicalSrcIdx = 10;
	  section.data(1).dtTransOffset = 0;
	
	  ;% untitled2_B.CANbitunpacking1_o2
	  section.data(2).logicalSrcIdx = 11;
	  section.data(2).dtTransOffset = 1;
	
	  ;% untitled2_B.CANbitunpacking1_o3
	  section.data(3).logicalSrcIdx = 12;
	  section.data(3).dtTransOffset = 2;
	
	  ;% untitled2_B.CANbitunpacking1_o4
	  section.data(4).logicalSrcIdx = 13;
	  section.data(4).dtTransOffset = 3;
	
	  ;% untitled2_B.CANbitunpacking1_o5
	  section.data(5).logicalSrcIdx = 14;
	  section.data(5).dtTransOffset = 4;
	
	  ;% untitled2_B.CANbitunpacking2_o1
	  section.data(6).logicalSrcIdx = 15;
	  section.data(6).dtTransOffset = 5;
	
	  ;% untitled2_B.CANbitunpacking2_o2
	  section.data(7).logicalSrcIdx = 16;
	  section.data(7).dtTransOffset = 6;
	
	  ;% untitled2_B.CANbitunpacking2_o3
	  section.data(8).logicalSrcIdx = 17;
	  section.data(8).dtTransOffset = 7;
	
	  ;% untitled2_B.CANbitunpacking2_o4
	  section.data(9).logicalSrcIdx = 18;
	  section.data(9).dtTransOffset = 8;
	
	  ;% untitled2_B.CANbitunpacking2_o5
	  section.data(10).logicalSrcIdx = 19;
	  section.data(10).dtTransOffset = 9;
	
	  ;% untitled2_B.CANbitunpacking3_o1
	  section.data(11).logicalSrcIdx = 20;
	  section.data(11).dtTransOffset = 10;
	
	  ;% untitled2_B.CANbitunpacking3_o2
	  section.data(12).logicalSrcIdx = 21;
	  section.data(12).dtTransOffset = 11;
	
	  ;% untitled2_B.CANbitunpacking3_o3
	  section.data(13).logicalSrcIdx = 22;
	  section.data(13).dtTransOffset = 12;
	
	  ;% untitled2_B.CANbitunpacking3_o4
	  section.data(14).logicalSrcIdx = 23;
	  section.data(14).dtTransOffset = 13;
	
	  ;% untitled2_B.CANbitunpacking3_o5
	  section.data(15).logicalSrcIdx = 24;
	  section.data(15).dtTransOffset = 14;
	
	  ;% untitled2_B.CANbitunpacking5_o1
	  section.data(16).logicalSrcIdx = 25;
	  section.data(16).dtTransOffset = 15;
	
	  ;% untitled2_B.CANbitunpacking5_o2
	  section.data(17).logicalSrcIdx = 26;
	  section.data(17).dtTransOffset = 16;
	
	  ;% untitled2_B.CANbitunpacking5_o3
	  section.data(18).logicalSrcIdx = 27;
	  section.data(18).dtTransOffset = 17;
	
	  ;% untitled2_B.CANbitunpacking5_o4
	  section.data(19).logicalSrcIdx = 28;
	  section.data(19).dtTransOffset = 18;
	
	  ;% untitled2_B.CANbitunpacking5_o5
	  section.data(20).logicalSrcIdx = 29;
	  section.data(20).dtTransOffset = 19;
	
	  ;% untitled2_B.DataTypeConversion10
	  section.data(21).logicalSrcIdx = 30;
	  section.data(21).dtTransOffset = 20;
	
	  ;% untitled2_B.DataTypeConversion11
	  section.data(22).logicalSrcIdx = 31;
	  section.data(22).dtTransOffset = 21;
	
	  ;% untitled2_B.DataTypeConversion8
	  section.data(23).logicalSrcIdx = 32;
	  section.data(23).dtTransOffset = 22;
	
	  ;% untitled2_B.DataTypeConversion9
	  section.data(24).logicalSrcIdx = 33;
	  section.data(24).dtTransOffset = 23;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(2) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% untitled2_B.RelationalOperator
	  section.data(1).logicalSrcIdx = 34;
	  section.data(1).dtTransOffset = 0;
	
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
    ;% Auto data (untitled2_DWork)
    ;%
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% untitled2_DWork.IntegerDelay_X
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
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


  targMap.checksum0 = 2250480595;
  targMap.checksum1 = 3407972909;
  targMap.checksum2 = 1121591116;
  targMap.checksum3 = 3499013172;

