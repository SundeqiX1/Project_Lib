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
    ;% Auto data (Copy_of_canceshi1_P)
    ;%
      section.nData     = 144;
      section.data(144)  = dumData; %prealloc
      
	  ;% Copy_of_canceshi1_P.Constant1_Value
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% Copy_of_canceshi1_P.Constant33_Value
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 1;
	
	  ;% Copy_of_canceshi1_P.Constant32_Value
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 2;
	
	  ;% Copy_of_canceshi1_P.Constant31_Value
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 3;
	
	  ;% Copy_of_canceshi1_P.Constant30_Value
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 4;
	
	  ;% Copy_of_canceshi1_P.Constant29_Value
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 5;
	
	  ;% Copy_of_canceshi1_P.Constant28_Value
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 6;
	
	  ;% Copy_of_canceshi1_P.u_Value
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 7;
	
	  ;% Copy_of_canceshi1_P.Constant2_Value
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 8;
	
	  ;% Copy_of_canceshi1_P.Constant3_Value
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 9;
	
	  ;% Copy_of_canceshi1_P.Constant4_Value
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 10;
	
	  ;% Copy_of_canceshi1_P.Constant5_Value
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 11;
	
	  ;% Copy_of_canceshi1_P.Constant6_Value
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 12;
	
	  ;% Copy_of_canceshi1_P.Constant7_Value
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 13;
	
	  ;% Copy_of_canceshi1_P.Constant8_Value
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 14;
	
	  ;% Copy_of_canceshi1_P.Constant9_Value
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 15;
	
	  ;% Copy_of_canceshi1_P.Constant10_Value
	  section.data(17).logicalSrcIdx = 16;
	  section.data(17).dtTransOffset = 16;
	
	  ;% Copy_of_canceshi1_P.Constant12_Value
	  section.data(18).logicalSrcIdx = 17;
	  section.data(18).dtTransOffset = 17;
	
	  ;% Copy_of_canceshi1_P.Constant13_Value
	  section.data(19).logicalSrcIdx = 18;
	  section.data(19).dtTransOffset = 18;
	
	  ;% Copy_of_canceshi1_P.Constant14_Value
	  section.data(20).logicalSrcIdx = 19;
	  section.data(20).dtTransOffset = 19;
	
	  ;% Copy_of_canceshi1_P.Constant15_Value
	  section.data(21).logicalSrcIdx = 20;
	  section.data(21).dtTransOffset = 20;
	
	  ;% Copy_of_canceshi1_P.Constant11_Value
	  section.data(22).logicalSrcIdx = 21;
	  section.data(22).dtTransOffset = 21;
	
	  ;% Copy_of_canceshi1_P.Constant17_Value
	  section.data(23).logicalSrcIdx = 22;
	  section.data(23).dtTransOffset = 22;
	
	  ;% Copy_of_canceshi1_P.Constant19_Value
	  section.data(24).logicalSrcIdx = 23;
	  section.data(24).dtTransOffset = 23;
	
	  ;% Copy_of_canceshi1_P.Constant20_Value
	  section.data(25).logicalSrcIdx = 24;
	  section.data(25).dtTransOffset = 24;
	
	  ;% Copy_of_canceshi1_P.Constant21_Value
	  section.data(26).logicalSrcIdx = 25;
	  section.data(26).dtTransOffset = 25;
	
	  ;% Copy_of_canceshi1_P.Constant16_Value
	  section.data(27).logicalSrcIdx = 26;
	  section.data(27).dtTransOffset = 26;
	
	  ;% Copy_of_canceshi1_P.Constant23_Value
	  section.data(28).logicalSrcIdx = 27;
	  section.data(28).dtTransOffset = 27;
	
	  ;% Copy_of_canceshi1_P.Constant24_Value
	  section.data(29).logicalSrcIdx = 28;
	  section.data(29).dtTransOffset = 28;
	
	  ;% Copy_of_canceshi1_P.Constant25_Value
	  section.data(30).logicalSrcIdx = 29;
	  section.data(30).dtTransOffset = 29;
	
	  ;% Copy_of_canceshi1_P.Constant26_Value
	  section.data(31).logicalSrcIdx = 30;
	  section.data(31).dtTransOffset = 30;
	
	  ;% Copy_of_canceshi1_P.PCL731_P1_Size
	  section.data(32).logicalSrcIdx = 31;
	  section.data(32).dtTransOffset = 31;
	
	  ;% Copy_of_canceshi1_P.PCL731_P1
	  section.data(33).logicalSrcIdx = 32;
	  section.data(33).dtTransOffset = 33;
	
	  ;% Copy_of_canceshi1_P.PCL731_P2_Size
	  section.data(34).logicalSrcIdx = 33;
	  section.data(34).dtTransOffset = 34;
	
	  ;% Copy_of_canceshi1_P.PCL731_P2
	  section.data(35).logicalSrcIdx = 34;
	  section.data(35).dtTransOffset = 36;
	
	  ;% Copy_of_canceshi1_P.xuanzhuany_Value
	  section.data(36).logicalSrcIdx = 35;
	  section.data(36).dtTransOffset = 38;
	
	  ;% Copy_of_canceshi1_P.IntegerDelay_InitialCondition
	  section.data(37).logicalSrcIdx = 36;
	  section.data(37).dtTransOffset = 39;
	
	  ;% Copy_of_canceshi1_P.IntegerDelay2_InitialCondition
	  section.data(38).logicalSrcIdx = 37;
	  section.data(38).dtTransOffset = 40;
	
	  ;% Copy_of_canceshi1_P.IntegerDelay1_InitialCondition
	  section.data(39).logicalSrcIdx = 38;
	  section.data(39).dtTransOffset = 41;
	
	  ;% Copy_of_canceshi1_P.Constant_Value
	  section.data(40).logicalSrcIdx = 39;
	  section.data(40).dtTransOffset = 42;
	
	  ;% Copy_of_canceshi1_P.constant5_Value
	  section.data(41).logicalSrcIdx = 40;
	  section.data(41).dtTransOffset = 43;
	
	  ;% Copy_of_canceshi1_P.constant14_Value
	  section.data(42).logicalSrcIdx = 41;
	  section.data(42).dtTransOffset = 44;
	
	  ;% Copy_of_canceshi1_P.constant15_Value
	  section.data(43).logicalSrcIdx = 42;
	  section.data(43).dtTransOffset = 45;
	
	  ;% Copy_of_canceshi1_P.shengjiangy_Value
	  section.data(44).logicalSrcIdx = 43;
	  section.data(44).dtTransOffset = 46;
	
	  ;% Copy_of_canceshi1_P.IntegerDelay_InitialCondition_n
	  section.data(45).logicalSrcIdx = 44;
	  section.data(45).dtTransOffset = 47;
	
	  ;% Copy_of_canceshi1_P.IntegerDelay2_InitialConditio_f
	  section.data(46).logicalSrcIdx = 45;
	  section.data(46).dtTransOffset = 48;
	
	  ;% Copy_of_canceshi1_P.IntegerDelay1_InitialConditio_k
	  section.data(47).logicalSrcIdx = 46;
	  section.data(47).dtTransOffset = 49;
	
	  ;% Copy_of_canceshi1_P.Constant_Value_h
	  section.data(48).logicalSrcIdx = 47;
	  section.data(48).dtTransOffset = 50;
	
	  ;% Copy_of_canceshi1_P.constant4_Value
	  section.data(49).logicalSrcIdx = 48;
	  section.data(49).dtTransOffset = 51;
	
	  ;% Copy_of_canceshi1_P.constant12_Value
	  section.data(50).logicalSrcIdx = 49;
	  section.data(50).dtTransOffset = 52;
	
	  ;% Copy_of_canceshi1_P.constant13_Value
	  section.data(51).logicalSrcIdx = 50;
	  section.data(51).dtTransOffset = 53;
	
	  ;% Copy_of_canceshi1_P.baozhuay_Value
	  section.data(52).logicalSrcIdx = 51;
	  section.data(52).dtTransOffset = 54;
	
	  ;% Copy_of_canceshi1_P.IntegerDelay_InitialCondition_h
	  section.data(53).logicalSrcIdx = 52;
	  section.data(53).dtTransOffset = 55;
	
	  ;% Copy_of_canceshi1_P.IntegerDelay2_InitialConditio_h
	  section.data(54).logicalSrcIdx = 53;
	  section.data(54).dtTransOffset = 56;
	
	  ;% Copy_of_canceshi1_P.IntegerDelay1_InitialConditio_m
	  section.data(55).logicalSrcIdx = 54;
	  section.data(55).dtTransOffset = 57;
	
	  ;% Copy_of_canceshi1_P.Constant_Value_j
	  section.data(56).logicalSrcIdx = 55;
	  section.data(56).dtTransOffset = 58;
	
	  ;% Copy_of_canceshi1_P.constant1_Value
	  section.data(57).logicalSrcIdx = 56;
	  section.data(57).dtTransOffset = 59;
	
	  ;% Copy_of_canceshi1_P.constant6_Value
	  section.data(58).logicalSrcIdx = 57;
	  section.data(58).dtTransOffset = 60;
	
	  ;% Copy_of_canceshi1_P.constant9_Value
	  section.data(59).logicalSrcIdx = 58;
	  section.data(59).dtTransOffset = 61;
	
	  ;% Copy_of_canceshi1_P.constant2_Value
	  section.data(60).logicalSrcIdx = 59;
	  section.data(60).dtTransOffset = 62;
	
	  ;% Copy_of_canceshi1_P.constant10_Value
	  section.data(61).logicalSrcIdx = 60;
	  section.data(61).dtTransOffset = 63;
	
	  ;% Copy_of_canceshi1_P.constant11_Value
	  section.data(62).logicalSrcIdx = 61;
	  section.data(62).dtTransOffset = 64;
	
	  ;% Copy_of_canceshi1_P.u_Value_h
	  section.data(63).logicalSrcIdx = 62;
	  section.data(63).dtTransOffset = 65;
	
	  ;% Copy_of_canceshi1_P.Constant18_Value
	  section.data(64).logicalSrcIdx = 63;
	  section.data(64).dtTransOffset = 66;
	
	  ;% Copy_of_canceshi1_P.Constant7_Value_a
	  section.data(65).logicalSrcIdx = 64;
	  section.data(65).dtTransOffset = 67;
	
	  ;% Copy_of_canceshi1_P.Constant16_Value_h
	  section.data(66).logicalSrcIdx = 65;
	  section.data(66).dtTransOffset = 68;
	
	  ;% Copy_of_canceshi1_P.Constant1_Value_f
	  section.data(67).logicalSrcIdx = 66;
	  section.data(67).dtTransOffset = 69;
	
	  ;% Copy_of_canceshi1_P.Constant2_Value_f
	  section.data(68).logicalSrcIdx = 67;
	  section.data(68).dtTransOffset = 70;
	
	  ;% Copy_of_canceshi1_P.Constant3_Value_i
	  section.data(69).logicalSrcIdx = 68;
	  section.data(69).dtTransOffset = 71;
	
	  ;% Copy_of_canceshi1_P.Constant4_Value_g
	  section.data(70).logicalSrcIdx = 69;
	  section.data(70).dtTransOffset = 72;
	
	  ;% Copy_of_canceshi1_P.Constant5_Value_n
	  section.data(71).logicalSrcIdx = 70;
	  section.data(71).dtTransOffset = 73;
	
	  ;% Copy_of_canceshi1_P.Constant6_Value_b
	  section.data(72).logicalSrcIdx = 71;
	  section.data(72).dtTransOffset = 74;
	
	  ;% Copy_of_canceshi1_P.Constant8_Value_e
	  section.data(73).logicalSrcIdx = 72;
	  section.data(73).dtTransOffset = 75;
	
	  ;% Copy_of_canceshi1_P.Constant16_Value_c
	  section.data(74).logicalSrcIdx = 73;
	  section.data(74).dtTransOffset = 76;
	
	  ;% Copy_of_canceshi1_P.Constant2_Value_l
	  section.data(75).logicalSrcIdx = 74;
	  section.data(75).dtTransOffset = 77;
	
	  ;% Copy_of_canceshi1_P.Constant3_Value_g
	  section.data(76).logicalSrcIdx = 75;
	  section.data(76).dtTransOffset = 78;
	
	  ;% Copy_of_canceshi1_P.Constant4_Value_i
	  section.data(77).logicalSrcIdx = 76;
	  section.data(77).dtTransOffset = 79;
	
	  ;% Copy_of_canceshi1_P.Constant5_Value_h
	  section.data(78).logicalSrcIdx = 77;
	  section.data(78).dtTransOffset = 80;
	
	  ;% Copy_of_canceshi1_P.Constant6_Value_k
	  section.data(79).logicalSrcIdx = 78;
	  section.data(79).dtTransOffset = 81;
	
	  ;% Copy_of_canceshi1_P.Constant7_Value_n
	  section.data(80).logicalSrcIdx = 79;
	  section.data(80).dtTransOffset = 82;
	
	  ;% Copy_of_canceshi1_P.Constant24_Value_m
	  section.data(81).logicalSrcIdx = 80;
	  section.data(81).dtTransOffset = 83;
	
	  ;% Copy_of_canceshi1_P.Constant18_Value_p
	  section.data(82).logicalSrcIdx = 81;
	  section.data(82).dtTransOffset = 84;
	
	  ;% Copy_of_canceshi1_P.Constant17_Value_h
	  section.data(83).logicalSrcIdx = 82;
	  section.data(83).dtTransOffset = 85;
	
	  ;% Copy_of_canceshi1_P.Constant19_Value_f
	  section.data(84).logicalSrcIdx = 83;
	  section.data(84).dtTransOffset = 86;
	
	  ;% Copy_of_canceshi1_P.Constant20_Value_o
	  section.data(85).logicalSrcIdx = 84;
	  section.data(85).dtTransOffset = 87;
	
	  ;% Copy_of_canceshi1_P.Constant21_Value_k
	  section.data(86).logicalSrcIdx = 85;
	  section.data(86).dtTransOffset = 88;
	
	  ;% Copy_of_canceshi1_P.Constant22_Value
	  section.data(87).logicalSrcIdx = 86;
	  section.data(87).dtTransOffset = 89;
	
	  ;% Copy_of_canceshi1_P.Constant23_Value_h
	  section.data(88).logicalSrcIdx = 87;
	  section.data(88).dtTransOffset = 90;
	
	  ;% Copy_of_canceshi1_P.Constant7_Value_d
	  section.data(89).logicalSrcIdx = 88;
	  section.data(89).dtTransOffset = 91;
	
	  ;% Copy_of_canceshi1_P.Constant16_Value_e
	  section.data(90).logicalSrcIdx = 89;
	  section.data(90).dtTransOffset = 92;
	
	  ;% Copy_of_canceshi1_P.Constant1_Value_fj
	  section.data(91).logicalSrcIdx = 90;
	  section.data(91).dtTransOffset = 93;
	
	  ;% Copy_of_canceshi1_P.Constant2_Value_i
	  section.data(92).logicalSrcIdx = 91;
	  section.data(92).dtTransOffset = 94;
	
	  ;% Copy_of_canceshi1_P.Constant3_Value_j
	  section.data(93).logicalSrcIdx = 92;
	  section.data(93).dtTransOffset = 95;
	
	  ;% Copy_of_canceshi1_P.Constant4_Value_i3
	  section.data(94).logicalSrcIdx = 93;
	  section.data(94).dtTransOffset = 96;
	
	  ;% Copy_of_canceshi1_P.Constant5_Value_l
	  section.data(95).logicalSrcIdx = 94;
	  section.data(95).dtTransOffset = 97;
	
	  ;% Copy_of_canceshi1_P.Constant6_Value_l
	  section.data(96).logicalSrcIdx = 95;
	  section.data(96).dtTransOffset = 98;
	
	  ;% Copy_of_canceshi1_P.Constant15_Value_o
	  section.data(97).logicalSrcIdx = 96;
	  section.data(97).dtTransOffset = 99;
	
	  ;% Copy_of_canceshi1_P.Constant9_Value_d
	  section.data(98).logicalSrcIdx = 97;
	  section.data(98).dtTransOffset = 100;
	
	  ;% Copy_of_canceshi1_P.Constant8_Value_a
	  section.data(99).logicalSrcIdx = 98;
	  section.data(99).dtTransOffset = 101;
	
	  ;% Copy_of_canceshi1_P.Constant10_Value_f
	  section.data(100).logicalSrcIdx = 99;
	  section.data(100).dtTransOffset = 102;
	
	  ;% Copy_of_canceshi1_P.Constant11_Value_h
	  section.data(101).logicalSrcIdx = 100;
	  section.data(101).dtTransOffset = 103;
	
	  ;% Copy_of_canceshi1_P.Constant12_Value_a
	  section.data(102).logicalSrcIdx = 101;
	  section.data(102).dtTransOffset = 104;
	
	  ;% Copy_of_canceshi1_P.Constant13_Value_k
	  section.data(103).logicalSrcIdx = 102;
	  section.data(103).dtTransOffset = 105;
	
	  ;% Copy_of_canceshi1_P.Constant14_Value_g
	  section.data(104).logicalSrcIdx = 103;
	  section.data(104).dtTransOffset = 106;
	
	  ;% Copy_of_canceshi1_P.Setup_P1_Size
	  section.data(105).logicalSrcIdx = 104;
	  section.data(105).dtTransOffset = 107;
	
	  ;% Copy_of_canceshi1_P.Setup_P1
	  section.data(106).logicalSrcIdx = 105;
	  section.data(106).dtTransOffset = 109;
	
	  ;% Copy_of_canceshi1_P.Setup_P2_Size
	  section.data(107).logicalSrcIdx = 106;
	  section.data(107).dtTransOffset = 113;
	
	  ;% Copy_of_canceshi1_P.Setup_P2
	  section.data(108).logicalSrcIdx = 107;
	  section.data(108).dtTransOffset = 115;
	
	  ;% Copy_of_canceshi1_P.Setup_P3_Size
	  section.data(109).logicalSrcIdx = 108;
	  section.data(109).dtTransOffset = 119;
	
	  ;% Copy_of_canceshi1_P.Setup_P3
	  section.data(110).logicalSrcIdx = 109;
	  section.data(110).dtTransOffset = 121;
	
	  ;% Copy_of_canceshi1_P.Setup_P4_Size
	  section.data(111).logicalSrcIdx = 110;
	  section.data(111).dtTransOffset = 122;
	
	  ;% Copy_of_canceshi1_P.Setup_P5_Size
	  section.data(112).logicalSrcIdx = 112;
	  section.data(112).dtTransOffset = 124;
	
	  ;% Copy_of_canceshi1_P.Setup_P5
	  section.data(113).logicalSrcIdx = 113;
	  section.data(113).dtTransOffset = 126;
	
	  ;% Copy_of_canceshi1_P.Setup_P6_Size
	  section.data(114).logicalSrcIdx = 114;
	  section.data(114).dtTransOffset = 132;
	
	  ;% Copy_of_canceshi1_P.Setup_P6
	  section.data(115).logicalSrcIdx = 115;
	  section.data(115).dtTransOffset = 134;
	
	  ;% Copy_of_canceshi1_P.Setup_P7_Size
	  section.data(116).logicalSrcIdx = 116;
	  section.data(116).dtTransOffset = 140;
	
	  ;% Copy_of_canceshi1_P.Setup_P8_Size
	  section.data(117).logicalSrcIdx = 118;
	  section.data(117).dtTransOffset = 142;
	
	  ;% Copy_of_canceshi1_P.Setup_P9_Size
	  section.data(118).logicalSrcIdx = 120;
	  section.data(118).dtTransOffset = 144;
	
	  ;% Copy_of_canceshi1_P.Setup_P10_Size
	  section.data(119).logicalSrcIdx = 122;
	  section.data(119).dtTransOffset = 146;
	
	  ;% Copy_of_canceshi1_P.Setup_P11_Size
	  section.data(120).logicalSrcIdx = 124;
	  section.data(120).dtTransOffset = 148;
	
	  ;% Copy_of_canceshi1_P.Setup_P12_Size
	  section.data(121).logicalSrcIdx = 126;
	  section.data(121).dtTransOffset = 150;
	
	  ;% Copy_of_canceshi1_P.Setup_P13_Size
	  section.data(122).logicalSrcIdx = 128;
	  section.data(122).dtTransOffset = 152;
	
	  ;% Copy_of_canceshi1_P.Setup_P13
	  section.data(123).logicalSrcIdx = 129;
	  section.data(123).dtTransOffset = 154;
	
	  ;% Copy_of_canceshi1_P.Setup_P14_Size
	  section.data(124).logicalSrcIdx = 130;
	  section.data(124).dtTransOffset = 160;
	
	  ;% Copy_of_canceshi1_P.Setup_P15_Size
	  section.data(125).logicalSrcIdx = 132;
	  section.data(125).dtTransOffset = 162;
	
	  ;% Copy_of_canceshi1_P.Setup_P15
	  section.data(126).logicalSrcIdx = 133;
	  section.data(126).dtTransOffset = 164;
	
	  ;% Copy_of_canceshi1_P.Setup_P16_Size
	  section.data(127).logicalSrcIdx = 134;
	  section.data(127).dtTransOffset = 165;
	
	  ;% Copy_of_canceshi1_P.Setup_P16
	  section.data(128).logicalSrcIdx = 135;
	  section.data(128).dtTransOffset = 167;
	
	  ;% Copy_of_canceshi1_P.Setup_P17_Size
	  section.data(129).logicalSrcIdx = 136;
	  section.data(129).dtTransOffset = 168;
	
	  ;% Copy_of_canceshi1_P.Setup_P17
	  section.data(130).logicalSrcIdx = 137;
	  section.data(130).dtTransOffset = 170;
	
	  ;% Copy_of_canceshi1_P.Setup_P18_Size
	  section.data(131).logicalSrcIdx = 138;
	  section.data(131).dtTransOffset = 171;
	
	  ;% Copy_of_canceshi1_P.Setup_P18
	  section.data(132).logicalSrcIdx = 139;
	  section.data(132).dtTransOffset = 173;
	
	  ;% Copy_of_canceshi1_P.Setup_P19_Size
	  section.data(133).logicalSrcIdx = 140;
	  section.data(133).dtTransOffset = 174;
	
	  ;% Copy_of_canceshi1_P.Setup_P19
	  section.data(134).logicalSrcIdx = 141;
	  section.data(134).dtTransOffset = 176;
	
	  ;% Copy_of_canceshi1_P.Setup_P20_Size
	  section.data(135).logicalSrcIdx = 142;
	  section.data(135).dtTransOffset = 177;
	
	  ;% Copy_of_canceshi1_P.Setup_P20
	  section.data(136).logicalSrcIdx = 143;
	  section.data(136).dtTransOffset = 179;
	
	  ;% Copy_of_canceshi1_P.Setup_P21_Size
	  section.data(137).logicalSrcIdx = 144;
	  section.data(137).dtTransOffset = 180;
	
	  ;% Copy_of_canceshi1_P.Setup_P21
	  section.data(138).logicalSrcIdx = 145;
	  section.data(138).dtTransOffset = 182;
	
	  ;% Copy_of_canceshi1_P.Setup_P22_Size
	  section.data(139).logicalSrcIdx = 146;
	  section.data(139).dtTransOffset = 183;
	
	  ;% Copy_of_canceshi1_P.Setup_P22
	  section.data(140).logicalSrcIdx = 147;
	  section.data(140).dtTransOffset = 185;
	
	  ;% Copy_of_canceshi1_P.Setup_P23_Size
	  section.data(141).logicalSrcIdx = 148;
	  section.data(141).dtTransOffset = 186;
	
	  ;% Copy_of_canceshi1_P.Setup_P23
	  section.data(142).logicalSrcIdx = 149;
	  section.data(142).dtTransOffset = 188;
	
	  ;% Copy_of_canceshi1_P.Setup_P24_Size
	  section.data(143).logicalSrcIdx = 150;
	  section.data(143).dtTransOffset = 189;
	
	  ;% Copy_of_canceshi1_P.Setup_P24
	  section.data(144).logicalSrcIdx = 151;
	  section.data(144).dtTransOffset = 191;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(1) = section;
      clear section
      
      section.nData     = 6;
      section.data(6)  = dumData; %prealloc
      
	  ;% Copy_of_canceshi1_P.right3_XData
	  section.data(1).logicalSrcIdx = 152;
	  section.data(1).dtTransOffset = 0;
	
	  ;% Copy_of_canceshi1_P.right3_YData
	  section.data(2).logicalSrcIdx = 153;
	  section.data(2).dtTransOffset = 2;
	
	  ;% Copy_of_canceshi1_P.right1_XData
	  section.data(3).logicalSrcIdx = 154;
	  section.data(3).dtTransOffset = 4;
	
	  ;% Copy_of_canceshi1_P.right1_YData
	  section.data(4).logicalSrcIdx = 155;
	  section.data(4).dtTransOffset = 6;
	
	  ;% Copy_of_canceshi1_P.right2_XData
	  section.data(5).logicalSrcIdx = 156;
	  section.data(5).dtTransOffset = 8;
	
	  ;% Copy_of_canceshi1_P.right2_YData
	  section.data(6).logicalSrcIdx = 157;
	  section.data(6).dtTransOffset = 10;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(2) = section;
      clear section
      
      section.nData     = 6;
      section.data(6)  = dumData; %prealloc
      
	  ;% Copy_of_canceshi1_P.Constant_Value_c
	  section.data(1).logicalSrcIdx = 158;
	  section.data(1).dtTransOffset = 0;
	
	  ;% Copy_of_canceshi1_P.SwitchControl_Threshold
	  section.data(2).logicalSrcIdx = 159;
	  section.data(2).dtTransOffset = 1;
	
	  ;% Copy_of_canceshi1_P.Constant_Value_i
	  section.data(3).logicalSrcIdx = 160;
	  section.data(3).dtTransOffset = 2;
	
	  ;% Copy_of_canceshi1_P.SwitchControl_Threshold_i
	  section.data(4).logicalSrcIdx = 161;
	  section.data(4).dtTransOffset = 3;
	
	  ;% Copy_of_canceshi1_P.Constant_Value_k
	  section.data(5).logicalSrcIdx = 162;
	  section.data(5).dtTransOffset = 4;
	
	  ;% Copy_of_canceshi1_P.SwitchControl_Threshold_k
	  section.data(6).logicalSrcIdx = 163;
	  section.data(6).dtTransOffset = 5;
	
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
    nTotSects     = 4;
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
    ;% Auto data (Copy_of_canceshi1_B)
    ;%
      section.nData     = 56;
      section.data(56)  = dumData; %prealloc
      
	  ;% Copy_of_canceshi1_B.TmpSignalConversionAtPCL731Inpo
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% Copy_of_canceshi1_B.PCL731
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 24;
	
	  ;% Copy_of_canceshi1_B.IntegerDelay
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 48;
	
	  ;% Copy_of_canceshi1_B.IntegerDelay2
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 49;
	
	  ;% Copy_of_canceshi1_B.IntegerDelay1
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 50;
	
	  ;% Copy_of_canceshi1_B.Product
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 51;
	
	  ;% Copy_of_canceshi1_B.Add
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 52;
	
	  ;% Copy_of_canceshi1_B.xuanzhuana
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 53;
	
	  ;% Copy_of_canceshi1_B.CANbitpacking3
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 54;
	
	  ;% Copy_of_canceshi1_B.CANbitpacking7
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 55;
	
	  ;% Copy_of_canceshi1_B.MultiportSwitch3
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 56;
	
	  ;% Copy_of_canceshi1_B.IntegerDelay_h
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 57;
	
	  ;% Copy_of_canceshi1_B.IntegerDelay2_e
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 58;
	
	  ;% Copy_of_canceshi1_B.IntegerDelay1_k
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 59;
	
	  ;% Copy_of_canceshi1_B.Product_d
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 60;
	
	  ;% Copy_of_canceshi1_B.Add_b
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 61;
	
	  ;% Copy_of_canceshi1_B.shengjianga
	  section.data(17).logicalSrcIdx = 16;
	  section.data(17).dtTransOffset = 62;
	
	  ;% Copy_of_canceshi1_B.CANbitpacking2
	  section.data(18).logicalSrcIdx = 17;
	  section.data(18).dtTransOffset = 63;
	
	  ;% Copy_of_canceshi1_B.CANbitpacking6
	  section.data(19).logicalSrcIdx = 18;
	  section.data(19).dtTransOffset = 64;
	
	  ;% Copy_of_canceshi1_B.MultiportSwitch2
	  section.data(20).logicalSrcIdx = 19;
	  section.data(20).dtTransOffset = 65;
	
	  ;% Copy_of_canceshi1_B.IntegerDelay_g
	  section.data(21).logicalSrcIdx = 20;
	  section.data(21).dtTransOffset = 66;
	
	  ;% Copy_of_canceshi1_B.IntegerDelay2_i
	  section.data(22).logicalSrcIdx = 21;
	  section.data(22).dtTransOffset = 67;
	
	  ;% Copy_of_canceshi1_B.IntegerDelay1_d
	  section.data(23).logicalSrcIdx = 22;
	  section.data(23).dtTransOffset = 68;
	
	  ;% Copy_of_canceshi1_B.Product_g
	  section.data(24).logicalSrcIdx = 23;
	  section.data(24).dtTransOffset = 69;
	
	  ;% Copy_of_canceshi1_B.Add_e
	  section.data(25).logicalSrcIdx = 24;
	  section.data(25).dtTransOffset = 70;
	
	  ;% Copy_of_canceshi1_B.baozhuaa
	  section.data(26).logicalSrcIdx = 25;
	  section.data(26).dtTransOffset = 71;
	
	  ;% Copy_of_canceshi1_B.CANbitpacking
	  section.data(27).logicalSrcIdx = 26;
	  section.data(27).dtTransOffset = 72;
	
	  ;% Copy_of_canceshi1_B.CANbitpacking4
	  section.data(28).logicalSrcIdx = 27;
	  section.data(28).dtTransOffset = 73;
	
	  ;% Copy_of_canceshi1_B.MultiportSwitch
	  section.data(29).logicalSrcIdx = 28;
	  section.data(29).dtTransOffset = 74;
	
	  ;% Copy_of_canceshi1_B.CANbitpacking1
	  section.data(30).logicalSrcIdx = 29;
	  section.data(30).dtTransOffset = 75;
	
	  ;% Copy_of_canceshi1_B.CANbitpacking5
	  section.data(31).logicalSrcIdx = 30;
	  section.data(31).dtTransOffset = 76;
	
	  ;% Copy_of_canceshi1_B.MultiportSwitch1
	  section.data(32).logicalSrcIdx = 31;
	  section.data(32).dtTransOffset = 77;
	
	  ;% Copy_of_canceshi1_B.sifufa
	  section.data(33).logicalSrcIdx = 32;
	  section.data(33).dtTransOffset = 78;
	
	  ;% Copy_of_canceshi1_B.MultiportSwitch_h
	  section.data(34).logicalSrcIdx = 33;
	  section.data(34).dtTransOffset = 79;
	
	  ;% Copy_of_canceshi1_B.CANbitpacking3_o
	  section.data(35).logicalSrcIdx = 34;
	  section.data(35).dtTransOffset = 80;
	
	  ;% Copy_of_canceshi1_B.CANbitpacking2_l
	  section.data(36).logicalSrcIdx = 35;
	  section.data(36).dtTransOffset = 81;
	
	  ;% Copy_of_canceshi1_B.CANbitpacking2_o
	  section.data(37).logicalSrcIdx = 36;
	  section.data(37).dtTransOffset = 82;
	
	  ;% Copy_of_canceshi1_B.SwitchControl
	  section.data(38).logicalSrcIdx = 37;
	  section.data(38).dtTransOffset = 83;
	
	  ;% Copy_of_canceshi1_B.CANbitpacking3_g
	  section.data(39).logicalSrcIdx = 38;
	  section.data(39).dtTransOffset = 84;
	
	  ;% Copy_of_canceshi1_B.CANbitpacking2_h
	  section.data(40).logicalSrcIdx = 39;
	  section.data(40).dtTransOffset = 85;
	
	  ;% Copy_of_canceshi1_B.CANbitpacking1_i
	  section.data(41).logicalSrcIdx = 40;
	  section.data(41).dtTransOffset = 86;
	
	  ;% Copy_of_canceshi1_B.SwitchControl_i
	  section.data(42).logicalSrcIdx = 41;
	  section.data(42).dtTransOffset = 87;
	
	  ;% Copy_of_canceshi1_B.u02Receive
	  section.data(43).logicalSrcIdx = 42;
	  section.data(43).dtTransOffset = 88;
	
	  ;% Copy_of_canceshi1_B.f1
	  section.data(44).logicalSrcIdx = 43;
	  section.data(44).dtTransOffset = 89;
	
	  ;% Copy_of_canceshi1_B.f2
	  section.data(45).logicalSrcIdx = 44;
	  section.data(45).dtTransOffset = 90;
	
	  ;% Copy_of_canceshi1_B.f3
	  section.data(46).logicalSrcIdx = 45;
	  section.data(46).dtTransOffset = 91;
	
	  ;% Copy_of_canceshi1_B.u02Receive1_o1
	  section.data(47).logicalSrcIdx = 46;
	  section.data(47).dtTransOffset = 92;
	
	  ;% Copy_of_canceshi1_B.u02Receive1_o2
	  section.data(48).logicalSrcIdx = 47;
	  section.data(48).dtTransOffset = 93;
	
	  ;% Copy_of_canceshi1_B.u02Receive1_o3
	  section.data(49).logicalSrcIdx = 48;
	  section.data(49).dtTransOffset = 94;
	
	  ;% Copy_of_canceshi1_B.u02Receive1_o4
	  section.data(50).logicalSrcIdx = 49;
	  section.data(50).dtTransOffset = 95;
	
	  ;% Copy_of_canceshi1_B.a
	  section.data(51).logicalSrcIdx = 50;
	  section.data(51).dtTransOffset = 96;
	
	  ;% Copy_of_canceshi1_B.b
	  section.data(52).logicalSrcIdx = 51;
	  section.data(52).dtTransOffset = 100;
	
	  ;% Copy_of_canceshi1_B.c
	  section.data(53).logicalSrcIdx = 52;
	  section.data(53).dtTransOffset = 104;
	
	  ;% Copy_of_canceshi1_B.d
	  section.data(54).logicalSrcIdx = 53;
	  section.data(54).dtTransOffset = 109;
	
	  ;% Copy_of_canceshi1_B.u02Receive2
	  section.data(55).logicalSrcIdx = 54;
	  section.data(55).dtTransOffset = 114;
	
	  ;% Copy_of_canceshi1_B.SwitchControl_b
	  section.data(56).logicalSrcIdx = 55;
	  section.data(56).dtTransOffset = 115;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(1) = section;
      clear section
      
      section.nData     = 7;
      section.data(7)  = dumData; %prealloc
      
	  ;% Copy_of_canceshi1_B.CANbitunpacking_o1
	  section.data(1).logicalSrcIdx = 56;
	  section.data(1).dtTransOffset = 0;
	
	  ;% Copy_of_canceshi1_B.CANbitunpacking_o2
	  section.data(2).logicalSrcIdx = 57;
	  section.data(2).dtTransOffset = 1;
	
	  ;% Copy_of_canceshi1_B.CANbitunpacking_o3
	  section.data(3).logicalSrcIdx = 58;
	  section.data(3).dtTransOffset = 2;
	
	  ;% Copy_of_canceshi1_B.CANbitunpacking_o4
	  section.data(4).logicalSrcIdx = 59;
	  section.data(4).dtTransOffset = 3;
	
	  ;% Copy_of_canceshi1_B.right3
	  section.data(5).logicalSrcIdx = 60;
	  section.data(5).dtTransOffset = 4;
	
	  ;% Copy_of_canceshi1_B.right1
	  section.data(6).logicalSrcIdx = 61;
	  section.data(6).dtTransOffset = 5;
	
	  ;% Copy_of_canceshi1_B.right2
	  section.data(7).logicalSrcIdx = 62;
	  section.data(7).dtTransOffset = 6;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(2) = section;
      clear section
      
      section.nData     = 84;
      section.data(84)  = dumData; %prealloc
      
	  ;% Copy_of_canceshi1_B.DataTypeConversion10
	  section.data(1).logicalSrcIdx = 63;
	  section.data(1).dtTransOffset = 0;
	
	  ;% Copy_of_canceshi1_B.DataTypeConversion11
	  section.data(2).logicalSrcIdx = 64;
	  section.data(2).dtTransOffset = 1;
	
	  ;% Copy_of_canceshi1_B.DataTypeConversion18
	  section.data(3).logicalSrcIdx = 65;
	  section.data(3).dtTransOffset = 2;
	
	  ;% Copy_of_canceshi1_B.DataTypeConversion19
	  section.data(4).logicalSrcIdx = 66;
	  section.data(4).dtTransOffset = 3;
	
	  ;% Copy_of_canceshi1_B.DataTypeConversion8
	  section.data(5).logicalSrcIdx = 67;
	  section.data(5).dtTransOffset = 4;
	
	  ;% Copy_of_canceshi1_B.DataTypeConversion9
	  section.data(6).logicalSrcIdx = 68;
	  section.data(6).dtTransOffset = 5;
	
	  ;% Copy_of_canceshi1_B.DataTypeConversion16
	  section.data(7).logicalSrcIdx = 69;
	  section.data(7).dtTransOffset = 6;
	
	  ;% Copy_of_canceshi1_B.DataTypeConversion17
	  section.data(8).logicalSrcIdx = 70;
	  section.data(8).dtTransOffset = 7;
	
	  ;% Copy_of_canceshi1_B.DataTypeConversion
	  section.data(9).logicalSrcIdx = 71;
	  section.data(9).dtTransOffset = 8;
	
	  ;% Copy_of_canceshi1_B.DataTypeConversion5
	  section.data(10).logicalSrcIdx = 72;
	  section.data(10).dtTransOffset = 9;
	
	  ;% Copy_of_canceshi1_B.DataTypeConversion12
	  section.data(11).logicalSrcIdx = 73;
	  section.data(11).dtTransOffset = 10;
	
	  ;% Copy_of_canceshi1_B.DataTypeConversion13
	  section.data(12).logicalSrcIdx = 74;
	  section.data(12).dtTransOffset = 11;
	
	  ;% Copy_of_canceshi1_B.DataTypeConversion6
	  section.data(13).logicalSrcIdx = 75;
	  section.data(13).dtTransOffset = 12;
	
	  ;% Copy_of_canceshi1_B.DataTypeConversion7
	  section.data(14).logicalSrcIdx = 76;
	  section.data(14).dtTransOffset = 13;
	
	  ;% Copy_of_canceshi1_B.DataTypeConversion14
	  section.data(15).logicalSrcIdx = 77;
	  section.data(15).dtTransOffset = 14;
	
	  ;% Copy_of_canceshi1_B.DataTypeConversion15
	  section.data(16).logicalSrcIdx = 78;
	  section.data(16).dtTransOffset = 15;
	
	  ;% Copy_of_canceshi1_B.DataTypeConversion17_g
	  section.data(17).logicalSrcIdx = 79;
	  section.data(17).dtTransOffset = 16;
	
	  ;% Copy_of_canceshi1_B.DataTypeConversion18_j
	  section.data(18).logicalSrcIdx = 80;
	  section.data(18).dtTransOffset = 17;
	
	  ;% Copy_of_canceshi1_B.DataTypeConversion7_g
	  section.data(19).logicalSrcIdx = 81;
	  section.data(19).dtTransOffset = 18;
	
	  ;% Copy_of_canceshi1_B.DataTypeConversion16_k
	  section.data(20).logicalSrcIdx = 82;
	  section.data(20).dtTransOffset = 19;
	
	  ;% Copy_of_canceshi1_B.DataTypeConversion1
	  section.data(21).logicalSrcIdx = 83;
	  section.data(21).dtTransOffset = 20;
	
	  ;% Copy_of_canceshi1_B.DataTypeConversion2
	  section.data(22).logicalSrcIdx = 84;
	  section.data(22).dtTransOffset = 21;
	
	  ;% Copy_of_canceshi1_B.DataTypeConversion3
	  section.data(23).logicalSrcIdx = 85;
	  section.data(23).dtTransOffset = 22;
	
	  ;% Copy_of_canceshi1_B.DataTypeConversion4
	  section.data(24).logicalSrcIdx = 86;
	  section.data(24).dtTransOffset = 23;
	
	  ;% Copy_of_canceshi1_B.DataTypeConversion5_m
	  section.data(25).logicalSrcIdx = 87;
	  section.data(25).dtTransOffset = 24;
	
	  ;% Copy_of_canceshi1_B.DataTypeConversion6_o
	  section.data(26).logicalSrcIdx = 88;
	  section.data(26).dtTransOffset = 25;
	
	  ;% Copy_of_canceshi1_B.DataTypeConversion7_d
	  section.data(27).logicalSrcIdx = 89;
	  section.data(27).dtTransOffset = 26;
	
	  ;% Copy_of_canceshi1_B.DataTypeConversion16_f
	  section.data(28).logicalSrcIdx = 90;
	  section.data(28).dtTransOffset = 27;
	
	  ;% Copy_of_canceshi1_B.DataTypeConversion1_h
	  section.data(29).logicalSrcIdx = 91;
	  section.data(29).dtTransOffset = 28;
	
	  ;% Copy_of_canceshi1_B.DataTypeConversion2_o
	  section.data(30).logicalSrcIdx = 92;
	  section.data(30).dtTransOffset = 29;
	
	  ;% Copy_of_canceshi1_B.DataTypeConversion3_k
	  section.data(31).logicalSrcIdx = 93;
	  section.data(31).dtTransOffset = 30;
	
	  ;% Copy_of_canceshi1_B.DataTypeConversion4_h
	  section.data(32).logicalSrcIdx = 94;
	  section.data(32).dtTransOffset = 31;
	
	  ;% Copy_of_canceshi1_B.DataTypeConversion5_c
	  section.data(33).logicalSrcIdx = 95;
	  section.data(33).dtTransOffset = 32;
	
	  ;% Copy_of_canceshi1_B.DataTypeConversion6_g
	  section.data(34).logicalSrcIdx = 96;
	  section.data(34).dtTransOffset = 33;
	
	  ;% Copy_of_canceshi1_B.DataTypeConversion24
	  section.data(35).logicalSrcIdx = 97;
	  section.data(35).dtTransOffset = 34;
	
	  ;% Copy_of_canceshi1_B.DataTypeConversion18_g
	  section.data(36).logicalSrcIdx = 98;
	  section.data(36).dtTransOffset = 35;
	
	  ;% Copy_of_canceshi1_B.DataTypeConversion17_c
	  section.data(37).logicalSrcIdx = 99;
	  section.data(37).dtTransOffset = 36;
	
	  ;% Copy_of_canceshi1_B.DataTypeConversion19_k
	  section.data(38).logicalSrcIdx = 100;
	  section.data(38).dtTransOffset = 37;
	
	  ;% Copy_of_canceshi1_B.DataTypeConversion20
	  section.data(39).logicalSrcIdx = 101;
	  section.data(39).dtTransOffset = 38;
	
	  ;% Copy_of_canceshi1_B.DataTypeConversion21
	  section.data(40).logicalSrcIdx = 102;
	  section.data(40).dtTransOffset = 39;
	
	  ;% Copy_of_canceshi1_B.DataTypeConversion22
	  section.data(41).logicalSrcIdx = 103;
	  section.data(41).dtTransOffset = 40;
	
	  ;% Copy_of_canceshi1_B.DataTypeConversion23
	  section.data(42).logicalSrcIdx = 104;
	  section.data(42).dtTransOffset = 41;
	
	  ;% Copy_of_canceshi1_B.DataTypeConversion7_f
	  section.data(43).logicalSrcIdx = 105;
	  section.data(43).dtTransOffset = 42;
	
	  ;% Copy_of_canceshi1_B.DataTypeConversion16_p
	  section.data(44).logicalSrcIdx = 106;
	  section.data(44).dtTransOffset = 43;
	
	  ;% Copy_of_canceshi1_B.DataTypeConversion1_n
	  section.data(45).logicalSrcIdx = 107;
	  section.data(45).dtTransOffset = 44;
	
	  ;% Copy_of_canceshi1_B.DataTypeConversion2_oi
	  section.data(46).logicalSrcIdx = 108;
	  section.data(46).dtTransOffset = 45;
	
	  ;% Copy_of_canceshi1_B.DataTypeConversion3_a
	  section.data(47).logicalSrcIdx = 109;
	  section.data(47).dtTransOffset = 46;
	
	  ;% Copy_of_canceshi1_B.DataTypeConversion4_i
	  section.data(48).logicalSrcIdx = 110;
	  section.data(48).dtTransOffset = 47;
	
	  ;% Copy_of_canceshi1_B.DataTypeConversion5_k
	  section.data(49).logicalSrcIdx = 111;
	  section.data(49).dtTransOffset = 48;
	
	  ;% Copy_of_canceshi1_B.DataTypeConversion6_b
	  section.data(50).logicalSrcIdx = 112;
	  section.data(50).dtTransOffset = 49;
	
	  ;% Copy_of_canceshi1_B.DataTypeConversion15_a
	  section.data(51).logicalSrcIdx = 113;
	  section.data(51).dtTransOffset = 50;
	
	  ;% Copy_of_canceshi1_B.DataTypeConversion9_l
	  section.data(52).logicalSrcIdx = 114;
	  section.data(52).dtTransOffset = 51;
	
	  ;% Copy_of_canceshi1_B.DataTypeConversion8_n
	  section.data(53).logicalSrcIdx = 115;
	  section.data(53).dtTransOffset = 52;
	
	  ;% Copy_of_canceshi1_B.DataTypeConversion10_f
	  section.data(54).logicalSrcIdx = 116;
	  section.data(54).dtTransOffset = 53;
	
	  ;% Copy_of_canceshi1_B.DataTypeConversion11_f
	  section.data(55).logicalSrcIdx = 117;
	  section.data(55).dtTransOffset = 54;
	
	  ;% Copy_of_canceshi1_B.DataTypeConversion12_n
	  section.data(56).logicalSrcIdx = 118;
	  section.data(56).dtTransOffset = 55;
	
	  ;% Copy_of_canceshi1_B.DataTypeConversion13_o
	  section.data(57).logicalSrcIdx = 119;
	  section.data(57).dtTransOffset = 56;
	
	  ;% Copy_of_canceshi1_B.DataTypeConversion14_i
	  section.data(58).logicalSrcIdx = 120;
	  section.data(58).dtTransOffset = 57;
	
	  ;% Copy_of_canceshi1_B.CANbitunpacking4_o1
	  section.data(59).logicalSrcIdx = 121;
	  section.data(59).dtTransOffset = 58;
	
	  ;% Copy_of_canceshi1_B.CANbitunpacking4_o2
	  section.data(60).logicalSrcIdx = 122;
	  section.data(60).dtTransOffset = 59;
	
	  ;% Copy_of_canceshi1_B.CANbitunpacking4_o3
	  section.data(61).logicalSrcIdx = 123;
	  section.data(61).dtTransOffset = 60;
	
	  ;% Copy_of_canceshi1_B.CANbitunpacking4_o4
	  section.data(62).logicalSrcIdx = 124;
	  section.data(62).dtTransOffset = 61;
	
	  ;% Copy_of_canceshi1_B.CANbitunpacking4_o5
	  section.data(63).logicalSrcIdx = 125;
	  section.data(63).dtTransOffset = 62;
	
	  ;% Copy_of_canceshi1_B.CANbitunpacking2_o1
	  section.data(64).logicalSrcIdx = 126;
	  section.data(64).dtTransOffset = 63;
	
	  ;% Copy_of_canceshi1_B.CANbitunpacking2_o2
	  section.data(65).logicalSrcIdx = 127;
	  section.data(65).dtTransOffset = 64;
	
	  ;% Copy_of_canceshi1_B.CANbitunpacking2_o3
	  section.data(66).logicalSrcIdx = 128;
	  section.data(66).dtTransOffset = 65;
	
	  ;% Copy_of_canceshi1_B.CANbitunpacking2_o4
	  section.data(67).logicalSrcIdx = 129;
	  section.data(67).dtTransOffset = 66;
	
	  ;% Copy_of_canceshi1_B.CANbitunpacking3_o1
	  section.data(68).logicalSrcIdx = 130;
	  section.data(68).dtTransOffset = 67;
	
	  ;% Copy_of_canceshi1_B.CANbitunpacking3_o2
	  section.data(69).logicalSrcIdx = 131;
	  section.data(69).dtTransOffset = 68;
	
	  ;% Copy_of_canceshi1_B.CANbitunpacking3_o3
	  section.data(70).logicalSrcIdx = 132;
	  section.data(70).dtTransOffset = 69;
	
	  ;% Copy_of_canceshi1_B.CANbitunpacking3_o4
	  section.data(71).logicalSrcIdx = 133;
	  section.data(71).dtTransOffset = 70;
	
	  ;% Copy_of_canceshi1_B.CANbitunpacking5_o1
	  section.data(72).logicalSrcIdx = 134;
	  section.data(72).dtTransOffset = 71;
	
	  ;% Copy_of_canceshi1_B.CANbitunpacking5_o2
	  section.data(73).logicalSrcIdx = 135;
	  section.data(73).dtTransOffset = 72;
	
	  ;% Copy_of_canceshi1_B.CANbitunpacking5_o3
	  section.data(74).logicalSrcIdx = 136;
	  section.data(74).dtTransOffset = 73;
	
	  ;% Copy_of_canceshi1_B.CANbitunpacking5_o4
	  section.data(75).logicalSrcIdx = 137;
	  section.data(75).dtTransOffset = 74;
	
	  ;% Copy_of_canceshi1_B.CANbitunpacking5_o5
	  section.data(76).logicalSrcIdx = 138;
	  section.data(76).dtTransOffset = 75;
	
	  ;% Copy_of_canceshi1_B.CANbitunpacking1_o1
	  section.data(77).logicalSrcIdx = 139;
	  section.data(77).dtTransOffset = 76;
	
	  ;% Copy_of_canceshi1_B.CANbitunpacking1_o2
	  section.data(78).logicalSrcIdx = 140;
	  section.data(78).dtTransOffset = 77;
	
	  ;% Copy_of_canceshi1_B.CANbitunpacking1_o3
	  section.data(79).logicalSrcIdx = 141;
	  section.data(79).dtTransOffset = 78;
	
	  ;% Copy_of_canceshi1_B.CANbitunpacking1_o4
	  section.data(80).logicalSrcIdx = 142;
	  section.data(80).dtTransOffset = 79;
	
	  ;% Copy_of_canceshi1_B.CANbitunpacking1_o5
	  section.data(81).logicalSrcIdx = 143;
	  section.data(81).dtTransOffset = 80;
	
	  ;% Copy_of_canceshi1_B.CANbitunpacking1_o6
	  section.data(82).logicalSrcIdx = 144;
	  section.data(82).dtTransOffset = 81;
	
	  ;% Copy_of_canceshi1_B.CANbitunpacking1_o7
	  section.data(83).logicalSrcIdx = 145;
	  section.data(83).dtTransOffset = 82;
	
	  ;% Copy_of_canceshi1_B.CANbitunpacking1_o8
	  section.data(84).logicalSrcIdx = 146;
	  section.data(84).dtTransOffset = 83;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(3) = section;
      clear section
      
      section.nData     = 6;
      section.data(6)  = dumData; %prealloc
      
	  ;% Copy_of_canceshi1_B.RelationalOperator
	  section.data(1).logicalSrcIdx = 147;
	  section.data(1).dtTransOffset = 0;
	
	  ;% Copy_of_canceshi1_B.RelationalOperator1
	  section.data(2).logicalSrcIdx = 148;
	  section.data(2).dtTransOffset = 1;
	
	  ;% Copy_of_canceshi1_B.RelationalOperator_f
	  section.data(3).logicalSrcIdx = 149;
	  section.data(3).dtTransOffset = 2;
	
	  ;% Copy_of_canceshi1_B.RelationalOperator1_i
	  section.data(4).logicalSrcIdx = 150;
	  section.data(4).dtTransOffset = 3;
	
	  ;% Copy_of_canceshi1_B.RelationalOperator_b
	  section.data(5).logicalSrcIdx = 151;
	  section.data(5).dtTransOffset = 4;
	
	  ;% Copy_of_canceshi1_B.RelationalOperator1_o
	  section.data(6).logicalSrcIdx = 152;
	  section.data(6).dtTransOffset = 5;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(4) = section;
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
    sectIdxOffset = 4;
    
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
    ;% Auto data (Copy_of_canceshi1_DWork)
    ;%
      section.nData     = 10;
      section.data(10)  = dumData; %prealloc
      
	  ;% Copy_of_canceshi1_DWork.IntegerDelay_X
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% Copy_of_canceshi1_DWork.IntegerDelay2_X
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 3;
	
	  ;% Copy_of_canceshi1_DWork.IntegerDelay1_X
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 8;
	
	  ;% Copy_of_canceshi1_DWork.IntegerDelay_X_k
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 11;
	
	  ;% Copy_of_canceshi1_DWork.IntegerDelay2_X_c
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 14;
	
	  ;% Copy_of_canceshi1_DWork.IntegerDelay1_X_d
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 19;
	
	  ;% Copy_of_canceshi1_DWork.IntegerDelay_X_o
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 22;
	
	  ;% Copy_of_canceshi1_DWork.IntegerDelay2_X_g
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 25;
	
	  ;% Copy_of_canceshi1_DWork.IntegerDelay1_X_dc
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 30;
	
	  ;% Copy_of_canceshi1_DWork.Add_DWORK1
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 33;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(1) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% Copy_of_canceshi1_DWork.PCL731_IWORK
	  section.data(1).logicalSrcIdx = 10;
	  section.data(1).dtTransOffset = 0;
	
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


  targMap.checksum0 = 954534858;
  targMap.checksum1 = 3720875323;
  targMap.checksum2 = 230064026;
  targMap.checksum3 = 2679742604;

