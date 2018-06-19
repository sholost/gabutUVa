#include <iostream>
using namespace std;

int main() {
	long int a,b;
	while(scanf("%ld %ld", &a, &b)!=EOF){
	    b-a>=0?printf("%ld\n", b-a) : printf("%ld\n", -1*(b-a));
	}
	return 0;
}
