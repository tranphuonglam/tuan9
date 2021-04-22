#include <iostream>
using namespace std;
int main() {
	char* a = new char[10];
char* c = a + 3;
for (int i = 0; i < 9; i++) a[i] = 'a';
a[9] = '\0';
cerr <<"a: " << "-" << a << "-" << endl;
cerr <<"c: " << "-" << c << "-" << endl;
//delete c;//ko dc del c
cerr << "a after deleting c:" << "-" << a << "-" << endl;//lenh k chay nhu mog muon
	return 0;
}
