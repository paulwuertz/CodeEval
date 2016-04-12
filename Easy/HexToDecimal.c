#include <stdio.h>
#include <math.h>
#include <string.h>

int cha(char a);

int main(int argc, const char * argv[]) {
    FILE *file = fopen(argv[1], "r");
    char line[1024];
    while (fgets(line, 1024, file)) {
        int lp=strlen(line);
        int sol=0;
        for(;lp>0;lp--){
        	sol+=cha(line[lp-1])*pow(16,strlen(line)-lp);
        }
        sol++;
        sol/=16;
        printf("%d\n",sol);
    }
    return 0;
}


int cha(char a){
	switch(a){
	case '0':return 0;
	case '1':return 1;
	case '2':return 2;
	case '3':return 3;
	case '4':return 4;
	case '5':return 5;
	case '6':return 6;
	case '7':return 7;
	case '8':return 8;
	case '9':return 9;
	case 'a':return 10;
	case 'b':return 11;
	case 'c':return 12;
	case 'd':return 13;
	case 'e':return 14;
	case 'f':return 15;
	default:return -1;
	}
}
