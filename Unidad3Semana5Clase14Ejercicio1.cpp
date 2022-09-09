#include <iostream>
using namespace std;

int main () {
	
	int n = 8;
	int i = 1;
	
	while ( i <= 8 ) {
		
		int j = 1;
		while ( j <= i ) {
			
			cout << j << "  ";
			j++;
			
		}
		
		cout << "\n";
		i++;
	}
}
