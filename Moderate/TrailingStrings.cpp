#include <iostream>
#include <fstream>
using namespace std;
int main(int argc, char *argv[]) {
    ifstream stream(argv[1]);
    string line;
    while (getline(stream, line)) {
        if(line.length()>0){
            string end;
            unsigned int pos;
            bool com=false,con=true;

            for(unsigned int i=0; i<line.length();i++){
                if(com){
                    end.push_back(line.at(i));
                }
                if(line.at(i)==','){
                    com=true;
                    pos=i;
                }
            }

            for(unsigned int i=0; i<end.length();i++){
                int t=line.length()-2*end.length()-1+i;
                if(t<0 || t>line.length()){
                    con=false;
                    break;
                }
                if(line.at(t)!=end.at(i)){
                    con=false;
                }
            }
            cout << con << endl;
        }
    }
    return 0;
}
