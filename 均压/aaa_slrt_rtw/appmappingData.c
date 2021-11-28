#include "slrtappmapping.h"
#include "./maps/aaa.map"



const AppMapInfo appInfo[] = 
{
	{ /* Idx 0, <aaa> */
		{ /* SignalMapInfo */
			aaa_BIOMAP,
			aaa_LBLMAP,
			aaa_SIDMAP,
			aaa_SBIO,
			aaa_SLBL,
			{0,626},
			457,
		},
		{ /* ParamMapInfo */
			aaa_PTIDSMAP,
			aaa_PTNAMESMAP,
			aaa_SPTMAP,
			{0,417},
			418,
		},
		"aaa",
		"",
		"aaa",
		4,
		aaa_dtmap,
	},
};
int getNumRef(void){
	 return(sizeof(appInfo) / sizeof(AppMapInfo));
}