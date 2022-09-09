#include <iostream>
#include <vector>
using namespace std;

int main () {
	
	vector < int > nums;
	nums.push_back(24);
	nums.push_back(81);
	nums.push_back(57);
	
	for ( int num: nums )
		cout << num << "  ";
}
