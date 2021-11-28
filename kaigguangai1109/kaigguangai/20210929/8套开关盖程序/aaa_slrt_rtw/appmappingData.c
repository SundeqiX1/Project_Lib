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
			{0,1013},
			496,
		},
		{ /* ParamMapInfo */
			aaa_PTIDSMAP,
			aaa_PTNAMESMAP,
			aaa_SPTMAP,
			{0,93},
			94,
		},
		"aaa",
		"",
		"aaa",
		2,
		aaa_dtmap,
	},
};
int getNumRef(void){
	 return(sizeof(appInfo) / sizeof(AppMapInfo));
}