

function bio=simpleCylinder1bio(flag)
bio = [];
if nargin==0
  bio = [];

                    bio(1).blkName='Derivative';
bio(1).sigName='NULL';
bio(1).portIdx=0;
bio(1).dim=[1,1];
bio(1).sigWidth=1;
bio(1).sigAddress='&simpleCylinder1_B.Derivative';

bio(2).blkName='gain1';
bio(2).sigName='NULL';
bio(2).portIdx=0;
bio(2).dim=[1,1];
bio(2).sigWidth=1;
bio(2).sigAddress='&simpleCylinder1_B.gain1';

bio(3).blkName='gain2';
bio(3).sigName='NULL';
bio(3).portIdx=0;
bio(3).dim=[1,1];
bio(3).sigWidth=1;
bio(3).sigAddress='&simpleCylinder1_B.gain2';

bio(4).blkName='gain3';
bio(4).sigName='NULL';
bio(4).portIdx=0;
bio(4).dim=[1,1];
bio(4).sigWidth=1;
bio(4).sigAddress='&simpleCylinder1_B.gain3';

bio(5).blkName='Integrator';
bio(5).sigName='NULL';
bio(5).portIdx=0;
bio(5).dim=[1,1];
bio(5).sigWidth=1;
bio(5).sigAddress='&simpleCylinder1_B.Integrator';

bio(6).blkName='Logical Operator';
bio(6).sigName='NULL';
bio(6).portIdx=0;
bio(6).dim=[1,1];
bio(6).sigWidth=1;
bio(6).sigAddress='&simpleCylinder1_B.LogicalOperator';

bio(7).blkName='right7';
bio(7).sigName='NULL';
bio(7).portIdx=0;
bio(7).dim=[1,1];
bio(7).sigWidth=1;
bio(7).sigAddress='&simpleCylinder1_B.right7';

bio(8).blkName='Multiport Switch';
bio(8).sigName='NULL';
bio(8).portIdx=0;
bio(8).dim=[1,1];
bio(8).sigWidth=1;
bio(8).sigAddress='&simpleCylinder1_B.MultiportSwitch';

bio(9).blkName='Product';
bio(9).sigName='NULL';
bio(9).portIdx=0;
bio(9).dim=[1,1];
bio(9).sigWidth=1;
bio(9).sigAddress='&simpleCylinder1_B.Product_a';

bio(10).blkName='Product1';
bio(10).sigName='NULL';
bio(10).portIdx=0;
bio(10).dim=[1,1];
bio(10).sigWidth=1;
bio(10).sigAddress='&simpleCylinder1_B.Product1_h';

bio(11).blkName='Product3';
bio(11).sigName='NULL';
bio(11).portIdx=0;
bio(11).dim=[1,1];
bio(11).sigWidth=1;
bio(11).sigAddress='&simpleCylinder1_B.Product3';

bio(12).blkName='Product4';
bio(12).sigName='NULL';
bio(12).portIdx=0;
bio(12).dim=[1,1];
bio(12).sigWidth=1;
bio(12).sigAddress='&simpleCylinder1_B.Product4_i';

bio(13).blkName='Product5';
bio(13).sigName='NULL';
bio(13).portIdx=0;
bio(13).dim=[1,1];
bio(13).sigWidth=1;
bio(13).sigAddress='&simpleCylinder1_B.Product5_m';

bio(14).blkName='Product6';
bio(14).sigName='NULL';
bio(14).portIdx=0;
bio(14).dim=[1,1];
bio(14).sigWidth=1;
bio(14).sigAddress='&simpleCylinder1_B.Product6_o';

bio(15).blkName='Saturation4';
bio(15).sigName='NULL';
bio(15).portIdx=0;
bio(15).dim=[1,1];
bio(15).sigWidth=1;
bio(15).sigAddress='&simpleCylinder1_B.Saturation4';

bio(16).blkName='PCI-2';
bio(16).sigName='NULL';
bio(16).portIdx=0;
bio(16).dim=[16,1];
bio(16).sigWidth=16;
bio(16).sigAddress='&simpleCylinder1_B.PCI2[0]';

bio(17).blkName='Signal Generator10';
bio(17).sigName='NULL';
bio(17).portIdx=0;
bio(17).dim=[1,1];
bio(17).sigWidth=1;
bio(17).sigAddress='&simpleCylinder1_B.SignalGenerator10';

bio(18).blkName='Signal Generator11';
bio(18).sigName='NULL';
bio(18).portIdx=0;
bio(18).dim=[1,1];
bio(18).sigWidth=1;
bio(18).sigAddress='&simpleCylinder1_B.SignalGenerator11';

bio(19).blkName='Signal Generator12';
bio(19).sigName='NULL';
bio(19).portIdx=0;
bio(19).dim=[1,1];
bio(19).sigWidth=1;
bio(19).sigAddress='&simpleCylinder1_B.SignalGenerator12';

bio(20).blkName='Signal Generator13';
bio(20).sigName='NULL';
bio(20).portIdx=0;
bio(20).dim=[1,1];
bio(20).sigWidth=1;
bio(20).sigAddress='&simpleCylinder1_B.SignalGenerator13';

