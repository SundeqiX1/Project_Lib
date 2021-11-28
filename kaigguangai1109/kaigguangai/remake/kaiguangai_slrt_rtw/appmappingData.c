#include "slrtappmapping.h"
#include "./maps/kaiguangai.map"



const AppMapInfo appInfo[] = 
{
	{ /* Idx 0, <kaiguangai> */
		{ /* SignalMapInfo */
			kaiguangai_BIOMAP,
			kaiguangai_LBLMAP,
			kaiguangai_SIDMAP,
			kaiguangai_SBIO,
			kaiguangai_SLBL,
			{0,1013},
			496,
		},
		{ /* ParamMapInfo */
			kaiguangai_PTIDSMAP,
			kaiguangai_PTNAMESMAP,
			kaiguangai_SPTMAP,
			{0,93},
			94,
		},
		"kaiguangai",
		"",
		"kaiguangai",
		2,
		kaiguangai_dtmap,
	},
};
int getNumRef(void){
	 return(sizeof(appInfo) / sizeof(AppMapInfo));
}