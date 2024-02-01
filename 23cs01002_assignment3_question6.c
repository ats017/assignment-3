#include<stdio.h>
int main()
{
    int n,m,p,i,j,k,o=1,c=0;
    printf("Enter a number:");
    scanf("%d",&n);
    m=n*n;
    p=m;
    while(m>0)
    {
        m=m/10;
        c++;
    }
    for(k=1;k<=c-c/2;k++)
    {
        o=o*10;
    }
    i=p/o;
    j=p%o;
    if((i+j)==n)
    printf("%d is Kaprekar number",n);
    else
    printf("%d is not a kaprekar number",n);
    return 0;
}