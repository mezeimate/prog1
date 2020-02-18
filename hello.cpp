#include <iostream>
using namespace std;
int main(){
	cout << "Heloo\n\r";
	int a = 1;		
	int db = 0;	
	while(a != 0){
		a <<= 1;
		//cout << a << "\t";
		db++;
	}
	cout << "\n\r"; 
	cout << db << "db \n\r";
	return 0;
}
