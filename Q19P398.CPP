#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
void swap(double arr[], int n)
{
int temp=arr[0];
arr[0]=arr[n-1];
arr[n-1]=temp;
}
void main()
{
clrscr();
double arr[100], n;
cout<<"\n Enter the number of elements you want to insert:";
cin>>n;
cout<<"\n Enter the value for the array:";
for(int i=0;i<n;i++)
cin>>arr[i];

swap(arr, n);

cout<<"\n ARRAY AFTER SWAPPING:"<<endl;
for(i=0;i<n;i++)
cout<<arr[i]<<"\t";
getch();
}