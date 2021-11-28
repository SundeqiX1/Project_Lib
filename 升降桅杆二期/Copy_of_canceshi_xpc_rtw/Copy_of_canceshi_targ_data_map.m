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
    ;% Auto data (Copy_of_canceshi_P)
    ;%
      section.nData     = 41;
      section.data(41)  = dumData; %prealloc
      
	  ;% Copy_of_canceshi_P.constant6_Value
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% Copy_of_canceshi_P.constant9_Value
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 1;
	
	  ;% Copy_of_canceshi_P.Setup_P1_Size
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 2;
	
	  ;% Copy_of_canceshi_P.Setup_P1
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 4;
	
	  ;% Copy_of_canceshi_P.Setup_P2_Size
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 8;
	
	  ;% Copy_of_canceshi_P.Setup_P2
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 10;
	
	  ;% Copy_of_canceshi_P.Setup_P3_Size
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 14;
	
	  ;% Copy_of_canceshi_P.Setup_P4_Size
	  section.data(8).logicalSrcIdx = 8;
	  section.data(8).dtTransOffset = 16;
	
	  ;% Copy_of_canceshi_P.Setup_P5_Size
	  section.data(9).logicalSrcIdx = 10;
	  section.data(9).dtTransOffset = 18;
	
	  ;% Copy_of_canceshi_P.Setup_P5
	  section.data(10).logicalSrcIdx = 11;
	  section.data(10).dtTransOffset = 20;
	
	  ;% Copy_of_canceshi_P.Setup_P6_Size
	  section.data(11).logicalSrcIdx = 12;
	  section.data(11).dtTransOffset = 21;
	
	  ;% Copy_of_canceshi_P.Setup_P6
	  section.data(12).logicalSrcIdx = 13;
	  section.data(12).dtTransOffset = 23;
	
	  ;% Copy_of_canceshi_P.Setup_P7_Size
	  section.data(13).logicalSrcIdx = 14;
	  section.data(13).dtTransOffset = 24;
	
	  ;% Copy_of_canceshi_P.Setup_P8_Size
	  section.data(14).logicalSrcIdx = 16;
	  section.data(14).dtTransOffset = 26;
	
	  ;% Copy_of_canceshi_P.Setup_P9_Size
	  section.data(15).logicalSrcIdx = 18;
	  section.data(15).dtTransOffset = 28;
	
	  ;% Copy_of_canceshi_P.Setup_P10_Size
	  section.data(16).logicalSrcIdx = 20;
	  section.data(16).dtTransOffset = 30;
	
	  ;% Copy_of_canceshi_P.Setup_P11_Size
	  section.data(17).logicalSrcIdx = 22;
	  section.data(17).dtTransOffset = 32;
	
	  ;% Copy_of_canceshi_P.Setup_P12_Size
	  section.data(18).logicalSrcIdx = 24;
	  section.data(18).dtTransOffset = 34;
	
	  ;% Copy_of_canceshi_P.Setup_P13_Size
	  section.data(19).logicalSrcIdx = 26;
	  section.data(19).dtTransOffset = 36;
	
	  ;% Copy_of_canceshi_P.Setup_P13
	  section.data(20).logicalSrcIdx = 27;
	  section.data(20).dtTransOffset = 38;
	
	  ;% Copy_of_canceshi_P.Setup_P14_Size
	  section.data(21).logicalSrcIdx = 28;
	  section.data(21).dtTransOffset = 39;
	
	  ;% Copy_of_canceshi_P.Setup_P15_Size
	  section.data(22).logicalSrcIdx = 30;
	  section.data(22).dtTransOffset = 41;
	
	  ;% Copy_of_canceshi_P.Setup_P15
	  section.data(23).logicalSrcIdx = 31;
	  section.data(23).dtTransOffset = 43;
	
	  ;% Copy_of_canceshi_P.Setup_P16_Size
	  section.data(24).logicalSrcIdx = 32;
	  section.data(24).dtTransOffset = 44;
	
	  ;% Copy_of_canceshi_P.Setup_P16
	  section.data(25).logicalSrcIdx = 33;
	  section.data(25).dtTransOffset = 46;
	
	  ;% Copy_of_canceshi_P.Setup_P17_Size
	  section.data(26).logicalSrcIdx = 34;
	  section.data(26).dtTransOffset = 47;
	
	  ;% Copy_of_canceshi_P.Setup_P17
	  section.data(27).logicalSrcIdx = 35;
	  section.data(27).dtTransOffset = 49;
	
	  ;% Copy_of_canceshi_P.Setup_P18_Size
	  section.data(28).logicalSrcIdx = 36;
	  section.data(28).dtTransOffset = 50;
	
	  ;% Copy_of_canceshi_P.Setup_P18
	  section.data(29).logicalSrcIdx = 37;
	  section.data(29).dtTransOffset = 52;
	
	  ;% Copy_of_canceshi_P.Setup_P19_Size
	  section.data(30).logicalSrcIdx = 38;
	  section.data(30).dtTransOffset = 53;
	
	  ;% Copy_of_canceshi_P.Setup_P19
	  section.data(31).logicalSrcIdx = 39;
	  section.data(31).dtTransOffset = 55;
	
	  ;% Copy_of_canceshi_P.Setup_P20_Size
	  section.data(32).logicalSrcIdx = 40;
	  section.data(32).dtTransOffset = 56;
	
	  ;% Copy_of_canceshi_P.Setup_P20
	  section.data(33).logicalSrcIdx = 41;
	  section.data(33).dtTransOffset = 58;
	
	  ;% Copy_of_canceshi_P.Setup_P21_Size
	  section.data(34).logicalSrcIdx = 42;
	  section.data(34).dtTransOffset = 59;
	
	  ;% Copy_of_canceshi_P.Setup_P21
	  section.data(35).logicalSrcIdx = 43;
	  section.data(35).dtTransOffset = 61;
	
	  ;% Copy_of_canceshi_P.Setup_P22_Size
	  section.data(36).logicalSrcIdx = 44;
	  section.data(36).dtTransOffset = 62;
	
	  ;% Copy_of_canceshi_P.Setup_P22
	  section.data(37).logicalSrcIdx = 45;
	  section.data(37).dtTransOffset = 64;
	
	  ;% Copy_of_canceshi_P.Setup_P23_Size
	  section.data(38).logicalSrcIdx = 46;
	  section.data(38).dtTransOffset = 65;
	
	  ;% Copy_of_canceshi_P.Setup_P23
	  section.data(39).logicalSrcIdx = 47;
	  section.data(39).dtTransOffset = 67;
	
	  ;% Copy_of_canceshi_P.Setup_P24_Size
	  section.data(40).logicalSrcIdx = 48;
	  section.data(40).dtTransOffset = 68;
	
	  ;% Copy_of_canceshi_P.Setup_P24
	  section.data(41).logicalSrcIdx = 49;
	  section.data(41).dtTransOffset = 70;
	
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
    ;% Init/prealloc sigMap
    ;%
    sigMap.nSections           = nTotSects;
    sigMap.sectIdxOffset       = sectIdxOffset;
      sigMap.sections(nTotSects) = dumSection; %prealloc
    sigMap.nTotData            = -1;
    
    ;%
    ;% Auto data (Copy_of_canceshi_B)
    ;%
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% Copy_of_canceshi_B.CANbitpacking4
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% Copy_of_canceshi_B.u02Receive
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(1) = section;
      clear section
      
      section.nData     = 7;
      section.data(7)  = dumData; %prealloc
      
	  ;% Copy_of_canceshi_B.DataTypeConversion12
	  section.data(1).logicalSrcIdx = 2;
	  section.data(1).dtTransOffset = 0;
	
	  ;% Copy_of_canceshi_B.DataTypeConversion13
	  section.data(2).logicalSrcIdx = 3;
	  section.data(2).dtTransOffset = 1;
	
	  ;% Copy_of_canceshi_B.CANbitunpacking4_o1
	  section.data(3).logicalSrcIdx = 4;
	  section.data(3).dtTransOffset = 2;
	
	  ;% Copy_of_canceshi_B.CANbitunpacking4_o2
	  section.data(4).logicalSrcIdx = 5;
	  section.data(4).dtTransOffset = 3;
	
	  ;% Copy_of_canceshi_B.CANbitunpacking4_o3
	  section.data(5).logicalSrcIdx = 6;
	  section.data(5).dtTransOffset = 4;
	
	  ;% Copy_of_canceshi_B.CANbitunpacking4_o4
	  section.data(6).logicalSrcIdx = 7;
	  section.data(6).dtTransOffset = 5;
	
	  ;% Copy_of_canceshi_B.CANbitunpacking4_o5
	  section.data(7).logicalSrcIdx = 8;
	  section.data(7).dtTransOffset = 6;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(2) = section;
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
    sectIdxOffset = 2;
    
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
    ;% Auto data (Copy_of_canceshi_DWork)
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


  targMap.checksum0 = 2995335492;
  targMap.checksum1 = 1332239002;
  targMap.checksum2 = 196261650;
  targMap.checksum3 = 778688517;

