#include<stdio.h>
int main()
{
int i,a,s=0,d,max=0;
do{
printf("dooner un nombre :");
scanf("%d",&a);
}while(a<0);

for(i=1;i<=a;i++)
{
    
        printf("DOONER UN NOMBRE:");
        scanf("%d",&d);
    
    
    if(d%10==0 && d<100 && d>0)
        s=s+d;
    if(d%10==0 && d<100 && d>0&&d>max)
        max=d;
    
}

        printf("la somme est : %d",s);
        printf("le max est : %d",max);

}
   