bio(21).blkName='Signal Generator14';
bio(21).sigName='NULL';
bio(21).portIdx=0;
bio(21).dim=[1,1];
bio(21).sigWidth=1;
bio(21).sigAddress='&simpleCylinder1_B.SignalGenerator14';

bio(22).blkName='Signal Generator15';
bio(22).sigName='NULL';
bio(22).portIdx=0;
bio(22).dim=[1,1];
bio(22).sigWidth=1;
bio(22).sigAddress='&simpleCylinder1_B.SignalGenerator15';

bio(23).blkName='Signal Generator16';
bio(23).sigName='NULL';
bio(23).portIdx=0;
bio(23).dim=[1,1];
bio(23).sigWidth=1;
bio(23).sigAddress='&simpleCylinder1_B.SignalGenerator16';

bio(24).blkName='Signal Generator17';
bio(24).sigName='NULL';
bio(24).portIdx=0;
bio(24).dim=[1,1];
bio(24).sigWidth=1;
bio(24).sigAddress='&simpleCylinder1_B.SignalGenerator17';

bio(25).blkName='Signal Generator2';
bio(25).sigName='NULL';
bio(25).portIdx=0;
bio(25).dim=[1,1];
bio(25).sigWidth=1;
bio(25).sigAddress='&simpleCylinder1_B.SignalGenerator2';

bio(26).blkName='Signal Generator3';
bio(26).sigName='NULL';
bio(26).portIdx=0;
bio(26).dim=[1,1];
bio(26).sigWidth=1;
bio(26).sigAddress='&simpleCylinder1_B.SignalGenerator3';

bio(27).blkName='Signal Generator4';
bio(27).sigName='NULL';
bio(27).portIdx=0;
bio(27).dim=[1,1];
bio(27).sigWidth=1;
bio(27).sigAddress='&simpleCylinder1_B.SignalGenerator4';

bio(28).blkName='Signal Generator5';
bio(28).sigName='NULL';
bio(28).portIdx=0;
bio(28).dim=[1,1];
bio(28).sigWidth=1;
bio(28).sigAddress='&simpleCylinder1_B.SignalGenerator5';

bio(29).blkName='Signal Generator6';
bio(29).sigName='NULL';
bio(29).portIdx=0;
bio(29).dim=[1,1];
bio(29).sigWidth=1;
bio(29).sigAddress='&simpleCylinder1_B.SignalGenerator6';

bio(30).blkName='Signal Generator7';
bio(30).sigName='NULL';
bio(30).portIdx=0;
bio(30).dim=[1,1];
bio(30).sigWidth=1;
bio(30).sigAddress='&simpleCylinder1_B.SignalGenerator7';

bio(31).blkName='Signal Generator8';
bio(31).sigName='NULL';
bio(31).portIdx=0;
bio(31).dim=[1,1];
bio(31).sigWidth=1;
bio(31).sigAddress='&simpleCylinder1_B.SignalGenerator8';

bio(32).blkName='Signal Generator9';
bio(32).sigName='NULL';
bio(32).portIdx=0;
bio(32).dim=[1,1];
bio(32).sigWidth=1;
bio(32).sigAddress='&simpleCylinder1_B.SignalGenerator9';

bio(33).blkName='Add';
bio(33).sigName='NULL';
bio(33).portIdx=0;
bio(33).dim=[1,1];
bio(33).sigWidth=1;
bio(33).sigAddress='&simpleCylinder1_B.Add';

bio(34).blkName='Sum';
bio(34).sigName='NULL';
bio(34).portIdx=0;
bio(34).dim=[1,1];
bio(34).sigWidth=1;
bio(34).sigAddress='&simpleCylinder1_B.Sum';

bio(35).blkName='Sum5';
bio(35).sigName='NULL';
bio(35).portIdx=0;
bio(35).dim=[1,1];
bio(35).sigWidth=1;
bio(35).sigAddress='&simpleCylinder1_B.Sum5';

bio(36).blkName='Sum6';
bio(36).sigName='NULL';
bio(36).portIdx=0;
bio(36).dim=[1,1];
bio(36).sigWidth=1;
bio(36).sigAddress='&simpleCylinder1_B.Sum6';

bio(37).blkName='Sum7';
bio(37).sigName='NULL';
bio(37).portIdx=0;
bio(37).dim=[1,1];
bio(37).sigWidth=1;
bio(37).sigAddress='&simpleCylinder1_B.Sum7';

bio(38).blkName='DataSentHost/Clock';
bio(38).sigName='NULL';
bio(38).portIdx=0;
bio(38).dim=[1,1];
bio(38).sigWidth=1;
bio(38).sigAddress='&simpleCylinder1_B.Clock';

bio(39).blkName='DataSentHost/Data Type Conversion15';
bio(39).sigName='NULL';
bio(39).portIdx=0;
bio(39).dim=[36,1];
bio(39).sigWidth=36;
bio(39).sigAddress='&simpleCylinder1_B.DataTypeConversion15[0]';

