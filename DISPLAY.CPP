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
  cout<<endl<<"\nItem code:"<<code;
  cout<<"\tItem price:"<<price;
  cout<<"\tItem name:"<<name;
  cout<<"\tItem quantity:"<<qty;
  cout<<"\n   Your total bill is:"<<amt;
 }
 ~item(){}
};




void main()
{
 item ob;
 clrscr();
 ifstream fin("item.dat");
 if(!fin)
 {
  cout<<"\nFile not found:";
  getch();
  exit(1);

 }
 while(fin)
 {
  fin.read((char*)&ob,sizeof(ob));
  if(fin)
  ob.show();
}
 fin.close();
 getch();
}

