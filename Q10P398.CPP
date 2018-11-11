#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int A[100], B[100], C[200], n, m, k=0;
int I=0, J=0;
cout<<"\n Enter number of elements you want to insert in the first array:";
cin>>n;
cout<<"\n Enter Elements in the first array:";
for(int i=0;i<n;i++)
cin>>A[i];
cout<<"\n Enter number of elements you want insert in the second array:";
cin>>m;
cout<<"\n Enter elements in the second array:";
for(i=0;i<m;i++)
cin>>B[i];

for(int T=I; T<n; T++)
C[k++]=A[T];
for(T=J;T<m;T++)
C[k++]=B[T];
cout<<"\n THE MERGED ARAY is:";
for(i=0;i<k;i++)
{
cout<<C[i]<<"\t";
}
getch();
}

