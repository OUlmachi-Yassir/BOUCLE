#include<stdio.h>
int main()
{
int i,j,n;
printf("dooner un nombre : ");
scanf("%d",&n);
for(i=1;i<=n;i++){
    for(j=n-i+1;j<=n;j++)
    {
    printf("*");
    }
    printf("\n");
 }
 
}