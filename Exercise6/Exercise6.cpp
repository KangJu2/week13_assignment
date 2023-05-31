#include <iostream>
using namespace std;
class mm {
public:
	mm() { a = 4 + 300; cout << "mm\n"; } 
	mm(int b) { a = b + 100; cout << "mmb\n"; } 
	int a;
};
class nn : public mm {
public:
	nn() { a = 11;  cout << "nn\n"; } 
	nn(int b) { c = a;  a = b; cout << "nnb\n"; } 
	int c;
};
class oo : public nn {
public:
	oo() { a = 18;  cout << "oo\n"; } 
	oo(int b) { c = a + 3;  a = b + 4 ; nn::nn(a);  cout << "oob\n"; } 
	int c;
};
int main() {
	oo aa(3);
	cout << aa.a << endl;
	cout << aa.c << endl;
	return 123;
}