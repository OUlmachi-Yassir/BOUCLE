#include<stdio.h>
int main()
{
int i,a;
printf("donner un nombre : ");
scanf("%d",&a);
for(i=2;i<=a/2;i++){
if(a%i==0){
printf("le %d n'est pas premier",a);
}
else if (a%i!=0)
{
   printf("le %d est  premier",a);
}
return 0;
}

}