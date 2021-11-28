#include "slrtappmapping.h"
#include "./maps/ceshi20210224_17.map"



const AppMapInfo appInfo[] = 
{
	{ /* Idx 0, <ceshi20210224_17> */
		{ /* SignalMapInfo */
			ceshi20210224_17_BIOMAP,
			ceshi20210224_17_LBLMAP,
			ceshi20210224_17_SIDMAP,
			ceshi20210224_17_SBIO,
			ceshi20210224_17_SLBL,
			{0,160329},
			235,
		},
		{ /* ParamMapInfo */
			ceshi20210224_17_PTIDSMAP,
			ceshi20210224_17_PTNAMESMAP,
			ceshi20210224_17_SPTMAP,
			{0,215},
			216,
		},
		"ceshi20210224_17",
		"",
		"ceshi20210224_17",
		5,
		ceshi20210224_17_dtmap,
	},
};
int getNumRef(void){
	 return(sizeof(appInfo) / sizeof(AppMapInfo));
}