bio(40).blkName='DataSentHost/Data Type Conversion8';
bio(40).sigName='NULL';
bio(40).portIdx=0;
bio(40).dim=[36,1];
bio(40).sigWidth=36;
bio(40).sigAddress='&simpleCylinder1_B.DataTypeConversion8[0]';

bio(41).blkName='DataSentHost/Encoded_data';
bio(41).sigName='NULL';
bio(41).portIdx=0;
bio(41).dim=[10,1];
bio(41).sigWidth=10;
bio(41).sigAddress='&simpleCylinder1_B.Encoded_data[0]';

bio(42).blkName='DataSentHost/Gain';
bio(42).sigName='NULL';
bio(42).portIdx=0;
bio(42).dim=[36,1];
bio(42).sigWidth=36;
bio(42).sigAddress='&simpleCylinder1_B.Gain_m[0]';

bio(43).blkName='DataSentHost/Product';
bio(43).sigName='NULL';
bio(43).portIdx=0;
bio(43).dim=[6,1];
bio(43).sigWidth=6;
bio(43).sigAddress='&simpleCylinder1_B.Product[0]';

bio(44).blkName='DataSentHost/Product1';
bio(44).sigName='NULL';
bio(44).portIdx=0;
bio(44).dim=[6,1];
bio(44).sigWidth=6;
bio(44).sigAddress='&simpleCylinder1_B.Product1_i[0]';

bio(45).blkName='DataSentHost/Pack1';
bio(45).sigName='NULL';
bio(45).portIdx=0;
bio(45).dim=[72,1];
bio(45).sigWidth=72;
bio(45).sigAddress='&simpleCylinder1_B.Pack1[0]';

bio(46).blkName='DataSentHost/encoded data';
bio(46).sigName='NULL';
bio(46).portIdx=0;
bio(46).dim=[9,1];
bio(46).sigWidth=9;
bio(46).sigAddress='&simpleCylinder1_B.encodeddata[0]';

bio(47).blkName='DataSentHost/Sum2';
bio(47).sigName='NULL';
bio(47).portIdx=0;
bio(47).dim=[36,1];
bio(47).sigWidth=36;
bio(47).sigAddress='&simpleCylinder1_B.Sum2_p[0]';

bio(48).blkName='Equal To Constant/Compare';
bio(48).sigName='NULL';
bio(48).portIdx=0;
bio(48).dim=[1,1];
bio(48).sigWidth=1;
bio(48).sigAddress='&simpleCylinder1_B.Compare';

bio(49).blkName='Equal To Constant1/Compare';
bio(49).sigName='NULL';
bio(49).portIdx=0;
bio(49).dim=[1,1];
bio(49).sigWidth=1;
bio(49).sigAddress='&simpleCylinder1_B.Compare_l';

bio(50).blkName='Manual Switch10/SwitchControl';
bio(50).sigName='NULL';
bio(50).portIdx=0;
bio(50).dim=[1,1];
bio(50).sigWidth=1;
bio(50).sigAddress='&simpleCylinder1_B.SwitchControl';

bio(51).blkName='Manual Switch3/SwitchControl';
bio(51).sigName='NULL';
bio(51).portIdx=0;
bio(51).dim=[1,1];
bio(51).sigWidth=1;
bio(51).sigAddress='&simpleCylinder1_B.SwitchControl_l';

bio(52).blkName='Nomal Motion Logic1/Control Logic/p1';
bio(52).sigName='NULL';
bio(52).portIdx=0;
bio(52).dim=[1,1];
bio(52).sigWidth=1;
bio(52).sigAddress='&simpleCylinder1_B.start';

bio(53).blkName='Nomal Motion Logic1/Control Logic/p2';
bio(53).sigName='NULL';
bio(53).portIdx=1;
bio(53).dim=[1,1];
bio(53).sigWidth=1;
bio(53).sigAddress='&simpleCylinder1_B.start_sts';

bio(54).blkName='Nomal Motion Logic1/Control Logic/p3';
bio(54).sigName='NULL';
bio(54).portIdx=2;
bio(54).dim=[1,1];
bio(54).sigWidth=1;
bio(54).sigAddress='&simpleCylinder1_B.ready_sts';

bio(55).blkName='Nomal Motion Logic1/Control Logic/p4';
bio(55).sigName='NULL';
bio(55).portIdx=3;
bio(55).dim=[1,1];
bio(55).sigWidth=1;
bio(55).sigAddress='&simpleCylinder1_B.ready';

bio(56).blkName='Nomal Motion Logic1/Data Type Conversion';
bio(56).sigName='NULL';
bio(56).portIdx=0;
bio(56).dim=[1,1];
bio(56).sigWidth=1;
bio(56).sigAddress='&simpleCylinder1_B.DataTypeConversion';

bio(57).blkName='Nomal Motion Logic1/Data Type Conversion1';
bio(57).sigName='NULL';
bio(57).portIdx=0;
bio(57).dim=[1,1];
bio(57).sigWidth=1;
bio(57).sigAddress='&simpleCylinder1_B.DataTypeConversion1';

bio(58).blkName='Nomal Motion Logic1/Data Type Conversion2';
bio(58).sigName='NULL';
bio(58).portIdx=0;
bio(58).dim=[1,1];
bio(58).sigWidth=1;
bio(58).sigAddress='&simpleCylinder1_B.DataTypeConversion2';

