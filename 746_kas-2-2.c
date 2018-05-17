#include<stdio.h>
int main()
{
int o,c,i,n;
char x;
scanf ("%d\n",&n);
for (i=0;i<n;i++)
    {
     scanf ("%c",&x);
     if (x=='(') {o++;}
     else { c++;}
    };
if (o!=c) {printf ("0\n");}
   else {printf ("1\n");};
return 0;
}
