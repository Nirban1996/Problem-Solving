#include <bits/stdc++.h>
using namespace std;

main(){
    int a;
    cin >> a;
    unsigned long long factorial = 1;
    for(int i = a; i>0 ;i--){
        factorial *= i; 
    }
    printf("%llu",factorial);
    return 0;
}