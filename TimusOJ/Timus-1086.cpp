#include <bits/stdc++.h>
using namespace std;
int marked[100000]; 
void SieveOfEratosthenes(int n)
{
    bool prime[n+1];
    int count=1;
    memset(prime, true, sizeof(prime));
 
    for (int p=2; p*p<=n; p++)
    {
        if (prime[p] == true)
        {
            for (int i=p*2; i<=n; i += p)
                prime[i] = false;
        }
    }
 
    for (int p=2; p<=n; p++){
       if(prime[p]){
          marked[count]=p;
          count++;
	   }
    }
}
 
int main()
{
    int x,n;
    SieveOfEratosthenes(170000);
    cin >> n;
    for(int i=0;i<n;i++){
    cin >> x;
    cout << marked[x] << "\n"; 
    }
    return 0;
}
