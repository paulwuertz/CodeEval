#include <iostream>
#include <fstream>
using namespace std;
int main(int argc, char *argv[]) {
    ifstream stream(argv[1]);
    string line;
    while (getline(stream, line)) {
    	if(line.length()<=55){
        	cout << line << endl;
		}
        else{
        	line=line.substr(0,40);
        	if(line.find_last_of(' ')<300)
        		line=line.substr(0,line.find_last_of(' '));
        	line.append("... <Read More>");
        	cout << line << endl;
        }
    }
    return 0;
}