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
    ;% Auto data (canceshi1_P)
    ;%
      section.nData     = 148;
      section.data(148)  = dumData; %prealloc
      
	  ;% canceshi1_P.Constant1_Value
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% canceshi1_P.Constant33_Value
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 1;
	
	  ;% canceshi1_P.Constant32_Value
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 2;
	
	  ;% canceshi1_P.Constant31_Value
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 3;
	
	  ;% canceshi1_P.Constant30_Value
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 4;
	
	  ;% canceshi1_P.Constant29_Value
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 5;
	
	  ;% canceshi1_P.Constant28_Value
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 6;
	
	  ;% canceshi1_P.u_Value
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 7;
	
	  ;% canceshi1_P.Constant2_Value
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 8;
	
	  ;% canceshi1_P.Constant3_Value
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 9;
	
	  ;% canceshi1_P.Constant4_Value
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 10;
	
	  ;% canceshi1_P.Constant5_Value
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 11;
	
	  ;% canceshi1_P.Constant6_Value
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 12;
	
	  ;% canceshi1_P.Constant7_Value
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 13;
	
	  ;% canceshi1_P.Constant8_Value
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 14;
	
	  ;% canceshi1_P.Constant9_Value
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 15;
	
	  ;% canceshi1_P.Constant10_Value
	  section.data(17).logicalSrcIdx = 16;
	  section.data(17).dtTransOffset = 16;
	
	  ;% canceshi1_P.Constant12_Value
	  section.data(18).logicalSrcIdx = 17;
	  section.data(18).dtTransOffset = 17;
	
	  ;% canceshi1_P.Constant13_Value
	  section.data(19).logicalSrcIdx = 18;
	  section.data(19).dtTransOffset = 18;
	
	  ;% canceshi1_P.Constant14_Value
	  section.data(20).logicalSrcIdx = 19;
	  section.data(20).dtTransOffset = 19;
	
	  ;% canceshi1_P.Constant15_Value
	  section.data(21).logicalSrcIdx = 20;
	  section.data(21).dtTransOffset = 20;
	
	  ;% canceshi1_P.Constant11_Value
	  section.data(22).logicalSrcIdx = 21;
	  section.data(22).dtTransOffset = 21;
	
	  ;% canceshi1_P.Constant17_Value
	  section.data(23).logicalSrcIdx = 22;
	  section.data(23).dtTransOffset = 22;
	
	  ;% canceshi1_P.Constant19_Value
	  section.data(24).logicalSrcIdx = 23;
	  section.data(24).dtTransOffset = 23;
	
	  ;% canceshi1_P.Constant20_Value
	  section.data(25).logicalSrcIdx = 24;
	  section.data(25).dtTransOffset = 24;
	
	  ;% canceshi1_P.Constant21_Value
	  section.data(26).logicalSrcIdx = 25;
	  section.data(26).dtTransOffset = 25;
	
	  ;% canceshi1_P.Constant16_Value
	  section.data(27).logicalSrcIdx = 26;
	  section.data(27).dtTransOffset = 26;
	
	  ;% canceshi1_P.Constant23_Value
	  section.data(28).logicalSrcIdx = 27;
	  section.data(28).dtTransOffset = 27;
	
	  ;% canceshi1_P.Constant24_Value
	  section.data(29).logicalSrcIdx = 28;
	  section.data(29).dtTransOffset = 28;
	
	  ;% canceshi1_P.Constant25_Value
	  section.data(30).logicalSrcIdx = 29;
	  section.data(30).dtTransOffset = 29;
	
	  ;% canceshi1_P.Constant26_Value
	  section.data(31).logicalSrcIdx = 30;
	  section.data(31).dtTransOffset = 30;
	
	  ;% canceshi1_P.PCL731_P1_Size
	  section.data(32).logicalSrcIdx = 31;
	  section.data(32).dtTransOffset = 31;
	
	  ;% canceshi1_P.PCL731_P1
	  section.data(33).logicalSrcIdx = 32;
	  section.data(33).dtTransOffset = 33;
	
	  ;% canceshi1_P.PCL731_P2_Size
	  section.data(34).logicalSrcIdx = 33;
	  section.data(34).dtTransOffset = 34;
	
	  ;% canceshi1_P.PCL731_P2
	  section.data(35).logicalSrcIdx = 34;
	  section.data(35).dtTransOffset = 36;
	
	  ;% canceshi1_P.u_Value_l
	  section.data(36).logicalSrcIdx = 35;
	  section.data(36).dtTransOffset = 38;
	
	  ;% canceshi1_P.Constant_Value
	  section.data(37).logicalSrcIdx = 36;
	  section.data(37).dtTransOffset = 39;
	
	  ;% canceshi1_P.Constant_Value_o
	  section.data(38).logicalSrcIdx = 37;
	  section.data(38).dtTransOffset = 40;
	
	  ;% canceshi1_P.Constant_Value_k
	  section.data(39).logicalSrcIdx = 38;
	  section.data(39).dtTransOffset = 41;
	
	  ;% canceshi1_P.Constant_Value_h
	  section.data(40).logicalSrcIdx = 39;
	  section.data(40).dtTransOffset = 42;
	
	  ;% canceshi1_P.Constant_Value_m
	  section.data(41).logicalSrcIdx = 40;
	  section.data(41).dtTransOffset = 43;
	
	  ;% canceshi1_P.Constant_Value_f
	  section.data(42).logicalSrcIdx = 41;
	  section.data(42).dtTransOffset = 44;
	
	  ;% canceshi1_P.Constant_Value_a
	  section.data(43).logicalSrcIdx = 42;
	  section.data(43).dtTransOffset = 45;
	
	  ;% canceshi1_P.Constant_Value_ah
	  section.data(44).logicalSrcIdx = 43;
	  section.data(44).dtTransOffset = 46;
	
	  ;% canceshi1_P.Constant_Value_b
	  section.data(45).logicalSrcIdx = 44;
	  section.data(45).dtTransOffset = 47;
	
	  ;% canceshi1_P.Constant_Value_h3
	  section.data(46).logicalSrcIdx = 45;
	  section.data(46).dtTransOffset = 48;
	
	  ;% canceshi1_P.Constant_Value_d
	  section.data(47).logicalSrcIdx = 46;
	  section.data(47).dtTransOffset = 49;
	
	  ;% canceshi1_P.Constant18_Value
	  section.data(48).logicalSrcIdx = 47;
	  section.data(48).dtTransOffset = 50;
	
	  ;% canceshi1_P.baozhuay_Value
	  section.data(49).logicalSrcIdx = 48;
	  section.data(49).dtTransOffset = 51;
	
	  ;% canceshi1_P.IntegerDelay_InitialCondition
	  section.data(50).logicalSrcIdx = 49;
	  section.data(50).dtTransOffset = 52;
	
	  ;% canceshi1_P.constant1_Value
	  section.data(51).logicalSrcIdx = 50;
	  section.data(51).dtTransOffset = 53;
	
	  ;% canceshi1_P.constant6_Value
	  section.data(52).logicalSrcIdx = 51;
	  section.data(52).dtTransOffset = 54;
	
	  ;% canceshi1_P.constant9_Value
	  section.data(53).logicalSrcIdx = 52;
	  section.data(53).dtTransOffset = 55;
	
	  ;% canceshi1_P.constant2_Value
	  section.data(54).logicalSrcIdx = 53;
	  section.data(54).dtTransOffset = 56;
	
	  ;% canceshi1_P.constant10_Value
	  section.data(55).logicalSrcIdx = 54;
	  section.data(55).dtTransOffset = 57;
	
	  ;% canceshi1_P.constant11_Value
	  section.data(56).logicalSrcIdx = 55;
	  section.data(56).dtTransOffset = 58;
	
	  ;% canceshi1_P.Constant7_Value_m
	  section.data(57).logicalSrcIdx = 56;
	  section.data(57).dtTransOffset = 59;
	
	  ;% canceshi1_P.Constant16_Value_f
	  section.data(58).logicalSrcIdx = 57;
	  section.data(58).dtTransOffset = 60;
	
	  ;% canceshi1_P.Constant1_Value_b
	  section.data(59).logicalSrcIdx = 58;
	  section.data(59).dtTransOffset = 61;
	
	  ;% canceshi1_P.Constant2_Value_g
	  section.data(60).logicalSrcIdx = 59;
	  section.data(60).dtTransOffset = 62;
	
	  ;% canceshi1_P.Constant3_Value_c
	  section.data(61).logicalSrcIdx = 60;
	  section.data(61).dtTransOffset = 63;
	
	  ;% canceshi1_P.Constant4_Value_a
	  section.data(62).logicalSrcIdx = 61;
	  section.data(62).dtTransOffset = 64;
	
	  ;% canceshi1_P.Constant5_Value_f
	  section.data(63).logicalSrcIdx = 62;
	  section.data(63).dtTransOffset = 65;
	
	  ;% canceshi1_P.Constant6_Value_p
	  section.data(64).logicalSrcIdx = 63;
	  section.data(64).dtTransOffset = 66;
	
	  ;% canceshi1_P.Constant8_Value_i
	  section.data(65).logicalSrcIdx = 64;
	  section.data(65).dtTransOffset = 67;
	
	  ;% canceshi1_P.Constant16_Value_c
	  section.data(66).logicalSrcIdx = 65;
	  section.data(66).dtTransOffset = 68;
	
	  ;% canceshi1_P.Constant2_Value_p
	  section.data(67).logicalSrcIdx = 66;
	  section.data(67).dtTransOffset = 69;
	
	  ;% canceshi1_P.Constant3_Value_b
	  section.data(68).logicalSrcIdx = 67;
	  section.data(68).dtTransOffset = 70;
	
	  ;% canceshi1_P.Constant4_Value_l
	  section.data(69).logicalSrcIdx = 68;
	  section.data(69).dtTransOffset = 71;
	
	  ;% canceshi1_P.Constant5_Value_fj
	  section.data(70).logicalSrcIdx = 69;
	  section.data(70).dtTransOffset = 72;
	
	  ;% canceshi1_P.Constant6_Value_m
	  section.data(71).logicalSrcIdx = 70;
	  section.data(71).dtTransOffset = 73;
	
	  ;% canceshi1_P.Constant7_Value_mk
	  section.data(72).logicalSrcIdx = 71;
	  section.data(72).dtTransOffset = 74;
	
	  ;% canceshi1_P.shengjiangy_Value
	  section.data(73).logicalSrcIdx = 72;
	  section.data(73).dtTransOffset = 75;
	
	  ;% canceshi1_P.IntegerDelay_InitialCondition_l
	  section.data(74).logicalSrcIdx = 73;
	  section.data(74).dtTransOffset = 76;
	
	  ;% canceshi1_P.constant4_Value
	  section.data(75).logicalSrcIdx = 74;
	  section.data(75).dtTransOffset = 77;
	
	  ;% canceshi1_P.constant12_Value
	  section.data(76).logicalSrcIdx = 75;
	  section.data(76).dtTransOffset = 78;
	
	  ;% canceshi1_P.constant13_Value
	  section.data(77).logicalSrcIdx = 76;
	  section.data(77).dtTransOffset = 79;
	
	  ;% canceshi1_P.xuanzhuany_Value
	  section.data(78).logicalSrcIdx = 77;
	  section.data(78).dtTransOffset = 80;
	
	  ;% canceshi1_P.IntegerDelay_InitialCondition_b
	  section.data(79).logicalSrcIdx = 78;
	  section.data(79).dtTransOffset = 81;
	
	  ;% canceshi1_P.constant7_Value
	  section.data(80).logicalSrcIdx = 79;
	  section.data(80).dtTransOffset = 82;
	
	  ;% canceshi1_P.constant3_Value
	  section.data(81).logicalSrcIdx = 80;
	  section.data(81).dtTransOffset = 83;
	
	  ;% canceshi1_P.constant5_Value
	  section.data(82).logicalSrcIdx = 81;
	  section.data(82).dtTransOffset = 84;
	
	  ;% canceshi1_P.Constant24_Value_k
	  section.data(83).logicalSrcIdx = 82;
	  section.data(83).dtTransOffset = 85;
	
	  ;% canceshi1_P.Constant18_Value_i
	  section.data(84).logicalSrcIdx = 83;
	  section.data(84).dtTransOffset = 86;
	
	  ;% canceshi1_P.Constant17_Value_k
	  section.data(85).logicalSrcIdx = 84;
	  section.data(85).dtTransOffset = 87;
	
	  ;% canceshi1_P.Constant19_Value_d
	  section.data(86).logicalSrcIdx = 85;
	  section.data(86).dtTransOffset = 88;
	
	  ;% canceshi1_P.Constant20_Value_b
	  section.data(87).logicalSrcIdx = 86;
	  section.data(87).dtTransOffset = 89;
	
	  ;% canceshi1_P.Constant21_Value_i
	  section.data(88).logicalSrcIdx = 87;
	  section.data(88).dtTransOffset = 90;
	
	  ;% canceshi1_P.Constant22_Value
	  section.data(89).logicalSrcIdx = 88;
	  section.data(89).dtTransOffset = 91;
	
	  ;% canceshi1_P.Constant23_Value_f
	  section.data(90).logicalSrcIdx = 89;
	  section.data(90).dtTransOffset = 92;
	
	  ;% canceshi1_P.Constant7_Value_e
	  section.data(91).logicalSrcIdx = 90;
	  section.data(91).dtTransOffset = 93;
	
	  ;% canceshi1_P.Constant16_Value_p
	  section.data(92).logicalSrcIdx = 91;
	  section.data(92).dtTransOffset = 94;
	
	  ;% canceshi1_P.Constant1_Value_b5
	  section.data(93).logicalSrcIdx = 92;
	  section.data(93).dtTransOffset = 95;
	
	  ;% canceshi1_P.Constant2_Value_h
	  section.data(94).logicalSrcIdx = 93;
	  section.data(94).dtTransOffset = 96;
	
	  ;% canceshi1_P.Constant3_Value_a
	  section.data(95).logicalSrcIdx = 94;
	  section.data(95).dtTransOffset = 97;
	
	  ;% canceshi1_P.Constant4_Value_m
	  section.data(96).logicalSrcIdx = 95;
	  section.data(96).dtTransOffset = 98;
	
	  ;% canceshi1_P.Constant5_Value_c
	  section.data(97).logicalSrcIdx = 96;
	  section.data(97).dtTransOffset = 99;
	
	  ;% canceshi1_P.Constant6_Value_o
	  section.data(98).logicalSrcIdx = 97;
	  section.data(98).dtTransOffset = 100;
	
	  ;% canceshi1_P.Constant15_Value_i
	  section.data(99).logicalSrcIdx = 98;
	  section.data(99).dtTransOffset = 101;
	
	  ;% canceshi1_P.Constant9_Value_i
	  section.data(100).logicalSrcIdx = 99;
	  section.data(100).dtTransOffset = 102;
	
	  ;% canceshi1_P.Constant8_Value_h
	  section.data(101).logicalSrcIdx = 100;
	  section.data(101).dtTransOffset = 103;
	
	  ;% canceshi1_P.Constant10_Value_j
	  section.data(102).logicalSrcIdx = 101;
	  section.data(102).dtTransOffset = 104;
	
	  ;% canceshi1_P.Constant11_Value_j
	  section.data(103).logicalSrcIdx = 102;
	  section.data(103).dtTransOffset = 105;
	
	  ;% canceshi1_P.Constant12_Value_g
	  section.data(104).logicalSrcIdx = 103;
	  section.data(104).dtTransOffset = 106;
	
	  ;% canceshi1_P.Constant13_Value_d
	  section.data(105).logicalSrcIdx = 104;
	  section.data(105).dtTransOffset = 107;
	
	  ;% canceshi1_P.Constant14_Value_g
	  section.data(106).logicalSrcIdx = 105;
	  section.data(106).dtTransOffset = 108;
	
	  ;% canceshi1_P.Setup_P1_Size
	  section.data(107).logicalSrcIdx = 106;
	  section.data(107).dtTransOffset = 109;
	
	  ;% canceshi1_P.Setup_P1
	  section.data(108).logicalSrcIdx = 107;
	  section.data(108).dtTransOffset = 111;
	
	  ;% canceshi1_P.Setup_P2_Size
	  section.data(109).logicalSrcIdx = 108;
	  section.data(109).dtTransOffset = 115;
	
	  ;% canceshi1_P.Setup_P2
	  section.data(110).logicalSrcIdx = 109;
	  section.data(110).dtTransOffset = 117;
	
	  ;% canceshi1_P.Setup_P3_Size
	  section.data(111).logicalSrcIdx = 110;
	  section.data(111).dtTransOffset = 121;
	
	  ;% canceshi1_P.Setup_P3
	  section.data(112).logicalSrcIdx = 111;
	  section.data(112).dtTransOffset = 123;
	
	  ;% canceshi1_P.Setup_P4_Size
	  section.data(113).logicalSrcIdx = 112;
	  section.data(113).dtTransOffset = 124;
	
	  ;% canceshi1_P.Setup_P4
	  section.data(114).logicalSrcIdx = 113;
	  section.data(114).dtTransOffset = 126;
	
	  ;% canceshi1_P.Setup_P5_Size
	  section.data(115).logicalSrcIdx = 114;
	  section.data(115).dtTransOffset = 127;
	
	  ;% canceshi1_P.Setup_P5
	  section.data(116).logicalSrcIdx = 115;
	  section.data(116).dtTransOffset = 129;
	
	  ;% canceshi1_P.Setup_P6_Size
	  section.data(117).logicalSrcIdx = 116;
	  section.data(117).dtTransOffset = 135;
	
	  ;% canceshi1_P.Setup_P6
	  section.data(118).logicalSrcIdx = 117;
	  section.data(118).dtTransOffset = 137;
	
	  ;% canceshi1_P.Setup_P7_Size
	  section.data(119).logicalSrcIdx = 118;
	  section.data(119).dtTransOffset = 142;
	
	  ;% canceshi1_P.Setup_P8_Size
	  section.data(120).logicalSrcIdx = 120;
	  section.data(120).dtTransOffset = 144;
	
	  ;% canceshi1_P.Setup_P9_Size
	  section.data(121).logicalSrcIdx = 122;
	  section.data(121).dtTransOffset = 146;
	
	  ;% canceshi1_P.Setup_P10_Size
	  section.data(122).logicalSrcIdx = 124;
	  section.data(122).dtTransOffset = 148;
	
	  ;% canceshi1_P.Setup_P11_Size
	  section.data(123).logicalSrcIdx = 126;
	  section.data(123).dtTransOffset = 150;
	
	  ;% canceshi1_P.Setup_P11
	  section.data(124).logicalSrcIdx = 127;
	  section.data(124).dtTransOffset = 152;
	
	  ;% canceshi1_P.Setup_P12_Size
	  section.data(125).logicalSrcIdx = 128;
	  section.data(125).dtTransOffset = 153;
	
	  ;% canceshi1_P.Setup_P13_Size
	  section.data(126).logicalSrcIdx = 130;
	  section.data(126).dtTransOffset = 155;
	
	  ;% canceshi1_P.Setup_P13
	  section.data(127).logicalSrcIdx = 131;
	  section.data(127).dtTransOffset = 157;
	
	  ;% canceshi1_P.Setup_P14_Size
	  section.data(128).logicalSrcIdx = 132;
	  section.data(128).dtTransOffset = 162;
	
	  ;% canceshi1_P.Setup_P15_Size
	  section.data(129).logicalSrcIdx = 134;
	  section.data(129).dtTransOffset = 164;
	
	  ;% canceshi1_P.Setup_P15
	  section.data(130).logicalSrcIdx = 135;
	  section.data(130).dtTransOffset = 166;
	
	  ;% canceshi1_P.Setup_P16_Size
	  section.data(131).logicalSrcIdx = 136;
	  section.data(131).dtTransOffset = 167;
	
	  ;% canceshi1_P.Setup_P16
	  section.data(132).logicalSrcIdx = 137;
	  section.data(132).dtTransOffset = 169;
	
	  ;% canceshi1_P.Setup_P17_Size
	  section.data(133).logicalSrcIdx = 138;
	  section.data(133).dtTransOffset = 170;
	
	  ;% canceshi1_P.Setup_P17
	  section.data(134).logicalSrcIdx = 139;
	  section.data(134).dtTransOffset = 172;
	
	  ;% canceshi1_P.Setup_P18_Size
	  section.data(135).logicalSrcIdx = 140;
	  section.data(135).dtTransOffset = 173;
	
	  ;% canceshi1_P.Setup_P18
	  section.data(136).logicalSrcIdx = 141;
	  section.data(136).dtTransOffset = 175;
	
	  ;% canceshi1_P.Setup_P19_Size
	  section.data(137).logicalSrcIdx = 142;
	  section.data(137).dtTransOffset = 176;
	
	  ;% canceshi1_P.Setup_P19
	  section.data(138).logicalSrcIdx = 143;
	  section.data(138).dtTransOffset = 178;
	
	  ;% canceshi1_P.Setup_P20_Size
	  section.data(139).logicalSrcIdx = 144;
	  section.data(139).dtTransOffset = 179;
	
	  ;% canceshi1_P.Setup_P20
	  section.data(140).logicalSrcIdx = 145;
	  section.data(140).dtTransOffset = 181;
	
	  ;% canceshi1_P.Setup_P21_Size
	  section.data(141).logicalSrcIdx = 146;
	  section.data(141).dtTransOffset = 182;
	
	  ;% canceshi1_P.Setup_P21
	  section.data(142).logicalSrcIdx = 147;
	  section.data(142).dtTransOffset = 184;
	
	  ;% canceshi1_P.Setup_P22_Size
	  section.data(143).logicalSrcIdx = 148;
	  section.data(143).dtTransOffset = 185;
	
	  ;% canceshi1_P.Setup_P22
	  section.data(144).logicalSrcIdx = 149;
	  section.data(144).dtTransOffset = 187;
	
	  ;% canceshi1_P.Setup_P23_Size
	  section.data(145).logicalSrcIdx = 150;
	  section.data(145).dtTransOffset = 188;
	
	  ;% canceshi1_P.Setup_P23
	  section.data(146).logicalSrcIdx = 151;
	  section.data(146).dtTransOffset = 190;
	
	  ;% canceshi1_P.Setup_P24_Size
	  section.data(147).logicalSrcIdx = 152;
	  section.data(147).dtTransOffset = 191;
	
	  ;% canceshi1_P.Setup_P24
	  section.data(148).logicalSrcIdx = 153;
	  section.data(148).dtTransOffset = 193;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(1) = section;
      clear section
      
      section.nData     = 10;
      section.data(10)  = dumData; %prealloc
      
	  ;% canceshi1_P.Constant_Value_kv
	  section.data(1).logicalSrcIdx = 154;
	  section.data(1).dtTransOffset = 0;
	
	  ;% canceshi1_P.Constant_Value_ag
	  section.data(2).logicalSrcIdx = 155;
	  section.data(2).dtTransOffset = 1;
	
	  ;% canceshi1_P.Constant_Value_g
	  section.data(3).logicalSrcIdx = 156;
	  section.data(3).dtTransOffset = 2;
	
	  ;% canceshi1_P.Constant_Value_p
	  section.data(4).logicalSrcIdx = 157;
	  section.data(4).dtTransOffset = 3;
	
	  ;% canceshi1_P.right3_XData
	  section.data(5).logicalSrcIdx = 158;
	  section.data(5).dtTransOffset = 4;
	
	  ;% canceshi1_P.right3_YData
	  section.data(6).logicalSrcIdx = 159;
	  section.data(6).dtTransOffset = 6;
	
	  ;% canceshi1_P.right1_XData
	  section.data(7).logicalSrcIdx = 160;
	  section.data(7).dtTransOffset = 8;
	
	  ;% canceshi1_P.right1_YData
	  section.data(8).logicalSrcIdx = 161;
	  section.data(8).dtTransOffset = 10;
	
	  ;% canceshi1_P.right2_XData
	  section.data(9).logicalSrcIdx = 162;
	  section.data(9).dtTransOffset = 12;
	
	  ;% canceshi1_P.right2_YData
	  section.data(10).logicalSrcIdx = 163;
	  section.data(10).dtTransOffset = 14;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(2) = section;
      clear section
      
      section.nData     = 6;
      section.data(6)  = dumData; %prealloc
      
	  ;% canceshi1_P.Constant_Value_pw
	  section.data(1).logicalSrcIdx = 164;
	  section.data(1).dtTransOffset = 0;
	
	  ;% canceshi1_P.SwitchControl_Threshold
	  section.data(2).logicalSrcIdx = 165;
	  section.data(2).dtTransOffset = 1;
	
	  ;% canceshi1_P.Constant_Value_dg
	  section.data(3).logicalSrcIdx = 166;
	  section.data(3).dtTransOffset = 2;
	
	  ;% canceshi1_P.SwitchControl_Threshold_n
	  section.data(4).logicalSrcIdx = 167;
	  section.data(4).dtTransOffset = 3;
	
	  ;% canceshi1_P.Constant_Value_do
	  section.data(5).logicalSrcIdx = 168;
	  section.data(5).dtTransOffset = 4;
	
	  ;% canceshi1_P.SwitchControl_Threshold_a
	  section.data(6).logicalSrcIdx = 169;
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
    ;% Auto data (canceshi1_B)
    ;%
      section.nData     = 51;
      section.data(51)  = dumData; %prealloc
      
	  ;% canceshi1_B.TmpSignalConversionAtPCL731Inpo
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% canceshi1_B.PCL731
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 24;
	
	  ;% canceshi1_B.Product
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 48;
	
	  ;% canceshi1_B.u02Receive
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 49;
	
	  ;% canceshi1_B.Product_d
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 50;
	
	  ;% canceshi1_B.Product_c
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 51;
	
	  ;% canceshi1_B.Product_p
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 52;
	
	  ;% canceshi1_B.Product_n
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 53;
	
	  ;% canceshi1_B.Add
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 54;
	
	  ;% canceshi1_B.sifufa
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 55;
	
	  ;% canceshi1_B.MultiportSwitch
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 56;
	
	  ;% canceshi1_B.CANbitpacking3
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 57;
	
	  ;% canceshi1_B.IntegerDelay
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 58;
	
	  ;% canceshi1_B.baozhuaa
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 59;
	
	  ;% canceshi1_B.CANbitpacking
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 60;
	
	  ;% canceshi1_B.CANbitpacking4
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 61;
	
	  ;% canceshi1_B.MultiportSwitch_k
	  section.data(17).logicalSrcIdx = 16;
	  section.data(17).dtTransOffset = 62;
	
	  ;% canceshi1_B.CANbitpacking1
	  section.data(18).logicalSrcIdx = 17;
	  section.data(18).dtTransOffset = 63;
	
	  ;% canceshi1_B.CANbitpacking5
	  section.data(19).logicalSrcIdx = 18;
	  section.data(19).dtTransOffset = 64;
	
	  ;% canceshi1_B.MultiportSwitch1
	  section.data(20).logicalSrcIdx = 19;
	  section.data(20).dtTransOffset = 65;
	
	  ;% canceshi1_B.CANbitpacking2
	  section.data(21).logicalSrcIdx = 20;
	  section.data(21).dtTransOffset = 66;
	
	  ;% canceshi1_B.CANbitpacking2_k
	  section.data(22).logicalSrcIdx = 21;
	  section.data(22).dtTransOffset = 67;
	
	  ;% canceshi1_B.SwitchControl
	  section.data(23).logicalSrcIdx = 22;
	  section.data(23).dtTransOffset = 68;
	
	  ;% canceshi1_B.IntegerDelay_j
	  section.data(24).logicalSrcIdx = 23;
	  section.data(24).dtTransOffset = 69;
	
	  ;% canceshi1_B.shengjianga
	  section.data(25).logicalSrcIdx = 24;
	  section.data(25).dtTransOffset = 70;
	
	  ;% canceshi1_B.CANbitpacking2_l
	  section.data(26).logicalSrcIdx = 25;
	  section.data(26).dtTransOffset = 71;
	
	  ;% canceshi1_B.CANbitpacking6
	  section.data(27).logicalSrcIdx = 26;
	  section.data(27).dtTransOffset = 72;
	
	  ;% canceshi1_B.MultiportSwitch2
	  section.data(28).logicalSrcIdx = 27;
	  section.data(28).dtTransOffset = 73;
	
	  ;% canceshi1_B.IntegerDelay_m
	  section.data(29).logicalSrcIdx = 28;
	  section.data(29).dtTransOffset = 74;
	
	  ;% canceshi1_B.xuanzhuana
	  section.data(30).logicalSrcIdx = 29;
	  section.data(30).dtTransOffset = 75;
	
	  ;% canceshi1_B.CANbitpacking3_d
	  section.data(31).logicalSrcIdx = 30;
	  section.data(31).dtTransOffset = 76;
	
	  ;% canceshi1_B.CANbitpacking7
	  section.data(32).logicalSrcIdx = 31;
	  section.data(32).dtTransOffset = 77;
	
	  ;% canceshi1_B.MultiportSwitch3
	  section.data(33).logicalSrcIdx = 32;
	  section.data(33).dtTransOffset = 78;
	
	  ;% canceshi1_B.CANbitpacking3_dd
	  section.data(34).logicalSrcIdx = 33;
	  section.data(34).dtTransOffset = 79;
	
	  ;% canceshi1_B.CANbitpacking2_h
	  section.data(35).logicalSrcIdx = 34;
	  section.data(35).dtTransOffset = 80;
	
	  ;% canceshi1_B.CANbitpacking1_j
	  section.data(36).logicalSrcIdx = 35;
	  section.data(36).dtTransOffset = 81;
	
	  ;% canceshi1_B.SwitchControl_l
	  section.data(37).logicalSrcIdx = 36;
	  section.data(37).dtTransOffset = 82;
	
	  ;% canceshi1_B.f1
	  section.data(38).logicalSrcIdx = 37;
	  section.data(38).dtTransOffset = 83;
	
	  ;% canceshi1_B.f2
	  section.data(39).logicalSrcIdx = 38;
	  section.data(39).dtTransOffset = 84;
	
	  ;% canceshi1_B.f3
	  section.data(40).logicalSrcIdx = 39;
	  section.data(40).dtTransOffset = 85;
	
	  ;% canceshi1_B.f4
	  section.data(41).logicalSrcIdx = 40;
	  section.data(41).dtTransOffset = 86;
	
	  ;% canceshi1_B.u02Receive1_o1
	  section.data(42).logicalSrcIdx = 41;
	  section.data(42).dtTransOffset = 90;
	
	  ;% canceshi1_B.u02Receive1_o2
	  section.data(43).logicalSrcIdx = 42;
	  section.data(43).dtTransOffset = 91;
	
	  ;% canceshi1_B.u02Receive1_o3
	  section.data(44).logicalSrcIdx = 43;
	  section.data(44).dtTransOffset = 92;
	
	  ;% canceshi1_B.b
	  section.data(45).logicalSrcIdx = 44;
	  section.data(45).dtTransOffset = 93;
	
	  ;% canceshi1_B.c
	  section.data(46).logicalSrcIdx = 45;
	  section.data(46).dtTransOffset = 97;
	
	  ;% canceshi1_B.d
	  section.data(47).logicalSrcIdx = 46;
	  section.data(47).dtTransOffset = 102;
	
	  ;% canceshi1_B.u02Receive2
	  section.data(48).logicalSrcIdx = 47;
	  section.data(48).dtTransOffset = 107;
	
	  ;% canceshi1_B.u02Receive3
	  section.data(49).logicalSrcIdx = 48;
	  section.data(49).dtTransOffset = 108;
	
	  ;% canceshi1_B.a
	  section.data(50).logicalSrcIdx = 49;
	  section.data(50).dtTransOffset = 109;
	
	  ;% canceshi1_B.SwitchControl_g
	  section.data(51).logicalSrcIdx = 50;
	  section.data(51).dtTransOffset = 113;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(1) = section;
      clear section
      
      section.nData     = 7;
      section.data(7)  = dumData; %prealloc
      
	  ;% canceshi1_B.CANbitunpacking_o1
	  section.data(1).logicalSrcIdx = 51;
	  section.data(1).dtTransOffset = 0;
	
	  ;% canceshi1_B.CANbitunpacking_o2
	  section.data(2).logicalSrcIdx = 52;
	  section.data(2).dtTransOffset = 1;
	
	  ;% canceshi1_B.CANbitunpacking_o3
	  section.data(3).logicalSrcIdx = 53;
	  section.data(3).dtTransOffset = 2;
	
	  ;% canceshi1_B.CANbitunpacking_o4
	  section.data(4).logicalSrcIdx = 54;
	  section.data(4).dtTransOffset = 3;
	
	  ;% canceshi1_B.right3
	  section.data(5).logicalSrcIdx = 55;
	  section.data(5).dtTransOffset = 4;
	
	  ;% canceshi1_B.right1
	  section.data(6).logicalSrcIdx = 56;
	  section.data(6).dtTransOffset = 5;
	
	  ;% canceshi1_B.right2
	  section.data(7).logicalSrcIdx = 57;
	  section.data(7).dtTransOffset = 6;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(2) = section;
      clear section
      
      section.nData     = 84;
      section.data(84)  = dumData; %prealloc
      
	  ;% canceshi1_B.DataTypeConversion17
	  section.data(1).logicalSrcIdx = 58;
	  section.data(1).dtTransOffset = 0;
	
	  ;% canceshi1_B.DataTypeConversion18
	  section.data(2).logicalSrcIdx = 59;
	  section.data(2).dtTransOffset = 1;
	
	  ;% canceshi1_B.DataTypeConversion
	  section.data(3).logicalSrcIdx = 60;
	  section.data(3).dtTransOffset = 2;
	
	  ;% canceshi1_B.DataTypeConversion5
	  section.data(4).logicalSrcIdx = 61;
	  section.data(4).dtTransOffset = 3;
	
	  ;% canceshi1_B.DataTypeConversion12
	  section.data(5).logicalSrcIdx = 62;
	  section.data(5).dtTransOffset = 4;
	
	  ;% canceshi1_B.DataTypeConversion13
	  section.data(6).logicalSrcIdx = 63;
	  section.data(6).dtTransOffset = 5;
	
	  ;% canceshi1_B.DataTypeConversion6
	  section.data(7).logicalSrcIdx = 64;
	  section.data(7).dtTransOffset = 6;
	
	  ;% canceshi1_B.DataTypeConversion7
	  section.data(8).logicalSrcIdx = 65;
	  section.data(8).dtTransOffset = 7;
	
	  ;% canceshi1_B.DataTypeConversion14
	  section.data(9).logicalSrcIdx = 66;
	  section.data(9).dtTransOffset = 8;
	
	  ;% canceshi1_B.DataTypeConversion15
	  section.data(10).logicalSrcIdx = 67;
	  section.data(10).dtTransOffset = 9;
	
	  ;% canceshi1_B.DataTypeConversion7_l
	  section.data(11).logicalSrcIdx = 68;
	  section.data(11).dtTransOffset = 10;
	
	  ;% canceshi1_B.DataTypeConversion16
	  section.data(12).logicalSrcIdx = 69;
	  section.data(12).dtTransOffset = 11;
	
	  ;% canceshi1_B.DataTypeConversion1
	  section.data(13).logicalSrcIdx = 70;
	  section.data(13).dtTransOffset = 12;
	
	  ;% canceshi1_B.DataTypeConversion2
	  section.data(14).logicalSrcIdx = 71;
	  section.data(14).dtTransOffset = 13;
	
	  ;% canceshi1_B.DataTypeConversion3
	  section.data(15).logicalSrcIdx = 72;
	  section.data(15).dtTransOffset = 14;
	
	  ;% canceshi1_B.DataTypeConversion4
	  section.data(16).logicalSrcIdx = 73;
	  section.data(16).dtTransOffset = 15;
	
	  ;% canceshi1_B.DataTypeConversion5_g
	  section.data(17).logicalSrcIdx = 74;
	  section.data(17).dtTransOffset = 16;
	
	  ;% canceshi1_B.DataTypeConversion6_l
	  section.data(18).logicalSrcIdx = 75;
	  section.data(18).dtTransOffset = 17;
	
	  ;% canceshi1_B.DataTypeConversion7_m
	  section.data(19).logicalSrcIdx = 76;
	  section.data(19).dtTransOffset = 18;
	
	  ;% canceshi1_B.DataTypeConversion16_c
	  section.data(20).logicalSrcIdx = 77;
	  section.data(20).dtTransOffset = 19;
	
	  ;% canceshi1_B.DataTypeConversion1_i
	  section.data(21).logicalSrcIdx = 78;
	  section.data(21).dtTransOffset = 20;
	
	  ;% canceshi1_B.DataTypeConversion2_j
	  section.data(22).logicalSrcIdx = 79;
	  section.data(22).dtTransOffset = 21;
	
	  ;% canceshi1_B.DataTypeConversion3_n
	  section.data(23).logicalSrcIdx = 80;
	  section.data(23).dtTransOffset = 22;
	
	  ;% canceshi1_B.DataTypeConversion4_a
	  section.data(24).logicalSrcIdx = 81;
	  section.data(24).dtTransOffset = 23;
	
	  ;% canceshi1_B.DataTypeConversion5_k
	  section.data(25).logicalSrcIdx = 82;
	  section.data(25).dtTransOffset = 24;
	
	  ;% canceshi1_B.DataTypeConversion6_g
	  section.data(26).logicalSrcIdx = 83;
	  section.data(26).dtTransOffset = 25;
	
	  ;% canceshi1_B.DataTypeConversion8
	  section.data(27).logicalSrcIdx = 84;
	  section.data(27).dtTransOffset = 26;
	
	  ;% canceshi1_B.DataTypeConversion9
	  section.data(28).logicalSrcIdx = 85;
	  section.data(28).dtTransOffset = 27;
	
	  ;% canceshi1_B.DataTypeConversion16_m
	  section.data(29).logicalSrcIdx = 86;
	  section.data(29).dtTransOffset = 28;
	
	  ;% canceshi1_B.DataTypeConversion17_c
	  section.data(30).logicalSrcIdx = 87;
	  section.data(30).dtTransOffset = 29;
	
	  ;% canceshi1_B.DataTypeConversion3_b
	  section.data(31).logicalSrcIdx = 88;
	  section.data(31).dtTransOffset = 30;
	
	  ;% canceshi1_B.DataTypeConversion4_c
	  section.data(32).logicalSrcIdx = 89;
	  section.data(32).dtTransOffset = 31;
	
	  ;% canceshi1_B.DataTypeConversion1_d
	  section.data(33).logicalSrcIdx = 90;
	  section.data(33).dtTransOffset = 32;
	
	  ;% canceshi1_B.DataTypeConversion2_b
	  section.data(34).logicalSrcIdx = 91;
	  section.data(34).dtTransOffset = 33;
	
	  ;% canceshi1_B.DataTypeConversion24
	  section.data(35).logicalSrcIdx = 92;
	  section.data(35).dtTransOffset = 34;
	
	  ;% canceshi1_B.DataTypeConversion18_f
	  section.data(36).logicalSrcIdx = 93;
	  section.data(36).dtTransOffset = 35;
	
	  ;% canceshi1_B.DataTypeConversion17_co
	  section.data(37).logicalSrcIdx = 94;
	  section.data(37).dtTransOffset = 36;
	
	  ;% canceshi1_B.DataTypeConversion19
	  section.data(38).logicalSrcIdx = 95;
	  section.data(38).dtTransOffset = 37;
	
	  ;% canceshi1_B.DataTypeConversion20
	  section.data(39).logicalSrcIdx = 96;
	  section.data(39).dtTransOffset = 38;
	
	  ;% canceshi1_B.DataTypeConversion21
	  section.data(40).logicalSrcIdx = 97;
	  section.data(40).dtTransOffset = 39;
	
	  ;% canceshi1_B.DataTypeConversion22
	  section.data(41).logicalSrcIdx = 98;
	  section.data(41).dtTransOffset = 40;
	
	  ;% canceshi1_B.DataTypeConversion23
	  section.data(42).logicalSrcIdx = 99;
	  section.data(42).dtTransOffset = 41;
	
	  ;% canceshi1_B.DataTypeConversion7_a
	  section.data(43).logicalSrcIdx = 100;
	  section.data(43).dtTransOffset = 42;
	
	  ;% canceshi1_B.DataTypeConversion16_a
	  section.data(44).logicalSrcIdx = 101;
	  section.data(44).dtTransOffset = 43;
	
	  ;% canceshi1_B.DataTypeConversion1_e
	  section.data(45).logicalSrcIdx = 102;
	  section.data(45).dtTransOffset = 44;
	
	  ;% canceshi1_B.DataTypeConversion2_h
	  section.data(46).logicalSrcIdx = 103;
	  section.data(46).dtTransOffset = 45;
	
	  ;% canceshi1_B.DataTypeConversion3_bi
	  section.data(47).logicalSrcIdx = 104;
	  section.data(47).dtTransOffset = 46;
	
	  ;% canceshi1_B.DataTypeConversion4_k
	  section.data(48).logicalSrcIdx = 105;
	  section.data(48).dtTransOffset = 47;
	
	  ;% canceshi1_B.DataTypeConversion5_l
	  section.data(49).logicalSrcIdx = 106;
	  section.data(49).dtTransOffset = 48;
	
	  ;% canceshi1_B.DataTypeConversion6_i
	  section.data(50).logicalSrcIdx = 107;
	  section.data(50).dtTransOffset = 49;
	
	  ;% canceshi1_B.DataTypeConversion15_g
	  section.data(51).logicalSrcIdx = 108;
	  section.data(51).dtTransOffset = 50;
	
	  ;% canceshi1_B.DataTypeConversion9_k
	  section.data(52).logicalSrcIdx = 109;
	  section.data(52).dtTransOffset = 51;
	
	  ;% canceshi1_B.DataTypeConversion8_p
	  section.data(53).logicalSrcIdx = 110;
	  section.data(53).dtTransOffset = 52;
	
	  ;% canceshi1_B.DataTypeConversion10
	  section.data(54).logicalSrcIdx = 111;
	  section.data(54).dtTransOffset = 53;
	
	  ;% canceshi1_B.DataTypeConversion11
	  section.data(55).logicalSrcIdx = 112;
	  section.data(55).dtTransOffset = 54;
	
	  ;% canceshi1_B.DataTypeConversion12_e
	  section.data(56).logicalSrcIdx = 113;
	  section.data(56).dtTransOffset = 55;
	
	  ;% canceshi1_B.DataTypeConversion13_d
	  section.data(57).logicalSrcIdx = 114;
	  section.data(57).dtTransOffset = 56;
	
	  ;% canceshi1_B.DataTypeConversion14_p
	  section.data(58).logicalSrcIdx = 115;
	  section.data(58).dtTransOffset = 57;
	
	  ;% canceshi1_B.CANbitunpacking4_o1
	  section.data(59).logicalSrcIdx = 116;
	  section.data(59).dtTransOffset = 58;
	
	  ;% canceshi1_B.CANbitunpacking4_o2
	  section.data(60).logicalSrcIdx = 117;
	  section.data(60).dtTransOffset = 59;
	
	  ;% canceshi1_B.CANbitunpacking4_o3
	  section.data(61).logicalSrcIdx = 118;
	  section.data(61).dtTransOffset = 60;
	
	  ;% canceshi1_B.CANbitunpacking4_o4
	  section.data(62).logicalSrcIdx = 119;
	  section.data(62).dtTransOffset = 61;
	
	  ;% canceshi1_B.CANbitunpacking4_o5
	  section.data(63).logicalSrcIdx = 120;
	  section.data(63).dtTransOffset = 62;
	
	  ;% canceshi1_B.CANbitunpacking3_o1
	  section.data(64).logicalSrcIdx = 121;
	  section.data(64).dtTransOffset = 63;
	
	  ;% canceshi1_B.CANbitunpacking3_o2
	  section.data(65).logicalSrcIdx = 122;
	  section.data(65).dtTransOffset = 64;
	
	  ;% canceshi1_B.CANbitunpacking3_o3
	  section.data(66).logicalSrcIdx = 123;
	  section.data(66).dtTransOffset = 65;
	
	  ;% canceshi1_B.CANbitunpacking3_o4
	  section.data(67).logicalSrcIdx = 124;
	  section.data(67).dtTransOffset = 66;
	
	  ;% canceshi1_B.CANbitunpacking5_o1
	  section.data(68).logicalSrcIdx = 125;
	  section.data(68).dtTransOffset = 67;
	
	  ;% canceshi1_B.CANbitunpacking5_o2
	  section.data(69).logicalSrcIdx = 126;
	  section.data(69).dtTransOffset = 68;
	
	  ;% canceshi1_B.CANbitunpacking5_o3
	  section.data(70).logicalSrcIdx = 127;
	  section.data(70).dtTransOffset = 69;
	
	  ;% canceshi1_B.CANbitunpacking5_o4
	  section.data(71).logicalSrcIdx = 128;
	  section.data(71).dtTransOffset = 70;
	
	  ;% canceshi1_B.CANbitunpacking5_o5
	  section.data(72).logicalSrcIdx = 129;
	  section.data(72).dtTransOffset = 71;
	
	  ;% canceshi1_B.CANbitunpacking1_o1
	  section.data(73).logicalSrcIdx = 130;
	  section.data(73).dtTransOffset = 72;
	
	  ;% canceshi1_B.CANbitunpacking1_o2
	  section.data(74).logicalSrcIdx = 131;
	  section.data(74).dtTransOffset = 73;
	
	  ;% canceshi1_B.CANbitunpacking1_o3
	  section.data(75).logicalSrcIdx = 132;
	  section.data(75).dtTransOffset = 74;
	
	  ;% canceshi1_B.CANbitunpacking1_o4
	  section.data(76).logicalSrcIdx = 133;
	  section.data(76).dtTransOffset = 75;
	
	  ;% canceshi1_B.CANbitunpacking1_o5
	  section.data(77).logicalSrcIdx = 134;
	  section.data(77).dtTransOffset = 76;
	
	  ;% canceshi1_B.CANbitunpacking1_o6
	  section.data(78).logicalSrcIdx = 135;
	  section.data(78).dtTransOffset = 77;
	
	  ;% canceshi1_B.CANbitunpacking1_o7
	  section.data(79).logicalSrcIdx = 136;
	  section.data(79).dtTransOffset = 78;
	
	  ;% canceshi1_B.CANbitunpacking1_o8
	  section.data(80).logicalSrcIdx = 137;
	  section.data(80).dtTransOffset = 79;
	
	  ;% canceshi1_B.CANbitunpacking2_o1
	  section.data(81).logicalSrcIdx = 138;
	  section.data(81).dtTransOffset = 80;
	
	  ;% canceshi1_B.CANbitunpacking2_o2
	  section.data(82).logicalSrcIdx = 139;
	  section.data(82).dtTransOffset = 81;
	
	  ;% canceshi1_B.CANbitunpacking2_o3
	  section.data(83).logicalSrcIdx = 140;
	  section.data(83).dtTransOffset = 82;
	
	  ;% canceshi1_B.CANbitunpacking2_o4
	  section.data(84).logicalSrcIdx = 141;
	  section.data(84).dtTransOffset = 83;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(3) = section;
      clear section
      
      section.nData     = 17;
      section.data(17)  = dumData; %prealloc
      
	  ;% canceshi1_B.Compare
	  section.data(1).logicalSrcIdx = 142;
	  section.data(1).dtTransOffset = 0;
	
	  ;% canceshi1_B.Compare_l
	  section.data(2).logicalSrcIdx = 143;
	  section.data(2).dtTransOffset = 1;
	
	  ;% canceshi1_B.Compare_lh
	  section.data(3).logicalSrcIdx = 144;
	  section.data(3).dtTransOffset = 2;
	
	  ;% canceshi1_B.Compare_a
	  section.data(4).logicalSrcIdx = 145;
	  section.data(4).dtTransOffset = 3;
	
	  ;% canceshi1_B.LogicalOperator
	  section.data(5).logicalSrcIdx = 146;
	  section.data(5).dtTransOffset = 4;
	
	  ;% canceshi1_B.Compare_aq
	  section.data(6).logicalSrcIdx = 147;
	  section.data(6).dtTransOffset = 5;
	
	  ;% canceshi1_B.Compare_l2
	  section.data(7).logicalSrcIdx = 148;
	  section.data(7).dtTransOffset = 6;
	
	  ;% canceshi1_B.LogicalOperator_a
	  section.data(8).logicalSrcIdx = 149;
	  section.data(8).dtTransOffset = 7;
	
	  ;% canceshi1_B.Compare_f
	  section.data(9).logicalSrcIdx = 150;
	  section.data(9).dtTransOffset = 8;
	
	  ;% canceshi1_B.Compare_g
	  section.data(10).logicalSrcIdx = 151;
	  section.data(10).dtTransOffset = 9;
	
	  ;% canceshi1_B.LogicalOperator_l
	  section.data(11).logicalSrcIdx = 152;
	  section.data(11).dtTransOffset = 10;
	
	  ;% canceshi1_B.Compare_li
	  section.data(12).logicalSrcIdx = 153;
	  section.data(12).dtTransOffset = 11;
	
	  ;% canceshi1_B.Compare_k
	  section.data(13).logicalSrcIdx = 154;
	  section.data(13).dtTransOffset = 12;
	
	  ;% canceshi1_B.LogicalOperator_p
	  section.data(14).logicalSrcIdx = 155;
	  section.data(14).dtTransOffset = 13;
	
	  ;% canceshi1_B.RelationalOperator
	  section.data(15).logicalSrcIdx = 156;
	  section.data(15).dtTransOffset = 14;
	
	  ;% canceshi1_B.RelationalOperator_m
	  section.data(16).logicalSrcIdx = 157;
	  section.data(16).dtTransOffset = 15;
	
	  ;% canceshi1_B.RelationalOperator_o
	  section.data(17).logicalSrcIdx = 158;
	  section.data(17).dtTransOffset = 16;
	
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
    ;% Auto data (canceshi1_DWork)
    ;%
      section.nData     = 4;
      section.data(4)  = dumData; %prealloc
      
	  ;% canceshi1_DWork.IntegerDelay_X
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% canceshi1_DWork.IntegerDelay_X_o
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 2;
	
	  ;% canceshi1_DWork.IntegerDelay_X_m
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 4;
	
	  ;% canceshi1_DWork.Add_DWORK1
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 6;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(1) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% canceshi1_DWork.PCL731_IWORK
	  section.data(1).logicalSrcIdx = 4;
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


  targMap.checksum0 = 1259889140;
  targMap.checksum1 = 3741215925;
  targMap.checksum2 = 1240693344;
  targMap.checksum3 = 2269304367;

