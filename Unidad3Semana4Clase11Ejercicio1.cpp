#include <iostream>
using namespace std;

int main () {
	
	int number = 0;
	int sum = 0;
	
	do {
		
		sum += number;
		
		cout << "Ingrese un numero: ";
		cin >> number;
		
	} while ( number >= 0 );
		cout << "\nLa suma es: " << sum << endl;
		
		return 0; 
}
