#include<iostream>
using namespace std;
#include<string>

int main(){
	int count[5] = {0,0,0,0,0,};
	cout << "Please input grade of each student (A-F) or input 0 to exit.\n";
	int i = 1;
	string grade;
	do{
		cout << "Student [" << i << "]:";
		
		cin >> grade;
		if( grade == "0" ){
			break;
		}else if(grade == "A"){
			count[0]+= 1;
			i++;
		}else if(grade == "B"){
			count[1]+= 1;
			i++;
		}else if(grade == "C"){
			count[2]+= 1;
			i++;
		}else if(grade == "D"){
			count[3]+= 1;
			i++;
		}else if(grade == "F"){
			count[4]+= 1;
			i++;
		}else if(grade != "0" || grade != "A" || grade != "B" || grade != "C" || grade != "D" || grade != "F"){
			cout <<"Wrong input. Please input again.\n";
		}
	

	}while(true);
	
	
	cout << "In total " << i << " students.\n";
	cout << "A = " << count[0] <<",";
	cout << "B = " << count[1] <<",";	
	cout << "C = " << count[2] <<",";
	cout << "D = " << count[3] <<",";
	cout << "F = " << count[4];
	
	return 0;
}
