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
  cout<<"\nItem price:"<<price;
  cout<<"\nItem name:"<<name;
  cout<<"\nItem quantity:"<<qty;
  cout<<"\nYour total bill is:"<<amt;
 }
 int get()
 {
  return code;
 }
 ~item(){}
};




void del()
{
 int sk;
 cout<<"\nenter the code no:";
 cin>>sk;
 item ob;
 ifstream fin("item.dat");
 if(!fin)
 {
  cout<<"\nFile not found:";
  exit(1);
 }

 ofstream fout("temp.dat");
  if(!fout)
 {
  cout<<"\nFile not found:";
  exit(1);
 }

 while(fin.read((char*)&ob,sizeof(ob)))
 {
  if(ob.get()!=sk)
  fout.write((char*)&ob,sizeof(ob));
 }
 fin.close();
 fout.close();
 remove("item.dat");
 rename("temp.dat","item.dat");
}
void main()
{
 clrscr();
 del();
 getch();
}

