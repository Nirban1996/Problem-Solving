#include <stdio.h>
#include <string.h>
int fact(int n,int k)
{
    if(n>=1)
      return n*fact(n-k,k);
    return 1;
}
main()
{
    int n,i,k=0,factorial;
        char s[1000];
    scanf("%d",&n);
    scanf("%s",s);
    for(i=1;i<=strlen(s);i++)
        //k=i;
    factorial=fact(n,i);
    printf("%d",factorial);
    return 0;
}
