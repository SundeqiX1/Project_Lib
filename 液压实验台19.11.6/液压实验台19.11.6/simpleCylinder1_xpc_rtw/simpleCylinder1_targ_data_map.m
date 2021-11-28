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
    ;% Auto data (simpleCylinder1_P)
    ;%
      section.nData     = 149;
      section.data(149)  = dumData; %prealloc
      
	  ;% simpleCylinder1_P.Constant18_Value
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% simpleCylinder1_P.PCI2_P1_Size
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 1;
	
	  ;% simpleCylinder1_P.PCI2_P1
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 3;
	
	  ;% simpleCylinder1_P.PCI2_P2_Size
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 5;
	
	  ;% simpleCylinder1_P.PCI2_P2
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 7;
	
	  ;% simpleCylinder1_P.right7_XData
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 8;
	
	  ;% simpleCylinder1_P.right7_YData
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 10;
	
	  ;% simpleCylinder1_P.internal_sig_pos_gain_Valu
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 12;
	
	  ;% simpleCylinder1_P.Constant3_Value
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 13;
	
	  ;% simpleCylinder1_P.Memory_X0
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 18;
	
	  ;% simpleCylinder1_P.Constant4_Value
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 19;
	
	  ;% simpleCylinder1_P.a_Value
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 20;
	
	  ;% simpleCylinder1_P.Constant1_Value
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 21;
	
	  ;% simpleCylinder1_P.RateLimiter_RisingLim
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 22;
	
	  ;% simpleCylinder1_P.RateLimiter_FallingLim
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 23;
	
	  ;% simpleCylinder1_P.Sin_fuzhi_Value
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 24;
	
	  ;% simpleCylinder1_P.Gain_Gain
	  section.data(17).logicalSrcIdx = 16;
	  section.data(17).dtTransOffset = 25;
	
	  ;% simpleCylinder1_P.Sin_pinlv_Value
	  section.data(18).logicalSrcIdx = 17;
	  section.data(18).dtTransOffset = 26;
	
	  ;% simpleCylinder1_P.Sin_xiangwei_Value
	  section.data(19).logicalSrcIdx = 18;
	  section.data(19).dtTransOffset = 27;
	
	  ;% simpleCylinder1_P.Sin_bias_Value
	  section.data(20).logicalSrcIdx = 19;
	  section.data(20).dtTransOffset = 28;
	
	  ;% simpleCylinder1_P.Gain1_Gain
	  section.data(21).logicalSrcIdx = 20;
	  section.data(21).dtTransOffset = 29;
	
	  ;% simpleCylinder1_P.Square_fuzhi_Value
	  section.data(22).logicalSrcIdx = 21;
	  section.data(22).dtTransOffset = 30;
	
	  ;% simpleCylinder1_P.Gain6_Gain
	  section.data(23).logicalSrcIdx = 22;
	  section.data(23).dtTransOffset = 31;
	
	  ;% simpleCylinder1_P.Square_zhouqi_Value
	  section.data(24).logicalSrcIdx = 23;
	  section.data(24).dtTransOffset = 32;
	
	  ;% simpleCylinder1_P.Square_bias_Value
	  section.data(25).logicalSrcIdx = 24;
	  section.data(25).dtTransOffset = 33;
	
	  ;% simpleCylinder1_P.Gain2_Gain
	  section.data(26).logicalSrcIdx = 25;
	  section.data(26).dtTransOffset = 34;
	
	  ;% simpleCylinder1_P.Memory_X0_m
	  section.data(27).logicalSrcIdx = 26;
	  section.data(27).dtTransOffset = 35;
	
	  ;% simpleCylinder1_P.constant12_Value
	  section.data(28).logicalSrcIdx = 27;
	  section.data(28).dtTransOffset = 36;
	
	  ;% simpleCylinder1_P.constant11_Value
	  section.data(29).logicalSrcIdx = 28;
	  section.data(29).dtTransOffset = 37;
	
	  ;% simpleCylinder1_P.Memory1_X0
	  section.data(30).logicalSrcIdx = 29;
	  section.data(30).dtTransOffset = 38;
	
	  ;% simpleCylinder1_P.StartLimiter_RisingLim
	  section.data(31).logicalSrcIdx = 30;
	  section.data(31).dtTransOffset = 39;
	
	  ;% simpleCylinder1_P.StartLimiter_FallingLim
	  section.data(32).logicalSrcIdx = 31;
	  section.data(32).dtTransOffset = 40;
	
	  ;% simpleCylinder1_P.ReadyLimiter_RisingLim
	  section.data(33).logicalSrcIdx = 32;
	  section.data(33).dtTransOffset = 41;
	
	  ;% simpleCylinder1_P.ReadyLimiter_FallingLim
	  section.data(34).logicalSrcIdx = 33;
	  section.data(34).dtTransOffset = 42;
	
	  ;% simpleCylinder1_P.fade_in_fade_out_XData
	  section.data(35).logicalSrcIdx = 34;
	  section.data(35).dtTransOffset = 43;
	
	  ;% simpleCylinder1_P.fade_in_fade_out_YData
	  section.data(36).logicalSrcIdx = 35;
	  section.data(36).dtTransOffset = 1044;
	
	  ;% simpleCylinder1_P.Gain5_Gain
	  section.data(37).logicalSrcIdx = 36;
	  section.data(37).dtTransOffset = 2045;
	
	  ;% simpleCylinder1_P.u_A
	  section.data(38).logicalSrcIdx = 37;
	  section.data(38).dtTransOffset = 2046;
	
	  ;% simpleCylinder1_P.u_B
	  section.data(39).logicalSrcIdx = 38;
	  section.data(39).dtTransOffset = 2077;
	
	  ;% simpleCylinder1_P.u_C
	  section.data(40).logicalSrcIdx = 39;
	  section.data(40).dtTransOffset = 2078;
	
	  ;% simpleCylinder1_P.u_X0
	  section.data(41).logicalSrcIdx = 41;
	  section.data(41).dtTransOffset = 2079;
	
	  ;% simpleCylinder1_P.scale_gain_Gain
	  section.data(42).logicalSrcIdx = 42;
	  section.data(42).dtTransOffset = 2080;
	
	  ;% simpleCylinder1_P.u0_A
	  section.data(43).logicalSrcIdx = 43;
	  section.data(43).dtTransOffset = 2081;
	
	  ;% simpleCylinder1_P.u0_B
	  section.data(44).logicalSrcIdx = 44;
	  section.data(44).dtTransOffset = 2112;
	
	  ;% simpleCylinder1_P.u0_C
	  section.data(45).logicalSrcIdx = 45;
	  section.data(45).dtTransOffset = 2113;
	
	  ;% simpleCylinder1_P.u0_X0
	  section.data(46).logicalSrcIdx = 47;
	  section.data(46).dtTransOffset = 2114;
	
	  ;% simpleCylinder1_P.scale_gain1_Gain
	  section.data(47).logicalSrcIdx = 48;
	  section.data(47).dtTransOffset = 2115;
	
	  ;% simpleCylinder1_P.u0_A_o
	  section.data(48).logicalSrcIdx = 49;
	  section.data(48).dtTransOffset = 2116;
	
	  ;% simpleCylinder1_P.u0_B_i
	  section.data(49).logicalSrcIdx = 50;
	  section.data(49).dtTransOffset = 2147;
	
	  ;% simpleCylinder1_P.u0_C_k
	  section.data(50).logicalSrcIdx = 51;
	  section.data(50).dtTransOffset = 2148;
	
	  ;% simpleCylinder1_P.u0_X0_d
	  section.data(51).logicalSrcIdx = 53;
	  section.data(51).dtTransOffset = 2149;
	
	  ;% simpleCylinder1_P.scale_gain2_Gain
	  section.data(52).logicalSrcIdx = 54;
	  section.data(52).dtTransOffset = 2150;
	
	  ;% simpleCylinder1_P.u0_A_e
	  section.data(53).logicalSrcIdx = 55;
	  section.data(53).dtTransOffset = 2151;
	
	  ;% simpleCylinder1_P.u0_B_d
	  section.data(54).logicalSrcIdx = 56;
	  section.data(54).dtTransOffset = 2182;
	
	  ;% simpleCylinder1_P.u0_C_b
	  section.data(55).logicalSrcIdx = 57;
	  section.data(55).dtTransOffset = 2183;
	
	  ;% simpleCylinder1_P.u0_X0_n
	  section.data(56).logicalSrcIdx = 59;
	  section.data(56).dtTransOffset = 2184;
	
	  ;% simpleCylinder1_P.scale_gain3_Gain
	  section.data(57).logicalSrcIdx = 60;
	  section.data(57).dtTransOffset = 2185;
	
	  ;% simpleCylinder1_P.u0_A_g
	  section.data(58).logicalSrcIdx = 61;
	  section.data(58).dtTransOffset = 2186;
	
	  ;% simpleCylinder1_P.u0_B_m
	  section.data(59).logicalSrcIdx = 62;
	  section.data(59).dtTransOffset = 2217;
	
	  ;% simpleCylinder1_P.u0_C_i
	  section.data(60).logicalSrcIdx = 63;
	  section.data(60).dtTransOffset = 2218;
	
	  ;% simpleCylinder1_P.u0_X0_m
	  section.data(61).logicalSrcIdx = 65;
	  section.data(61).dtTransOffset = 2219;
	
	  ;% simpleCylinder1_P.scale_gain4_Gain
	  section.data(62).logicalSrcIdx = 66;
	  section.data(62).dtTransOffset = 2220;
	
	  ;% simpleCylinder1_P.rand_freq_sel_Value
	  section.data(63).logicalSrcIdx = 67;
	  section.data(63).dtTransOffset = 2221;
	
	  ;% simpleCylinder1_P.random_gain_Gain
	  section.data(64).logicalSrcIdx = 68;
	  section.data(64).dtTransOffset = 2222;
	
	  ;% simpleCylinder1_P.Gain3_Gain
	  section.data(65).logicalSrcIdx = 69;
	  section.data(65).dtTransOffset = 2223;
	
	  ;% simpleCylinder1_P.Gain4_Gain
	  section.data(66).logicalSrcIdx = 70;
	  section.data(66).dtTransOffset = 2224;
	
	  ;% simpleCylinder1_P.standby_position_Value
	  section.data(67).logicalSrcIdx = 71;
	  section.data(67).dtTransOffset = 2225;
	
	  ;% simpleCylinder1_P.standby_position3_Value
	  section.data(68).logicalSrcIdx = 72;
	  section.data(68).dtTransOffset = 2226;
	
	  ;% simpleCylinder1_P.sel_Value
	  section.data(69).logicalSrcIdx = 73;
	  section.data(69).dtTransOffset = 2227;
	
	  ;% simpleCylinder1_P.internal_sig_acc_gain_Valu
	  section.data(70).logicalSrcIdx = 74;
	  section.data(70).dtTransOffset = 2228;
	
	  ;% simpleCylinder1_P.Discreteinversefit_A
	  section.data(71).logicalSrcIdx = 75;
	  section.data(71).dtTransOffset = 2229;
	
	  ;% simpleCylinder1_P.Discreteinversefit_C
	  section.data(72).logicalSrcIdx = 76;
	  section.data(72).dtTransOffset = 2235;
	
	  ;% simpleCylinder1_P.Discreteinversefit_D
	  section.data(73).logicalSrcIdx = 77;
	  section.data(73).dtTransOffset = 2241;
	
	  ;% simpleCylinder1_P.Saturation4_UpperSat
	  section.data(74).logicalSrcIdx = 79;
	  section.data(74).dtTransOffset = 2242;
	
	  ;% simpleCylinder1_P.Saturation4_LowerSat
	  section.data(75).logicalSrcIdx = 80;
	  section.data(75).dtTransOffset = 2243;
	
	  ;% simpleCylinder1_P.Constant2_Value
	  section.data(76).logicalSrcIdx = 81;
	  section.data(76).dtTransOffset = 2244;
	
	  ;% simpleCylinder1_P.Integrator_IC
	  section.data(77).logicalSrcIdx = 82;
	  section.data(77).dtTransOffset = 2245;
	
	  ;% simpleCylinder1_P.Constant16_Value
	  section.data(78).logicalSrcIdx = 83;
	  section.data(78).dtTransOffset = 2246;
	
	  ;% simpleCylinder1_P.Constant_Value
	  section.data(79).logicalSrcIdx = 84;
	  section.data(79).dtTransOffset = 2247;
	
	  ;% simpleCylinder1_P.Constant_Value_e
	  section.data(80).logicalSrcIdx = 85;
	  section.data(80).dtTransOffset = 2248;
	
	  ;% simpleCylinder1_P.Gain1_Gain_p
	  section.data(81).logicalSrcIdx = 86;
	  section.data(81).dtTransOffset = 2249;
	
	  ;% simpleCylinder1_P.Gain2_Gain_b
	  section.data(82).logicalSrcIdx = 87;
	  section.data(82).dtTransOffset = 2250;
	
	  ;% simpleCylinder1_P.UnitDelay_X0
	  section.data(83).logicalSrcIdx = 88;
	  section.data(83).dtTransOffset = 2251;
	
	  ;% simpleCylinder1_P.standby_position4_Value
	  section.data(84).logicalSrcIdx = 89;
	  section.data(84).dtTransOffset = 2252;
	
	  ;% simpleCylinder1_P.standby_position1_Value
	  section.data(85).logicalSrcIdx = 90;
	  section.data(85).dtTransOffset = 2253;
	
	  ;% simpleCylinder1_P.gain3_Gain
	  section.data(86).logicalSrcIdx = 91;
	  section.data(86).dtTransOffset = 2254;
	
	  ;% simpleCylinder1_P.DA2_P1_Size
	  section.data(87).logicalSrcIdx = 92;
	  section.data(87).dtTransOffset = 2255;
	
	  ;% simpleCylinder1_P.DA2_P1
	  section.data(88).logicalSrcIdx = 93;
	  section.data(88).dtTransOffset = 2257;
	
	  ;% simpleCylinder1_P.DA2_P2_Size
	  section.data(89).logicalSrcIdx = 94;
	  section.data(89).dtTransOffset = 2258;
	
	  ;% simpleCylinder1_P.DA2_P2
	  section.data(90).logicalSrcIdx = 95;
	  section.data(90).dtTransOffset = 2260;
	
	  ;% simpleCylinder1_P.DA2_P3_Size
	  section.data(91).logicalSrcIdx = 96;
	  section.data(91).dtTransOffset = 2261;
	
	  ;% simpleCylinder1_P.DA2_P3
	  section.data(92).logicalSrcIdx = 97;
	  section.data(92).dtTransOffset = 2263;
	
	  ;% simpleCylinder1_P.Constant3_Value_b
	  section.data(93).logicalSrcIdx = 98;
	  section.data(93).dtTransOffset = 2265;
	
	  ;% simpleCylinder1_P.SignalGenerator2_Amplitude
	  section.data(94).logicalSrcIdx = 99;
	  section.data(94).dtTransOffset = 2266;
	
	  ;% simpleCylinder1_P.SignalGenerator2_Frequency
	  section.data(95).logicalSrcIdx = 100;
	  section.data(95).dtTransOffset = 2267;
	
	  ;% simpleCylinder1_P.SignalGenerator3_Amplitude
	  section.data(96).logicalSrcIdx = 101;
	  section.data(96).dtTransOffset = 2268;
	
	  ;% simpleCylinder1_P.SignalGenerator3_Frequency
	  section.data(97).logicalSrcIdx = 102;
	  section.data(97).dtTransOffset = 2269;
	
	  ;% simpleCylinder1_P.SignalGenerator4_Amplitude
	  section.data(98).logicalSrcIdx = 103;
	  section.data(98).dtTransOffset = 2270;
	
	  ;% simpleCylinder1_P.SignalGenerator4_Frequency
	  section.data(99).logicalSrcIdx = 104;
	  section.data(99).dtTransOffset = 2271;
	
	  ;% simpleCylinder1_P.SignalGenerator5_Amplitude
	  section.data(100).logicalSrcIdx = 105;
	  section.data(100).dtTransOffset = 2272;
	
	  ;% simpleCylinder1_P.SignalGenerator5_Frequency
	  section.data(101).logicalSrcIdx = 106;
	  section.data(101).dtTransOffset = 2273;
	
	  ;% simpleCylinder1_P.SignalGenerator6_Amplitude
	  section.data(102).logicalSrcIdx = 107;
	  section.data(102).dtTransOffset = 2274;
	
	  ;% simpleCylinder1_P.SignalGenerator6_Frequency
	  section.data(103).logicalSrcIdx = 108;
	  section.data(103).dtTransOffset = 2275;
	
	  ;% simpleCylinder1_P.SignalGenerator7_Amplitude
	  section.data(104).logicalSrcIdx = 109;
	  section.data(104).dtTransOffset = 2276;
	
	  ;% simpleCylinder1_P.SignalGenerator7_Frequency
	  section.data(105).logicalSrcIdx = 110;
	  section.data(105).dtTransOffset = 2277;
	
	  ;% simpleCylinder1_P.SignalGenerator8_Amplitude
	  section.data(106).logicalSrcIdx = 111;
	  section.data(106).dtTransOffset = 2278;
	
	  ;% simpleCylinder1_P.SignalGenerator8_Frequency
	  section.data(107).logicalSrcIdx = 112;
	  section.data(107).dtTransOffset = 2279;
	
	  ;% simpleCylinder1_P.SignalGenerator9_Amplitude
	  section.data(108).logicalSrcIdx = 113;
	  section.data(108).dtTransOffset = 2280;
	
	  ;% simpleCylinder1_P.SignalGenerator9_Frequency
	  section.data(109).logicalSrcIdx = 114;
	  section.data(109).dtTransOffset = 2281;
	
	  ;% simpleCylinder1_P.SignalGenerator10_Amplitud
	  section.data(110).logicalSrcIdx = 115;
	  section.data(110).dtTransOffset = 2282;
	
	  ;% simpleCylinder1_P.SignalGenerator10_Frequenc
	  section.data(111).logicalSrcIdx = 116;
	  section.data(111).dtTransOffset = 2283;
	
	  ;% simpleCylinder1_P.SignalGenerator11_Amplitud
	  section.data(112).logicalSrcIdx = 117;
	  section.data(112).dtTransOffset = 2284;
	
	  ;% simpleCylinder1_P.SignalGenerator11_Frequenc
	  section.data(113).logicalSrcIdx = 118;
	  section.data(113).dtTransOffset = 2285;
	
	  ;% simpleCylinder1_P.Constant2_Value_n
	  section.data(114).logicalSrcIdx = 119;
	  section.data(114).dtTransOffset = 2286;
	
	  ;% simpleCylinder1_P.SignalGenerator12_Amplitud
	  section.data(115).logicalSrcIdx = 120;
	  section.data(115).dtTransOffset = 2292;
	
	  ;% simpleCylinder1_P.SignalGenerator12_Frequenc
	  section.data(116).logicalSrcIdx = 121;
	  section.data(116).dtTransOffset = 2293;
	
	  ;% simpleCylinder1_P.SignalGenerator13_Amplitud
	  section.data(117).logicalSrcIdx = 122;
	  section.data(117).dtTransOffset = 2294;
	
	  ;% simpleCylinder1_P.SignalGenerator13_Frequenc
	  section.data(118).logicalSrcIdx = 123;
	  section.data(118).dtTransOffset = 2295;
	
	  ;% simpleCylinder1_P.SignalGenerator14_Amplitud
	  section.data(119).logicalSrcIdx = 124;
	  section.data(119).dtTransOffset = 2296;
	
	  ;% simpleCylinder1_P.SignalGenerator14_Frequenc
	  section.data(120).logicalSrcIdx = 125;
	  section.data(120).dtTransOffset = 2297;
	
	  ;% simpleCylinder1_P.SignalGenerator15_Amplitud
	  section.data(121).logicalSrcIdx = 126;
	  section.data(121).dtTransOffset = 2298;
	
	  ;% simpleCylinder1_P.SignalGenerator15_Frequenc
	  section.data(122).logicalSrcIdx = 127;
	  section.data(122).dtTransOffset = 2299;
	
	  ;% simpleCylinder1_P.SignalGenerator16_Amplitud
	  section.data(123).logicalSrcIdx = 128;
	  section.data(123).dtTransOffset = 2300;
	
	  ;% simpleCylinder1_P.SignalGenerator16_Frequenc
	  section.data(124).logicalSrcIdx = 129;
	  section.data(124).dtTransOffset = 2301;
	
	  ;% simpleCylinder1_P.SignalGenerator17_Amplitud
	  section.data(125).logicalSrcIdx = 130;
	  section.data(125).dtTransOffset = 2302;
	
	  ;% simpleCylinder1_P.SignalGenerator17_Frequenc
	  section.data(126).logicalSrcIdx = 131;
	  section.data(126).dtTransOffset = 2303;
	
	  ;% simpleCylinder1_P.Constant1_Value_j
	  section.data(127).logicalSrcIdx = 132;
	  section.data(127).dtTransOffset = 2304;
	
	  ;% simpleCylinder1_P.Gain_Gain_e
	  section.data(128).logicalSrcIdx = 133;
	  section.data(128).dtTransOffset = 2305;
	
	  ;% simpleCylinder1_P.Encoded_data_Gain
	  section.data(129).logicalSrcIdx = 134;
	  section.data(129).dtTransOffset = 2306;
	
	  ;% simpleCylinder1_P.gain1_Gain
	  section.data(130).logicalSrcIdx = 135;
	  section.data(130).dtTransOffset = 2307;
	
	  ;% simpleCylinder1_P.gain2_Gain
	  section.data(131).logicalSrcIdx = 136;
	  section.data(131).dtTransOffset = 2308;
	
	  ;% simpleCylinder1_P.random_Min
	  section.data(132).logicalSrcIdx = 137;
	  section.data(132).dtTransOffset = 2309;
	
	  ;% simpleCylinder1_P.random_Max
	  section.data(133).logicalSrcIdx = 138;
	  section.data(133).dtTransOffset = 2310;
	
	  ;% simpleCylinder1_P.random_Seed
	  section.data(134).logicalSrcIdx = 139;
	  section.data(134).dtTransOffset = 2311;
	
	  ;% simpleCylinder1_P.Constant15_Value
	  section.data(135).logicalSrcIdx = 140;
	  section.data(135).dtTransOffset = 2312;
	
	  ;% simpleCylinder1_P.Constant14_Value
	  section.data(136).logicalSrcIdx = 141;
	  section.data(136).dtTransOffset = 2313;
	
	  ;% simpleCylinder1_P.Saturation1_UpperSat
	  section.data(137).logicalSrcIdx = 142;
	  section.data(137).dtTransOffset = 2314;
	
	  ;% simpleCylinder1_P.Saturation1_LowerSat
	  section.data(138).logicalSrcIdx = 143;
	  section.data(138).dtTransOffset = 2315;
	
	  ;% simpleCylinder1_P.sweep_mode_Value
	  section.data(139).logicalSrcIdx = 144;
	  section.data(139).dtTransOffset = 2316;
	
	  ;% simpleCylinder1_P.Chirp_Gain_Gain
	  section.data(140).logicalSrcIdx = 145;
	  section.data(140).dtTransOffset = 2317;
	
	  ;% simpleCylinder1_P.Memory_X0_j
	  section.data(141).logicalSrcIdx = 146;
	  section.data(141).dtTransOffset = 2318;
	
	  ;% simpleCylinder1_P.Gain1_Gain_i
	  section.data(142).logicalSrcIdx = 147;
	  section.data(142).dtTransOffset = 2319;
	
	  ;% simpleCylinder1_P.Constant2_Value_h
	  section.data(143).logicalSrcIdx = 148;
	  section.data(143).dtTransOffset = 2320;
	
	  ;% simpleCylinder1_P.Constant3_Value_c
	  section.data(144).logicalSrcIdx = 149;
	  section.data(144).dtTransOffset = 2321;
	
	  ;% simpleCylinder1_P.mod_Value
	  section.data(145).logicalSrcIdx = 150;
	  section.data(145).dtTransOffset = 2322;
	
	  ;% simpleCylinder1_P.Gain2_Gain_m
	  section.data(146).logicalSrcIdx = 151;
	  section.data(146).dtTransOffset = 2323;
	
	  ;% simpleCylinder1_P.SquareGain_Gain
	  section.data(147).logicalSrcIdx = 152;
	  section.data(147).dtTransOffset = 2324;
	
	  ;% simpleCylinder1_P.Saturation2_UpperSat
	  section.data(148).logicalSrcIdx = 153;
	  section.data(148).dtTransOffset = 2325;
	
	  ;% simpleCylinder1_P.Saturation2_LowerSat
	  section.data(149).logicalSrcIdx = 154;
	  section.data(149).dtTransOffset = 2326;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(1) = section;
      clear section
      
      section.nData     = 4;
      section.data(4)  = dumData; %prealloc
      
	  ;% simpleCylinder1_P.Constant_Value_m
	  section.data(1).logicalSrcIdx = 155;
	  section.data(1).dtTransOffset = 0;
	
	  ;% simpleCylinder1_P.SwitchControl_Threshold
	  section.data(2).logicalSrcIdx = 156;
	  section.data(2).dtTransOffset = 1;
	
	  ;% simpleCylinder1_P.Constant_Value_d
	  section.data(3).logicalSrcIdx = 157;
	  section.data(3).dtTransOffset = 2;
	
	  ;% simpleCylinder1_P.SwitchControl_Threshold_b
	  section.data(4).logicalSrcIdx = 158;
	  section.data(4).dtTransOffset = 3;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(2) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% simpleCylinder1_P.c_Value
	  section.data(1).logicalSrcIdx = 159;
	  section.data(1).dtTransOffset = 0;
	
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
    nTotSects     = 6;
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
    ;% Auto data (simpleCylinder1_B)
    ;%
      section.nData     = 132;
      section.data(132)  = dumData; %prealloc
      
	  ;% simpleCylinder1_B.PCI2
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% simpleCylinder1_B.right7
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 16;
	
	  ;% simpleCylinder1_B.SwitchControl
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 17;
	
	  ;% simpleCylinder1_B.Memory
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 18;
	
	  ;% simpleCylinder1_B.Assignment1
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 23;
	
	  ;% simpleCylinder1_B.SumofElements
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 28;
	
	  ;% simpleCylinder1_B.Width
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 29;
	
	  ;% simpleCylinder1_B.Subtract
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 30;
	
	  ;% simpleCylinder1_B.Switch
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 31;
	
	  ;% simpleCylinder1_B.RateLimiter
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 36;
	
	  ;% simpleCylinder1_B.Gain
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 41;
	
	  ;% simpleCylinder1_B.Gain1
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 42;
	
	  ;% simpleCylinder1_B.Product4
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 43;
	
	  ;% simpleCylinder1_B.Gain6
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 44;
	
	  ;% simpleCylinder1_B.Gain2
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 45;
	
	  ;% simpleCylinder1_B.Product5
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 46;
	
	  ;% simpleCylinder1_B.Memory_l
	  section.data(17).logicalSrcIdx = 16;
	  section.data(17).dtTransOffset = 47;
	
	  ;% simpleCylinder1_B.DataTypeConversion3
	  section.data(18).logicalSrcIdx = 17;
	  section.data(18).dtTransOffset = 48;
	
	  ;% simpleCylinder1_B.DataTypeConversion2
	  section.data(19).logicalSrcIdx = 18;
	  section.data(19).dtTransOffset = 49;
	
	  ;% simpleCylinder1_B.Memory1
	  section.data(20).logicalSrcIdx = 19;
	  section.data(20).dtTransOffset = 50;
	
	  ;% simpleCylinder1_B.DataTypeConversion
	  section.data(21).logicalSrcIdx = 20;
	  section.data(21).dtTransOffset = 51;
	
	  ;% simpleCylinder1_B.StartLimiter
	  section.data(22).logicalSrcIdx = 21;
	  section.data(22).dtTransOffset = 52;
	
	  ;% simpleCylinder1_B.DataTypeConversion1
	  section.data(23).logicalSrcIdx = 22;
	  section.data(23).dtTransOffset = 53;
	
	  ;% simpleCylinder1_B.ReadyLimiter
	  section.data(24).logicalSrcIdx = 23;
	  section.data(24).dtTransOffset = 54;
	
	  ;% simpleCylinder1_B.fade_in_fade_out
	  section.data(25).logicalSrcIdx = 24;
	  section.data(25).dtTransOffset = 56;
	
	  ;% simpleCylinder1_B.Gain5
	  section.data(26).logicalSrcIdx = 25;
	  section.data(26).dtTransOffset = 59;
	
	  ;% simpleCylinder1_B.Product9
	  section.data(27).logicalSrcIdx = 26;
	  section.data(27).dtTransOffset = 60;
	
	  ;% simpleCylinder1_B.u
	  section.data(28).logicalSrcIdx = 27;
	  section.data(28).dtTransOffset = 61;
	
	  ;% simpleCylinder1_B.scale_gain
	  section.data(29).logicalSrcIdx = 28;
	  section.data(29).dtTransOffset = 62;
	
	  ;% simpleCylinder1_B.u0
	  section.data(30).logicalSrcIdx = 29;
	  section.data(30).dtTransOffset = 63;
	
	  ;% simpleCylinder1_B.scale_gain1
	  section.data(31).logicalSrcIdx = 30;
	  section.data(31).dtTransOffset = 64;
	
	  ;% simpleCylinder1_B.u0_n
	  section.data(32).logicalSrcIdx = 31;
	  section.data(32).dtTransOffset = 65;
	
	  ;% simpleCylinder1_B.scale_gain2
	  section.data(33).logicalSrcIdx = 32;
	  section.data(33).dtTransOffset = 66;
	
	  ;% simpleCylinder1_B.u0_o
	  section.data(34).logicalSrcIdx = 33;
	  section.data(34).dtTransOffset = 67;
	
	  ;% simpleCylinder1_B.scale_gain3
	  section.data(35).logicalSrcIdx = 34;
	  section.data(35).dtTransOffset = 68;
	
	  ;% simpleCylinder1_B.u0_g
	  section.data(36).logicalSrcIdx = 35;
	  section.data(36).dtTransOffset = 69;
	
	  ;% simpleCylinder1_B.scale_gain4
	  section.data(37).logicalSrcIdx = 36;
	  section.data(37).dtTransOffset = 70;
	
	  ;% simpleCylinder1_B.TmpHiddenBufferAtSelector7Inpor
	  section.data(38).logicalSrcIdx = 37;
	  section.data(38).dtTransOffset = 71;
	
	  ;% simpleCylinder1_B.Selector7
	  section.data(39).logicalSrcIdx = 38;
	  section.data(39).dtTransOffset = 76;
	
	  ;% simpleCylinder1_B.random_gain
	  section.data(40).logicalSrcIdx = 39;
	  section.data(40).dtTransOffset = 77;
	
	  ;% simpleCylinder1_B.Gain3
	  section.data(41).logicalSrcIdx = 40;
	  section.data(41).dtTransOffset = 78;
	
	  ;% simpleCylinder1_B.Product1
	  section.data(42).logicalSrcIdx = 41;
	  section.data(42).dtTransOffset = 79;
	
	  ;% simpleCylinder1_B.Gain4
	  section.data(43).logicalSrcIdx = 42;
	  section.data(43).dtTransOffset = 80;
	
	  ;% simpleCylinder1_B.Product6
	  section.data(44).logicalSrcIdx = 43;
	  section.data(44).dtTransOffset = 81;
	
	  ;% simpleCylinder1_B.Sum2
	  section.data(45).logicalSrcIdx = 44;
	  section.data(45).dtTransOffset = 82;
	
	  ;% simpleCylinder1_B.Product5_m
	  section.data(46).logicalSrcIdx = 45;
	  section.data(46).dtTransOffset = 83;
	
	  ;% simpleCylinder1_B.Product1_o
	  section.data(47).logicalSrcIdx = 46;
	  section.data(47).dtTransOffset = 84;
	
	  ;% simpleCylinder1_B.Discreteinversefit
	  section.data(48).logicalSrcIdx = 47;
	  section.data(48).dtTransOffset = 85;
	
	  ;% simpleCylinder1_B.MultiportSwitch
	  section.data(49).logicalSrcIdx = 48;
	  section.data(49).dtTransOffset = 86;
	
	  ;% simpleCylinder1_B.Saturation4
	  section.data(50).logicalSrcIdx = 49;
	  section.data(50).dtTransOffset = 87;
	
	  ;% simpleCylinder1_B.Sum7
	  section.data(51).logicalSrcIdx = 50;
	  section.data(51).dtTransOffset = 88;
	
	  ;% simpleCylinder1_B.Sum6
	  section.data(52).logicalSrcIdx = 51;
	  section.data(52).dtTransOffset = 89;
	
	  ;% simpleCylinder1_B.Product6_o
	  section.data(53).logicalSrcIdx = 52;
	  section.data(53).dtTransOffset = 90;
	
	  ;% simpleCylinder1_B.Integrator
	  section.data(54).logicalSrcIdx = 53;
	  section.data(54).dtTransOffset = 91;
	
	  ;% simpleCylinder1_B.Product3
	  section.data(55).logicalSrcIdx = 54;
	  section.data(55).dtTransOffset = 92;
	
	  ;% simpleCylinder1_B.Derivative
	  section.data(56).logicalSrcIdx = 55;
	  section.data(56).dtTransOffset = 93;
	
	  ;% simpleCylinder1_B.Product4_i
	  section.data(57).logicalSrcIdx = 56;
	  section.data(57).dtTransOffset = 94;
	
	  ;% simpleCylinder1_B.Add
	  section.data(58).logicalSrcIdx = 57;
	  section.data(58).dtTransOffset = 95;
	
	  ;% simpleCylinder1_B.Switch9
	  section.data(59).logicalSrcIdx = 58;
	  section.data(59).dtTransOffset = 96;
	
	  ;% simpleCylinder1_B.Gain1_h
	  section.data(60).logicalSrcIdx = 59;
	  section.data(60).dtTransOffset = 97;
	
	  ;% simpleCylinder1_B.Gain2_j
	  section.data(61).logicalSrcIdx = 60;
	  section.data(61).dtTransOffset = 98;
	
	  ;% simpleCylinder1_B.UnitDelay
	  section.data(62).logicalSrcIdx = 61;
	  section.data(62).dtTransOffset = 99;
	
	  ;% simpleCylinder1_B.Sum11
	  section.data(63).logicalSrcIdx = 62;
	  section.data(63).dtTransOffset = 100;
	
	  ;% simpleCylinder1_B.SwitchControl_l
	  section.data(64).logicalSrcIdx = 63;
	  section.data(64).dtTransOffset = 101;
	
	  ;% simpleCylinder1_B.gain3
	  section.data(65).logicalSrcIdx = 64;
	  section.data(65).dtTransOffset = 102;
	
	  ;% simpleCylinder1_B.SignalGenerator2
	  section.data(66).logicalSrcIdx = 65;
	  section.data(66).dtTransOffset = 103;
	
	  ;% simpleCylinder1_B.SignalGenerator3
	  section.data(67).logicalSrcIdx = 66;
	  section.data(67).dtTransOffset = 104;
	
	  ;% simpleCylinder1_B.SignalGenerator4
	  section.data(68).logicalSrcIdx = 67;
	  section.data(68).dtTransOffset = 105;
	
	  ;% simpleCylinder1_B.SignalGenerator5
	  section.data(69).logicalSrcIdx = 68;
	  section.data(69).dtTransOffset = 106;
	
	  ;% simpleCylinder1_B.SignalGenerator6
	  section.data(70).logicalSrcIdx = 69;
	  section.data(70).dtTransOffset = 107;
	
	  ;% simpleCylinder1_B.SignalGenerator7
	  section.data(71).logicalSrcIdx = 70;
	  section.data(71).dtTransOffset = 108;
	
	  ;% simpleCylinder1_B.SignalGenerator8
	  section.data(72).logicalSrcIdx = 71;
	  section.data(72).dtTransOffset = 109;
	
	  ;% simpleCylinder1_B.SignalGenerator9
	  section.data(73).logicalSrcIdx = 72;
	  section.data(73).dtTransOffset = 110;
	
	  ;% simpleCylinder1_B.SignalGenerator10
	  section.data(74).logicalSrcIdx = 73;
	  section.data(74).dtTransOffset = 111;
	
	  ;% simpleCylinder1_B.SignalGenerator11
	  section.data(75).logicalSrcIdx = 74;
	  section.data(75).dtTransOffset = 112;
	
	  ;% simpleCylinder1_B.Product1_i
	  section.data(76).logicalSrcIdx = 75;
	  section.data(76).dtTransOffset = 113;
	
	  ;% simpleCylinder1_B.SignalGenerator12
	  section.data(77).logicalSrcIdx = 76;
	  section.data(77).dtTransOffset = 119;
	
	  ;% simpleCylinder1_B.SignalGenerator13
	  section.data(78).logicalSrcIdx = 77;
	  section.data(78).dtTransOffset = 120;
	
	  ;% simpleCylinder1_B.SignalGenerator14
	  section.data(79).logicalSrcIdx = 78;
	  section.data(79).dtTransOffset = 121;
	
	  ;% simpleCylinder1_B.SignalGenerator15
	  section.data(80).logicalSrcIdx = 79;
	  section.data(80).dtTransOffset = 122;
	
	  ;% simpleCylinder1_B.SignalGenerator16
	  section.data(81).logicalSrcIdx = 80;
	  section.data(81).dtTransOffset = 123;
	
	  ;% simpleCylinder1_B.SignalGenerator17
	  section.data(82).logicalSrcIdx = 81;
	  section.data(82).dtTransOffset = 124;
	
	  ;% simpleCylinder1_B.Product
	  section.data(83).logicalSrcIdx = 82;
	  section.data(83).dtTransOffset = 125;
	
	  ;% simpleCylinder1_B.DataTypeConversion8
	  section.data(84).logicalSrcIdx = 83;
	  section.data(84).dtTransOffset = 131;
	
	  ;% simpleCylinder1_B.Sum2_p
	  section.data(85).logicalSrcIdx = 84;
	  section.data(85).dtTransOffset = 167;
	
	  ;% simpleCylinder1_B.Gain_m
	  section.data(86).logicalSrcIdx = 85;
	  section.data(86).dtTransOffset = 203;
	
	  ;% simpleCylinder1_B.encodeddata
	  section.data(87).logicalSrcIdx = 86;
	  section.data(87).dtTransOffset = 239;
	
	  ;% simpleCylinder1_B.Clock
	  section.data(88).logicalSrcIdx = 87;
	  section.data(88).dtTransOffset = 248;
	
	  ;% simpleCylinder1_B.Encoded_data
	  section.data(89).logicalSrcIdx = 88;
	  section.data(89).dtTransOffset = 249;
	
	  ;% simpleCylinder1_B.gain1
	  section.data(90).logicalSrcIdx = 89;
	  section.data(90).dtTransOffset = 259;
	
	  ;% simpleCylinder1_B.gain2
	  section.data(91).logicalSrcIdx = 90;
	  section.data(91).dtTransOffset = 260;
	
	  ;% simpleCylinder1_B.RoundingFunction1
	  section.data(92).logicalSrcIdx = 91;
	  section.data(92).dtTransOffset = 261;
	
	  ;% simpleCylinder1_B.random
	  section.data(93).logicalSrcIdx = 92;
	  section.data(93).dtTransOffset = 266;
	
	  ;% simpleCylinder1_B.Saturation2
	  section.data(94).logicalSrcIdx = 93;
	  section.data(94).dtTransOffset = 267;
	
	  ;% simpleCylinder1_B.Clock_h
	  section.data(95).logicalSrcIdx = 94;
	  section.data(95).dtTransOffset = 268;
	
	  ;% simpleCylinder1_B.MathFunction
	  section.data(96).logicalSrcIdx = 95;
	  section.data(96).dtTransOffset = 269;
	
	  ;% simpleCylinder1_B.SquareGain
	  section.data(97).logicalSrcIdx = 96;
	  section.data(97).dtTransOffset = 270;
	
	  ;% simpleCylinder1_B.Product2
	  section.data(98).logicalSrcIdx = 97;
	  section.data(98).dtTransOffset = 271;
	
	  ;% simpleCylinder1_B.TrigonometricFunction
	  section.data(99).logicalSrcIdx = 98;
	  section.data(99).dtTransOffset = 272;
	
	  ;% simpleCylinder1_B.Sign
	  section.data(100).logicalSrcIdx = 99;
	  section.data(100).dtTransOffset = 273;
	
	  ;% simpleCylinder1_B.Product4_h
	  section.data(101).logicalSrcIdx = 100;
	  section.data(101).dtTransOffset = 274;
	
	  ;% simpleCylinder1_B.Sum2_pe
	  section.data(102).logicalSrcIdx = 101;
	  section.data(102).dtTransOffset = 275;
	
	  ;% simpleCylinder1_B.Memory_h
	  section.data(103).logicalSrcIdx = 102;
	  section.data(103).dtTransOffset = 276;
	
	  ;% simpleCylinder1_B.Gain1_f
	  section.data(104).logicalSrcIdx = 103;
	  section.data(104).dtTransOffset = 277;
	
	  ;% simpleCylinder1_B.Sum1
	  section.data(105).logicalSrcIdx = 104;
	  section.data(105).dtTransOffset = 278;
	
	  ;% simpleCylinder1_B.Clock_n
	  section.data(106).logicalSrcIdx = 105;
	  section.data(106).dtTransOffset = 279;
	
	  ;% simpleCylinder1_B.Product2_l
	  section.data(107).logicalSrcIdx = 106;
	  section.data(107).dtTransOffset = 280;
	
	  ;% simpleCylinder1_B.Abs
	  section.data(108).logicalSrcIdx = 107;
	  section.data(108).dtTransOffset = 281;
	
	  ;% simpleCylinder1_B.MathFunction1
	  section.data(109).logicalSrcIdx = 108;
	  section.data(109).dtTransOffset = 282;
	
	  ;% simpleCylinder1_B.Gain2_o
	  section.data(110).logicalSrcIdx = 109;
	  section.data(110).dtTransOffset = 283;
	
	  ;% simpleCylinder1_B.MathFunction_f
	  section.data(111).logicalSrcIdx = 110;
	  section.data(111).dtTransOffset = 284;
	
	  ;% simpleCylinder1_B.Switch_d
	  section.data(112).logicalSrcIdx = 111;
	  section.data(112).dtTransOffset = 285;
	
	  ;% simpleCylinder1_B.Product1_a
	  section.data(113).logicalSrcIdx = 112;
	  section.data(113).dtTransOffset = 286;
	
	  ;% simpleCylinder1_B.Sum3
	  section.data(114).logicalSrcIdx = 113;
	  section.data(114).dtTransOffset = 287;
	
	  ;% simpleCylinder1_B.TrigonometricFunction_b
	  section.data(115).logicalSrcIdx = 114;
	  section.data(115).dtTransOffset = 288;
	
	  ;% simpleCylinder1_B.Product3_m
	  section.data(116).logicalSrcIdx = 115;
	  section.data(116).dtTransOffset = 289;
	
	  ;% simpleCylinder1_B.Sum2_i
	  section.data(117).logicalSrcIdx = 116;
	  section.data(117).dtTransOffset = 290;
	
	  ;% simpleCylinder1_B.MultiportSwitch_p
	  section.data(118).logicalSrcIdx = 117;
	  section.data(118).dtTransOffset = 291;
	
	  ;% simpleCylinder1_B.Chirp_Gain
	  section.data(119).logicalSrcIdx = 118;
	  section.data(119).dtTransOffset = 292;
	
	  ;% simpleCylinder1_B.start
	  section.data(120).logicalSrcIdx = 119;
	  section.data(120).dtTransOffset = 293;
	
	  ;% simpleCylinder1_B.start_sts
	  section.data(121).logicalSrcIdx = 120;
	  section.data(121).dtTransOffset = 294;
	
	  ;% simpleCylinder1_B.ready_sts
	  section.data(122).logicalSrcIdx = 121;
	  section.data(122).dtTransOffset = 295;
	
	  ;% simpleCylinder1_B.ready
	  section.data(123).logicalSrcIdx = 122;
	  section.data(123).dtTransOffset = 296;
	
	  ;% simpleCylinder1_B.Saturation1
	  section.data(124).logicalSrcIdx = 123;
	  section.data(124).dtTransOffset = 297;
	
	  ;% simpleCylinder1_B.Sum5
	  section.data(125).logicalSrcIdx = 124;
	  section.data(125).dtTransOffset = 298;
	
	  ;% simpleCylinder1_B.MultiportSwitch_e
	  section.data(126).logicalSrcIdx = 125;
	  section.data(126).dtTransOffset = 299;
	
	  ;% simpleCylinder1_B.Product1_h
	  section.data(127).logicalSrcIdx = 126;
	  section.data(127).dtTransOffset = 300;
	
	  ;% simpleCylinder1_B.Product_a
	  section.data(128).logicalSrcIdx = 127;
	  section.data(128).dtTransOffset = 301;
	
	  ;% simpleCylinder1_B.Sum
	  section.data(129).logicalSrcIdx = 128;
	  section.data(129).dtTransOffset = 302;
	
	  ;% simpleCylinder1_B.Sum1_c
	  section.data(130).logicalSrcIdx = 129;
	  section.data(130).dtTransOffset = 303;
	
	  ;% simpleCylinder1_B.Product_k
	  section.data(131).logicalSrcIdx = 130;
	  section.data(131).dtTransOffset = 304;
	
	  ;% simpleCylinder1_B.MultiportSwitch1
	  section.data(132).logicalSrcIdx = 131;
	  section.data(132).dtTransOffset = 305;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(1) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% simpleCylinder1_B.DataTypeConversion15
	  section.data(1).logicalSrcIdx = 132;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(2) = section;
      clear section
      
      section.nData     = 5;
      section.data(5)  = dumData; %prealloc
      
	  ;% simpleCylinder1_B.AND
	  section.data(1).logicalSrcIdx = 133;
	  section.data(1).dtTransOffset = 0;
	
	  ;% simpleCylinder1_B.HiddenBuf_InsertedFor_chirp_ena
	  section.data(2).logicalSrcIdx = 134;
	  section.data(2).dtTransOffset = 1;
	
	  ;% simpleCylinder1_B.Compare
	  section.data(3).logicalSrcIdx = 135;
	  section.data(3).dtTransOffset = 2;
	
	  ;% simpleCylinder1_B.Compare_l
	  section.data(4).logicalSrcIdx = 136;
	  section.data(4).dtTransOffset = 3;
	
	  ;% simpleCylinder1_B.Pack1
	  section.data(5).logicalSrcIdx = 137;
	  section.data(5).dtTransOffset = 4;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(3) = section;
      clear section
      
      section.nData     = 15;
      section.data(15)  = dumData; %prealloc
      
	  ;% simpleCylinder1_B.LogicalOperator1
	  section.data(1).logicalSrcIdx = 138;
	  section.data(1).dtTransOffset = 0;
	
	  ;% simpleCylinder1_B.LogicalOperator2
	  section.data(2).logicalSrcIdx = 139;
	  section.data(2).dtTransOffset = 5;
	
	  ;% simpleCylinder1_B.RelationalOperator
	  section.data(3).logicalSrcIdx = 140;
	  section.data(3).dtTransOffset = 10;
	
	  ;% simpleCylinder1_B.DataTypeConversion_c
	  section.data(4).logicalSrcIdx = 141;
	  section.data(4).dtTransOffset = 11;
	
	  ;% simpleCylinder1_B.HiddenBuf_InsertedFor_sine_at_i
	  section.data(5).logicalSrcIdx = 142;
	  section.data(5).dtTransOffset = 16;
	
	  ;% simpleCylinder1_B.HiddenBuf_InsertedFor_square_at
	  section.data(6).logicalSrcIdx = 143;
	  section.data(6).dtTransOffset = 17;
	
	  ;% simpleCylinder1_B.OR1
	  section.data(7).logicalSrcIdx = 144;
	  section.data(7).dtTransOffset = 18;
	
	  ;% simpleCylinder1_B.LogicalOperator2_f
	  section.data(8).logicalSrcIdx = 145;
	  section.data(8).dtTransOffset = 19;
	
	  ;% simpleCylinder1_B.HiddenBuf_InsertedFor_EnabledSu
	  section.data(9).logicalSrcIdx = 146;
	  section.data(9).dtTransOffset = 20;
	
	  ;% simpleCylinder1_B.HiddenBuf_InsertedFor_Enabled_d
	  section.data(10).logicalSrcIdx = 147;
	  section.data(10).dtTransOffset = 21;
	
	  ;% simpleCylinder1_B.LogicalOperator
	  section.data(11).logicalSrcIdx = 148;
	  section.data(11).dtTransOffset = 22;
	
	  ;% simpleCylinder1_B.RelationalOperator_n
	  section.data(12).logicalSrcIdx = 149;
	  section.data(12).dtTransOffset = 23;
	
	  ;% simpleCylinder1_B.RelationalOperator2
	  section.data(13).logicalSrcIdx = 150;
	  section.data(13).dtTransOffset = 24;
	
	  ;% simpleCylinder1_B.RelationalOperator1
	  section.data(14).logicalSrcIdx = 151;
	  section.data(14).dtTransOffset = 25;
	
	  ;% simpleCylinder1_B.LogicalOperator_e
	  section.data(15).logicalSrcIdx = 152;
	  section.data(15).dtTransOffset = 26;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(4) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% simpleCylinder1_B.EnabledSubsystem2.In1
	  section.data(1).logicalSrcIdx = 153;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(5) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% simpleCylinder1_B.EnabledSubsystem1.In1
	  section.data(1).logicalSrcIdx = 154;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(6) = section;
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
    nTotSects     = 11;
    sectIdxOffset = 6;
    
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
    ;% Auto data (simpleCylinder1_DWork)
    ;%
      section.nData     = 12;
      section.data(12)  = dumData; %prealloc
      
	  ;% simpleCylinder1_DWork.Discreteinversefit_DSTATE
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% simpleCylinder1_DWork.UnitDelay_DSTATE
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 6;
	
	  ;% simpleCylinder1_DWork.Memory_PreviousInput
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 7;
	
	  ;% simpleCylinder1_DWork.PrevY
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 12;
	
	  ;% simpleCylinder1_DWork.LastMajorTime
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 17;
	
	  ;% simpleCylinder1_DWork.Memory_PreviousInput_m
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 18;
	
	  ;% simpleCylinder1_DWork.Memory1_PreviousInput
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 19;
	
	  ;% simpleCylinder1_DWork.PrevY_g
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 20;
	
	  ;% simpleCylinder1_DWork.LastMajorTime_p
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 21;
	
	  ;% simpleCylinder1_DWork.PrevY_m
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 22;
	
	  ;% simpleCylinder1_DWork.LastMajorTime_e
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 24;
	
	  ;% simpleCylinder1_DWork.Memory_PreviousInput_l
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 25;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(1) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% simpleCylinder1_DWork.Derivative_RWORK.TimeStampA
	  section.data(1).logicalSrcIdx = 13;
	  section.data(1).dtTransOffset = 0;
	
	  ;% simpleCylinder1_DWork.random_RWORK.NextOutput
	  section.data(2).logicalSrcIdx = 14;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(2) = section;
      clear section
      
      section.nData     = 4;
      section.data(4)  = dumData; %prealloc
      
	  ;% simpleCylinder1_DWork.Scope1_PWORK.LoggedData
	  section.data(1).logicalSrcIdx = 15;
	  section.data(1).dtTransOffset = 0;
	
	  ;% simpleCylinder1_DWork.Scope2_PWORK.LoggedData
	  section.data(2).logicalSrcIdx = 16;
	  section.data(2).dtTransOffset = 1;
	
	  ;% simpleCylinder1_DWork.ToWorkspace_PWORK.LoggedData
	  section.data(3).logicalSrcIdx = 17;
	  section.data(3).dtTransOffset = 2;
	
	  ;% simpleCylinder1_DWork.Scope_PWORK.LoggedData
	  section.data(4).logicalSrcIdx = 18;
	  section.data(4).dtTransOffset = 3;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(3) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% simpleCylinder1_DWork.Selector7_DWORK1
	  section.data(1).logicalSrcIdx = 19;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(4) = section;
      clear section
      
      section.nData     = 4;
      section.data(4)  = dumData; %prealloc
      
	  ;% simpleCylinder1_DWork.PCI2_IWORK
	  section.data(1).logicalSrcIdx = 20;
	  section.data(1).dtTransOffset = 0;
	
	  ;% simpleCylinder1_DWork.SFunction_IWORK.AcquireOK
	  section.data(2).logicalSrcIdx = 21;
	  section.data(2).dtTransOffset = 3;
	
	  ;% simpleCylinder1_DWork.SFunction_IWORK_b.AcquireOK
	  section.data(3).logicalSrcIdx = 22;
	  section.data(3).dtTransOffset = 4;
	
	  ;% simpleCylinder1_DWork.random_IWORK.RandSeed
	  section.data(4).logicalSrcIdx = 23;
	  section.data(4).dtTransOffset = 5;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(5) = section;
      clear section
      
      section.nData     = 3;
      section.data(3)  = dumData; %prealloc
      
	  ;% simpleCylinder1_DWork.sine_MODE
	  section.data(1).logicalSrcIdx = 24;
	  section.data(1).dtTransOffset = 0;
	
	  ;% simpleCylinder1_DWork.square_MODE
	  section.data(2).logicalSrcIdx = 25;
	  section.data(2).dtTransOffset = 1;
	
	  ;% simpleCylinder1_DWork.chirp_enable_MODE
	  section.data(3).logicalSrcIdx = 26;
	  section.data(3).dtTransOffset = 2;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(6) = section;
      clear section
      
      section.nData     = 3;
      section.data(3)  = dumData; %prealloc
      
	  ;% simpleCylinder1_DWork.sine_SubsysRanBC
	  section.data(1).logicalSrcIdx = 27;
	  section.data(1).dtTransOffset = 0;
	
	  ;% simpleCylinder1_DWork.square_SubsysRanBC
	  section.data(2).logicalSrcIdx = 28;
	  section.data(2).dtTransOffset = 1;
	
	  ;% simpleCylinder1_DWork.chirp_enable_SubsysRanBC
	  section.data(3).logicalSrcIdx = 29;
	  section.data(3).dtTransOffset = 2;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(7) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% simpleCylinder1_DWork.EnabledSubsystem2.EnabledSubsystem1_MODE
	  section.data(1).logicalSrcIdx = 30;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(8) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% simpleCylinder1_DWork.EnabledSubsystem2.EnabledSubsystem1_SubsysRanBC
	  section.data(1).logicalSrcIdx = 31;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(9) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% simpleCylinder1_DWork.EnabledSubsystem1.EnabledSubsystem1_MODE
	  section.data(1).logicalSrcIdx = 32;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(10) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% simpleCylinder1_DWork.EnabledSubsystem1.EnabledSubsystem1_SubsysRanBC
	  section.data(1).logicalSrcIdx = 33;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(11) = section;
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


  targMap.checksum0 = 3265415862;
  targMap.checksum1 = 1073593435;
  targMap.checksum2 = 3391688401;
  targMap.checksum3 = 1356482253;

