#include <iostream>
using namespace std;

int main() {
    int a, b;
    scanf("%d",&a);
    for(int i=0;i<a;i++){
       scanf("%d",&b);
       long long count=0;
       for(int i=0;i<b;i++){
           long long c,d,e;
           scanf("%lld %lld %lld", &c, &d, &e);
           long long huh;
           if(c>0&&d>0&&e>0) huh=c*e;
           else huh=0;
           count=count+huh;
       }
       cout<<count<<endl;
    }
    return 0;
}