bio(59).blkName='Nomal Motion Logic1/Data Type Conversion3';
bio(59).sigName='NULL';
bio(59).portIdx=0;
bio(59).dim=[1,1];
bio(59).sigWidth=1;
bio(59).sigAddress='&simpleCylinder1_B.DataTypeConversion3';

bio(60).blkName='Nomal Motion Logic1/Logical Operator2';
bio(60).sigName='NULL';
bio(60).portIdx=0;
bio(60).dim=[1,1];
bio(60).sigWidth=1;
bio(60).sigAddress='&simpleCylinder1_B.LogicalOperator2_f';

bio(61).blkName='Nomal Motion Logic1/OR1';
bio(61).sigName='NULL';
bio(61).portIdx=0;
bio(61).dim=[1,1];
bio(61).sigWidth=1;
bio(61).sigAddress='&simpleCylinder1_B.OR1';

bio(62).blkName='Nomal Motion Logic1/fade_in_fade_out';
bio(62).sigName='NULL';
bio(62).portIdx=0;
bio(62).dim=[3,1];
bio(62).sigWidth=3;
bio(62).sigAddress='&simpleCylinder1_B.fade_in_fade_out[0]';

bio(63).blkName='Nomal Motion Logic1/Memory';
bio(63).sigName='NULL';
bio(63).portIdx=0;
bio(63).dim=[1,1];
bio(63).sigWidth=1;
bio(63).sigAddress='&simpleCylinder1_B.Memory_l';

bio(64).blkName='Nomal Motion Logic1/Memory1';
bio(64).sigName='NULL';
bio(64).portIdx=0;
bio(64).dim=[1,1];
bio(64).sigWidth=1;
bio(64).sigAddress='&simpleCylinder1_B.Memory1';

bio(65).blkName='Nomal Motion Logic1/Ready Limiter';
bio(65).sigName='NULL';
bio(65).portIdx=0;
bio(65).dim=[2,1];
bio(65).sigWidth=2;
bio(65).sigAddress='&simpleCylinder1_B.ReadyLimiter[0]';

bio(66).blkName='Nomal Motion Logic1/Start Limiter';
bio(66).sigName='NULL';
bio(66).portIdx=0;
bio(66).dim=[1,1];
bio(66).sigWidth=1;
bio(66).sigAddress='&simpleCylinder1_B.StartLimiter';

bio(67).blkName='Signal_generator/Data Type Conversion';
bio(67).sigName='NULL';
bio(67).portIdx=0;
bio(67).dim=[5,1];
bio(67).sigWidth=5;
bio(67).sigAddress='&simpleCylinder1_B.DataTypeConversion_c[0]';

bio(68).blkName='Signal_generator/Gain';
bio(68).sigName='NULL';
bio(68).portIdx=0;
bio(68).dim=[1,1];
bio(68).sigWidth=1;
bio(68).sigAddress='&simpleCylinder1_B.Gain';

bio(69).blkName='Signal_generator/Gain1';
bio(69).sigName='NULL';
bio(69).portIdx=0;
bio(69).dim=[1,1];
bio(69).sigWidth=1;
bio(69).sigAddress='&simpleCylinder1_B.Gain1';

bio(70).blkName='Signal_generator/Gain2';
bio(70).sigName='NULL';
bio(70).portIdx=0;
bio(70).dim=[1,1];
bio(70).sigWidth=1;
bio(70).sigAddress='&simpleCylinder1_B.Gain2';

bio(71).blkName='Signal_generator/Gain3';
bio(71).sigName='NULL';
bio(71).portIdx=0;
bio(71).dim=[1,1];
bio(71).sigWidth=1;
bio(71).sigAddress='&simpleCylinder1_B.Gain3';

bio(72).blkName='Signal_generator/Gain4';
bio(72).sigName='NULL';
bio(72).portIdx=0;
bio(72).dim=[1,1];
bio(72).sigWidth=1;
bio(72).sigAddress='&simpleCylinder1_B.Gain4';

bio(73).blkName='Signal_generator/Gain5';
bio(73).sigName='NULL';
bio(73).portIdx=0;
bio(73).dim=[1,1];
bio(73).sigWidth=1;
bio(73).sigAddress='&simpleCylinder1_B.Gain5';

bio(74).blkName='Signal_generator/Gain6';
bio(74).sigName='NULL';
bio(74).portIdx=0;
bio(74).dim=[1,1];
bio(74).sigWidth=1;
bio(74).sigAddress='&simpleCylinder1_B.Gain6';

bio(75).blkName='Signal_generator/random_gain';
bio(75).sigName='NULL';
bio(75).portIdx=0;
bio(75).dim=[1,1];
bio(75).sigWidth=1;
bio(75).sigAddress='&simpleCylinder1_B.random_gain';

bio(76).blkName='Signal_generator/AND';
bio(76).sigName='NULL';
bio(76).portIdx=0;
bio(76).dim=[1,1];
bio(76).sigWidth=1;
bio(76).sigAddress='&simpleCylinder1_B.AND';

