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
    ;% Auto data (canceshi_P)
    ;%
      section.nData     = 162;
      section.data(162)  = dumData; %prealloc
      
	  ;% canceshi_P.Constant1_Value
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% canceshi_P.Constant33_Value
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 1;
	
	  ;% canceshi_P.Constant32_Value
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 2;
	
	  ;% canceshi_P.Constant31_Value
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 3;
	
	  ;% canceshi_P.Constant30_Value
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 4;
	
	  ;% canceshi_P.Constant29_Value
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 5;
	
	  ;% canceshi_P.Constant28_Value
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 6;
	
	  ;% canceshi_P.constant5_Value
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 7;
	
	  ;% canceshi_P.constant2_Value
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 8;
	
	  ;% canceshi_P.tingzhi_Value
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 9;
	
	  ;% canceshi_P.baojin_Value
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 10;
	
	  ;% canceshi_P.dakai_Value
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 11;
	
	  ;% canceshi_P.tingzhi_Value_c
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 12;
	
	  ;% canceshi_P.baojin_Value_k
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 13;
	
	  ;% canceshi_P.dakai_Value_c
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 14;
	
	  ;% canceshi_P.tingzhi_Value_ca
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 15;
	
	  ;% canceshi_P.gaowei_Value
	  section.data(17).logicalSrcIdx = 16;
	  section.data(17).dtTransOffset = 16;
	
	  ;% canceshi_P.diwei_Value
	  section.data(18).logicalSrcIdx = 17;
	  section.data(18).dtTransOffset = 17;
	
	  ;% canceshi_P.tingzhi_Value_d
	  section.data(19).logicalSrcIdx = 18;
	  section.data(19).dtTransOffset = 18;
	
	  ;% canceshi_P.yuanshiwei_Value
	  section.data(20).logicalSrcIdx = 19;
	  section.data(20).dtTransOffset = 19;
	
	  ;% canceshi_P.gongzuowei_Value
	  section.data(21).logicalSrcIdx = 20;
	  section.data(21).dtTransOffset = 20;
	
	  ;% canceshi_P.u_Value
	  section.data(22).logicalSrcIdx = 21;
	  section.data(22).dtTransOffset = 21;
	
	  ;% canceshi_P.Constant2_Value
	  section.data(23).logicalSrcIdx = 22;
	  section.data(23).dtTransOffset = 22;
	
	  ;% canceshi_P.Constant3_Value
	  section.data(24).logicalSrcIdx = 23;
	  section.data(24).dtTransOffset = 23;
	
	  ;% canceshi_P.Constant4_Value
	  section.data(25).logicalSrcIdx = 24;
	  section.data(25).dtTransOffset = 24;
	
	  ;% canceshi_P.Constant5_Value
	  section.data(26).logicalSrcIdx = 25;
	  section.data(26).dtTransOffset = 25;
	
	  ;% canceshi_P.Constant6_Value
	  section.data(27).logicalSrcIdx = 26;
	  section.data(27).dtTransOffset = 26;
	
	  ;% canceshi_P.Constant7_Value
	  section.data(28).logicalSrcIdx = 27;
	  section.data(28).dtTransOffset = 27;
	
	  ;% canceshi_P.Constant8_Value
	  section.data(29).logicalSrcIdx = 28;
	  section.data(29).dtTransOffset = 28;
	
	  ;% canceshi_P.Constant9_Value
	  section.data(30).logicalSrcIdx = 29;
	  section.data(30).dtTransOffset = 29;
	
	  ;% canceshi_P.Constant10_Value
	  section.data(31).logicalSrcIdx = 30;
	  section.data(31).dtTransOffset = 30;
	
	  ;% canceshi_P.Constant12_Value
	  section.data(32).logicalSrcIdx = 31;
	  section.data(32).dtTransOffset = 31;
	
	  ;% canceshi_P.Constant13_Value
	  section.data(33).logicalSrcIdx = 32;
	  section.data(33).dtTransOffset = 32;
	
	  ;% canceshi_P.Constant14_Value
	  section.data(34).logicalSrcIdx = 33;
	  section.data(34).dtTransOffset = 33;
	
	  ;% canceshi_P.Constant15_Value
	  section.data(35).logicalSrcIdx = 34;
	  section.data(35).dtTransOffset = 34;
	
	  ;% canceshi_P.Constant11_Value
	  section.data(36).logicalSrcIdx = 35;
	  section.data(36).dtTransOffset = 35;
	
	  ;% canceshi_P.Constant17_Value
	  section.data(37).logicalSrcIdx = 36;
	  section.data(37).dtTransOffset = 36;
	
	  ;% canceshi_P.Constant19_Value
	  section.data(38).logicalSrcIdx = 37;
	  section.data(38).dtTransOffset = 37;
	
	  ;% canceshi_P.Constant20_Value
	  section.data(39).logicalSrcIdx = 38;
	  section.data(39).dtTransOffset = 38;
	
	  ;% canceshi_P.Constant21_Value
	  section.data(40).logicalSrcIdx = 39;
	  section.data(40).dtTransOffset = 39;
	
	  ;% canceshi_P.Constant16_Value
	  section.data(41).logicalSrcIdx = 40;
	  section.data(41).dtTransOffset = 40;
	
	  ;% canceshi_P.Constant23_Value
	  section.data(42).logicalSrcIdx = 41;
	  section.data(42).dtTransOffset = 41;
	
	  ;% canceshi_P.Constant24_Value
	  section.data(43).logicalSrcIdx = 42;
	  section.data(43).dtTransOffset = 42;
	
	  ;% canceshi_P.Constant25_Value
	  section.data(44).logicalSrcIdx = 43;
	  section.data(44).dtTransOffset = 43;
	
	  ;% canceshi_P.Constant26_Value
	  section.data(45).logicalSrcIdx = 44;
	  section.data(45).dtTransOffset = 44;
	
	  ;% canceshi_P.PCL731_P1_Size
	  section.data(46).logicalSrcIdx = 45;
	  section.data(46).dtTransOffset = 45;
	
	  ;% canceshi_P.PCL731_P1
	  section.data(47).logicalSrcIdx = 46;
	  section.data(47).dtTransOffset = 47;
	
	  ;% canceshi_P.PCL731_P2_Size
	  section.data(48).logicalSrcIdx = 47;
	  section.data(48).dtTransOffset = 48;
	
	  ;% canceshi_P.PCL731_P2
	  section.data(49).logicalSrcIdx = 48;
	  section.data(49).dtTransOffset = 50;
	
	  ;% canceshi_P.constant1_Value
	  section.data(50).logicalSrcIdx = 49;
	  section.data(50).dtTransOffset = 52;
	
	  ;% canceshi_P.Memory_X0
	  section.data(51).logicalSrcIdx = 50;
	  section.data(51).dtTransOffset = 53;
	
	  ;% canceshi_P.constant2_Value_e
	  section.data(52).logicalSrcIdx = 51;
	  section.data(52).dtTransOffset = 54;
	
	  ;% canceshi_P.constant_Value
	  section.data(53).logicalSrcIdx = 52;
	  section.data(53).dtTransOffset = 55;
	
	  ;% canceshi_P.Memory_X0_m
	  section.data(54).logicalSrcIdx = 53;
	  section.data(54).dtTransOffset = 56;
	
	  ;% canceshi_P.constant2_Value_b
	  section.data(55).logicalSrcIdx = 54;
	  section.data(55).dtTransOffset = 57;
	
	  ;% canceshi_P.constant_Value_k
	  section.data(56).logicalSrcIdx = 55;
	  section.data(56).dtTransOffset = 58;
	
	  ;% canceshi_P.constant2_Value_f
	  section.data(57).logicalSrcIdx = 56;
	  section.data(57).dtTransOffset = 59;
	
	  ;% canceshi_P.constant1_Value_p
	  section.data(58).logicalSrcIdx = 57;
	  section.data(58).dtTransOffset = 60;
	
	  ;% canceshi_P.constant4_Value
	  section.data(59).logicalSrcIdx = 58;
	  section.data(59).dtTransOffset = 61;
	
	  ;% canceshi_P.Memory_X0_f
	  section.data(60).logicalSrcIdx = 59;
	  section.data(60).dtTransOffset = 62;
	
	  ;% canceshi_P.constant2_Value_d
	  section.data(61).logicalSrcIdx = 60;
	  section.data(61).dtTransOffset = 63;
	
	  ;% canceshi_P.constant_Value_d
	  section.data(62).logicalSrcIdx = 61;
	  section.data(62).dtTransOffset = 64;
	
	  ;% canceshi_P.constant2_Value_ez
	  section.data(63).logicalSrcIdx = 62;
	  section.data(63).dtTransOffset = 65;
	
	  ;% canceshi_P.constant1_Value_c
	  section.data(64).logicalSrcIdx = 63;
	  section.data(64).dtTransOffset = 66;
	
	  ;% canceshi_P.constant3_Value
	  section.data(65).logicalSrcIdx = 64;
	  section.data(65).dtTransOffset = 67;
	
	  ;% canceshi_P.Memory_X0_c
	  section.data(66).logicalSrcIdx = 65;
	  section.data(66).dtTransOffset = 68;
	
	  ;% canceshi_P.constant2_Value_fm
	  section.data(67).logicalSrcIdx = 66;
	  section.data(67).dtTransOffset = 69;
	
	  ;% canceshi_P.constant_Value_m
	  section.data(68).logicalSrcIdx = 67;
	  section.data(68).dtTransOffset = 70;
	
	  ;% canceshi_P.constant2_Value_p
	  section.data(69).logicalSrcIdx = 68;
	  section.data(69).dtTransOffset = 71;
	
	  ;% canceshi_P.constant1_Value_n
	  section.data(70).logicalSrcIdx = 69;
	  section.data(70).dtTransOffset = 72;
	
	  ;% canceshi_P.u_Value_o
	  section.data(71).logicalSrcIdx = 70;
	  section.data(71).dtTransOffset = 73;
	
	  ;% canceshi_P.Constant18_Value
	  section.data(72).logicalSrcIdx = 71;
	  section.data(72).dtTransOffset = 74;
	
	  ;% canceshi_P.Constant7_Value_a
	  section.data(73).logicalSrcIdx = 72;
	  section.data(73).dtTransOffset = 75;
	
	  ;% canceshi_P.Constant16_Value_i
	  section.data(74).logicalSrcIdx = 73;
	  section.data(74).dtTransOffset = 76;
	
	  ;% canceshi_P.Constant1_Value_f
	  section.data(75).logicalSrcIdx = 74;
	  section.data(75).dtTransOffset = 77;
	
	  ;% canceshi_P.Constant2_Value_n
	  section.data(76).logicalSrcIdx = 75;
	  section.data(76).dtTransOffset = 78;
	
	  ;% canceshi_P.Constant3_Value_o
	  section.data(77).logicalSrcIdx = 76;
	  section.data(77).dtTransOffset = 79;
	
	  ;% canceshi_P.Constant4_Value_o
	  section.data(78).logicalSrcIdx = 77;
	  section.data(78).dtTransOffset = 80;
	
	  ;% canceshi_P.Constant5_Value_b
	  section.data(79).logicalSrcIdx = 78;
	  section.data(79).dtTransOffset = 81;
	
	  ;% canceshi_P.Constant6_Value_p
	  section.data(80).logicalSrcIdx = 79;
	  section.data(80).dtTransOffset = 82;
	
	  ;% canceshi_P.Constant8_Value_n
	  section.data(81).logicalSrcIdx = 80;
	  section.data(81).dtTransOffset = 83;
	
	  ;% canceshi_P.Constant16_Value_c
	  section.data(82).logicalSrcIdx = 81;
	  section.data(82).dtTransOffset = 84;
	
	  ;% canceshi_P.Constant2_Value_d
	  section.data(83).logicalSrcIdx = 82;
	  section.data(83).dtTransOffset = 85;
	
	  ;% canceshi_P.Constant3_Value_e
	  section.data(84).logicalSrcIdx = 83;
	  section.data(84).dtTransOffset = 86;
	
	  ;% canceshi_P.Constant4_Value_g
	  section.data(85).logicalSrcIdx = 84;
	  section.data(85).dtTransOffset = 87;
	
	  ;% canceshi_P.Constant5_Value_f
	  section.data(86).logicalSrcIdx = 85;
	  section.data(86).dtTransOffset = 88;
	
	  ;% canceshi_P.Constant6_Value_k
	  section.data(87).logicalSrcIdx = 86;
	  section.data(87).dtTransOffset = 89;
	
	  ;% canceshi_P.Constant7_Value_o
	  section.data(88).logicalSrcIdx = 87;
	  section.data(88).dtTransOffset = 90;
	
	  ;% canceshi_P.Constant24_Value_b
	  section.data(89).logicalSrcIdx = 88;
	  section.data(89).dtTransOffset = 91;
	
	  ;% canceshi_P.Constant18_Value_o
	  section.data(90).logicalSrcIdx = 89;
	  section.data(90).dtTransOffset = 92;
	
	  ;% canceshi_P.Constant17_Value_g
	  section.data(91).logicalSrcIdx = 90;
	  section.data(91).dtTransOffset = 93;
	
	  ;% canceshi_P.Constant19_Value_p
	  section.data(92).logicalSrcIdx = 91;
	  section.data(92).dtTransOffset = 94;
	
	  ;% canceshi_P.Constant20_Value_m
	  section.data(93).logicalSrcIdx = 92;
	  section.data(93).dtTransOffset = 95;
	
	  ;% canceshi_P.Constant21_Value_c
	  section.data(94).logicalSrcIdx = 93;
	  section.data(94).dtTransOffset = 96;
	
	  ;% canceshi_P.Constant22_Value
	  section.data(95).logicalSrcIdx = 94;
	  section.data(95).dtTransOffset = 97;
	
	  ;% canceshi_P.Constant23_Value_d
	  section.data(96).logicalSrcIdx = 95;
	  section.data(96).dtTransOffset = 98;
	
	  ;% canceshi_P.Constant7_Value_m
	  section.data(97).logicalSrcIdx = 96;
	  section.data(97).dtTransOffset = 99;
	
	  ;% canceshi_P.Constant16_Value_k
	  section.data(98).logicalSrcIdx = 97;
	  section.data(98).dtTransOffset = 100;
	
	  ;% canceshi_P.Constant1_Value_g
	  section.data(99).logicalSrcIdx = 98;
	  section.data(99).dtTransOffset = 101;
	
	  ;% canceshi_P.Constant2_Value_j
	  section.data(100).logicalSrcIdx = 99;
	  section.data(100).dtTransOffset = 102;
	
	  ;% canceshi_P.Constant3_Value_p
	  section.data(101).logicalSrcIdx = 100;
	  section.data(101).dtTransOffset = 103;
	
	  ;% canceshi_P.Constant4_Value_a
	  section.data(102).logicalSrcIdx = 101;
	  section.data(102).dtTransOffset = 104;
	
	  ;% canceshi_P.Constant5_Value_l
	  section.data(103).logicalSrcIdx = 102;
	  section.data(103).dtTransOffset = 105;
	
	  ;% canceshi_P.Constant6_Value_d
	  section.data(104).logicalSrcIdx = 103;
	  section.data(104).dtTransOffset = 106;
	
	  ;% canceshi_P.Constant15_Value_k
	  section.data(105).logicalSrcIdx = 104;
	  section.data(105).dtTransOffset = 107;
	
	  ;% canceshi_P.Constant9_Value_l
	  section.data(106).logicalSrcIdx = 105;
	  section.data(106).dtTransOffset = 108;
	
	  ;% canceshi_P.Constant8_Value_m
	  section.data(107).logicalSrcIdx = 106;
	  section.data(107).dtTransOffset = 109;
	
	  ;% canceshi_P.Constant10_Value_i
	  section.data(108).logicalSrcIdx = 107;
	  section.data(108).dtTransOffset = 110;
	
	  ;% canceshi_P.Constant11_Value_b
	  section.data(109).logicalSrcIdx = 108;
	  section.data(109).dtTransOffset = 111;
	
	  ;% canceshi_P.Constant12_Value_l
	  section.data(110).logicalSrcIdx = 109;
	  section.data(110).dtTransOffset = 112;
	
	  ;% canceshi_P.Constant13_Value_d
	  section.data(111).logicalSrcIdx = 110;
	  section.data(111).dtTransOffset = 113;
	
	  ;% canceshi_P.Constant14_Value_l
	  section.data(112).logicalSrcIdx = 111;
	  section.data(112).dtTransOffset = 114;
	
	  ;% canceshi_P.right7_XData
	  section.data(113).logicalSrcIdx = 112;
	  section.data(113).dtTransOffset = 115;
	
	  ;% canceshi_P.right7_YData
	  section.data(114).logicalSrcIdx = 113;
	  section.data(114).dtTransOffset = 117;
	
	  ;% canceshi_P.Constant22_Value_n
	  section.data(115).logicalSrcIdx = 114;
	  section.data(115).dtTransOffset = 119;
	
	  ;% canceshi_P.Constant27_Value
	  section.data(116).logicalSrcIdx = 115;
	  section.data(116).dtTransOffset = 120;
	
	  ;% canceshi_P.Constant28_Value_a
	  section.data(117).logicalSrcIdx = 116;
	  section.data(117).dtTransOffset = 121;
	
	  ;% canceshi_P.Constant29_Value_p
	  section.data(118).logicalSrcIdx = 117;
	  section.data(118).dtTransOffset = 122;
	
	  ;% canceshi_P.PulseGenerator_Amp
	  section.data(119).logicalSrcIdx = 118;
	  section.data(119).dtTransOffset = 123;
	
	  ;% canceshi_P.PulseGenerator_Period
	  section.data(120).logicalSrcIdx = 119;
	  section.data(120).dtTransOffset = 124;
	
	  ;% canceshi_P.PulseGenerator_Duty
	  section.data(121).logicalSrcIdx = 120;
	  section.data(121).dtTransOffset = 125;
	
	  ;% canceshi_P.PulseGenerator_PhaseDelay
	  section.data(122).logicalSrcIdx = 121;
	  section.data(122).dtTransOffset = 126;
	
	  ;% canceshi_P.dongzuo_zhuangtai1_Value
	  section.data(123).logicalSrcIdx = 122;
	  section.data(123).dtTransOffset = 127;
	
	  ;% canceshi_P.Setup_P1_Size
	  section.data(124).logicalSrcIdx = 123;
	  section.data(124).dtTransOffset = 128;
	
	  ;% canceshi_P.Setup_P1
	  section.data(125).logicalSrcIdx = 124;
	  section.data(125).dtTransOffset = 130;
	
	  ;% canceshi_P.Setup_P2_Size
	  section.data(126).logicalSrcIdx = 125;
	  section.data(126).dtTransOffset = 134;
	
	  ;% canceshi_P.Setup_P2
	  section.data(127).logicalSrcIdx = 126;
	  section.data(127).dtTransOffset = 136;
	
	  ;% canceshi_P.Setup_P3_Size
	  section.data(128).logicalSrcIdx = 127;
	  section.data(128).dtTransOffset = 140;
	
	  ;% canceshi_P.Setup_P3
	  section.data(129).logicalSrcIdx = 128;
	  section.data(129).dtTransOffset = 142;
	
	  ;% canceshi_P.Setup_P4_Size
	  section.data(130).logicalSrcIdx = 129;
	  section.data(130).dtTransOffset = 149;
	
	  ;% canceshi_P.Setup_P4
	  section.data(131).logicalSrcIdx = 130;
	  section.data(131).dtTransOffset = 151;
	
	  ;% canceshi_P.Setup_P5_Size
	  section.data(132).logicalSrcIdx = 131;
	  section.data(132).dtTransOffset = 157;
	
	  ;% canceshi_P.Setup_P6_Size
	  section.data(133).logicalSrcIdx = 133;
	  section.data(133).dtTransOffset = 159;
	
	  ;% canceshi_P.Setup_P7_Size
	  section.data(134).logicalSrcIdx = 135;
	  section.data(134).dtTransOffset = 161;
	
	  ;% canceshi_P.Setup_P8_Size
	  section.data(135).logicalSrcIdx = 137;
	  section.data(135).dtTransOffset = 163;
	
	  ;% canceshi_P.Setup_P9_Size
	  section.data(136).logicalSrcIdx = 139;
	  section.data(136).dtTransOffset = 165;
	
	  ;% canceshi_P.Setup_P10_Size
	  section.data(137).logicalSrcIdx = 141;
	  section.data(137).dtTransOffset = 167;
	
	  ;% canceshi_P.Setup_P11_Size
	  section.data(138).logicalSrcIdx = 143;
	  section.data(138).dtTransOffset = 169;
	
	  ;% canceshi_P.Setup_P11
	  section.data(139).logicalSrcIdx = 144;
	  section.data(139).dtTransOffset = 171;
	
	  ;% canceshi_P.Setup_P12_Size
	  section.data(140).logicalSrcIdx = 145;
	  section.data(140).dtTransOffset = 177;
	
	  ;% canceshi_P.Setup_P13_Size
	  section.data(141).logicalSrcIdx = 147;
	  section.data(141).dtTransOffset = 179;
	
	  ;% canceshi_P.Setup_P14_Size
	  section.data(142).logicalSrcIdx = 149;
	  section.data(142).dtTransOffset = 181;
	
	  ;% canceshi_P.Setup_P15_Size
	  section.data(143).logicalSrcIdx = 151;
	  section.data(143).dtTransOffset = 183;
	
	  ;% canceshi_P.Setup_P15
	  section.data(144).logicalSrcIdx = 152;
	  section.data(144).dtTransOffset = 185;
	
	  ;% canceshi_P.Setup_P16_Size
	  section.data(145).logicalSrcIdx = 153;
	  section.data(145).dtTransOffset = 186;
	
	  ;% canceshi_P.Setup_P16
	  section.data(146).logicalSrcIdx = 154;
	  section.data(146).dtTransOffset = 188;
	
	  ;% canceshi_P.Setup_P17_Size
	  section.data(147).logicalSrcIdx = 155;
	  section.data(147).dtTransOffset = 189;
	
	  ;% canceshi_P.Setup_P17
	  section.data(148).logicalSrcIdx = 156;
	  section.data(148).dtTransOffset = 191;
	
	  ;% canceshi_P.Setup_P18_Size
	  section.data(149).logicalSrcIdx = 157;
	  section.data(149).dtTransOffset = 192;
	
	  ;% canceshi_P.Setup_P18
	  section.data(150).logicalSrcIdx = 158;
	  section.data(150).dtTransOffset = 194;
	
	  ;% canceshi_P.Setup_P19_Size
	  section.data(151).logicalSrcIdx = 159;
	  section.data(151).dtTransOffset = 195;
	
	  ;% canceshi_P.Setup_P19
	  section.data(152).logicalSrcIdx = 160;
	  section.data(152).dtTransOffset = 197;
	
	  ;% canceshi_P.Setup_P20_Size
	  section.data(153).logicalSrcIdx = 161;
	  section.data(153).dtTransOffset = 198;
	
	  ;% canceshi_P.Setup_P20
	  section.data(154).logicalSrcIdx = 162;
	  section.data(154).dtTransOffset = 200;
	
	  ;% canceshi_P.Setup_P21_Size
	  section.data(155).logicalSrcIdx = 163;
	  section.data(155).dtTransOffset = 201;
	
	  ;% canceshi_P.Setup_P21
	  section.data(156).logicalSrcIdx = 164;
	  section.data(156).dtTransOffset = 203;
	
	  ;% canceshi_P.Setup_P22_Size
	  section.data(157).logicalSrcIdx = 165;
	  section.data(157).dtTransOffset = 204;
	
	  ;% canceshi_P.Setup_P22
	  section.data(158).logicalSrcIdx = 166;
	  section.data(158).dtTransOffset = 206;
	
	  ;% canceshi_P.Setup_P23_Size
	  section.data(159).logicalSrcIdx = 167;
	  section.data(159).dtTransOffset = 207;
	
	  ;% canceshi_P.Setup_P23
	  section.data(160).logicalSrcIdx = 168;
	  section.data(160).dtTransOffset = 209;
	
	  ;% canceshi_P.Setup_P24_Size
	  section.data(161).logicalSrcIdx = 169;
	  section.data(161).dtTransOffset = 210;
	
	  ;% canceshi_P.Setup_P24
	  section.data(162).logicalSrcIdx = 170;
	  section.data(162).dtTransOffset = 212;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(1) = section;
      clear section
      
      section.nData     = 6;
      section.data(6)  = dumData; %prealloc
      
	  ;% canceshi_P.Constant_Value
	  section.data(1).logicalSrcIdx = 171;
	  section.data(1).dtTransOffset = 0;
	
	  ;% canceshi_P.SwitchControl_Threshold
	  section.data(2).logicalSrcIdx = 172;
	  section.data(2).dtTransOffset = 1;
	
	  ;% canceshi_P.Constant_Value_j
	  section.data(3).logicalSrcIdx = 173;
	  section.data(3).dtTransOffset = 2;
	
	  ;% canceshi_P.SwitchControl_Threshold_g
	  section.data(4).logicalSrcIdx = 174;
	  section.data(4).dtTransOffset = 3;
	
	  ;% canceshi_P.Constant_Value_i
	  section.data(5).logicalSrcIdx = 175;
	  section.data(5).dtTransOffset = 4;
	
	  ;% canceshi_P.SwitchControl_Threshold_f
	  section.data(6).logicalSrcIdx = 176;
	  section.data(6).dtTransOffset = 5;
	
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
    ;% Auto data (canceshi_B)
    ;%
      section.nData     = 56;
      section.data(56)  = dumData; %prealloc
      
	  ;% canceshi_B.TmpSignalConversionAtPCL731Inpo
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% canceshi_B.PCL731
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 24;
	
	  ;% canceshi_B.baozhuaa
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 48;
	
	  ;% canceshi_B.Memory
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 49;
	
	  ;% canceshi_B.Subtract
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 50;
	
	  ;% canceshi_B.MultiportSwitch
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 51;
	
	  ;% canceshi_B.CANbitpacking3
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 52;
	
	  ;% canceshi_B.MultiportSwitch4
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 53;
	
	  ;% canceshi_B.baozhuab
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 54;
	
	  ;% canceshi_B.Memory_o
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 55;
	
	  ;% canceshi_B.Subtract_l
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 56;
	
	  ;% canceshi_B.MultiportSwitch_j
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 57;
	
	  ;% canceshi_B.CANbitpacking3_p
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 58;
	
	  ;% canceshi_B.MultiportSwitch1
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 59;
	
	  ;% canceshi_B.CANbitpacking1
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 60;
	
	  ;% canceshi_B.xuanzhuana
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 61;
	
	  ;% canceshi_B.Memory_i
	  section.data(17).logicalSrcIdx = 16;
	  section.data(17).dtTransOffset = 62;
	
	  ;% canceshi_B.Subtract_n
	  section.data(18).logicalSrcIdx = 17;
	  section.data(18).dtTransOffset = 63;
	
	  ;% canceshi_B.MultiportSwitch_h
	  section.data(19).logicalSrcIdx = 18;
	  section.data(19).dtTransOffset = 64;
	
	  ;% canceshi_B.CANbitpacking3_h
	  section.data(20).logicalSrcIdx = 19;
	  section.data(20).dtTransOffset = 65;
	
	  ;% canceshi_B.MultiportSwitch3
	  section.data(21).logicalSrcIdx = 20;
	  section.data(21).dtTransOffset = 66;
	
	  ;% canceshi_B.CANbitpacking1_e
	  section.data(22).logicalSrcIdx = 21;
	  section.data(22).dtTransOffset = 67;
	
	  ;% canceshi_B.shengjianga
	  section.data(23).logicalSrcIdx = 22;
	  section.data(23).dtTransOffset = 68;
	
	  ;% canceshi_B.Memory_f
	  section.data(24).logicalSrcIdx = 23;
	  section.data(24).dtTransOffset = 69;
	
	  ;% canceshi_B.Subtract_i
	  section.data(25).logicalSrcIdx = 24;
	  section.data(25).dtTransOffset = 70;
	
	  ;% canceshi_B.MultiportSwitch_e
	  section.data(26).logicalSrcIdx = 25;
	  section.data(26).dtTransOffset = 71;
	
	  ;% canceshi_B.CANbitpacking3_d
	  section.data(27).logicalSrcIdx = 26;
	  section.data(27).dtTransOffset = 72;
	
	  ;% canceshi_B.MultiportSwitch2
	  section.data(28).logicalSrcIdx = 27;
	  section.data(28).dtTransOffset = 73;
	
	  ;% canceshi_B.CANbitpacking1_i
	  section.data(29).logicalSrcIdx = 28;
	  section.data(29).dtTransOffset = 74;
	
	  ;% canceshi_B.sifufa
	  section.data(30).logicalSrcIdx = 29;
	  section.data(30).dtTransOffset = 75;
	
	  ;% canceshi_B.MultiportSwitch_m
	  section.data(31).logicalSrcIdx = 30;
	  section.data(31).dtTransOffset = 76;
	
	  ;% canceshi_B.CANbitpacking3_a
	  section.data(32).logicalSrcIdx = 31;
	  section.data(32).dtTransOffset = 77;
	
	  ;% canceshi_B.CANbitpacking2
	  section.data(33).logicalSrcIdx = 32;
	  section.data(33).dtTransOffset = 78;
	
	  ;% canceshi_B.CANbitpacking2_j
	  section.data(34).logicalSrcIdx = 33;
	  section.data(34).dtTransOffset = 79;
	
	  ;% canceshi_B.SwitchControl
	  section.data(35).logicalSrcIdx = 34;
	  section.data(35).dtTransOffset = 80;
	
	  ;% canceshi_B.CANbitpacking3_c
	  section.data(36).logicalSrcIdx = 35;
	  section.data(36).dtTransOffset = 81;
	
	  ;% canceshi_B.CANbitpacking2_o
	  section.data(37).logicalSrcIdx = 36;
	  section.data(37).dtTransOffset = 82;
	
	  ;% canceshi_B.CANbitpacking1_m
	  section.data(38).logicalSrcIdx = 37;
	  section.data(38).dtTransOffset = 83;
	
	  ;% canceshi_B.SwitchControl_d
	  section.data(39).logicalSrcIdx = 38;
	  section.data(39).dtTransOffset = 84;
	
	  ;% canceshi_B.u02Receive_o1
	  section.data(40).logicalSrcIdx = 39;
	  section.data(40).dtTransOffset = 85;
	
	  ;% canceshi_B.u02Receive_o2
	  section.data(41).logicalSrcIdx = 40;
	  section.data(41).dtTransOffset = 86;
	
	  ;% canceshi_B.f
	  section.data(42).logicalSrcIdx = 41;
	  section.data(42).dtTransOffset = 87;
	
	  ;% canceshi_B.right7
	  section.data(43).logicalSrcIdx = 42;
	  section.data(43).dtTransOffset = 91;
	
	  ;% canceshi_B.Receive_o1
	  section.data(44).logicalSrcIdx = 43;
	  section.data(44).dtTransOffset = 92;
	
	  ;% canceshi_B.Receive_o2
	  section.data(45).logicalSrcIdx = 44;
	  section.data(45).dtTransOffset = 93;
	
	  ;% canceshi_B.Receive_o3
	  section.data(46).logicalSrcIdx = 45;
	  section.data(46).dtTransOffset = 94;
	
	  ;% canceshi_B.Receive_o4
	  section.data(47).logicalSrcIdx = 46;
	  section.data(47).dtTransOffset = 95;
	
	  ;% canceshi_B.a
	  section.data(48).logicalSrcIdx = 47;
	  section.data(48).dtTransOffset = 96;
	
	  ;% canceshi_B.b
	  section.data(49).logicalSrcIdx = 48;
	  section.data(49).dtTransOffset = 100;
	
	  ;% canceshi_B.c
	  section.data(50).logicalSrcIdx = 49;
	  section.data(50).dtTransOffset = 104;
	
	  ;% canceshi_B.d
	  section.data(51).logicalSrcIdx = 50;
	  section.data(51).dtTransOffset = 109;
	
	  ;% canceshi_B.PulseGenerator
	  section.data(52).logicalSrcIdx = 51;
	  section.data(52).dtTransOffset = 114;
	
	  ;% canceshi_B.HiddenBuf_InsertedFor_Subsystem
	  section.data(53).logicalSrcIdx = 52;
	  section.data(53).dtTransOffset = 115;
	
	  ;% canceshi_B.dongzuo_zhuangtai1
	  section.data(54).logicalSrcIdx = 53;
	  section.data(54).dtTransOffset = 116;
	
	  ;% canceshi_B.CANbitpacking1_o
	  section.data(55).logicalSrcIdx = 54;
	  section.data(55).dtTransOffset = 117;
	
	  ;% canceshi_B.SwitchControl_j
	  section.data(56).logicalSrcIdx = 55;
	  section.data(56).dtTransOffset = 118;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(1) = section;
      clear section
      
      section.nData     = 5;
      section.data(5)  = dumData; %prealloc
      
	  ;% canceshi_B.CANbitunpacking_o1
	  section.data(1).logicalSrcIdx = 56;
	  section.data(1).dtTransOffset = 0;
	
	  ;% canceshi_B.CANbitunpacking_o2
	  section.data(2).logicalSrcIdx = 57;
	  section.data(2).dtTransOffset = 1;
	
	  ;% canceshi_B.CANbitunpacking_o3
	  section.data(3).logicalSrcIdx = 58;
	  section.data(3).dtTransOffset = 2;
	
	  ;% canceshi_B.CANbitunpacking_o4
	  section.data(4).logicalSrcIdx = 59;
	  section.data(4).dtTransOffset = 3;
	
	  ;% canceshi_B.e
	  section.data(5).logicalSrcIdx = 60;
	  section.data(5).dtTransOffset = 4;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(2) = section;
      clear section
      
      section.nData     = 84;
      section.data(84)  = dumData; %prealloc
      
	  ;% canceshi_B.DataTypeConversion7
	  section.data(1).logicalSrcIdx = 61;
	  section.data(1).dtTransOffset = 0;
	
	  ;% canceshi_B.DataTypeConversion1
	  section.data(2).logicalSrcIdx = 62;
	  section.data(2).dtTransOffset = 1;
	
	  ;% canceshi_B.DataTypeConversion7_c
	  section.data(3).logicalSrcIdx = 63;
	  section.data(3).dtTransOffset = 2;
	
	  ;% canceshi_B.DataTypeConversion1_a
	  section.data(4).logicalSrcIdx = 64;
	  section.data(4).dtTransOffset = 3;
	
	  ;% canceshi_B.DataTypeConversion2
	  section.data(5).logicalSrcIdx = 65;
	  section.data(5).dtTransOffset = 4;
	
	  ;% canceshi_B.DataTypeConversion3
	  section.data(6).logicalSrcIdx = 66;
	  section.data(6).dtTransOffset = 5;
	
	  ;% canceshi_B.DataTypeConversion7_i
	  section.data(7).logicalSrcIdx = 67;
	  section.data(7).dtTransOffset = 6;
	
	  ;% canceshi_B.DataTypeConversion1_p
	  section.data(8).logicalSrcIdx = 68;
	  section.data(8).dtTransOffset = 7;
	
	  ;% canceshi_B.DataTypeConversion2_n
	  section.data(9).logicalSrcIdx = 69;
	  section.data(9).dtTransOffset = 8;
	
	  ;% canceshi_B.DataTypeConversion3_b
	  section.data(10).logicalSrcIdx = 70;
	  section.data(10).dtTransOffset = 9;
	
	  ;% canceshi_B.DataTypeConversion7_h
	  section.data(11).logicalSrcIdx = 71;
	  section.data(11).dtTransOffset = 10;
	
	  ;% canceshi_B.DataTypeConversion1_k
	  section.data(12).logicalSrcIdx = 72;
	  section.data(12).dtTransOffset = 11;
	
	  ;% canceshi_B.DataTypeConversion2_k
	  section.data(13).logicalSrcIdx = 73;
	  section.data(13).dtTransOffset = 12;
	
	  ;% canceshi_B.DataTypeConversion3_n
	  section.data(14).logicalSrcIdx = 74;
	  section.data(14).dtTransOffset = 13;
	
	  ;% canceshi_B.DataTypeConversion17
	  section.data(15).logicalSrcIdx = 75;
	  section.data(15).dtTransOffset = 14;
	
	  ;% canceshi_B.DataTypeConversion18
	  section.data(16).logicalSrcIdx = 76;
	  section.data(16).dtTransOffset = 15;
	
	  ;% canceshi_B.DataTypeConversion7_m
	  section.data(17).logicalSrcIdx = 77;
	  section.data(17).dtTransOffset = 16;
	
	  ;% canceshi_B.DataTypeConversion16
	  section.data(18).logicalSrcIdx = 78;
	  section.data(18).dtTransOffset = 17;
	
	  ;% canceshi_B.DataTypeConversion1_i
	  section.data(19).logicalSrcIdx = 79;
	  section.data(19).dtTransOffset = 18;
	
	  ;% canceshi_B.DataTypeConversion2_f
	  section.data(20).logicalSrcIdx = 80;
	  section.data(20).dtTransOffset = 19;
	
	  ;% canceshi_B.DataTypeConversion3_d
	  section.data(21).logicalSrcIdx = 81;
	  section.data(21).dtTransOffset = 20;
	
	  ;% canceshi_B.DataTypeConversion4
	  section.data(22).logicalSrcIdx = 82;
	  section.data(22).dtTransOffset = 21;
	
	  ;% canceshi_B.DataTypeConversion5
	  section.data(23).logicalSrcIdx = 83;
	  section.data(23).dtTransOffset = 22;
	
	  ;% canceshi_B.DataTypeConversion6
	  section.data(24).logicalSrcIdx = 84;
	  section.data(24).dtTransOffset = 23;
	
	  ;% canceshi_B.DataTypeConversion7_k
	  section.data(25).logicalSrcIdx = 85;
	  section.data(25).dtTransOffset = 24;
	
	  ;% canceshi_B.DataTypeConversion16_e
	  section.data(26).logicalSrcIdx = 86;
	  section.data(26).dtTransOffset = 25;
	
	  ;% canceshi_B.DataTypeConversion1_e
	  section.data(27).logicalSrcIdx = 87;
	  section.data(27).dtTransOffset = 26;
	
	  ;% canceshi_B.DataTypeConversion2_np
	  section.data(28).logicalSrcIdx = 88;
	  section.data(28).dtTransOffset = 27;
	
	  ;% canceshi_B.DataTypeConversion3_m
	  section.data(29).logicalSrcIdx = 89;
	  section.data(29).dtTransOffset = 28;
	
	  ;% canceshi_B.DataTypeConversion4_l
	  section.data(30).logicalSrcIdx = 90;
	  section.data(30).dtTransOffset = 29;
	
	  ;% canceshi_B.DataTypeConversion5_m
	  section.data(31).logicalSrcIdx = 91;
	  section.data(31).dtTransOffset = 30;
	
	  ;% canceshi_B.DataTypeConversion6_i
	  section.data(32).logicalSrcIdx = 92;
	  section.data(32).dtTransOffset = 31;
	
	  ;% canceshi_B.DataTypeConversion24
	  section.data(33).logicalSrcIdx = 93;
	  section.data(33).dtTransOffset = 32;
	
	  ;% canceshi_B.DataTypeConversion18_i
	  section.data(34).logicalSrcIdx = 94;
	  section.data(34).dtTransOffset = 33;
	
	  ;% canceshi_B.DataTypeConversion17_b
	  section.data(35).logicalSrcIdx = 95;
	  section.data(35).dtTransOffset = 34;
	
	  ;% canceshi_B.DataTypeConversion19
	  section.data(36).logicalSrcIdx = 96;
	  section.data(36).dtTransOffset = 35;
	
	  ;% canceshi_B.DataTypeConversion20
	  section.data(37).logicalSrcIdx = 97;
	  section.data(37).dtTransOffset = 36;
	
	  ;% canceshi_B.DataTypeConversion21
	  section.data(38).logicalSrcIdx = 98;
	  section.data(38).dtTransOffset = 37;
	
	  ;% canceshi_B.DataTypeConversion22
	  section.data(39).logicalSrcIdx = 99;
	  section.data(39).dtTransOffset = 38;
	
	  ;% canceshi_B.DataTypeConversion23
	  section.data(40).logicalSrcIdx = 100;
	  section.data(40).dtTransOffset = 39;
	
	  ;% canceshi_B.DataTypeConversion7_e
	  section.data(41).logicalSrcIdx = 101;
	  section.data(41).dtTransOffset = 40;
	
	  ;% canceshi_B.DataTypeConversion16_n
	  section.data(42).logicalSrcIdx = 102;
	  section.data(42).dtTransOffset = 41;
	
	  ;% canceshi_B.DataTypeConversion1_o
	  section.data(43).logicalSrcIdx = 103;
	  section.data(43).dtTransOffset = 42;
	
	  ;% canceshi_B.DataTypeConversion2_j
	  section.data(44).logicalSrcIdx = 104;
	  section.data(44).dtTransOffset = 43;
	
	  ;% canceshi_B.DataTypeConversion3_j
	  section.data(45).logicalSrcIdx = 105;
	  section.data(45).dtTransOffset = 44;
	
	  ;% canceshi_B.DataTypeConversion4_p
	  section.data(46).logicalSrcIdx = 106;
	  section.data(46).dtTransOffset = 45;
	
	  ;% canceshi_B.DataTypeConversion5_o
	  section.data(47).logicalSrcIdx = 107;
	  section.data(47).dtTransOffset = 46;
	
	  ;% canceshi_B.DataTypeConversion6_e
	  section.data(48).logicalSrcIdx = 108;
	  section.data(48).dtTransOffset = 47;
	
	  ;% canceshi_B.DataTypeConversion15
	  section.data(49).logicalSrcIdx = 109;
	  section.data(49).dtTransOffset = 48;
	
	  ;% canceshi_B.DataTypeConversion9
	  section.data(50).logicalSrcIdx = 110;
	  section.data(50).dtTransOffset = 49;
	
	  ;% canceshi_B.DataTypeConversion8
	  section.data(51).logicalSrcIdx = 111;
	  section.data(51).dtTransOffset = 50;
	
	  ;% canceshi_B.DataTypeConversion10
	  section.data(52).logicalSrcIdx = 112;
	  section.data(52).dtTransOffset = 51;
	
	  ;% canceshi_B.DataTypeConversion11
	  section.data(53).logicalSrcIdx = 113;
	  section.data(53).dtTransOffset = 52;
	
	  ;% canceshi_B.DataTypeConversion12
	  section.data(54).logicalSrcIdx = 114;
	  section.data(54).dtTransOffset = 53;
	
	  ;% canceshi_B.DataTypeConversion13
	  section.data(55).logicalSrcIdx = 115;
	  section.data(55).dtTransOffset = 54;
	
	  ;% canceshi_B.DataTypeConversion14
	  section.data(56).logicalSrcIdx = 116;
	  section.data(56).dtTransOffset = 55;
	
	  ;% canceshi_B.CANbitunpacking1_o1
	  section.data(57).logicalSrcIdx = 117;
	  section.data(57).dtTransOffset = 56;
	
	  ;% canceshi_B.CANbitunpacking1_o2
	  section.data(58).logicalSrcIdx = 118;
	  section.data(58).dtTransOffset = 57;
	
	  ;% canceshi_B.CANbitunpacking1_o3
	  section.data(59).logicalSrcIdx = 119;
	  section.data(59).dtTransOffset = 58;
	
	  ;% canceshi_B.CANbitunpacking1_o4
	  section.data(60).logicalSrcIdx = 120;
	  section.data(60).dtTransOffset = 59;
	
	  ;% canceshi_B.CANbitunpacking1_o5
	  section.data(61).logicalSrcIdx = 121;
	  section.data(61).dtTransOffset = 60;
	
	  ;% canceshi_B.CANbitunpacking1_o6
	  section.data(62).logicalSrcIdx = 122;
	  section.data(62).dtTransOffset = 61;
	
	  ;% canceshi_B.CANbitunpacking1_o7
	  section.data(63).logicalSrcIdx = 123;
	  section.data(63).dtTransOffset = 62;
	
	  ;% canceshi_B.CANbitunpacking1_o8
	  section.data(64).logicalSrcIdx = 124;
	  section.data(64).dtTransOffset = 63;
	
	  ;% canceshi_B.CANbitunpacking2_o1
	  section.data(65).logicalSrcIdx = 125;
	  section.data(65).dtTransOffset = 64;
	
	  ;% canceshi_B.CANbitunpacking2_o2
	  section.data(66).logicalSrcIdx = 126;
	  section.data(66).dtTransOffset = 65;
	
	  ;% canceshi_B.CANbitunpacking2_o3
	  section.data(67).logicalSrcIdx = 127;
	  section.data(67).dtTransOffset = 66;
	
	  ;% canceshi_B.CANbitunpacking2_o4
	  section.data(68).logicalSrcIdx = 128;
	  section.data(68).dtTransOffset = 67;
	
	  ;% canceshi_B.CANbitunpacking3_o1
	  section.data(69).logicalSrcIdx = 129;
	  section.data(69).dtTransOffset = 68;
	
	  ;% canceshi_B.CANbitunpacking3_o2
	  section.data(70).logicalSrcIdx = 130;
	  section.data(70).dtTransOffset = 69;
	
	  ;% canceshi_B.CANbitunpacking3_o3
	  section.data(71).logicalSrcIdx = 131;
	  section.data(71).dtTransOffset = 70;
	
	  ;% canceshi_B.CANbitunpacking3_o4
	  section.data(72).logicalSrcIdx = 132;
	  section.data(72).dtTransOffset = 71;
	
	  ;% canceshi_B.CANbitunpacking4_o1
	  section.data(73).logicalSrcIdx = 133;
	  section.data(73).dtTransOffset = 72;
	
	  ;% canceshi_B.CANbitunpacking4_o2
	  section.data(74).logicalSrcIdx = 134;
	  section.data(74).dtTransOffset = 73;
	
	  ;% canceshi_B.CANbitunpacking4_o3
	  section.data(75).logicalSrcIdx = 135;
	  section.data(75).dtTransOffset = 74;
	
	  ;% canceshi_B.CANbitunpacking4_o4
	  section.data(76).logicalSrcIdx = 136;
	  section.data(76).dtTransOffset = 75;
	
	  ;% canceshi_B.CANbitunpacking4_o5
	  section.data(77).logicalSrcIdx = 137;
	  section.data(77).dtTransOffset = 76;
	
	  ;% canceshi_B.CANbitunpacking5_o1
	  section.data(78).logicalSrcIdx = 138;
	  section.data(78).dtTransOffset = 77;
	
	  ;% canceshi_B.CANbitunpacking5_o2
	  section.data(79).logicalSrcIdx = 139;
	  section.data(79).dtTransOffset = 78;
	
	  ;% canceshi_B.CANbitunpacking5_o3
	  section.data(80).logicalSrcIdx = 140;
	  section.data(80).dtTransOffset = 79;
	
	  ;% canceshi_B.CANbitunpacking5_o4
	  section.data(81).logicalSrcIdx = 141;
	  section.data(81).dtTransOffset = 80;
	
	  ;% canceshi_B.CANbitunpacking5_o5
	  section.data(82).logicalSrcIdx = 142;
	  section.data(82).dtTransOffset = 81;
	
	  ;% canceshi_B.DataTypeConversion2_g
	  section.data(83).logicalSrcIdx = 143;
	  section.data(83).dtTransOffset = 82;
	
	  ;% canceshi_B.DataTypeConversion3_f
	  section.data(84).logicalSrcIdx = 144;
	  section.data(84).dtTransOffset = 83;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(3) = section;
      clear section
      
      section.nData     = 4;
      section.data(4)  = dumData; %prealloc
      
	  ;% canceshi_B.RelationalOperator
	  section.data(1).logicalSrcIdx = 145;
	  section.data(1).dtTransOffset = 0;
	
	  ;% canceshi_B.RelationalOperator_h
	  section.data(2).logicalSrcIdx = 146;
	  section.data(2).dtTransOffset = 1;
	
	  ;% canceshi_B.RelationalOperator_o
	  section.data(3).logicalSrcIdx = 147;
	  section.data(3).dtTransOffset = 2;
	
	  ;% canceshi_B.RelationalOperator_g
	  section.data(4).logicalSrcIdx = 148;
	  section.data(4).dtTransOffset = 3;
	
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
    nTotSects     = 4;
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
    ;% Auto data (canceshi_DWork)
    ;%
      section.nData     = 4;
      section.data(4)  = dumData; %prealloc
      
	  ;% canceshi_DWork.Memory_PreviousInput
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% canceshi_DWork.Memory_PreviousInput_b
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 1;
	
	  ;% canceshi_DWork.Memory_PreviousInput_l
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 2;
	
	  ;% canceshi_DWork.Memory_PreviousInput_lj
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 3;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(1) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% canceshi_DWork.clockTickCounter
	  section.data(1).logicalSrcIdx = 4;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(2) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% canceshi_DWork.PCL731_IWORK
	  section.data(1).logicalSrcIdx = 5;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(3) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% canceshi_DWork.Subsystem6_SubsysRanBC
	  section.data(1).logicalSrcIdx = 6;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(4) = section;
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


  targMap.checksum0 = 1218366367;
  targMap.checksum1 = 4091892462;
  targMap.checksum2 = 2802648051;
  targMap.checksum3 = 1252586317;

