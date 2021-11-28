#include "slrtappmapping.h"
#include "./maps/gggg.map"



const AppMapInfo appInfo[] = 
{
	{ /* Idx 0, <gggg> */
		{ /* SignalMapInfo */
			gggg_BIOMAP,
			gggg_LBLMAP,
			gggg_SIDMAP,
			gggg_SBIO,
			gggg_SLBL,
			{0,161},
			134,
		},
		{ /* ParamMapInfo */
			gggg_PTIDSMAP,
			gggg_PTNAMESMAP,
			gggg_SPTMAP,
			{0,104},
			105,
		},
		"gggg",
		"",
		"gggg",
		4,
		gggg_dtmap,
	},
};
int getNumRef(void){
	 return(sizeof(appInfo) / sizeof(AppMapInfo));
}