#include <iostream>
using namespace std;
int main() {
	int* p = new int;
int* p2 = p;
*p = 10;
//delete p; //khong dc xoa p trc 
cout << *p2;
delete p2;
return 0;
}
