function pt=aapt
pt = [];

  
pt(1).blockname = 'Constant';
pt(1).paramname = 'Value';
pt(1).class     = 'scalar';
pt(1).nrows     = 1;
pt(1).ncols     = 1;
pt(1).subsource = 'SS_DOUBLE';
pt(1).ndims     = '2';
pt(1).size      = '[]';
pt(1).isStruct  = false;
pt(1).symbol     = 'aa_P.Constant_Value';
pt(1).baseaddr   = '&aa_P.Constant_Value';
pt(1).dtname     = 'real_T';

pt(getlenPT) = pt(1);

function len = getlenPT
len = 1;

