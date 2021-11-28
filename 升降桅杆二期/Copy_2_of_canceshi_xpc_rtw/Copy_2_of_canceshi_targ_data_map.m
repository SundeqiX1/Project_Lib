  function targMap = targDataMap(),

  ;%***********************
  ;% Create Parameter Map *
  ;%***********************
      
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
    ;% Init/prealloc paramMap
    ;%
    paramMap.nSections           = nTotSects;
    paramMap.sectIdxOffset       = sectIdxOffset;
      paramMap.sections(nTotSects) = dumSection; %prealloc
    paramMap.nTotData            = -1;
    
    ;%
    ;% Auto data (Copy_2_of_canceshi_P)
    ;%
      section.nData     = 130;
      section.data(130)  = dumData; %prealloc
      
	  ;% Copy_2_of_canceshi_P.Constant33_Value
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% Copy_2_of_canceshi_P.Constant32_Value
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 1;
	
	  ;% Copy_2_of_canceshi_P.Constant31_Value
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 2;
	
	  ;% Copy_2_of_canceshi_P.Constant30_Value
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 3;
	
	  ;% Copy_2_of_canceshi_P.Constant29_Value
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 4;
	
	  ;% Copy_2_of_canceshi_P.Constant28_Value
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 5;
	
	  ;% Copy_2_of_canceshi_P.u_Value
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 6;
	
	  ;% Copy_2_of_canceshi_P.Constant2_Value
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 7;
	
	  ;% Copy_2_of_canceshi_P.Constant3_Value
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 8;
	
	  ;% Copy_2_of_canceshi_P.Constant4_Value
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 9;
	
	  ;% Copy_2_of_canceshi_P.Constant5_Value
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 10;
	
	  ;% Copy_2_of_canceshi_P.Constant6_Value
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 11;
	
	  ;% Copy_2_of_canceshi_P.Constant7_Value
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 12;
	
	  ;% Copy_2_of_canceshi_P.Constant8_Value
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 13;
	
	  ;% Copy_2_of_canceshi_P.Constant9_Value
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 14;
	
	  ;% Copy_2_of_canceshi_P.Constant10_Value
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 15;
	
	  ;% Copy_2_of_canceshi_P.Constant12_Value
	  section.data(17).logicalSrcIdx = 16;
	  section.data(17).dtTransOffset = 16;
	
	  ;% Copy_2_of_canceshi_P.Constant13_Value
	  section.data(18).logicalSrcIdx = 17;
	  section.data(18).dtTransOffset = 17;
	
	  ;% Copy_2_of_canceshi_P.Constant14_Value
	  section.data(19).logicalSrcIdx = 18;
	  section.data(19).dtTransOffset = 18;
	
	  ;% Copy_2_of_canceshi_P.Constant15_Value
	  section.data(20).logicalSrcIdx = 19;
	  section.data(20).dtTransOffset = 19;
	
	  ;% Copy_2_of_canceshi_P.Constant11_Value
	  section.data(21).logicalSrcIdx = 20;
	  section.data(21).dtTransOffset = 20;
	
	  ;% Copy_2_of_canceshi_P.Constant17_Value
	  section.data(22).logicalSrcIdx = 21;
	  section.data(22).dtTransOffset = 21;
	
	  ;% Copy_2_of_canceshi_P.Constant19_Value
	  section.data(23).logicalSrcIdx = 22;
	  section.data(23).dtTransOffset = 22;
	
	  ;% Copy_2_of_canceshi_P.Constant20_Value
	  section.data(24).logicalSrcIdx = 23;
	  section.data(24).dtTransOffset = 23;
	
	  ;% Copy_2_of_canceshi_P.Constant21_Value
	  section.data(25).logicalSrcIdx = 24;
	  section.data(25).dtTransOffset = 24;
	
	  ;% Copy_2_of_canceshi_P.Constant16_Value
	  section.data(26).logicalSrcIdx = 25;
	  section.data(26).dtTransOffset = 25;
	
	  ;% Copy_2_of_canceshi_P.Constant23_Value
	  section.data(27).logicalSrcIdx = 26;
	  section.data(27).dtTransOffset = 26;
	
	  ;% Copy_2_of_canceshi_P.Constant24_Value
	  section.data(28).logicalSrcIdx = 27;
	  section.data(28).dtTransOffset = 27;
	
	  ;% Copy_2_of_canceshi_P.Constant25_Value
	  section.data(29).logicalSrcIdx = 28;
	  section.data(29).dtTransOffset = 28;
	
	  ;% Copy_2_of_canceshi_P.Constant26_Value
	  section.data(30).logicalSrcIdx = 29;
	  section.data(30).dtTransOffset = 29;
	
	  ;% Copy_2_of_canceshi_P.PCL731_P1_Size
	  section.data(31).logicalSrcIdx = 30;
	  section.data(31).dtTransOffset = 30;
	
	  ;% Copy_2_of_canceshi_P.PCL731_P1
	  section.data(32).logicalSrcIdx = 31;
	  section.data(32).dtTransOffset = 32;
	
	  ;% Copy_2_of_canceshi_P.PCL731_P2_Size
	  section.data(33).logicalSrcIdx = 32;
	  section.data(33).dtTransOffset = 33;
	
	  ;% Copy_2_of_canceshi_P.PCL731_P2
	  section.data(34).logicalSrcIdx = 33;
	  section.data(34).dtTransOffset = 35;
	
	  ;% Copy_2_of_canceshi_P.u_Value_a
	  section.data(35).logicalSrcIdx = 34;
	  section.data(35).dtTransOffset = 37;
	
	  ;% Copy_2_of_canceshi_P.Constant18_Value
	  section.data(36).logicalSrcIdx = 35;
	  section.data(36).dtTransOffset = 38;
	
	  ;% Copy_2_of_canceshi_P.Constant7_Value_b
	  section.data(37).logicalSrcIdx = 36;
	  section.data(37).dtTransOffset = 39;
	
	  ;% Copy_2_of_canceshi_P.Constant16_Value_o
	  section.data(38).logicalSrcIdx = 37;
	  section.data(38).dtTransOffset = 40;
	
	  ;% Copy_2_of_canceshi_P.Constant1_Value
	  section.data(39).logicalSrcIdx = 38;
	  section.data(39).dtTransOffset = 41;
	
	  ;% Copy_2_of_canceshi_P.Constant2_Value_b
	  section.data(40).logicalSrcIdx = 39;
	  section.data(40).dtTransOffset = 42;
	
	  ;% Copy_2_of_canceshi_P.Constant3_Value_m
	  section.data(41).logicalSrcIdx = 40;
	  section.data(41).dtTransOffset = 43;
	
	  ;% Copy_2_of_canceshi_P.Constant4_Value_c
	  section.data(42).logicalSrcIdx = 41;
	  section.data(42).dtTransOffset = 44;
	
	  ;% Copy_2_of_canceshi_P.Constant5_Value_d
	  section.data(43).logicalSrcIdx = 42;
	  section.data(43).dtTransOffset = 45;
	
	  ;% Copy_2_of_canceshi_P.Constant6_Value_b
	  section.data(44).logicalSrcIdx = 43;
	  section.data(44).dtTransOffset = 46;
	
	  ;% Copy_2_of_canceshi_P.Constant8_Value_e
	  section.data(45).logicalSrcIdx = 44;
	  section.data(45).dtTransOffset = 47;
	
	  ;% Copy_2_of_canceshi_P.Constant16_Value_p
	  section.data(46).logicalSrcIdx = 45;
	  section.data(46).dtTransOffset = 48;
	
	  ;% Copy_2_of_canceshi_P.Constant2_Value_m
	  section.data(47).logicalSrcIdx = 46;
	  section.data(47).dtTransOffset = 49;
	
	  ;% Copy_2_of_canceshi_P.Constant3_Value_j
	  section.data(48).logicalSrcIdx = 47;
	  section.data(48).dtTransOffset = 50;
	
	  ;% Copy_2_of_canceshi_P.Constant4_Value_l
	  section.data(49).logicalSrcIdx = 48;
	  section.data(49).dtTransOffset = 51;
	
	  ;% Copy_2_of_canceshi_P.Constant5_Value_l
	  section.data(50).logicalSrcIdx = 49;
	  section.data(50).dtTransOffset = 52;
	
	  ;% Copy_2_of_canceshi_P.Constant6_Value_n
	  section.data(51).logicalSrcIdx = 50;
	  section.data(51).dtTransOffset = 53;
	
	  ;% Copy_2_of_canceshi_P.Constant7_Value_i
	  section.data(52).logicalSrcIdx = 51;
	  section.data(52).dtTransOffset = 54;
	
	  ;% Copy_2_of_canceshi_P.Constant24_Value_i
	  section.data(53).logicalSrcIdx = 52;
	  section.data(53).dtTransOffset = 55;
	
	  ;% Copy_2_of_canceshi_P.Constant18_Value_e
	  section.data(54).logicalSrcIdx = 53;
	  section.data(54).dtTransOffset = 56;
	
	  ;% Copy_2_of_canceshi_P.Constant17_Value_l
	  section.data(55).logicalSrcIdx = 54;
	  section.data(55).dtTransOffset = 57;
	
	  ;% Copy_2_of_canceshi_P.Constant19_Value_l
	  section.data(56).logicalSrcIdx = 55;
	  section.data(56).dtTransOffset = 58;
	
	  ;% Copy_2_of_canceshi_P.Constant20_Value_d
	  section.data(57).logicalSrcIdx = 56;
	  section.data(57).dtTransOffset = 59;
	
	  ;% Copy_2_of_canceshi_P.Constant21_Value_l
	  section.data(58).logicalSrcIdx = 57;
	  section.data(58).dtTransOffset = 60;
	
	  ;% Copy_2_of_canceshi_P.Constant22_Value
	  section.data(59).logicalSrcIdx = 58;
	  section.data(59).dtTransOffset = 61;
	
	  ;% Copy_2_of_canceshi_P.Constant23_Value_m
	  section.data(60).logicalSrcIdx = 59;
	  section.data(60).dtTransOffset = 62;
	
	  ;% Copy_2_of_canceshi_P.Constant7_Value_d
	  section.data(61).logicalSrcIdx = 60;
	  section.data(61).dtTransOffset = 63;
	
	  ;% Copy_2_of_canceshi_P.Constant16_Value_f
	  section.data(62).logicalSrcIdx = 61;
	  section.data(62).dtTransOffset = 64;
	
	  ;% Copy_2_of_canceshi_P.Constant1_Value_a
	  section.data(63).logicalSrcIdx = 62;
	  section.data(63).dtTransOffset = 65;
	
	  ;% Copy_2_of_canceshi_P.Constant2_Value_g
	  section.data(64).logicalSrcIdx = 63;
	  section.data(64).dtTransOffset = 66;
	
	  ;% Copy_2_of_canceshi_P.Constant3_Value_c
	  section.data(65).logicalSrcIdx = 64;
	  section.data(65).dtTransOffset = 67;
	
	  ;% Copy_2_of_canceshi_P.Constant4_Value_h
	  section.data(66).logicalSrcIdx = 65;
	  section.data(66).dtTransOffset = 68;
	
	  ;% Copy_2_of_canceshi_P.Constant5_Value_h
	  section.data(67).logicalSrcIdx = 66;
	  section.data(67).dtTransOffset = 69;
	
	  ;% Copy_2_of_canceshi_P.Constant6_Value_d
	  section.data(68).logicalSrcIdx = 67;
	  section.data(68).dtTransOffset = 70;
	
	  ;% Copy_2_of_canceshi_P.Constant15_Value_k
	  section.data(69).logicalSrcIdx = 68;
	  section.data(69).dtTransOffset = 71;
	
	  ;% Copy_2_of_canceshi_P.Constant9_Value_j
	  section.data(70).logicalSrcIdx = 69;
	  section.data(70).dtTransOffset = 72;
	
	  ;% Copy_2_of_canceshi_P.Constant8_Value_f
	  section.data(71).logicalSrcIdx = 70;
	  section.data(71).dtTransOffset = 73;
	
	  ;% Copy_2_of_canceshi_P.Constant10_Value_m
	  section.data(72).logicalSrcIdx = 71;
	  section.data(72).dtTransOffset = 74;
	
	  ;% Copy_2_of_canceshi_P.Constant11_Value_g
	  section.data(73).logicalSrcIdx = 72;
	  section.data(73).dtTransOffset = 75;
	
	  ;% Copy_2_of_canceshi_P.Constant12_Value_f
	  section.data(74).logicalSrcIdx = 73;
	  section.data(74).dtTransOffset = 76;
	
	  ;% Copy_2_of_canceshi_P.Constant13_Value_e
	  section.data(75).logicalSrcIdx = 74;
	  section.data(75).dtTransOffset = 77;
	
	  ;% Copy_2_of_canceshi_P.Constant14_Value_n
	  section.data(76).logicalSrcIdx = 75;
	  section.data(76).dtTransOffset = 78;
	
	  ;% Copy_2_of_canceshi_P.constant1_Value
	  section.data(77).logicalSrcIdx = 76;
	  section.data(77).dtTransOffset = 79;
	
	  ;% Copy_2_of_canceshi_P.constant3_Value
	  section.data(78).logicalSrcIdx = 77;
	  section.data(78).dtTransOffset = 80;
	
	  ;% Copy_2_of_canceshi_P.constant6_Value
	  section.data(79).logicalSrcIdx = 78;
	  section.data(79).dtTransOffset = 81;
	
	  ;% Copy_2_of_canceshi_P.constant9_Value
	  section.data(80).logicalSrcIdx = 79;
	  section.data(80).dtTransOffset = 82;
	
	  ;% Copy_2_of_canceshi_P.constant2_Value
	  section.data(81).logicalSrcIdx = 80;
	  section.data(81).dtTransOffset = 83;
	
	  ;% Copy_2_of_canceshi_P.constant10_Value
	  section.data(82).logicalSrcIdx = 81;
	  section.data(82).dtTransOffset = 84;
	
	  ;% Copy_2_of_canceshi_P.constant11_Value
	  section.data(83).logicalSrcIdx = 82;
	  section.data(83).dtTransOffset = 85;
	
	  ;% Copy_2_of_canceshi_P.constant4_Value
	  section.data(84).logicalSrcIdx = 83;
	  section.data(84).dtTransOffset = 86;
	
	  ;% Copy_2_of_canceshi_P.constant7_Value
	  section.data(85).logicalSrcIdx = 84;
	  section.data(85).dtTransOffset = 87;
	
	  ;% Copy_2_of_canceshi_P.constant12_Value
	  section.data(86).logicalSrcIdx = 85;
	  section.data(86).dtTransOffset = 88;
	
	  ;% Copy_2_of_canceshi_P.constant13_Value
	  section.data(87).logicalSrcIdx = 86;
	  section.data(87).dtTransOffset = 89;
	
	  ;% Copy_2_of_canceshi_P.constant5_Value
	  section.data(88).logicalSrcIdx = 87;
	  section.data(88).dtTransOffset = 90;
	
	  ;% Copy_2_of_canceshi_P.constant8_Value
	  section.data(89).logicalSrcIdx = 88;
	  section.data(89).dtTransOffset = 91;
	
	  ;% Copy_2_of_canceshi_P.constant14_Value
	  section.data(90).logicalSrcIdx = 89;
	  section.data(90).dtTransOffset = 92;
	
	  ;% Copy_2_of_canceshi_P.constant15_Value
	  section.data(91).logicalSrcIdx = 90;
	  section.data(91).dtTransOffset = 93;
	
	  ;% Copy_2_of_canceshi_P.Setup_P1_Size
	  section.data(92).logicalSrcIdx = 91;
	  section.data(92).dtTransOffset = 94;
	
	  ;% Copy_2_of_canceshi_P.Setup_P1
	  section.data(93).logicalSrcIdx = 92;
	  section.data(93).dtTransOffset = 96;
	
	  ;% Copy_2_of_canceshi_P.Setup_P2_Size
	  section.data(94).logicalSrcIdx = 93;
	  section.data(94).dtTransOffset = 100;
	
	  ;% Copy_2_of_canceshi_P.Setup_P2
	  section.data(95).logicalSrcIdx = 94;
	  section.data(95).dtTransOffset = 102;
	
	  ;% Copy_2_of_canceshi_P.Setup_P3_Size
	  section.data(96).logicalSrcIdx = 95;
	  section.data(96).dtTransOffset = 106;
	
	  ;% Copy_2_of_canceshi_P.Setup_P4_Size
	  section.data(97).logicalSrcIdx = 97;
	  section.data(97).dtTransOffset = 108;
	
	  ;% Copy_2_of_canceshi_P.Setup_P5_Size
	  section.data(98).logicalSrcIdx = 99;
	  section.data(98).dtTransOffset = 110;
	
	  ;% Copy_2_of_canceshi_P.Setup_P5
	  section.data(99).logicalSrcIdx = 100;
	  section.data(99).dtTransOffset = 112;
	
	  ;% Copy_2_of_canceshi_P.Setup_P6_Size
	  section.data(100).logicalSrcIdx = 101;
	  section.data(100).dtTransOffset = 119;
	
	  ;% Copy_2_of_canceshi_P.Setup_P6
	  section.data(101).logicalSrcIdx = 102;
	  section.data(101).dtTransOffset = 121;
	
	  ;% Copy_2_of_canceshi_P.Setup_P7_Size
	  section.data(102).logicalSrcIdx = 103;
	  section.data(102).dtTransOffset = 127;
	
	  ;% Copy_2_of_canceshi_P.Setup_P8_Size
	  section.data(103).logicalSrcIdx = 105;
	  section.data(103).dtTransOffset = 129;
	
	  ;% Copy_2_of_canceshi_P.Setup_P9_Size
	  section.data(104).logicalSrcIdx = 107;
	  section.data(104).dtTransOffset = 131;
	
	  ;% Copy_2_of_canceshi_P.Setup_P10_Size
	  section.data(105).logicalSrcIdx = 109;
	  section.data(105).dtTransOffset = 133;
	
	  ;% Copy_2_of_canceshi_P.Setup_P11_Size
	  section.data(106).logicalSrcIdx = 111;
	  section.data(106).dtTransOffset = 135;
	
	  ;% Copy_2_of_canceshi_P.Setup_P12_Size
	  section.data(107).logicalSrcIdx = 113;
	  section.data(107).dtTransOffset = 137;
	
	  ;% Copy_2_of_canceshi_P.Setup_P13_Size
	  section.data(108).logicalSrcIdx = 115;
	  section.data(108).dtTransOffset = 139;
	
	  ;% Copy_2_of_canceshi_P.Setup_P13
	  section.data(109).logicalSrcIdx = 116;
	  section.data(109).dtTransOffset = 141;
	
	  ;% Copy_2_of_canceshi_P.Setup_P14_Size
	  section.data(110).logicalSrcIdx = 117;
	  section.data(110).dtTransOffset = 147;
	
	  ;% Copy_2_of_canceshi_P.Setup_P15_Size
	  section.data(111).logicalSrcIdx = 119;
	  section.data(111).dtTransOffset = 149;
	
	  ;% Copy_2_of_canceshi_P.Setup_P15
	  section.data(112).logicalSrcIdx = 120;
	  section.data(112).dtTransOffset = 151;
	
	  ;% Copy_2_of_canceshi_P.Setup_P16_Size
	  section.data(113).logicalSrcIdx = 121;
	  section.data(113).dtTransOffset = 152;
	
	  ;% Copy_2_of_canceshi_P.Setup_P16
	  section.data(114).logicalSrcIdx = 122;
	  section.data(114).dtTransOffset = 154;
	
	  ;% Copy_2_of_canceshi_P.Setup_P17_Size
	  section.data(115).logicalSrcIdx = 123;
	  section.data(115).dtTransOffset = 155;
	
	  ;% Copy_2_of_canceshi_P.Setup_P17
	  section.data(116).logicalSrcIdx = 124;
	  section.data(116).dtTransOffset = 157;
	
	  ;% Copy_2_of_canceshi_P.Setup_P18_Size
	  section.data(117).logicalSrcIdx = 125;
	  section.data(117).dtTransOffset = 158;
	
	  ;% Copy_2_of_canceshi_P.Setup_P18
	  section.data(118).logicalSrcIdx = 126;
	  section.data(118).dtTransOffset = 160;
	
	  ;% Copy_2_of_canceshi_P.Setup_P19_Size
	  section.data(119).logicalSrcIdx = 127;
	  section.data(119).dtTransOffset = 161;
	
	  ;% Copy_2_of_canceshi_P.Setup_P19
	  section.data(120).logicalSrcIdx = 128;
	  section.data(120).dtTransOffset = 163;
	
	  ;% Copy_2_of_canceshi_P.Setup_P20_Size
	  section.data(121).logicalSrcIdx = 129;
	  section.data(121).dtTransOffset = 164;
	
	  ;% Copy_2_of_canceshi_P.Setup_P20
	  section.data(122).logicalSrcIdx = 130;
	  section.data(122).dtTransOffset = 166;
	
	  ;% Copy_2_of_canceshi_P.Setup_P21_Size
	  section.data(123).logicalSrcIdx = 131;
	  section.data(123).dtTransOffset = 167;
	
	  ;% Copy_2_of_canceshi_P.Setup_P21
	  section.data(124).logicalSrcIdx = 132;
	  section.data(124).dtTransOffset = 169;
	
	  ;% Copy_2_of_canceshi_P.Setup_P22_Size
	  section.data(125).logicalSrcIdx = 133;
	  section.data(125).dtTransOffset = 170;
	
	  ;% Copy_2_of_canceshi_P.Setup_P22
	  section.data(126).logicalSrcIdx = 134;
	  section.data(126).dtTransOffset = 172;
	
	  ;% Copy_2_of_canceshi_P.Setup_P23_Size
	  section.data(127).logicalSrcIdx = 135;
	  section.data(127).dtTransOffset = 173;
	
	  ;% Copy_2_of_canceshi_P.Setup_P23
	  section.data(128).logicalSrcIdx = 136;
	  section.data(128).dtTransOffset = 175;
	
	  ;% Copy_2_of_canceshi_P.Setup_P24_Size
	  section.data(129).logicalSrcIdx = 137;
	  section.data(129).dtTransOffset = 176;
	
	  ;% Copy_2_of_canceshi_P.Setup_P24
	  section.data(130).logicalSrcIdx = 138;
	  section.data(130).dtTransOffset = 178;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(1) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% Copy_2_of_canceshi_P.right7_XData
	  section.data(1).logicalSrcIdx = 139;
	  section.data(1).dtTransOffset = 0;
	
	  ;% Copy_2_of_canceshi_P.right7_YData
	  section.data(2).logicalSrcIdx = 140;
	  section.data(2).dtTransOffset = 2;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(2) = section;
      clear section
      
      section.nData     = 14;
      section.data(14)  = dumData; %prealloc
      
	  ;% Copy_2_of_canceshi_P.Constant_Value
	  section.data(1).logicalSrcIdx = 141;
	  section.data(1).dtTransOffset = 0;
	
	  ;% Copy_2_of_canceshi_P.SwitchControl_Threshold
	  section.data(2).logicalSrcIdx = 142;
	  section.data(2).dtTransOffset = 1;
	
	  ;% Copy_2_of_canceshi_P.Constant_Value_i
	  section.data(3).logicalSrcIdx = 143;
	  section.data(3).dtTransOffset = 2;
	
	  ;% Copy_2_of_canceshi_P.SwitchControl_Threshold_h
	  section.data(4).logicalSrcIdx = 144;
	  section.data(4).dtTransOffset = 3;
	
	  ;% Copy_2_of_canceshi_P.Constant_Value_l
	  section.data(5).logicalSrcIdx = 145;
	  section.data(5).dtTransOffset = 4;
	
	  ;% Copy_2_of_canceshi_P.SwitchControl_Threshold_hn
	  section.data(6).logicalSrcIdx = 146;
	  section.data(6).dtTransOffset = 5;
	
	  ;% Copy_2_of_canceshi_P.Constant_Value_p
	  section.data(7).logicalSrcIdx = 147;
	  section.data(7).dtTransOffset = 6;
	
	  ;% Copy_2_of_canceshi_P.SwitchControl_Threshold_b
	  section.data(8).logicalSrcIdx = 148;
	  section.data(8).dtTransOffset = 7;
	
	  ;% Copy_2_of_canceshi_P.Constant_Value_k
	  section.data(9).logicalSrcIdx = 149;
	  section.data(9).dtTransOffset = 8;
	
	  ;% Copy_2_of_canceshi_P.SwitchControl_Threshold_g
	  section.data(10).logicalSrcIdx = 150;
	  section.data(10).dtTransOffset = 9;
	
	  ;% Copy_2_of_canceshi_P.Constant_Value_g
	  section.data(11).logicalSrcIdx = 151;
	  section.data(11).dtTransOffset = 10;
	
	  ;% Copy_2_of_canceshi_P.SwitchControl_Threshold_e
	  section.data(12).logicalSrcIdx = 152;
	  section.data(12).dtTransOffset = 11;
	
	  ;% Copy_2_of_canceshi_P.Constant_Value_a
	  section.data(13).logicalSrcIdx = 153;
	  section.data(13).dtTransOffset = 12;
	
	  ;% Copy_2_of_canceshi_P.SwitchControl_Threshold_p
	  section.data(14).logicalSrcIdx = 154;
	  section.data(14).dtTransOffset = 13;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(3) = section;
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
    ;% Auto data (Copy_2_of_canceshi_B)
    ;%
      section.nData     = 36;
      section.data(36)  = dumData; %prealloc
      
	  ;% Copy_2_of_canceshi_B.TmpSignalConversionAtPCL731Inpo
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% Copy_2_of_canceshi_B.PCL731
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 24;
	
	  ;% Copy_2_of_canceshi_B.sifufa
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 48;
	
	  ;% Copy_2_of_canceshi_B.MultiportSwitch
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 49;
	
	  ;% Copy_2_of_canceshi_B.CANbitpacking3
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 50;
	
	  ;% Copy_2_of_canceshi_B.CANbitpacking2
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 51;
	
	  ;% Copy_2_of_canceshi_B.CANbitpacking2_p
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 52;
	
	  ;% Copy_2_of_canceshi_B.SwitchControl
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 53;
	
	  ;% Copy_2_of_canceshi_B.CANbitpacking3_h
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 54;
	
	  ;% Copy_2_of_canceshi_B.CANbitpacking2_j
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 55;
	
	  ;% Copy_2_of_canceshi_B.CANbitpacking1
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 56;
	
	  ;% Copy_2_of_canceshi_B.SwitchControl_b
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 57;
	
	  ;% Copy_2_of_canceshi_B.u02Receive
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 58;
	
	  ;% Copy_2_of_canceshi_B.yyy
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 59;
	
	  ;% Copy_2_of_canceshi_B.u02Receive1_o1
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 60;
	
	  ;% Copy_2_of_canceshi_B.u02Receive1_o2
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 61;
	
	  ;% Copy_2_of_canceshi_B.u02Receive1_o3
	  section.data(17).logicalSrcIdx = 16;
	  section.data(17).dtTransOffset = 62;
	
	  ;% Copy_2_of_canceshi_B.u02Receive1_o4
	  section.data(18).logicalSrcIdx = 17;
	  section.data(18).dtTransOffset = 63;
	
	  ;% Copy_2_of_canceshi_B.DataTypeConversion1
	  section.data(19).logicalSrcIdx = 18;
	  section.data(19).dtTransOffset = 64;
	
	  ;% Copy_2_of_canceshi_B.DataTypeConversion2
	  section.data(20).logicalSrcIdx = 19;
	  section.data(20).dtTransOffset = 68;
	
	  ;% Copy_2_of_canceshi_B.DataTypeConversion3
	  section.data(21).logicalSrcIdx = 20;
	  section.data(21).dtTransOffset = 73;
	
	  ;% Copy_2_of_canceshi_B.DataTypeConversion4
	  section.data(22).logicalSrcIdx = 21;
	  section.data(22).dtTransOffset = 78;
	
	  ;% Copy_2_of_canceshi_B.u02Receive2
	  section.data(23).logicalSrcIdx = 22;
	  section.data(23).dtTransOffset = 82;
	
	  ;% Copy_2_of_canceshi_B.CANbitpacking
	  section.data(24).logicalSrcIdx = 23;
	  section.data(24).dtTransOffset = 83;
	
	  ;% Copy_2_of_canceshi_B.CANbitpacking4
	  section.data(25).logicalSrcIdx = 24;
	  section.data(25).dtTransOffset = 84;
	
	  ;% Copy_2_of_canceshi_B.SwitchControl_h
	  section.data(26).logicalSrcIdx = 25;
	  section.data(26).dtTransOffset = 85;
	
	  ;% Copy_2_of_canceshi_B.CANbitpacking1_a
	  section.data(27).logicalSrcIdx = 26;
	  section.data(27).dtTransOffset = 86;
	
	  ;% Copy_2_of_canceshi_B.CANbitpacking5
	  section.data(28).logicalSrcIdx = 27;
	  section.data(28).dtTransOffset = 87;
	
	  ;% Copy_2_of_canceshi_B.SwitchControl_p
	  section.data(29).logicalSrcIdx = 28;
	  section.data(29).dtTransOffset = 88;
	
	  ;% Copy_2_of_canceshi_B.CANbitpacking2_i
	  section.data(30).logicalSrcIdx = 29;
	  section.data(30).dtTransOffset = 89;
	
	  ;% Copy_2_of_canceshi_B.CANbitpacking6
	  section.data(31).logicalSrcIdx = 30;
	  section.data(31).dtTransOffset = 90;
	
	  ;% Copy_2_of_canceshi_B.SwitchControl_pr
	  section.data(32).logicalSrcIdx = 31;
	  section.data(32).dtTransOffset = 91;
	
	  ;% Copy_2_of_canceshi_B.CANbitpacking3_d
	  section.data(33).logicalSrcIdx = 32;
	  section.data(33).dtTransOffset = 92;
	
	  ;% Copy_2_of_canceshi_B.CANbitpacking7
	  section.data(34).logicalSrcIdx = 33;
	  section.data(34).dtTransOffset = 93;
	
	  ;% Copy_2_of_canceshi_B.SwitchControl_c
	  section.data(35).logicalSrcIdx = 34;
	  section.data(35).dtTransOffset = 94;
	
	  ;% Copy_2_of_canceshi_B.SwitchControl_m
	  section.data(36).logicalSrcIdx = 35;
	  section.data(36).dtTransOffset = 95;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(1) = section;
      clear section
      
      section.nData     = 5;
      section.data(5)  = dumData; %prealloc
      
	  ;% Copy_2_of_canceshi_B.CANbitunpacking_o1
	  section.data(1).logicalSrcIdx = 36;
	  section.data(1).dtTransOffset = 0;
	
	  ;% Copy_2_of_canceshi_B.CANbitunpacking_o2
	  section.data(2).logicalSrcIdx = 37;
	  section.data(2).dtTransOffset = 1;
	
	  ;% Copy_2_of_canceshi_B.CANbitunpacking_o3
	  section.data(3).logicalSrcIdx = 38;
	  section.data(3).dtTransOffset = 2;
	
	  ;% Copy_2_of_canceshi_B.CANbitunpacking_o4
	  section.data(4).logicalSrcIdx = 39;
	  section.data(4).dtTransOffset = 3;
	
	  ;% Copy_2_of_canceshi_B.right7
	  section.data(5).logicalSrcIdx = 40;
	  section.data(5).dtTransOffset = 4;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(2) = section;
      clear section
      
      section.nData     = 84;
      section.data(84)  = dumData; %prealloc
      
	  ;% Copy_2_of_canceshi_B.DataTypeConversion17
	  section.data(1).logicalSrcIdx = 41;
	  section.data(1).dtTransOffset = 0;
	
	  ;% Copy_2_of_canceshi_B.DataTypeConversion18
	  section.data(2).logicalSrcIdx = 42;
	  section.data(2).dtTransOffset = 1;
	
	  ;% Copy_2_of_canceshi_B.DataTypeConversion7
	  section.data(3).logicalSrcIdx = 43;
	  section.data(3).dtTransOffset = 2;
	
	  ;% Copy_2_of_canceshi_B.DataTypeConversion16
	  section.data(4).logicalSrcIdx = 44;
	  section.data(4).dtTransOffset = 3;
	
	  ;% Copy_2_of_canceshi_B.DataTypeConversion1_k
	  section.data(5).logicalSrcIdx = 45;
	  section.data(5).dtTransOffset = 4;
	
	  ;% Copy_2_of_canceshi_B.DataTypeConversion2_n
	  section.data(6).logicalSrcIdx = 46;
	  section.data(6).dtTransOffset = 5;
	
	  ;% Copy_2_of_canceshi_B.DataTypeConversion3_b
	  section.data(7).logicalSrcIdx = 47;
	  section.data(7).dtTransOffset = 6;
	
	  ;% Copy_2_of_canceshi_B.DataTypeConversion4_a
	  section.data(8).logicalSrcIdx = 48;
	  section.data(8).dtTransOffset = 7;
	
	  ;% Copy_2_of_canceshi_B.DataTypeConversion5
	  section.data(9).logicalSrcIdx = 49;
	  section.data(9).dtTransOffset = 8;
	
	  ;% Copy_2_of_canceshi_B.DataTypeConversion6
	  section.data(10).logicalSrcIdx = 50;
	  section.data(10).dtTransOffset = 9;
	
	  ;% Copy_2_of_canceshi_B.DataTypeConversion7_b
	  section.data(11).logicalSrcIdx = 51;
	  section.data(11).dtTransOffset = 10;
	
	  ;% Copy_2_of_canceshi_B.DataTypeConversion16_g
	  section.data(12).logicalSrcIdx = 52;
	  section.data(12).dtTransOffset = 11;
	
	  ;% Copy_2_of_canceshi_B.DataTypeConversion1_k5
	  section.data(13).logicalSrcIdx = 53;
	  section.data(13).dtTransOffset = 12;
	
	  ;% Copy_2_of_canceshi_B.DataTypeConversion2_a
	  section.data(14).logicalSrcIdx = 54;
	  section.data(14).dtTransOffset = 13;
	
	  ;% Copy_2_of_canceshi_B.DataTypeConversion3_e
	  section.data(15).logicalSrcIdx = 55;
	  section.data(15).dtTransOffset = 14;
	
	  ;% Copy_2_of_canceshi_B.DataTypeConversion4_p
	  section.data(16).logicalSrcIdx = 56;
	  section.data(16).dtTransOffset = 15;
	
	  ;% Copy_2_of_canceshi_B.DataTypeConversion5_a
	  section.data(17).logicalSrcIdx = 57;
	  section.data(17).dtTransOffset = 16;
	
	  ;% Copy_2_of_canceshi_B.DataTypeConversion6_d
	  section.data(18).logicalSrcIdx = 58;
	  section.data(18).dtTransOffset = 17;
	
	  ;% Copy_2_of_canceshi_B.DataTypeConversion24
	  section.data(19).logicalSrcIdx = 59;
	  section.data(19).dtTransOffset = 18;
	
	  ;% Copy_2_of_canceshi_B.DataTypeConversion18_g
	  section.data(20).logicalSrcIdx = 60;
	  section.data(20).dtTransOffset = 19;
	
	  ;% Copy_2_of_canceshi_B.DataTypeConversion17_m
	  section.data(21).logicalSrcIdx = 61;
	  section.data(21).dtTransOffset = 20;
	
	  ;% Copy_2_of_canceshi_B.DataTypeConversion19
	  section.data(22).logicalSrcIdx = 62;
	  section.data(22).dtTransOffset = 21;
	
	  ;% Copy_2_of_canceshi_B.DataTypeConversion20
	  section.data(23).logicalSrcIdx = 63;
	  section.data(23).dtTransOffset = 22;
	
	  ;% Copy_2_of_canceshi_B.DataTypeConversion21
	  section.data(24).logicalSrcIdx = 64;
	  section.data(24).dtTransOffset = 23;
	
	  ;% Copy_2_of_canceshi_B.DataTypeConversion22
	  section.data(25).logicalSrcIdx = 65;
	  section.data(25).dtTransOffset = 24;
	
	  ;% Copy_2_of_canceshi_B.DataTypeConversion23
	  section.data(26).logicalSrcIdx = 66;
	  section.data(26).dtTransOffset = 25;
	
	  ;% Copy_2_of_canceshi_B.DataTypeConversion7_j
	  section.data(27).logicalSrcIdx = 67;
	  section.data(27).dtTransOffset = 26;
	
	  ;% Copy_2_of_canceshi_B.DataTypeConversion16_h
	  section.data(28).logicalSrcIdx = 68;
	  section.data(28).dtTransOffset = 27;
	
	  ;% Copy_2_of_canceshi_B.DataTypeConversion1_o
	  section.data(29).logicalSrcIdx = 69;
	  section.data(29).dtTransOffset = 28;
	
	  ;% Copy_2_of_canceshi_B.DataTypeConversion2_d
	  section.data(30).logicalSrcIdx = 70;
	  section.data(30).dtTransOffset = 29;
	
	  ;% Copy_2_of_canceshi_B.DataTypeConversion3_j
	  section.data(31).logicalSrcIdx = 71;
	  section.data(31).dtTransOffset = 30;
	
	  ;% Copy_2_of_canceshi_B.DataTypeConversion4_k
	  section.data(32).logicalSrcIdx = 72;
	  section.data(32).dtTransOffset = 31;
	
	  ;% Copy_2_of_canceshi_B.DataTypeConversion5_k
	  section.data(33).logicalSrcIdx = 73;
	  section.data(33).dtTransOffset = 32;
	
	  ;% Copy_2_of_canceshi_B.DataTypeConversion6_g
	  section.data(34).logicalSrcIdx = 74;
	  section.data(34).dtTransOffset = 33;
	
	  ;% Copy_2_of_canceshi_B.DataTypeConversion15
	  section.data(35).logicalSrcIdx = 75;
	  section.data(35).dtTransOffset = 34;
	
	  ;% Copy_2_of_canceshi_B.DataTypeConversion9
	  section.data(36).logicalSrcIdx = 76;
	  section.data(36).dtTransOffset = 35;
	
	  ;% Copy_2_of_canceshi_B.DataTypeConversion8
	  section.data(37).logicalSrcIdx = 77;
	  section.data(37).dtTransOffset = 36;
	
	  ;% Copy_2_of_canceshi_B.DataTypeConversion10
	  section.data(38).logicalSrcIdx = 78;
	  section.data(38).dtTransOffset = 37;
	
	  ;% Copy_2_of_canceshi_B.DataTypeConversion11
	  section.data(39).logicalSrcIdx = 79;
	  section.data(39).dtTransOffset = 38;
	
	  ;% Copy_2_of_canceshi_B.DataTypeConversion12
	  section.data(40).logicalSrcIdx = 80;
	  section.data(40).dtTransOffset = 39;
	
	  ;% Copy_2_of_canceshi_B.DataTypeConversion13
	  section.data(41).logicalSrcIdx = 81;
	  section.data(41).dtTransOffset = 40;
	
	  ;% Copy_2_of_canceshi_B.DataTypeConversion14
	  section.data(42).logicalSrcIdx = 82;
	  section.data(42).dtTransOffset = 41;
	
	  ;% Copy_2_of_canceshi_B.CANbitunpacking2_o1
	  section.data(43).logicalSrcIdx = 83;
	  section.data(43).dtTransOffset = 42;
	
	  ;% Copy_2_of_canceshi_B.CANbitunpacking2_o2
	  section.data(44).logicalSrcIdx = 84;
	  section.data(44).dtTransOffset = 43;
	
	  ;% Copy_2_of_canceshi_B.CANbitunpacking2_o3
	  section.data(45).logicalSrcIdx = 85;
	  section.data(45).dtTransOffset = 44;
	
	  ;% Copy_2_of_canceshi_B.CANbitunpacking2_o4
	  section.data(46).logicalSrcIdx = 86;
	  section.data(46).dtTransOffset = 45;
	
	  ;% Copy_2_of_canceshi_B.CANbitunpacking3_o1
	  section.data(47).logicalSrcIdx = 87;
	  section.data(47).dtTransOffset = 46;
	
	  ;% Copy_2_of_canceshi_B.CANbitunpacking3_o2
	  section.data(48).logicalSrcIdx = 88;
	  section.data(48).dtTransOffset = 47;
	
	  ;% Copy_2_of_canceshi_B.CANbitunpacking3_o3
	  section.data(49).logicalSrcIdx = 89;
	  section.data(49).dtTransOffset = 48;
	
	  ;% Copy_2_of_canceshi_B.CANbitunpacking3_o4
	  section.data(50).logicalSrcIdx = 90;
	  section.data(50).dtTransOffset = 49;
	
	  ;% Copy_2_of_canceshi_B.CANbitunpacking4_o1
	  section.data(51).logicalSrcIdx = 91;
	  section.data(51).dtTransOffset = 50;
	
	  ;% Copy_2_of_canceshi_B.CANbitunpacking4_o2
	  section.data(52).logicalSrcIdx = 92;
	  section.data(52).dtTransOffset = 51;
	
	  ;% Copy_2_of_canceshi_B.CANbitunpacking4_o3
	  section.data(53).logicalSrcIdx = 93;
	  section.data(53).dtTransOffset = 52;
	
	  ;% Copy_2_of_canceshi_B.CANbitunpacking4_o4
	  section.data(54).logicalSrcIdx = 94;
	  section.data(54).dtTransOffset = 53;
	
	  ;% Copy_2_of_canceshi_B.CANbitunpacking4_o5
	  section.data(55).logicalSrcIdx = 95;
	  section.data(55).dtTransOffset = 54;
	
	  ;% Copy_2_of_canceshi_B.CANbitunpacking5_o1
	  section.data(56).logicalSrcIdx = 96;
	  section.data(56).dtTransOffset = 55;
	
	  ;% Copy_2_of_canceshi_B.CANbitunpacking5_o2
	  section.data(57).logicalSrcIdx = 97;
	  section.data(57).dtTransOffset = 56;
	
	  ;% Copy_2_of_canceshi_B.CANbitunpacking5_o3
	  section.data(58).logicalSrcIdx = 98;
	  section.data(58).dtTransOffset = 57;
	
	  ;% Copy_2_of_canceshi_B.CANbitunpacking5_o4
	  section.data(59).logicalSrcIdx = 99;
	  section.data(59).dtTransOffset = 58;
	
	  ;% Copy_2_of_canceshi_B.CANbitunpacking5_o5
	  section.data(60).logicalSrcIdx = 100;
	  section.data(60).dtTransOffset = 59;
	
	  ;% Copy_2_of_canceshi_B.CANbitunpacking1_o1
	  section.data(61).logicalSrcIdx = 101;
	  section.data(61).dtTransOffset = 60;
	
	  ;% Copy_2_of_canceshi_B.CANbitunpacking1_o2
	  section.data(62).logicalSrcIdx = 102;
	  section.data(62).dtTransOffset = 61;
	
	  ;% Copy_2_of_canceshi_B.CANbitunpacking1_o3
	  section.data(63).logicalSrcIdx = 103;
	  section.data(63).dtTransOffset = 62;
	
	  ;% Copy_2_of_canceshi_B.CANbitunpacking1_o4
	  section.data(64).logicalSrcIdx = 104;
	  section.data(64).dtTransOffset = 63;
	
	  ;% Copy_2_of_canceshi_B.CANbitunpacking1_o5
	  section.data(65).logicalSrcIdx = 105;
	  section.data(65).dtTransOffset = 64;
	
	  ;% Copy_2_of_canceshi_B.CANbitunpacking1_o6
	  section.data(66).logicalSrcIdx = 106;
	  section.data(66).dtTransOffset = 65;
	
	  ;% Copy_2_of_canceshi_B.CANbitunpacking1_o7
	  section.data(67).logicalSrcIdx = 107;
	  section.data(67).dtTransOffset = 66;
	
	  ;% Copy_2_of_canceshi_B.CANbitunpacking1_o8
	  section.data(68).logicalSrcIdx = 108;
	  section.data(68).dtTransOffset = 67;
	
	  ;% Copy_2_of_canceshi_B.DataTypeConversion
	  section.data(69).logicalSrcIdx = 109;
	  section.data(69).dtTransOffset = 68;
	
	  ;% Copy_2_of_canceshi_B.DataTypeConversion5_b
	  section.data(70).logicalSrcIdx = 110;
	  section.data(70).dtTransOffset = 69;
	
	  ;% Copy_2_of_canceshi_B.DataTypeConversion12_d
	  section.data(71).logicalSrcIdx = 111;
	  section.data(71).dtTransOffset = 70;
	
	  ;% Copy_2_of_canceshi_B.DataTypeConversion13_e
	  section.data(72).logicalSrcIdx = 112;
	  section.data(72).dtTransOffset = 71;
	
	  ;% Copy_2_of_canceshi_B.DataTypeConversion6_c
	  section.data(73).logicalSrcIdx = 113;
	  section.data(73).dtTransOffset = 72;
	
	  ;% Copy_2_of_canceshi_B.DataTypeConversion7_l
	  section.data(74).logicalSrcIdx = 114;
	  section.data(74).dtTransOffset = 73;
	
	  ;% Copy_2_of_canceshi_B.DataTypeConversion14_c
	  section.data(75).logicalSrcIdx = 115;
	  section.data(75).dtTransOffset = 74;
	
	  ;% Copy_2_of_canceshi_B.DataTypeConversion15_c
	  section.data(76).logicalSrcIdx = 116;
	  section.data(76).dtTransOffset = 75;
	
	  ;% Copy_2_of_canceshi_B.DataTypeConversion8_g
	  section.data(77).logicalSrcIdx = 117;
	  section.data(77).dtTransOffset = 76;
	
	  ;% Copy_2_of_canceshi_B.DataTypeConversion9_m
	  section.data(78).logicalSrcIdx = 118;
	  section.data(78).dtTransOffset = 77;
	
	  ;% Copy_2_of_canceshi_B.DataTypeConversion16_a
	  section.data(79).logicalSrcIdx = 119;
	  section.data(79).dtTransOffset = 78;
	
	  ;% Copy_2_of_canceshi_B.DataTypeConversion17_o
	  section.data(80).logicalSrcIdx = 120;
	  section.data(80).dtTransOffset = 79;
	
	  ;% Copy_2_of_canceshi_B.DataTypeConversion10_o
	  section.data(81).logicalSrcIdx = 121;
	  section.data(81).dtTransOffset = 80;
	
	  ;% Copy_2_of_canceshi_B.DataTypeConversion11_i
	  section.data(82).logicalSrcIdx = 122;
	  section.data(82).dtTransOffset = 81;
	
	  ;% Copy_2_of_canceshi_B.DataTypeConversion18_j
	  section.data(83).logicalSrcIdx = 123;
	  section.data(83).dtTransOffset = 82;
	
	  ;% Copy_2_of_canceshi_B.DataTypeConversion19_o
	  section.data(84).logicalSrcIdx = 124;
	  section.data(84).dtTransOffset = 83;
	
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
    nTotSects     = 2;
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
    ;% Auto data (Copy_2_of_canceshi_DWork)
    ;%
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% Copy_2_of_canceshi_DWork.Scope_PWORK.LoggedData
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% Copy_2_of_canceshi_DWork.ToWorkspace_PWORK.LoggedData
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(1) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% Copy_2_of_canceshi_DWork.PCL731_IWORK
	  section.data(1).logicalSrcIdx = 2;
	  section.data(1).dtTransOffset = 0;
	
	  ;% Copy_2_of_canceshi_DWork.SFunction_IWORK.AcquireOK
	  section.data(2).logicalSrcIdx = 3;
	  section.data(2).dtTransOffset = 2;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(2) = section;
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


  targMap.checksum0 = 3927568038;
  targMap.checksum1 = 3005633934;
  targMap.checksum2 = 3816186302;
  targMap.checksum3 = 3120778302;

