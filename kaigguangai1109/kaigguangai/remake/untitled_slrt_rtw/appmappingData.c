#include "slrtappmapping.h"
#include "./maps/untitled.map"



const AppMapInfo appInfo[] = 
{
	{ /* Idx 0, <untitled> */
		{ /* SignalMapInfo */
			untitled_BIOMAP,
			untitled_LBLMAP,
			untitled_SIDMAP,
			untitled_SBIO,
			untitled_SLBL,
			{0,181},
			14,
		},
		{ /* ParamMapInfo */
			untitled_PTIDSMAP,
			untitled_PTNAMESMAP,
			untitled_SPTMAP,
			{0,7},
			8,
		},
		"untitled",
		"",
		"untitled",
		1,
		untitled_dtmap,
	},
};
int getNumRef(void){
	 return(sizeof(appInfo) / sizeof(AppMapInfo));
}