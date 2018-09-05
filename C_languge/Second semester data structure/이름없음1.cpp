#include <iostream>
using namespace std;

class person {
	int man, woman, sum;
	
public:
	void itset(int a, int b);
	int itsum();
};

void person::itset(int a, int b) {
	man = a;
	woman = b;
}

int person::itsum() {
	sum = man + woman;
	return (sum);	
}

int main() {
	person p;
	p.itset(5, 6);
	cout << p.itsum();
}

