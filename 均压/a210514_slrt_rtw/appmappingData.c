#include "slrtappmapping.h"
#include "./maps/a210514.map"



const AppMapInfo appInfo[] = 
{
	{ /* Idx 0, <a210514> */
		{ /* SignalMapInfo */
			a210514_BIOMAP,
			a210514_LBLMAP,
			a210514_SIDMAP,
			a210514_SBIO,
			a210514_SLBL,
			{0,10},
			11,
		},
		{ /* ParamMapInfo */
			a210514_PTIDSMAP,
			a210514_PTNAMESMAP,
			a210514_SPTMAP,
			{0,4},
			5,
		},
		"a210514",
		"",
		"a210514",
		2,
		a210514_dtmap,
	},
};
int getNumRef(void){
	 return(sizeof(appInfo) / sizeof(AppMapInfo));
}