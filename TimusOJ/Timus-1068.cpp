#include <bits/stdc++.h>
using namespace std;

main()
{
    int n, sum = 0;
    cin >> n;
    if(n<=0){
        sum = 1;
        for(int i = n; i<0; i++){
            sum += i;
        }
    }
    else
    {
        for(int i  = n; i>0  ; i--){
            sum += i;
        }
    }
    printf("%d\n",sum);
    return 0;
}