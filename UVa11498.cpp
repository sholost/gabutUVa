#include <iostream>
#include <string>
using namespace std;

int main() {
	int a, x, y, d, f;
	while(scanf("%d",&a)!=EOF){
	    scanf("%d %d", &x, &y);
	    while(a--){
	        scanf("%d %d", &d, &f);
	        if (d==x||f==y)printf("%s\n","divisa");
	        else if (d<x&&f>y) printf("%s\n","NO");
	        else if (d<x&&f<y) printf("%s\n","SO");
	        else if (d>x&&f<y) printf("%s\n","SE");
	        else if (d>x&&f>y) printf("%s\n","NE");
	    }
	}
	return 0;
}
