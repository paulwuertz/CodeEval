/* realloc1.c */
#include <stdio.h>
#include <stdlib.h>

//n=Anzahl der Elemente in neuer Zeile
//prev=Pointer zur vorherigen Zeile
int* pTri(int n,int* prev){
	//alociiert Speicher für n int´s
	int* zahlen = calloc(n, sizeof(int));
	int i=0;
	//berechnet die N Zahlen
	for (i = 0; i < n; i++)	{
		//am Anfang und Ende immer 1
		if (i==0 || i==n-1){
			*(zahlen+i)=1;
		} 
		//sonst Summe aus beiden Zahlen darüber
		else {
			*(zahlen+i)=*(prev+i)+*(prev+i-1);
		}
	}
	return zahlen;
}

int main(int argc, const char * argv[]) {
	//öffnet die Datei, die als erstes Parameter angegeben ist
    FILE *file = fopen(argv[1], "r");
    //ein Buffer für eine Zeile mit max 1024 Zeichen
    char line[1024];
    //n ist die Anzahl an Zeilen die berechnet wird
	int n=21;
    //allociiert genug Speicher für n Zeilen
    //der PointerAufPointer, quasi ein 2-d Array
	//mit Pyramidenstruktur (Zeile N hat N Elemente)
    int** level=calloc(n,sizeof(int*));
	
    //berechnet nacheinander die Zeilen
	int i=0;
	for (i=1; i < n; i++){
		*(level+i)=pTri(i,*(level+i-1));
	}

	//liest die Zeilen der Eingabedatei ein
    while (fgets(line, 1024, file)) {
    	//liest die eine Zahl je Zeile aus
        n=atoi(line);
        //druckt alle Zeilen in eine Zeile aus
		int i=0,j=0; 
		for (i = 0; i <= n; i++){
			for (j = 0; j < i; j++){
				printf("%i ", *(*(level+i)+j));
			}
		}
		//Zeilenumbruch
		if (i!=0 && j!=0){
			printf("\n");
		}
    }
    return 0;
}