#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;
char* concat(const char* a, const char* b)
{
	char *point = new char;
	int x = strlen(a);
	int y = strlen(b);
	for(int i=0;i<x;i++) {
	*(point+i) = *(a+i);
   }
	for(int i=x;i<x+y;i++) {
	*(point+i) = *b;
	b++;
   }
   *(point+(x+y)) = '\0';
	return point;
}
int main() {
	cout << concat("hello", " world!");
	return 0;
}
