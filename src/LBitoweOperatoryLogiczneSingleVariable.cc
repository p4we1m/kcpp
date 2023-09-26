#include <iostream>
using namespace std;

void printBinary(const unsigned char val) {
	for(int i = 7; i >= 0; i--)
		if(val & (1 << i))
			cout << "1";
		else
			cout << "0";
}

#define PR(STR, EXPR) \
	cout << STR <<"\t"; printBinary(EXPR); cout << endl;

int main() {
	unsigned char k = 0;
	PR("Primary value equal 0", k);

	unsigned char position;
	for(int iter = 0; iter < 8; iter++) {
		cin >> position;
		if(position == 1)
			k = k | (1 << iter);
		PR("value equal: ", k);
	}

	return 0;
}
