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
			{0,79},
			35,
		},
		{ /* ParamMapInfo */
			aaa_PTIDSMAP,
			aaa_PTNAMESMAP,
			aaa_SPTMAP,
			{0,33},
			34,
		},
		"aaa",
		"",
		"aaa",
		1,
		aaa_dtmap,
	},
};
int getNumRef(void){
	 return(sizeof(appInfo) / sizeof(AppMapInfo));
}