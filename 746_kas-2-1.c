#include<stdio.h>
int main()
{
int i,n;
float x,sum=0,sred=0;
scanf ("%d\n",&n);
for (i=0;i<n;i++)
 { scanf("%f",&x);
   sum+=x;
   sred=sum/(i+1);
 };
printf ("%f\n",sred);
return 0;
}