bio(77).blkName='Signal_generator/Product1';
bio(77).sigName='NULL';
bio(77).portIdx=0;
bio(77).dim=[1,1];
bio(77).sigWidth=1;
bio(77).sigAddress='&simpleCylinder1_B.Product1';

bio(78).blkName='Signal_generator/Product4';
bio(78).sigName='NULL';
bio(78).portIdx=0;
bio(78).dim=[1,1];
bio(78).sigWidth=1;
bio(78).sigAddress='&simpleCylinder1_B.Product4';

bio(79).blkName='Signal_generator/Product5';
bio(79).sigName='NULL';
bio(79).portIdx=0;
bio(79).dim=[1,1];
bio(79).sigWidth=1;
bio(79).sigAddress='&simpleCylinder1_B.Product5';

bio(80).blkName='Signal_generator/Product6';
bio(80).sigName='NULL';
bio(80).portIdx=0;
bio(80).dim=[1,1];
bio(80).sigWidth=1;
bio(80).sigAddress='&simpleCylinder1_B.Product6';

bio(81).blkName='Signal_generator/Product9';
bio(81).sigName='NULL';
bio(81).portIdx=0;
bio(81).dim=[1,1];
bio(81).sigWidth=1;
bio(81).sigAddress='&simpleCylinder1_B.Product9';

bio(82).blkName='Signal_generator/Selector7';
bio(82).sigName='NULL';
bio(82).portIdx=0;
bio(82).dim=[1,1];
bio(82).sigWidth=1;
bio(82).sigAddress='&simpleCylinder1_B.Selector7';

bio(83).blkName='Signal_generator/Sum2';
bio(83).sigName='NULL';
bio(83).portIdx=0;
bio(83).dim=[1,1];
bio(83).sigWidth=1;
bio(83).sigAddress='&simpleCylinder1_B.Sum2';

bio(84).blkName='Signal_generator/random';
bio(84).sigName='NULL';
bio(84).portIdx=0;
bio(84).dim=[1,1];
bio(84).sigWidth=1;
bio(84).sigAddress='&simpleCylinder1_B.random';

bio(85).blkName='pos_acc_sel/Discrete inverse fit';
bio(85).sigName='NULL';
bio(85).portIdx=0;
bio(85).dim=[1,1];
bio(85).sigWidth=1;
bio(85).sigAddress='&simpleCylinder1_B.Discreteinversefit';

bio(86).blkName='pos_acc_sel/Multiport Switch';
bio(86).sigName='NULL';
bio(86).portIdx=0;
bio(86).dim=[1,1];
bio(86).sigWidth=1;
bio(86).sigAddress='&simpleCylinder1_B.MultiportSwitch_e';

bio(87).blkName='pos_acc_sel/Multiport Switch1';
bio(87).sigName='NULL';
bio(87).portIdx=0;
bio(87).dim=[1,1];
bio(87).sigWidth=1;
bio(87).sigAddress='&simpleCylinder1_B.MultiportSwitch1';

bio(88).blkName='pos_acc_sel/Product';
bio(88).sigName='NULL';
bio(88).portIdx=0;
bio(88).dim=[1,1];
bio(88).sigWidth=1;
bio(88).sigAddress='&simpleCylinder1_B.Product_k';

bio(89).blkName='pos_acc_sel/Product1';
bio(89).sigName='NULL';
bio(89).portIdx=0;
bio(89).dim=[1,1];
bio(89).sigWidth=1;
bio(89).sigAddress='&simpleCylinder1_B.Product1_o';

bio(90).blkName='pos_acc_sel/Sum1';
bio(90).sigName='NULL';
bio(90).portIdx=0;
bio(90).dim=[1,1];
bio(90).sigWidth=1;
bio(90).sigAddress='&simpleCylinder1_B.Sum1_c';

bio(91).blkName='zero_position_tune/Gain1';
bio(91).sigName='NULL';
bio(91).portIdx=0;
bio(91).dim=[1,1];
bio(91).sigWidth=1;
bio(91).sigAddress='&simpleCylinder1_B.Gain1_h';

bio(92).blkName='zero_position_tune/Gain2';
bio(92).sigName='NULL';
bio(92).portIdx=0;
bio(92).dim=[1,1];
bio(92).sigWidth=1;
bio(92).sigAddress='&simpleCylinder1_B.Gain2_j';

bio(93).blkName='zero_position_tune/Relational Operator';
bio(93).sigName='NULL';
bio(93).portIdx=0;
bio(93).dim=[1,1];
bio(93).sigWidth=1;
bio(93).sigAddress='&simpleCylinder1_B.RelationalOperator_n';

bio(94).blkName='zero_position_tune/Saturation1';
bio(94).sigName='NULL';
bio(94).portIdx=0;
bio(94).dim=[1,1];
bio(94).sigWidth=1;
bio(94).sigAddress='&simpleCylinder1_B.Saturation1';

bio(95).blkName='zero_position_tune/Saturation2';
bio(95).sigName='NULL';
bio(95).portIdx=0;
bio(95).dim=[1,1];
bio(95).sigWidth=1;
bio(95).sigAddress='&simpleCylinder1_B.Saturation2';

