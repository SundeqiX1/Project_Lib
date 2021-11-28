#include "slrtappmapping.h"
#include "./maps/kaiguangai1108.map"



const AppMapInfo appInfo[] = 
{
	{ /* Idx 0, <kaiguangai1108> */
		{ /* SignalMapInfo */
			kaiguangai1108_BIOMAP,
			kaiguangai1108_LBLMAP,
			kaiguangai1108_SIDMAP,
			kaiguangai1108_SBIO,
			kaiguangai1108_SLBL,
			{0,1037},
			510,
		},
		{ /* ParamMapInfo */
			kaiguangai1108_PTIDSMAP,
			kaiguangai1108_PTNAMESMAP,
			kaiguangai1108_SPTMAP,
			{0,95},
			96,
		},
		"kaiguangai1108",
		"",
		"kaiguangai1108",
		2,
		kaiguangai1108_dtmap,
	},
};
int getNumRef(void){
	 return(sizeof(appInfo) / sizeof(AppMapInfo));
}