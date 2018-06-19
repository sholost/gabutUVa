#include <iostream>
#include <cstdio>
#include <stdio.h>
using namespace std;

int even(int val){ //kalo even
    val=val/2;
    return val;
}

int odd(int val){ //kalo odd
    val=val*3+1;
    return val;
}

int banding(int val){  //fungsi if nya
    if(val%2==0) val=even(val);
	else val=odd(val);
	return val;
}

int main() {
	long long a, b;
	int meh=0;
	while(scanf("%lld %lld", &a, &b)!=EOF&&b>=0){
	    ++meh;
	    //long long n=b;
	    long long m=a;
	    int count=0;
	    while(a>0&&a<=b){
	        ++count;
	        if(a==1)break;
	        a=banding(a);
	    }
	    cout<<"Case "<<meh<<": A = "<<m<<", limit = "<<b<<", number of terms = "<<count<<endl;
	}
	return 0;
}
