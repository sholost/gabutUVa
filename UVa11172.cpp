#include <iostream>
using namespace std;

int main() {
	int a, b, c;
	scanf("%d", &a);
	    while(a--){
	        scanf("%d %d", &b, &c);
	        if(b>c) printf("%c",'>');
	        else if(b<c) printf("%c",'<');
	        else printf("%c",'=');
	        printf("\n");
	    }
	
	return 0;
}
