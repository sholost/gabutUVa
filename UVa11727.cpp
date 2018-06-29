#include <iostream>
using namespace std;

int main() {
	short int a;
	int b, c, d;
	scanf("%d", &a);
	for(int i=1;i<=a;i++){
	    scanf("%d %d %d", &b, &c, &d);
	    printf("%s %d%s %d\n","Case",i, ":", max(min(b,c),max(min(c,d),min(b,d))));
	}
	return 0;
}