bio(96).blkName='zero_position_tune/Sum11';
bio(96).sigName='NULL';
bio(96).portIdx=0;
bio(96).dim=[1,1];
bio(96).sigWidth=1;
bio(96).sigAddress='&simpleCylinder1_B.Sum11';

bio(97).blkName='zero_position_tune/Switch9';
bio(97).sigName='NULL';
bio(97).portIdx=0;
bio(97).dim=[1,1];
bio(97).sigWidth=1;
bio(97).sigAddress='&simpleCylinder1_B.Switch9';

bio(98).blkName='zero_position_tune/Unit Delay';
bio(98).sigName='NULL';
bio(98).portIdx=0;
bio(98).dim=[1,1];
bio(98).sigWidth=1;
bio(98).sigAddress='&simpleCylinder1_B.UnitDelay';

bio(99).blkName='Signal_generator/Enabled Subsystem1/In1';
bio(99).sigName='NULL';
bio(99).portIdx=0;
bio(99).dim=[1,1];
bio(99).sigWidth=1;
bio(99).sigAddress='&simpleCylinder1_B.EnabledSubsystem1.In1';

bio(100).blkName='Signal_generator/Enabled Subsystem2/In1';
bio(100).sigName='NULL';
bio(100).portIdx=0;
bio(100).dim=[1,1];
bio(100).sigWidth=1;
bio(100).sigAddress='&simpleCylinder1_B.EnabledSubsystem2.In1';

bio(101).blkName='Signal_generator/Subsystem/Assignment1';
bio(101).sigName='NULL';
bio(101).portIdx=0;
bio(101).dim=[5,1];
bio(101).sigWidth=5;
bio(101).sigAddress='&simpleCylinder1_B.Assignment1[0]';

bio(102).blkName='Signal_generator/Subsystem/Logical Operator1';
bio(102).sigName='NULL';
bio(102).portIdx=0;
bio(102).dim=[5,1];
bio(102).sigWidth=5;
bio(102).sigAddress='&simpleCylinder1_B.LogicalOperator1[0]';

bio(103).blkName='Signal_generator/Subsystem/Logical Operator2';
bio(103).sigName='NULL';
bio(103).portIdx=0;
bio(103).dim=[5,1];
bio(103).sigWidth=5;
bio(103).sigAddress='&simpleCylinder1_B.LogicalOperator2[0]';

bio(104).blkName='Signal_generator/Subsystem/Memory';
bio(104).sigName='NULL';
bio(104).portIdx=0;
bio(104).dim=[5,1];
bio(104).sigWidth=5;
bio(104).sigAddress='&simpleCylinder1_B.Memory[0]';

bio(105).blkName='Signal_generator/Subsystem/Rate Limiter';
bio(105).sigName='NULL';
bio(105).portIdx=0;
bio(105).dim=[5,1];
bio(105).sigWidth=5;
bio(105).sigAddress='&simpleCylinder1_B.RateLimiter[0]';

bio(106).blkName='Signal_generator/Subsystem/Relational Operator';
bio(106).sigName='NULL';
bio(106).portIdx=0;
bio(106).dim=[1,1];
bio(106).sigWidth=1;
bio(106).sigAddress='&simpleCylinder1_B.RelationalOperator';

bio(107).blkName='Signal_generator/Subsystem/Rounding Function1';
bio(107).sigName='NULL';
bio(107).portIdx=0;
bio(107).dim=[5,1];
bio(107).sigWidth=5;
bio(107).sigAddress='&simpleCylinder1_B.RoundingFunction1[0]';

bio(108).blkName='Signal_generator/Subsystem/Subtract';
bio(108).sigName='NULL';
bio(108).portIdx=0;
bio(108).dim=[1,1];
bio(108).sigWidth=1;
bio(108).sigAddress='&simpleCylinder1_B.Subtract';

bio(109).blkName='Signal_generator/Subsystem/Sum of Elements';
bio(109).sigName='NULL';
bio(109).portIdx=0;
bio(109).dim=[1,1];
bio(109).sigWidth=1;
bio(109).sigAddress='&simpleCylinder1_B.SumofElements';

bio(110).blkName='Signal_generator/Subsystem/Switch';
bio(110).sigName='NULL';
bio(110).portIdx=0;
bio(110).dim=[5,1];
bio(110).sigWidth=5;
bio(110).sigAddress='&simpleCylinder1_B.Switch[0]';

bio(111).blkName='Signal_generator/Subsystem/Width';
bio(111).sigName='NULL';
bio(111).portIdx=0;
bio(111).dim=[1,1];
bio(111).sigWidth=1;
bio(111).sigAddress='&simpleCylinder1_B.Width';

bio(112).blkName='Signal_generator/chirp_enable/Chirp_Gain';
bio(112).sigName='NULL';
bio(112).portIdx=0;
bio(112).dim=[1,1];
bio(112).sigWidth=1;
bio(112).sigAddress='&simpleCylinder1_B.Chirp_Gain';

