#include "slrtappmapping.h"
#include "./maps/aaaqi.map"



const AppMapInfo appInfo[] = 
{
	{ /* Idx 0, <aaaqi> */
		{ /* SignalMapInfo */
			aaaqi_BIOMAP,
			aaaqi_LBLMAP,
			aaaqi_SIDMAP,
			aaaqi_SBIO,
			aaaqi_SLBL,
			{0,627},
			458,
		},
		{ /* ParamMapInfo */
			aaaqi_PTIDSMAP,
			aaaqi_PTNAMESMAP,
			aaaqi_SPTMAP,
			{0,419},
			420,
		},
		"aaaqi",
		"",
		"aaaqi",
		4,
		aaaqi_dtmap,
	},
};
int getNumRef(void){
	 return(sizeof(appInfo) / sizeof(AppMapInfo));
}