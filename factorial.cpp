#include <bits/stdc++.h>
using namespace std;

int factorial(int n){
    if(n>=1){
        return n*factorial(n-1);
    }
    return 1;
}
main(){
    int a;
    cin >> a;
    int fact = factorial(a);
    printf("%llu",fact);
    return 0;
}