bio(113).blkName='Signal_generator/chirp_enable/Multiport Switch';
bio(113).sigName='NULL';
bio(113).portIdx=0;
bio(113).dim=[1,1];
bio(113).sigWidth=1;
bio(113).sigAddress='&simpleCylinder1_B.MultiportSwitch_p';

bio(114).blkName='Signal_generator/random_filter/scale_gain';
bio(114).sigName='NULL';
bio(114).portIdx=0;
bio(114).dim=[1,1];
bio(114).sigWidth=1;
bio(114).sigAddress='&simpleCylinder1_B.scale_gain';

bio(115).blkName='Signal_generator/random_filter/scale_gain1';
bio(115).sigName='NULL';
bio(115).portIdx=0;
bio(115).dim=[1,1];
bio(115).sigWidth=1;
bio(115).sigAddress='&simpleCylinder1_B.scale_gain1';

bio(116).blkName='Signal_generator/random_filter/scale_gain2';
bio(116).sigName='NULL';
bio(116).portIdx=0;
bio(116).dim=[1,1];
bio(116).sigWidth=1;
bio(116).sigAddress='&simpleCylinder1_B.scale_gain2';

bio(117).blkName='Signal_generator/random_filter/scale_gain3';
bio(117).sigName='NULL';
bio(117).portIdx=0;
bio(117).dim=[1,1];
bio(117).sigWidth=1;
bio(117).sigAddress='&simpleCylinder1_B.scale_gain3';

bio(118).blkName='Signal_generator/random_filter/scale_gain4';
bio(118).sigName='NULL';
bio(118).portIdx=0;
bio(118).dim=[1,1];
bio(118).sigWidth=1;
bio(118).sigAddress='&simpleCylinder1_B.scale_gain4';

bio(119).blkName='Signal_generator/random_filter/2-10';
bio(119).sigName='NULL';
bio(119).portIdx=0;
bio(119).dim=[1,1];
bio(119).sigWidth=1;
bio(119).sigAddress='&simpleCylinder1_B.u0';

bio(120).blkName='Signal_generator/random_filter/2-20';
bio(120).sigName='NULL';
bio(120).portIdx=0;
bio(120).dim=[1,1];
bio(120).sigWidth=1;
bio(120).sigAddress='&simpleCylinder1_B.u0_n';

bio(121).blkName='Signal_generator/random_filter/2-30';
bio(121).sigName='NULL';
bio(121).portIdx=0;
bio(121).dim=[1,1];
bio(121).sigWidth=1;
bio(121).sigAddress='&simpleCylinder1_B.u0_o';

bio(122).blkName='Signal_generator/random_filter/2-5';
bio(122).sigName='NULL';
bio(122).portIdx=0;
bio(122).dim=[1,1];
bio(122).sigWidth=1;
bio(122).sigAddress='&simpleCylinder1_B.u';

bio(123).blkName='Signal_generator/random_filter/2-60';
bio(123).sigName='NULL';
bio(123).portIdx=0;
bio(123).dim=[1,1];
bio(123).sigWidth=1;
bio(123).sigAddress='&simpleCylinder1_B.u0_g';

bio(124).blkName='Signal_generator/sine/Abs';
bio(124).sigName='NULL';
bio(124).portIdx=0;
bio(124).dim=[1,1];
bio(124).sigWidth=1;
bio(124).sigAddress='&simpleCylinder1_B.Abs';

bio(125).blkName='Signal_generator/sine/Clock';
bio(125).sigName='NULL';
bio(125).portIdx=0;
bio(125).dim=[1,1];
bio(125).sigWidth=1;
bio(125).sigAddress='&simpleCylinder1_B.Clock_n';

bio(126).blkName='Signal_generator/sine/Gain1';
bio(126).sigName='NULL';
bio(126).portIdx=0;
bio(126).dim=[1,1];
bio(126).sigWidth=1;
bio(126).sigAddress='&simpleCylinder1_B.Gain1_f';

bio(127).blkName='Signal_generator/sine/Gain2';
bio(127).sigName='NULL';
bio(127).portIdx=0;
bio(127).dim=[1,1];
bio(127).sigWidth=1;
bio(127).sigAddress='&simpleCylinder1_B.Gain2_o';

bio(128).blkName='Signal_generator/sine/Logical Operator';
bio(128).sigName='NULL';
bio(128).portIdx=0;
bio(128).dim=[1,1];
bio(128).sigWidth=1;
bio(128).sigAddress='&simpleCylinder1_B.LogicalOperator_e';

bio(129).blkName='Signal_generator/sine/Math Function';
bio(129).sigName='NULL';
bio(129).portIdx=0;
bio(129).dim=[1,1];
bio(129).sigWidth=1;
bio(129).sigAddress='&simpleCylinder1_B.MathFunction_f';

bio(130).blkName='Signal_generator/sine/Math Function1';
bio(130).sigName='NULL';
bio(130).portIdx=0;
bio(130).dim=[1,1];
bio(130).sigWidth=1;
bio(130).sigAddress='&simpleCylinder1_B.MathFunction1';

bio(131).blkName='Signal_generator/sine/Memory';
bio(131).sigName='NULL';
bio(131).portIdx=0;
bio(131).dim=[1,1];
bio(131).sigWidth=1;
bio(131).sigAddress='&simpleCylinder1_B.Memory_h';

