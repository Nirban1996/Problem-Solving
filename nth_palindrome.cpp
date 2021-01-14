#include <bits/stdc++.h>
using namespace std;

int palindrome(int x, int counter){
    int a[32];
    int count=0;
    // printf("Current number: ");
    for(int i = 0; i<33;i++)
    {
        a[i] = x%10;
        // printf("%d",a[i]);
        count++;
        x /= 10;
        if(x ==0){
            break;
        }
    }
    // printf("\n");
    int isPalindrome = 1;
    for(int i = 0; i< count; i++){
        if(a[i]!=a[count-i-1]){
            isPalindrome = 0;
            break;
        }
    }
    if (isPalindrome == 1)
    {
        counter++;
        // printf("Palindrome\n");
        return counter;
    }
    else
    {
        // printf("Not Palindrome\n");
        return counter;
    }
}

main()
{
    int n, count, temp;
    cin >> n;
    for(int i = 1; ;i++){
        count =  palindrome(i, count);
        // printf("Number of palindrome: %d\n",count);
        if(count == n){
            printf("So the %dth palindrome is: %d\n",n,i);
            break;
        }
    }
    return 0;
}