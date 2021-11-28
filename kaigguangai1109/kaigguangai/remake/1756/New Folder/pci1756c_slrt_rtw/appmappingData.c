#include "slrtappmapping.h"
#include "./maps/pci1756c.map"



const AppMapInfo appInfo[] = 
{
	{ /* Idx 0, <pci1756c> */
		{ /* SignalMapInfo */
			pci1756c_BIOMAP,
			pci1756c_LBLMAP,
			pci1756c_SIDMAP,
			pci1756c_SBIO,
			pci1756c_SLBL,
			{0,48},
			18,
		},
		{ /* ParamMapInfo */
			pci1756c_PTIDSMAP,
			pci1756c_PTNAMESMAP,
			pci1756c_SPTMAP,
			{0,18},
			19,
		},
		"pci1756c",
		"",
		"pci1756c",
		1,
		pci1756c_dtmap,
	},
};
int getNumRef(void){
	 return(sizeof(appInfo) / sizeof(AppMapInfo));
}