bio(132).blkName='Signal_generator/sine/Product1';
bio(132).sigName='NULL';
bio(132).portIdx=0;
bio(132).dim=[1,1];
bio(132).sigWidth=1;
bio(132).sigAddress='&simpleCylinder1_B.Product1_a';

bio(133).blkName='Signal_generator/sine/Product2';
bio(133).sigName='NULL';
bio(133).portIdx=0;
bio(133).dim=[1,1];
bio(133).sigWidth=1;
bio(133).sigAddress='&simpleCylinder1_B.Product2_l';

bio(134).blkName='Signal_generator/sine/Product3';
bio(134).sigName='NULL';
bio(134).portIdx=0;
bio(134).dim=[1,1];
bio(134).sigWidth=1;
bio(134).sigAddress='&simpleCylinder1_B.Product3_m';

bio(135).blkName='Signal_generator/sine/Relational Operator1';
bio(135).sigName='NULL';
bio(135).portIdx=0;
bio(135).dim=[1,1];
bio(135).sigWidth=1;
bio(135).sigAddress='&simpleCylinder1_B.RelationalOperator1';

bio(136).blkName='Signal_generator/sine/Relational Operator2';
bio(136).sigName='NULL';
bio(136).portIdx=0;
bio(136).dim=[1,1];
bio(136).sigWidth=1;
bio(136).sigAddress='&simpleCylinder1_B.RelationalOperator2';

bio(137).blkName='Signal_generator/sine/Sum1';
bio(137).sigName='NULL';
bio(137).portIdx=0;
bio(137).dim=[1,1];
bio(137).sigWidth=1;
bio(137).sigAddress='&simpleCylinder1_B.Sum1';

bio(138).blkName='Signal_generator/sine/Sum2';
bio(138).sigName='NULL';
bio(138).portIdx=0;
bio(138).dim=[1,1];
bio(138).sigWidth=1;
bio(138).sigAddress='&simpleCylinder1_B.Sum2_i';

bio(139).blkName='Signal_generator/sine/Sum3';
bio(139).sigName='NULL';
bio(139).portIdx=0;
bio(139).dim=[1,1];
bio(139).sigWidth=1;
bio(139).sigAddress='&simpleCylinder1_B.Sum3';

bio(140).blkName='Signal_generator/sine/Switch';
bio(140).sigName='NULL';
bio(140).portIdx=0;
bio(140).dim=[1,1];
bio(140).sigWidth=1;
bio(140).sigAddress='&simpleCylinder1_B.Switch_d';

bio(141).blkName='Signal_generator/sine/Trigonometric Function';
bio(141).sigName='NULL';
bio(141).portIdx=0;
bio(141).dim=[1,1];
bio(141).sigWidth=1;
bio(141).sigAddress='&simpleCylinder1_B.TrigonometricFunction_b';

bio(142).blkName='Signal_generator/square/Clock';
bio(142).sigName='NULL';
bio(142).portIdx=0;
bio(142).dim=[1,1];
bio(142).sigWidth=1;
bio(142).sigAddress='&simpleCylinder1_B.Clock_h';

bio(143).blkName='Signal_generator/square/Square Gain';
bio(143).sigName='NULL';
bio(143).portIdx=0;
bio(143).dim=[1,1];
bio(143).sigWidth=1;
bio(143).sigAddress='&simpleCylinder1_B.SquareGain';

bio(144).blkName='Signal_generator/square/Math Function';
bio(144).sigName='NULL';
bio(144).portIdx=0;
bio(144).dim=[1,1];
bio(144).sigWidth=1;
bio(144).sigAddress='&simpleCylinder1_B.MathFunction';

bio(145).blkName='Signal_generator/square/Product2';
bio(145).sigName='NULL';
bio(145).portIdx=0;
bio(145).dim=[1,1];
bio(145).sigWidth=1;
bio(145).sigAddress='&simpleCylinder1_B.Product2';

bio(146).blkName='Signal_generator/square/Product4';
bio(146).sigName='NULL';
bio(146).portIdx=0;
bio(146).dim=[1,1];
bio(146).sigWidth=1;
bio(146).sigAddress='&simpleCylinder1_B.Product4_h';

bio(147).blkName='Signal_generator/square/Sign';
bio(147).sigName='NULL';
bio(147).portIdx=0;
bio(147).dim=[1,1];
bio(147).sigWidth=1;
bio(147).sigAddress='&simpleCylinder1_B.Sign';

bio(148).blkName='Signal_generator/square/Sum2';
bio(148).sigName='NULL';
bio(148).portIdx=0;
bio(148).dim=[1,1];
bio(148).sigWidth=1;
bio(148).sigAddress='&simpleCylinder1_B.Sum2_pe';

bio(149).blkName='Signal_generator/square/Trigonometric Function';
bio(149).sigName='NULL';
bio(149).portIdx=0;
bio(149).dim=[1,1];
bio(149).sigWidth=1;
bio(149).sigAddress='&simpleCylinder1_B.TrigonometricFunction';

else
   bio= 437;
end
