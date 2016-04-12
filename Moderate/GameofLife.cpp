#include <iostream>
#include <fstream>
using namespace std;

string b[100];

void ll();

int main(int argc, char *argv[]) {
    ifstream stream(argv[1]);
    string line;
    int f=0;
    while (getline(stream, line)) {
        b[f]=line;
        f++;
    }
    for(int i=0;i<10;i++)
    	ll();
    for(int i=0;i<100;i++)
    	cout<<b[i]<<endl;
    return 0;
} 

void ll(){
	string n[100];
	int a;
	for(int y=0;y<100;y++){
		for(int x=0;x<100;x++){
			a=0;
			if(x-1>-1 && y-1>-1 && b[y-1].at(x-1)=='*')
				a++;
			if(y-1>-1 && b[y-1].at(x)=='*')
				a++;
			if(x+1<100 && y-1>-1 && b[y-1].at(x+1)=='*')
				a++;
			if(x-1>-1 && b[y].at(x-1)=='*')
				a++;
			if(x+1<100 && b[y].at(x+1)=='*')
				a++;
			if(x-1>-1 && y+1<100 && b[y+1].at(x-1)=='*')
				a++;
			if(y+1<100 && b[y+1].at(x)=='*')
				a++;
			if(x+1<100 && y+1<100 && b[y+1].at(x+1)=='*')
				a++;
			if((b[y].at(x)=='*' && (a==2 || a==3)) || (b[y].at(x)=='.' && a==3))
				n[y]+='*';
			else
				n[y]+='.';
		}
	}
	
		for(int i=0;i<100;i++)
		  	b[i]=n[i];
}

