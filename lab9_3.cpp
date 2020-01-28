//cout << "Number of data = ";
//cout << "Mean = ";
//cout << "Standard deviation = ";
#include<iostream>
#include<string>
#include<fstream>
#include<cmath>
#include<cstdlib>
using namespace std;

int main(){
    ifstream sc("score.txt"); 
    string N;
    float x = 0,Mean,std,y=0,z;
    int i;    
    i = 0;
    while(getline(sc,N)){
        x +=atof(N.c_str());
        y+=pow(atof(N.c_str()),2);
        i++;
    }
    cout << "Number of data = " << i << "\n";
    Mean = x/(i);
    cout << "Mean = " << Mean << "\n";
    z = (y/(i)) - pow(Mean,2);
    cout << "Standard deviation = " << pow(z,0.5);
	
	return 0;
}
