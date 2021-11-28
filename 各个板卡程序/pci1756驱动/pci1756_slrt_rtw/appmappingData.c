#include "slrtappmapping.h"
#include "./maps/pci1756.map"



const AppMapInfo appInfo[] = 
{
	{ /* Idx 0, <pci1756> */
		{ /* SignalMapInfo */
			pci1756_BIOMAP,
			pci1756_LBLMAP,
			pci1756_SIDMAP,
			pci1756_SBIO,
			pci1756_SLBL,
			{0,79},
			35,
		},
		{ /* ParamMapInfo */
			pci1756_PTIDSMAP,
			pci1756_PTNAMESMAP,
			pci1756_SPTMAP,
			{0,33},
			34,
		},
		"pci1756",
		"",
		"pci1756",
		1,
		pci1756_dtmap,
	},
};
int getNumRef(void){
	 return(sizeof(appInfo) / sizeof(AppMapInfo));
}