#include<fstream.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

class item
{
 int code,qty;
 float price,amt;
 char name[100];
 void calcamt()
 {
  amt=price*qty;
 }
public:
 item()
 {
  strcpy(name,"NA");
  price=0.0;
  code=0;
  qty=0;
  calcamt();
 }

 item(int ic,char n[],int qt,float p)
 {
  strcpy(name,n);
  price=p;
  code=ic;
  qty=qt;
  calcamt();
 }

 void getdata()
 {
  cout<<"\nEnter the item code:";
  cin>>code;
  cout<<"\nEnter the item price:";
  cin>>price;
  cout<<"\nEnter the item name:";
  gets(name);
  cout<<"\nEnter the item quantity:";
  cin>>qty;
  calcamt();
 }

 void show()
 {
  cout<<"\nItem code:"<<code;
  cout<<"\nItem price:"<<price;
  cout<<"\nItem name:"<<name;
  cout<<"\nItem quantity:"<<qty;
  cout<<"\nYour total bill is:"<<amt;
 }
 ~item(){}
};




void main()
{

 item ob;
 clrscr();
 ofstream fout("item.dat");
 if(!fout)
 {
  cout<<"\nFile not found:";
  exit(1);
 }
 char choice;

 do
 {
   ob.getdata();
   fout.write((char*)&ob,sizeof(ob));
   cout<<"\nRecord added to file:"<<"\tAdd more records\t(Y/N):";
   cin>>choice;


 }
 while(choice=='y'||choice=='Y');
 fout.close();
}

