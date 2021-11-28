#include "slrtappmapping.h"
#include "./maps/pci1756a.map"



const AppMapInfo appInfo[] = 
{
	{ /* Idx 0, <pci1756a> */
		{ /* SignalMapInfo */
			pci1756a_BIOMAP,
			pci1756a_LBLMAP,
			pci1756a_SIDMAP,
			pci1756a_SBIO,
			pci1756a_SLBL,
			{0,31},
			1,
		},
		{ /* ParamMapInfo */
			pci1756a_PTIDSMAP,
			pci1756a_PTNAMESMAP,
			pci1756a_SPTMAP,
			{0,33},
			34,
		},
		"pci1756a",
		"",
		"pci1756a",
		1,
		pci1756a_dtmap,
	},
};
int getNumRef(void){
	 return(sizeof(appInfo) / sizeof(AppMapInfo));
}