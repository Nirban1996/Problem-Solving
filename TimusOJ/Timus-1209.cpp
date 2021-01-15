#include <bits\stdc++.h>
using  namespace std;
int mm[1000000];

int main()
{
    //freopen("input.txt", "r", stdin);

    long long int t, k;
    long long int n;
    bool space = false;

    cin >> t;
    int i=0;
    while(i<t) {
        cin >> k;
        
        n = (-1 + sqrt(double(8*k-7))) / 2.0;

        //if(space)cout << ' '; space = true;

        if(k == n*(n+1)/2+1){
	         mm[i]=1;
	         i++;
		}
        else {
		    mm[i]=0;
		    i++;
        }
    }
    
    for(int i=0;i<t;i++)
       cout << mm[i] << " ";
	       cout << '\n';

    return 0;
}
