#include "slrtappmapping.h"
#include "./maps/aa.map"



const AppMapInfo appInfo[] = 
{
	{ /* Idx 0, <aa> */
		{ /* SignalMapInfo */
			aa_BIOMAP,
			aa_LBLMAP,
			aa_SIDMAP,
			aa_SBIO,
			aa_SLBL,
			{0,0},
			1,
		},
		{ /* ParamMapInfo */
			aa_PTIDSMAP,
			aa_PTNAMESMAP,
			aa_SPTMAP,
			{0,0},
			1,
		},
		"aa",
		"",
		"aa",
		1,
		aa_dtmap,
	},
};
int getNumRef(void){
	 return(sizeof(appInfo) / sizeof(AppMapInfo));
}