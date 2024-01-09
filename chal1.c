#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main (int argc, char ** argv) {
	char word1000[] = "accordant";
	char word1100[] = "aceacenaphthene";
	char word1200[] = "acetifier";
	char word1300[] = "acetylrosaniline";
	char word1400[] = "achrodextrinase";
	char word1500[] = "aciduric";
	char word1600[] = "acology";
	char word1700[] = "acraein";
	char word1800[] = "acrodactylum";
	char word1900[] = "acrostically";
	char word2000[] = "actinologue";
	char word2100[] = "actuarially";
	char word2200[] = "adambulacral";
	char word2300[] = "addleheadedness";
	char word2400[] = "adenographer";
	char word2500[] = "adiabatic";
	char word2600[] = "adjudge";
	char word2700[] = "admitted";
	char word2800[] = "adosculation";
	char word2900[] = "adulteress";
	char word3000[] = "adviceful";
	char word3100[] = "aegrotant";
	char word3200[] = "aerocartograph";
	char word3300[] = "aeropleustic";
	char word3400[] = "affaite";
	char word3500[] = "affrayer";
	char word3600[] = "afterbody";
	char word3700[] = "afterripening";
	char word3800[] = "agamogenesis";
	char word3900[] = "agentry";
	char word4000[] = "agistment";
	char word4100[] = "agonal";
	char word4200[] = "agrobiologically";
	char word4300[] = "ahoy";
	char word4400[] = "aircraftswoman";
	char word4500[] = "Ajuga";
	char word4600[] = "alack";
	char word4700[] = "albarello";
	char word4800[] = "albuminolysis";
	char word4900[] = "alcoholytic";
	char word5000[] = "alectryomachy";
	char word5100[] = "aleyrodid";
	char word5200[] = "algometrical";
	char word5300[] = "alimentiveness";
	char word5400[] = "Alkaphrah";
	char word5500[] = "allele";
	char word5600[] = "allochthonous";
	char word5700[] = "allothimorphic";
	char word5800[] = "Almida";
	char word5900[] = "alongst";
	char word6000[] = "Alshain";
	char word6100[] = "altitude";
	char word6200[] = "alveolitis";
	char word6300[] = "Amaranthus";
	char word6400[] = "amberous";
	char word6500[] = "ambrosiac";
	char word6600[] = "amerce";
	char word6700[] = "amidoazobenzol";
	char word6800[] = "amissible";
	char word6900[] = "Amnigenia";
	char word7000[] = "amount";
	char word7100[] = "amphictyony";
	char word7200[] = "Amphistomum";
	char word7300[] = "amsel";
	char word7400[] = "amylohydrolytic";
	char word7500[] = "anacephalaeosis";
	char word7600[] = "anaglyphical";
	char word7700[] = "analyse";
	char word7800[] = "anaplasty";
	char word7900[] = "anathematically";
	char word8000[] = "anchoretish";
	char word8100[] = "andrarchy";
	char word8200[] = "anecdote";
	char word8300[] = "aneurism";
	char word8400[] = "angioelephantiasis";
	char word8500[] = "Anglicanism";
	char word8600[] = "angustisellate";
	char word8700[] = "Animalia";
	char word8800[] = "anisomeric";
	char word8900[] = "annalist";
	char word9000[] = "Annularia";
	char word9100[] = "Anomoean";
	char word9200[] = "anotus";
	char word9300[] = "antdom";
	char word9400[] = "antennate";
	char word9500[] = "anthela";
	char word9600[] = "anthosiderite";
	char word9700[] = "anthropogeographical";
	char word9800[] = "anthryl";
	char word9900[] = "Antiburgher";
	char word10000[] = "anticonscience";
	int i;
	int j=0;
	char *key;
	if (argc<=1) {
		printf("Usage: %s <key>\n", argv[0]);
		exit(-1);
	}
	key=argv[1];
	if (strlen(key)<8) {
		printf("Wrong!\n");
		exit(-2);
	}
	// trgi]ihZ
	for (i=strlen(key)-1;i>=0;i--) {
		if (word8900[j]-i != key[i]) {
			printf("Wrong!\n");
			exit(-i);
		}
		j++;
	}
	printf("Correct\n");
}
