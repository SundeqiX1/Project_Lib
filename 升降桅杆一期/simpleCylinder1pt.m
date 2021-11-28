

function pt = simpleCylinder1pt(flag)

if nargin == 0
  pt = [];
	      
	      
	    pt(1).blockname = 'Constant14';
	    pt(1).paramname = 'Value';
	    pt(1).class     = 'rt_SCALAR';
	    pt(1).nrows     = 1;
	    pt(1).ncols     = 1;
	    pt(1).subsource = 'SS_DOUBLE';

	      
	      
	    pt(2).blockname = 'Constant15';
	    pt(2).paramname = 'Value';
	    pt(2).class     = 'rt_SCALAR';
	    pt(2).nrows     = 1;
	    pt(2).ncols     = 1;
	    pt(2).subsource = 'SS_DOUBLE';

	      
	      
	    pt(3).blockname = 'Constant16';
	    pt(3).paramname = 'Value';
	    pt(3).class     = 'rt_SCALAR';
	    pt(3).nrows     = 1;
	    pt(3).ncols     = 1;
	    pt(3).subsource = 'SS_DOUBLE';

	      
	      
	    pt(4).blockname = 'Constant18';
	    pt(4).paramname = 'Value';
	    pt(4).class     = 'rt_SCALAR';
	    pt(4).nrows     = 1;
	    pt(4).ncols     = 1;
	    pt(4).subsource = 'SS_DOUBLE';

	      
	      
	    pt(5).blockname = 'Constant2';
	    pt(5).paramname = 'Value';
	    pt(5).class     = 'rt_SCALAR';
	    pt(5).nrows     = 1;
	    pt(5).ncols     = 1;
	    pt(5).subsource = 'SS_DOUBLE';

	      
	      
	    pt(6).blockname = 'a';
	    pt(6).paramname = 'Value';
	    pt(6).class     = 'rt_SCALAR';
	    pt(6).nrows     = 1;
	    pt(6).ncols     = 1;
	    pt(6).subsource = 'SS_DOUBLE';

	      
	      
	    pt(7).blockname = 'constant11';
	    pt(7).paramname = 'Value';
	    pt(7).class     = 'rt_SCALAR';
	    pt(7).nrows     = 1;
	    pt(7).ncols     = 1;
	    pt(7).subsource = 'SS_DOUBLE';

	      
	      
	    pt(8).blockname = 'constant12';
	    pt(8).paramname = 'Value';
	    pt(8).class     = 'rt_SCALAR';
	    pt(8).nrows     = 1;
	    pt(8).ncols     = 1;
	    pt(8).subsource = 'SS_DOUBLE';

	      
	      
	    pt(9).blockname = 'standby_position';
	    pt(9).paramname = 'Value';
	    pt(9).class     = 'rt_SCALAR';
	    pt(9).nrows     = 1;
	    pt(9).ncols     = 1;
	    pt(9).subsource = 'SS_DOUBLE';

	      
	      
	    pt(10).blockname = 'standby_position1';
	    pt(10).paramname = 'Value';
	    pt(10).class     = 'rt_SCALAR';
	    pt(10).nrows     = 1;
	    pt(10).ncols     = 1;
	    pt(10).subsource = 'SS_DOUBLE';

	      
	      
	    pt(11).blockname = 'standby_position3';
	    pt(11).paramname = 'Value';
	    pt(11).class     = 'rt_SCALAR';
	    pt(11).nrows     = 1;
	    pt(11).ncols     = 1;
	    pt(11).subsource = 'SS_DOUBLE';

	      
	      
	    pt(12).blockname = 'standby_position4';
	    pt(12).paramname = 'Value';
	    pt(12).class     = 'rt_SCALAR';
	    pt(12).nrows     = 1;
	    pt(12).ncols     = 1;
	    pt(12).subsource = 'SS_DOUBLE';

	      
	      
	    pt(13).blockname = 'gain1';
	    pt(13).paramname = 'Gain';
	    pt(13).class     = 'rt_SCALAR';
	    pt(13).nrows     = 1;
	    pt(13).ncols     = 1;
	    pt(13).subsource = 'SS_DOUBLE';

	      
	      
	    pt(14).blockname = 'gain2';
	    pt(14).paramname = 'Gain';
	    pt(14).class     = 'rt_SCALAR';
	    pt(14).nrows     = 1;
	    pt(14).ncols     = 1;
	    pt(14).subsource = 'SS_DOUBLE';

	      
	      
	    pt(15).blockname = 'gain3';
	    pt(15).paramname = 'Gain';
	    pt(15).class     = 'rt_SCALAR';
	    pt(15).nrows     = 1;
	    pt(15).ncols     = 1;
	    pt(15).subsource = 'SS_DOUBLE';

	      
	      
	    pt(16).blockname = 'Integrator';
	    pt(16).paramname = 'InitialCondition';
	    pt(16).class     = 'rt_SCALAR';
	    pt(16).nrows     = 1;
	    pt(16).ncols     = 1;
	    pt(16).subsource = 'SS_DOUBLE';

	      
	      
	    pt(17).blockname = 'right7';
	    pt(17).paramname = 'InputValues';
	    pt(17).class     = 'rt_VECTOR';
	    pt(17).nrows     = 1;
	    pt(17).ncols     = 2;
	    pt(17).subsource = 'SS_DOUBLE';

	      
	      
	    pt(18).blockname = 'right7';
	    pt(18).paramname = 'OutputValues';
	    pt(18).class     = 'rt_VECTOR';
	    pt(18).nrows     = 1;
	    pt(18).ncols     = 2;
	    pt(18).subsource = 'SS_DOUBLE';

	      
	      
	    pt(19).blockname = 'Saturation4';
	    pt(19).paramname = 'UpperLimit';
	    pt(19).class     = 'rt_SCALAR';
	    pt(19).nrows     = 1;
	    pt(19).ncols     = 1;
	    pt(19).subsource = 'SS_DOUBLE';

	      
	      
	    pt(20).blockname = 'Saturation4';
	    pt(20).paramname = 'LowerLimit';
	    pt(20).class     = 'rt_SCALAR';
	    pt(20).nrows     = 1;
	    pt(20).ncols     = 1;
	    pt(20).subsource = 'SS_DOUBLE';

	      
	      
	    pt(21).blockname = 'DA2';
	    pt(21).paramname = 'P1';
	    pt(21).class     = 'rt_SCALAR';
	    pt(21).nrows     = 1;
	    pt(21).ncols     = 1;
	    pt(21).subsource = 'SS_DOUBLE';

	      
	      
	    pt(22).blockname = 'DA2';
	    pt(22).paramname = 'P2';
	    pt(22).class     = 'rt_SCALAR';
	    pt(22).nrows     = 1;
	    pt(22).ncols     = 1;
	    pt(22).subsource = 'SS_DOUBLE';

	      
	      
	    pt(23).blockname = 'DA2';
	    pt(23).paramname = 'P3';
	    pt(23).class     = 'rt_VECTOR';
	    pt(23).nrows     = 1;
	    pt(23).ncols     = 2;
	    pt(23).subsource = 'SS_DOUBLE';

	      
	      
	    pt(24).blockname = 'PCI-2';
	    pt(24).paramname = 'P1';
	    pt(24).class     = 'rt_VECTOR';
	    pt(24).nrows     = 1;
	    pt(24).ncols     = 2;
	    pt(24).subsource = 'SS_DOUBLE';

	      
	      
	    pt(25).blockname = 'PCI-2';
	    pt(25).paramname = 'P2';
	    pt(25).class     = 'rt_SCALAR';
	    pt(25).nrows     = 1;
	    pt(25).ncols     = 1;
	    pt(25).subsource = 'SS_DOUBLE';

	      
	      
	    pt(26).blockname = 'Signal Generator10';
	    pt(26).paramname = 'Amplitude';
	    pt(26).class     = 'rt_SCALAR';
	    pt(26).nrows     = 1;
	    pt(26).ncols     = 1;
	    pt(26).subsource = 'SS_DOUBLE';

	      
	      
	    pt(27).blockname = 'Signal Generator10';
	    pt(27).paramname = 'Frequency';
	    pt(27).class     = 'rt_SCALAR';
	    pt(27).nrows     = 1;
	    pt(27).ncols     = 1;
	    pt(27).subsource = 'SS_DOUBLE';

	      
	      
	    pt(28).blockname = 'Signal Generator11';
	    pt(28).paramname = 'Amplitude';
	    pt(28).class     = 'rt_SCALAR';
	    pt(28).nrows     = 1;
	    pt(28).ncols     = 1;
	    pt(28).subsource = 'SS_DOUBLE';

	      
	      
	    pt(29).blockname = 'Signal Generator11';
	    pt(29).paramname = 'Frequency';
	    pt(29).class     = 'rt_SCALAR';
	    pt(29).nrows     = 1;
	    pt(29).ncols     = 1;
	    pt(29).subsource = 'SS_DOUBLE';

	      
	      
	    pt(30).blockname = 'Signal Generator12';
	    pt(30).paramname = 'Amplitude';
	    pt(30).class     = 'rt_SCALAR';
	    pt(30).nrows     = 1;
	    pt(30).ncols     = 1;
	    pt(30).subsource = 'SS_DOUBLE';

	      
	      
	    pt(31).blockname = 'Signal Generator12';
	    pt(31).paramname = 'Frequency';
	    pt(31).class     = 'rt_SCALAR';
	    pt(31).nrows     = 1;
	    pt(31).ncols     = 1;
	    pt(31).subsource = 'SS_DOUBLE';

	      
	      
	    pt(32).blockname = 'Signal Generator13';
	    pt(32).paramname = 'Amplitude';
	    pt(32).class     = 'rt_SCALAR';
	    pt(32).nrows     = 1;
	    pt(32).ncols     = 1;
	    pt(32).subsource = 'SS_DOUBLE';

	      
	      
	    pt(33).blockname = 'Signal Generator13';
	    pt(33).paramname = 'Frequency';
	    pt(33).class     = 'rt_SCALAR';
	    pt(33).nrows     = 1;
	    pt(33).ncols     = 1;
	    pt(33).subsource = 'SS_DOUBLE';

	      
	      
	    pt(34).blockname = 'Signal Generator14';
	    pt(34).paramname = 'Amplitude';
	    pt(34).class     = 'rt_SCALAR';
	    pt(34).nrows     = 1;
	    pt(34).ncols     = 1;
	    pt(34).subsource = 'SS_DOUBLE';

	      
	      
	    pt(35).blockname = 'Signal Generator14';
	    pt(35).paramname = 'Frequency';
	    pt(35).class     = 'rt_SCALAR';
	    pt(35).nrows     = 1;
	    pt(35).ncols     = 1;
	    pt(35).subsource = 'SS_DOUBLE';

	      
	      
	    pt(36).blockname = 'Signal Generator15';
	    pt(36).paramname = 'Amplitude';
	    pt(36).class     = 'rt_SCALAR';
	    pt(36).nrows     = 1;
	    pt(36).ncols     = 1;
	    pt(36).subsource = 'SS_DOUBLE';

	      
	      
	    pt(37).blockname = 'Signal Generator15';
	    pt(37).paramname = 'Frequency';
	    pt(37).class     = 'rt_SCALAR';
	    pt(37).nrows     = 1;
	    pt(37).ncols     = 1;
	    pt(37).subsource = 'SS_DOUBLE';

	      
	      
	    pt(38).blockname = 'Signal Generator16';
	    pt(38).paramname = 'Amplitude';
	    pt(38).class     = 'rt_SCALAR';
	    pt(38).nrows     = 1;
	    pt(38).ncols     = 1;
	    pt(38).subsource = 'SS_DOUBLE';

	      
	      
	    pt(39).blockname = 'Signal Generator16';
	    pt(39).paramname = 'Frequency';
	    pt(39).class     = 'rt_SCALAR';
	    pt(39).nrows     = 1;
	    pt(39).ncols     = 1;
	    pt(39).subsource = 'SS_DOUBLE';

	      
	      
	    pt(40).blockname = 'Signal Generator17';
	    pt(40).paramname = 'Amplitude';
	    pt(40).class     = 'rt_SCALAR';
	    pt(40).nrows     = 1;
	    pt(40).ncols     = 1;
	    pt(40).subsource = 'SS_DOUBLE';

	      
	      
	    pt(41).blockname = 'Signal Generator17';
	    pt(41).paramname = 'Frequency';
	    pt(41).class     = 'rt_SCALAR';
	    pt(41).nrows     = 1;
	    pt(41).ncols     = 1;
	    pt(41).subsource = 'SS_DOUBLE';

	      
	      
	    pt(42).blockname = 'Signal Generator2';
	    pt(42).paramname = 'Amplitude';
	    pt(42).class     = 'rt_SCALAR';
	    pt(42).nrows     = 1;
	    pt(42).ncols     = 1;
	    pt(42).subsource = 'SS_DOUBLE';

	      
	      
	    pt(43).blockname = 'Signal Generator2';
	    pt(43).paramname = 'Frequency';
	    pt(43).class     = 'rt_SCALAR';
	    pt(43).nrows     = 1;
	    pt(43).ncols     = 1;
	    pt(43).subsource = 'SS_DOUBLE';

	      
	      
	    pt(44).blockname = 'Signal Generator3';
	    pt(44).paramname = 'Amplitude';
	    pt(44).class     = 'rt_SCALAR';
	    pt(44).nrows     = 1;
	    pt(44).ncols     = 1;
	    pt(44).subsource = 'SS_DOUBLE';

	      
	      
	    pt(45).blockname = 'Signal Generator3';
	    pt(45).paramname = 'Frequency';
	    pt(45).class     = 'rt_SCALAR';
	    pt(45).nrows     = 1;
	    pt(45).ncols     = 1;
	    pt(45).subsource = 'SS_DOUBLE';

	      
	      
	    pt(46).blockname = 'Signal Generator4';
	    pt(46).paramname = 'Amplitude';
	    pt(46).class     = 'rt_SCALAR';
	    pt(46).nrows     = 1;
	    pt(46).ncols     = 1;
	    pt(46).subsource = 'SS_DOUBLE';

	      
	      
	    pt(47).blockname = 'Signal Generator4';
	    pt(47).paramname = 'Frequency';
	    pt(47).class     = 'rt_SCALAR';
	    pt(47).nrows     = 1;
	    pt(47).ncols     = 1;
	    pt(47).subsource = 'SS_DOUBLE';

	      
	      
	    pt(48).blockname = 'Signal Generator5';
	    pt(48).paramname = 'Amplitude';
	    pt(48).class     = 'rt_SCALAR';
	    pt(48).nrows     = 1;
	    pt(48).ncols     = 1;
	    pt(48).subsource = 'SS_DOUBLE';

	      
	      
	    pt(49).blockname = 'Signal Generator5';
	    pt(49).paramname = 'Frequency';
	    pt(49).class     = 'rt_SCALAR';
	    pt(49).nrows     = 1;
	    pt(49).ncols     = 1;
	    pt(49).subsource = 'SS_DOUBLE';

	      
	      
	    pt(50).blockname = 'Signal Generator6';
	    pt(50).paramname = 'Amplitude';
	    pt(50).class     = 'rt_SCALAR';
	    pt(50).nrows     = 1;
	    pt(50).ncols     = 1;
	    pt(50).subsource = 'SS_DOUBLE';

	      
	      
	    pt(51).blockname = 'Signal Generator6';
	    pt(51).paramname = 'Frequency';
	    pt(51).class     = 'rt_SCALAR';
	    pt(51).nrows     = 1;
	    pt(51).ncols     = 1;
	    pt(51).subsource = 'SS_DOUBLE';

	      
	      
	    pt(52).blockname = 'Signal Generator7';
	    pt(52).paramname = 'Amplitude';
	    pt(52).class     = 'rt_SCALAR';
	    pt(52).nrows     = 1;
	    pt(52).ncols     = 1;
	    pt(52).subsource = 'SS_DOUBLE';

	      
	      
	    pt(53).blockname = 'Signal Generator7';
	    pt(53).paramname = 'Frequency';
	    pt(53).class     = 'rt_SCALAR';
	    pt(53).nrows     = 1;
	    pt(53).ncols     = 1;
	    pt(53).subsource = 'SS_DOUBLE';

	      
	      
	    pt(54).blockname = 'Signal Generator8';
	    pt(54).paramname = 'Amplitude';
	    pt(54).class     = 'rt_SCALAR';
	    pt(54).nrows     = 1;
	    pt(54).ncols     = 1;
	    pt(54).subsource = 'SS_DOUBLE';

	      
	      
	    pt(55).blockname = 'Signal Generator8';
	    pt(55).paramname = 'Frequency';
	    pt(55).class     = 'rt_SCALAR';
	    pt(55).nrows     = 1;
	    pt(55).ncols     = 1;
	    pt(55).subsource = 'SS_DOUBLE';

	      
	      
	    pt(56).blockname = 'Signal Generator9';
	    pt(56).paramname = 'Amplitude';
	    pt(56).class     = 'rt_SCALAR';
	    pt(56).nrows     = 1;
	    pt(56).ncols     = 1;
	    pt(56).subsource = 'SS_DOUBLE';

	      
	      
	    pt(57).blockname = 'Signal Generator9';
	    pt(57).paramname = 'Frequency';
	    pt(57).class     = 'rt_SCALAR';
	    pt(57).nrows     = 1;
	    pt(57).ncols     = 1;
	    pt(57).subsource = 'SS_DOUBLE';

	      
	      
	    pt(58).blockname = 'DataSentHost/Constant1';
	    pt(58).paramname = 'Value';
	    pt(58).class     = 'rt_SCALAR';
	    pt(58).nrows     = 1;
	    pt(58).ncols     = 1;
	    pt(58).subsource = 'SS_DOUBLE';

	      
	      
	    pt(59).blockname = 'DataSentHost/Constant2';
	    pt(59).paramname = 'Value';
	    pt(59).class     = 'rt_VECTOR';
	    pt(59).nrows     = 1;
	    pt(59).ncols     = 6;
	    pt(59).subsource = 'SS_DOUBLE';

	      
	      
	    pt(60).blockname = 'DataSentHost/Constant3';
	    pt(60).paramname = 'Value';
	    pt(60).class     = 'rt_SCALAR';
	    pt(60).nrows     = 1;
	    pt(60).ncols     = 1;
	    pt(60).subsource = 'SS_DOUBLE';

	      
	      
	    pt(61).blockname = 'DataSentHost/Encoded_data';
	    pt(61).paramname = 'Gain';
	    pt(61).class     = 'rt_SCALAR';
	    pt(61).nrows     = 1;
	    pt(61).ncols     = 1;
	    pt(61).subsource = 'SS_DOUBLE';

	      
	      
	    pt(62).blockname = 'DataSentHost/Gain';
	    pt(62).paramname = 'Gain';
	    pt(62).class     = 'rt_SCALAR';
	    pt(62).nrows     = 1;
	    pt(62).ncols     = 1;
	    pt(62).subsource = 'SS_DOUBLE';

	      
	      
	    pt(63).blockname = 'Equal To Constant/Constant';
	    pt(63).paramname = 'Value';
	    pt(63).class     = 'rt_SCALAR';
	    pt(63).nrows     = 1;
	    pt(63).ncols     = 1;
	    pt(63).subsource = 'SS_DOUBLE';

	      
	      
	    pt(64).blockname = 'Equal To Constant1/Constant';
	    pt(64).paramname = 'Value';
	    pt(64).class     = 'rt_SCALAR';
	    pt(64).nrows     = 1;
	    pt(64).ncols     = 1;
	    pt(64).subsource = 'SS_DOUBLE';

	      
	      
	    pt(65).blockname = 'Manual Switch10/Constant';
	    pt(65).paramname = 'Value';
	    pt(65).class     = 'rt_SCALAR';
	    pt(65).nrows     = 1;
	    pt(65).ncols     = 1;
	    pt(65).subsource = 'SS_UINT8';

	      
	      
	    pt(66).blockname = 'Manual Switch10/SwitchControl';
	    pt(66).paramname = 'Threshold';
	    pt(66).class     = 'rt_SCALAR';
	    pt(66).nrows     = 1;
	    pt(66).ncols     = 1;
	    pt(66).subsource = 'SS_UINT8';

	      
	      
	    pt(67).blockname = 'Manual Switch3/Constant';
	    pt(67).paramname = 'Value';
	    pt(67).class     = 'rt_SCALAR';
	    pt(67).nrows     = 1;
	    pt(67).ncols     = 1;
	    pt(67).subsource = 'SS_UINT8';

	      
	      
	    pt(68).blockname = 'Manual Switch3/SwitchControl';
	    pt(68).paramname = 'Threshold';
	    pt(68).class     = 'rt_SCALAR';
	    pt(68).nrows     = 1;
	    pt(68).ncols     = 1;
	    pt(68).subsource = 'SS_UINT8';

	      
	      
	    pt(69).blockname = 'Nomal Motion Logic1/fade_in_fade_out';
	    pt(69).paramname = 'InputValues';
	    pt(69).class     = 'rt_VECTOR';
	    pt(69).nrows     = 1;
	    pt(69).ncols     = 1001;
	    pt(69).subsource = 'SS_DOUBLE';

	      
	      
	    pt(70).blockname = 'Nomal Motion Logic1/fade_in_fade_out';
	    pt(70).paramname = 'OutputValues';
	    pt(70).class     = 'rt_VECTOR';
	    pt(70).nrows     = 1;
	    pt(70).ncols     = 1001;
	    pt(70).subsource = 'SS_DOUBLE';

	      
	      
	    pt(71).blockname = 'Nomal Motion Logic1/Memory';
	    pt(71).paramname = 'X0';
	    pt(71).class     = 'rt_SCALAR';
	    pt(71).nrows     = 1;
	    pt(71).ncols     = 1;
	    pt(71).subsource = 'SS_DOUBLE';

	      
	      
	    pt(72).blockname = 'Nomal Motion Logic1/Memory1';
	    pt(72).paramname = 'X0';
	    pt(72).class     = 'rt_SCALAR';
	    pt(72).nrows     = 1;
	    pt(72).ncols     = 1;
	    pt(72).subsource = 'SS_DOUBLE';

	      
	      
	    pt(73).blockname = 'Nomal Motion Logic1/Ready Limiter';
	    pt(73).paramname = 'RisingSlewLimit';
	    pt(73).class     = 'rt_SCALAR';
	    pt(73).nrows     = 1;
	    pt(73).ncols     = 1;
	    pt(73).subsource = 'SS_DOUBLE';

	      
	      
	    pt(74).blockname = 'Nomal Motion Logic1/Ready Limiter';
	    pt(74).paramname = 'FallingSlewLimit';
	    pt(74).class     = 'rt_SCALAR';
	    pt(74).nrows     = 1;
	    pt(74).ncols     = 1;
	    pt(74).subsource = 'SS_DOUBLE';

	      
	      
	    pt(75).blockname = 'Nomal Motion Logic1/Start Limiter';
	    pt(75).paramname = 'RisingSlewLimit';
	    pt(75).class     = 'rt_SCALAR';
	    pt(75).nrows     = 1;
	    pt(75).ncols     = 1;
	    pt(75).subsource = 'SS_DOUBLE';

	      
	      
	    pt(76).blockname = 'Nomal Motion Logic1/Start Limiter';
	    pt(76).paramname = 'FallingSlewLimit';
	    pt(76).class     = 'rt_SCALAR';
	    pt(76).nrows     = 1;
	    pt(76).ncols     = 1;
	    pt(76).subsource = 'SS_DOUBLE';

	      
	      
	    pt(77).blockname = 'Signal_generator/Sin_bias';
	    pt(77).paramname = 'Value';
	    pt(77).class     = 'rt_SCALAR';
	    pt(77).nrows     = 1;
	    pt(77).ncols     = 1;
	    pt(77).subsource = 'SS_DOUBLE';

	      
	      
	    pt(78).blockname = 'Signal_generator/Sin_fuzhi';
	    pt(78).paramname = 'Value';
	    pt(78).class     = 'rt_SCALAR';
	    pt(78).nrows     = 1;
	    pt(78).ncols     = 1;
	    pt(78).subsource = 'SS_DOUBLE';

	      
	      
	    pt(79).blockname = 'Signal_generator/Sin_pinlv';
	    pt(79).paramname = 'Value';
	    pt(79).class     = 'rt_SCALAR';
	    pt(79).nrows     = 1;
	    pt(79).ncols     = 1;
	    pt(79).subsource = 'SS_DOUBLE';

	      
	      
	    pt(80).blockname = 'Signal_generator/Sin_xiangwei';
	    pt(80).paramname = 'Value';
	    pt(80).class     = 'rt_SCALAR';
	    pt(80).nrows     = 1;
	    pt(80).ncols     = 1;
	    pt(80).subsource = 'SS_DOUBLE';

	      
	      
	    pt(81).blockname = 'Signal_generator/Square_bias';
	    pt(81).paramname = 'Value';
	    pt(81).class     = 'rt_SCALAR';
	    pt(81).nrows     = 1;
	    pt(81).ncols     = 1;
	    pt(81).subsource = 'SS_DOUBLE';

	      
	      
	    pt(82).blockname = 'Signal_generator/Square_fuzhi';
	    pt(82).paramname = 'Value';
	    pt(82).class     = 'rt_SCALAR';
	    pt(82).nrows     = 1;
	    pt(82).ncols     = 1;
	    pt(82).subsource = 'SS_DOUBLE';

	      
	      
	    pt(83).blockname = 'Signal_generator/Square_zhouqi';
	    pt(83).paramname = 'Value';
	    pt(83).class     = 'rt_SCALAR';
	    pt(83).nrows     = 1;
	    pt(83).ncols     = 1;
	    pt(83).subsource = 'SS_DOUBLE';

	      
	      
	    pt(84).blockname = 'Signal_generator/rand_freq_sel';
	    pt(84).paramname = 'Value';
	    pt(84).class     = 'rt_SCALAR';
	    pt(84).nrows     = 1;
	    pt(84).ncols     = 1;
	    pt(84).subsource = 'SS_DOUBLE';

	      
	      
	    pt(85).blockname = 'Signal_generator/Gain';
	    pt(85).paramname = 'Gain';
	    pt(85).class     = 'rt_SCALAR';
	    pt(85).nrows     = 1;
	    pt(85).ncols     = 1;
	    pt(85).subsource = 'SS_DOUBLE';

	      
	      
	    pt(86).blockname = 'Signal_generator/Gain1';
	    pt(86).paramname = 'Gain';
	    pt(86).class     = 'rt_SCALAR';
	    pt(86).nrows     = 1;
	    pt(86).ncols     = 1;
	    pt(86).subsource = 'SS_DOUBLE';

	      
	      
	    pt(87).blockname = 'Signal_generator/Gain2';
	    pt(87).paramname = 'Gain';
	    pt(87).class     = 'rt_SCALAR';
	    pt(87).nrows     = 1;
	    pt(87).ncols     = 1;
	    pt(87).subsource = 'SS_DOUBLE';

	      
	      
	    pt(88).blockname = 'Signal_generator/Gain3';
	    pt(88).paramname = 'Gain';
	    pt(88).class     = 'rt_SCALAR';
	    pt(88).nrows     = 1;
	    pt(88).ncols     = 1;
	    pt(88).subsource = 'SS_DOUBLE';

	      
	      
	    pt(89).blockname = 'Signal_generator/Gain4';
	    pt(89).paramname = 'Gain';
	    pt(89).class     = 'rt_SCALAR';
	    pt(89).nrows     = 1;
	    pt(89).ncols     = 1;
	    pt(89).subsource = 'SS_DOUBLE';

	      
	      
	    pt(90).blockname = 'Signal_generator/Gain5';
	    pt(90).paramname = 'Gain';
	    pt(90).class     = 'rt_SCALAR';
	    pt(90).nrows     = 1;
	    pt(90).ncols     = 1;
	    pt(90).subsource = 'SS_DOUBLE';

	      
	      
	    pt(91).blockname = 'Signal_generator/Gain6';
	    pt(91).paramname = 'Gain';
	    pt(91).class     = 'rt_SCALAR';
	    pt(91).nrows     = 1;
	    pt(91).ncols     = 1;
	    pt(91).subsource = 'SS_DOUBLE';

	      
	      
	    pt(92).blockname = 'Signal_generator/random_gain';
	    pt(92).paramname = 'Gain';
	    pt(92).class     = 'rt_SCALAR';
	    pt(92).nrows     = 1;
	    pt(92).ncols     = 1;
	    pt(92).subsource = 'SS_DOUBLE';

	      
	      
	    pt(93).blockname = 'Signal_generator/random';
	    pt(93).paramname = 'Minimum';
	    pt(93).class     = 'rt_SCALAR';
	    pt(93).nrows     = 1;
	    pt(93).ncols     = 1;
	    pt(93).subsource = 'SS_DOUBLE';

	      
	      
	    pt(94).blockname = 'Signal_generator/random';
	    pt(94).paramname = 'Maximum';
	    pt(94).class     = 'rt_SCALAR';
	    pt(94).nrows     = 1;
	    pt(94).ncols     = 1;
	    pt(94).subsource = 'SS_DOUBLE';

	      
	      
	    pt(95).blockname = 'Signal_generator/random';
	    pt(95).paramname = 'Seed';
	    pt(95).class     = 'rt_SCALAR';
	    pt(95).nrows     = 1;
	    pt(95).ncols     = 1;
	    pt(95).subsource = 'SS_DOUBLE';

	      
	      
	    pt(96).blockname = 'pos_acc_sel/internal_sig_acc_gain';
	    pt(96).paramname = 'Value';
	    pt(96).class     = 'rt_SCALAR';
	    pt(96).nrows     = 1;
	    pt(96).ncols     = 1;
	    pt(96).subsource = 'SS_DOUBLE';

	      
	      
	    pt(97).blockname = 'pos_acc_sel/internal_sig_pos_gain';
	    pt(97).paramname = 'Value';
	    pt(97).class     = 'rt_SCALAR';
	    pt(97).nrows     = 1;
	    pt(97).ncols     = 1;
	    pt(97).subsource = 'SS_DOUBLE';

	      
	      
	    pt(98).blockname = 'pos_acc_sel/sel ';
	    pt(98).paramname = 'Value';
	    pt(98).class     = 'rt_SCALAR';
	    pt(98).nrows     = 1;
	    pt(98).ncols     = 1;
	    pt(98).subsource = 'SS_DOUBLE';

	      
	      
	      
	      
	      
	      
	    pt(99).blockname = 'zero_position_tune/Gain1';
	    pt(99).paramname = 'Gain';
	    pt(99).class     = 'rt_SCALAR';
	    pt(99).nrows     = 1;
	    pt(99).ncols     = 1;
	    pt(99).subsource = 'SS_DOUBLE';

	      
	      
	    pt(100).blockname = 'zero_position_tune/Gain2';
	    pt(100).paramname = 'Gain';
	    pt(100).class     = 'rt_SCALAR';
	    pt(100).nrows     = 1;
	    pt(100).ncols     = 1;
	    pt(100).subsource = 'SS_DOUBLE';

	      
	      
	    pt(101).blockname = 'zero_position_tune/Saturation1';
	    pt(101).paramname = 'UpperLimit';
	    pt(101).class     = 'rt_SCALAR';
	    pt(101).nrows     = 1;
	    pt(101).ncols     = 1;
	    pt(101).subsource = 'SS_DOUBLE';

	      
	      
	    pt(102).blockname = 'zero_position_tune/Saturation1';
	    pt(102).paramname = 'LowerLimit';
	    pt(102).class     = 'rt_SCALAR';
	    pt(102).nrows     = 1;
	    pt(102).ncols     = 1;
	    pt(102).subsource = 'SS_DOUBLE';

	      
	      
	    pt(103).blockname = 'zero_position_tune/Saturation2';
	    pt(103).paramname = 'UpperLimit';
	    pt(103).class     = 'rt_SCALAR';
	    pt(103).nrows     = 1;
	    pt(103).ncols     = 1;
	    pt(103).subsource = 'SS_DOUBLE';

	      
	      
	    pt(104).blockname = 'zero_position_tune/Saturation2';
	    pt(104).paramname = 'LowerLimit';
	    pt(104).class     = 'rt_SCALAR';
	    pt(104).nrows     = 1;
	    pt(104).ncols     = 1;
	    pt(104).subsource = 'SS_DOUBLE';

	      
	      
	    pt(105).blockname = 'zero_position_tune/Unit Delay';
	    pt(105).paramname = 'X0';
	    pt(105).class     = 'rt_SCALAR';
	    pt(105).nrows     = 1;
	    pt(105).ncols     = 1;
	    pt(105).subsource = 'SS_DOUBLE';

	      
	      
	    pt(106).blockname = 'Signal_generator/Subsystem/Constant1';
	    pt(106).paramname = 'Value';
	    pt(106).class     = 'rt_SCALAR';
	    pt(106).nrows     = 1;
	    pt(106).ncols     = 1;
	    pt(106).subsource = 'SS_DOUBLE';

	      
	      
	    pt(107).blockname = 'Signal_generator/Subsystem/Constant3';
	    pt(107).paramname = 'Value';
	    pt(107).class     = 'rt_VECTOR';
	    pt(107).nrows     = 1;
	    pt(107).ncols     = 5;
	    pt(107).subsource = 'SS_DOUBLE';

	      
	      
	    pt(108).blockname = 'Signal_generator/Subsystem/Constant4';
	    pt(108).paramname = 'Value';
	    pt(108).class     = 'rt_SCALAR';
	    pt(108).nrows     = 1;
	    pt(108).ncols     = 1;
	    pt(108).subsource = 'SS_DOUBLE';

	      
	      
	    pt(109).blockname = 'Signal_generator/Subsystem/Memory';
	    pt(109).paramname = 'X0';
	    pt(109).class     = 'rt_SCALAR';
	    pt(109).nrows     = 1;
	    pt(109).ncols     = 1;
	    pt(109).subsource = 'SS_DOUBLE';

	      
	      
	    pt(110).blockname = 'Signal_generator/Subsystem/Rate Limiter';
	    pt(110).paramname = 'RisingSlewLimit';
	    pt(110).class     = 'rt_SCALAR';
	    pt(110).nrows     = 1;
	    pt(110).ncols     = 1;
	    pt(110).subsource = 'SS_DOUBLE';

	      
	      
	    pt(111).blockname = 'Signal_generator/Subsystem/Rate Limiter';
	    pt(111).paramname = 'FallingSlewLimit';
	    pt(111).class     = 'rt_SCALAR';
	    pt(111).nrows     = 1;
	    pt(111).ncols     = 1;
	    pt(111).subsource = 'SS_DOUBLE';

	      
	      
	    pt(112).blockname = 'Signal_generator/chirp_enable/sweep_mode';
	    pt(112).paramname = 'Value';
	    pt(112).class     = 'rt_SCALAR';
	    pt(112).nrows     = 1;
	    pt(112).ncols     = 1;
	    pt(112).subsource = 'SS_DOUBLE';

	      
	      
	    pt(113).blockname = 'Signal_generator/chirp_enable/Chirp_Gain';
	    pt(113).paramname = 'Gain';
	    pt(113).class     = 'rt_SCALAR';
	    pt(113).nrows     = 1;
	    pt(113).ncols     = 1;
	    pt(113).subsource = 'SS_DOUBLE';

	      
	      
	    pt(114).blockname = 'Signal_generator/random_filter/scale_gain';
	    pt(114).paramname = 'Gain';
	    pt(114).class     = 'rt_SCALAR';
	    pt(114).nrows     = 1;
	    pt(114).ncols     = 1;
	    pt(114).subsource = 'SS_DOUBLE';

	      
	      
	    pt(115).blockname = 'Signal_generator/random_filter/scale_gain1';
	    pt(115).paramname = 'Gain';
	    pt(115).class     = 'rt_SCALAR';
	    pt(115).nrows     = 1;
	    pt(115).ncols     = 1;
	    pt(115).subsource = 'SS_DOUBLE';

	      
	      
	    pt(116).blockname = 'Signal_generator/random_filter/scale_gain2';
	    pt(116).paramname = 'Gain';
	    pt(116).class     = 'rt_SCALAR';
	    pt(116).nrows     = 1;
	    pt(116).ncols     = 1;
	    pt(116).subsource = 'SS_DOUBLE';

	      
	      
	    pt(117).blockname = 'Signal_generator/random_filter/scale_gain3';
	    pt(117).paramname = 'Gain';
	    pt(117).class     = 'rt_SCALAR';
	    pt(117).nrows     = 1;
	    pt(117).ncols     = 1;
	    pt(117).subsource = 'SS_DOUBLE';

	      
	      
	    pt(118).blockname = 'Signal_generator/random_filter/scale_gain4';
	    pt(118).paramname = 'Gain';
	    pt(118).class     = 'rt_SCALAR';
	    pt(118).nrows     = 1;
	    pt(118).ncols     = 1;
	    pt(118).subsource = 'SS_DOUBLE';

	      
	      
	      
	      
	      
	    pt(119).blockname = 'Signal_generator/random_filter/2-10';
	    pt(119).paramname = 'X0';
	    pt(119).class     = 'rt_SCALAR';
	    pt(119).nrows     = 1;
	    pt(119).ncols     = 1;
	    pt(119).subsource = 'SS_DOUBLE';

	      
	      
	      
	      
	      
	    pt(120).blockname = 'Signal_generator/random_filter/2-20';
	    pt(120).paramname = 'X0';
	    pt(120).class     = 'rt_SCALAR';
	    pt(120).nrows     = 1;
	    pt(120).ncols     = 1;
	    pt(120).subsource = 'SS_DOUBLE';

	      
	      
	      
	      
	      
	    pt(121).blockname = 'Signal_generator/random_filter/2-30';
	    pt(121).paramname = 'X0';
	    pt(121).class     = 'rt_SCALAR';
	    pt(121).nrows     = 1;
	    pt(121).ncols     = 1;
	    pt(121).subsource = 'SS_DOUBLE';

	      
	      
	      
	      
	      
	    pt(122).blockname = 'Signal_generator/random_filter/2-5';
	    pt(122).paramname = 'X0';
	    pt(122).class     = 'rt_SCALAR';
	    pt(122).nrows     = 1;
	    pt(122).ncols     = 1;
	    pt(122).subsource = 'SS_DOUBLE';

	      
	      
	      
	      
	      
	    pt(123).blockname = 'Signal_generator/random_filter/2-60';
	    pt(123).paramname = 'X0';
	    pt(123).class     = 'rt_SCALAR';
	    pt(123).nrows     = 1;
	    pt(123).ncols     = 1;
	    pt(123).subsource = 'SS_DOUBLE';

	      
	      
	    pt(124).blockname = 'Signal_generator/sine/Constant2';
	    pt(124).paramname = 'Value';
	    pt(124).class     = 'rt_SCALAR';
	    pt(124).nrows     = 1;
	    pt(124).ncols     = 1;
	    pt(124).subsource = 'SS_DOUBLE';

	      
	      
	    pt(125).blockname = 'Signal_generator/sine/Constant3';
	    pt(125).paramname = 'Value';
	    pt(125).class     = 'rt_SCALAR';
	    pt(125).nrows     = 1;
	    pt(125).ncols     = 1;
	    pt(125).subsource = 'SS_DOUBLE';

	      
	      
	    pt(126).blockname = 'Signal_generator/sine/mod';
	    pt(126).paramname = 'Value';
	    pt(126).class     = 'rt_SCALAR';
	    pt(126).nrows     = 1;
	    pt(126).ncols     = 1;
	    pt(126).subsource = 'SS_DOUBLE';

	      
	      
	    pt(127).blockname = 'Signal_generator/sine/Gain1';
	    pt(127).paramname = 'Gain';
	    pt(127).class     = 'rt_SCALAR';
	    pt(127).nrows     = 1;
	    pt(127).ncols     = 1;
	    pt(127).subsource = 'SS_DOUBLE';

	      
	      
	    pt(128).blockname = 'Signal_generator/sine/Gain2';
	    pt(128).paramname = 'Gain';
	    pt(128).class     = 'rt_SCALAR';
	    pt(128).nrows     = 1;
	    pt(128).ncols     = 1;
	    pt(128).subsource = 'SS_DOUBLE';

	      
	      
	    pt(129).blockname = 'Signal_generator/sine/Memory';
	    pt(129).paramname = 'X0';
	    pt(129).class     = 'rt_SCALAR';
	    pt(129).nrows     = 1;
	    pt(129).ncols     = 1;
	    pt(129).subsource = 'SS_DOUBLE';

	      
	      
	    pt(130).blockname = 'Signal_generator/square/Square Gain';
	    pt(130).paramname = 'Gain';
	    pt(130).class     = 'rt_SCALAR';
	    pt(130).nrows     = 1;
	    pt(130).ncols     = 1;
	    pt(130).subsource = 'SS_DOUBLE';

else
  pt = 130;
end
