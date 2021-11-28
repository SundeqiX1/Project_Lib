#include "slrtappmapping.h"
#include "./maps/ce.map"



const AppMapInfo appInfo[] = 
{
	{ /* Idx 0, <ce> */
		{ /* SignalMapInfo */
			ce_BIOMAP,
			ce_LBLMAP,
			ce_SIDMAP,
			ce_SBIO,
			ce_SLBL,
			{0,168},
			124,
		},
		{ /* ParamMapInfo */
			ce_PTIDSMAP,
			ce_PTNAMESMAP,
			ce_SPTMAP,
			{0,136},
			137,
		},
		"ce",
		"",
		"ce",
		2,
		ce_dtmap,
	},
};
int getNumRef(void){
	 return(sizeof(appInfo) / sizeof(AppMapInfo));
}