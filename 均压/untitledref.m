function sys=untitledref
sys = [];
sys.child = [];
sys.NumDataTypes = 2; 
sys.DataTypes = [];
temp.EnumNames='';
temp.EnumValues = [];
temp.Name = '';
sys.DataTypes = repmat(temp,1,2);
sys.DataTypes(1).Name = 'uint8_T';
sys.DataTypes(2).Name = 'real_T';
