//fact
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int n;float u;
cout<<"\n Enter the value of u:";
cin>>u;
cout<<"\n Enter the values for n:";
cin>>n;
float sum=1, sgn=-1;
for(int i=1;i<n;i++)
{
float fact=1;
float power=1;


for(int j=1; j<=(i*2+1);j++)
     fact=fact*j;

for(j=1;j<=i;j++)
     power=power*u;

cout<<"\n";
float term=power/fact;
sum=sum+(sgn*term);
cout<<term<<endl;
sgn=sgn*(-1);
}
cout<<"\n Sum is:"<<sum;
}
