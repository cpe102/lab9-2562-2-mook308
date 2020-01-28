#include<iostream>
#include<string>
#include<fstream>
using namespace std;

int main(){

    ofstream Csotus("cheerbook_copy.txt");
    ifstream sotus("cheerbook.txt"); 
    string textline;
    Csotus << "-------------------- SOTUS ---------------------\n";
    while(getline(sotus,textline)){
        Csotus<< textline << "\n";
    }
    Csotus << "-------------------- SOTUS ---------------------";
	
	return 0;
}
