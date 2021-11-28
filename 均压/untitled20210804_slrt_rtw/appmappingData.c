#include "slrtappmapping.h"
#include "./maps/untitled20210804.map"



const AppMapInfo appInfo[] = 
{
	{ /* Idx 0, <untitled20210804> */
		{ /* SignalMapInfo */
			untitled20210804_BIOMAP,
			untitled20210804_LBLMAP,
			untitled20210804_SIDMAP,
			untitled20210804_SBIO,
			untitled20210804_SLBL,
			{0,88},
			54,
		},
		{ /* ParamMapInfo */
			untitled20210804_PTIDSMAP,
			untitled20210804_PTNAMESMAP,
			untitled20210804_SPTMAP,
			{0,43},
			44,
		},
		"untitled20210804",
		"",
		"untitled20210804",
		4,
		untitled20210804_dtmap,
	},
};
int getNumRef(void){
	 return(sizeof(appInfo) / sizeof(AppMapInfo));
}