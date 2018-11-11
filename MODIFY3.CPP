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
 int get()
 {
  return code;
 }
 ~item(){}
};


void modify()
{
 fstream file("item.dat",ios::in|ios::out);
 if(!file)
 {
  cout<<"\nError accessing the file:";
  getch();
  exit(1);
 }
 item ob;
 int sk,rno=0;
 char found='f';
 cout<<"\nEnter the record to be modified:";
 cin>>sk;
 while(file)
  {
   file.read((char *)&ob,sizeof(ob));
   if(ob.get()==sk)

   {
    found='t';
    break;
   }rno++;
  }
  if(found=='t')
  {
   file.seekp(rno*sizeof(ob),ios::beg);
   ob.getdata();
   file.write((char *)&ob,sizeof(ob));
  }
  else
  cout<<"\nfile not found";
}
void main()
{
 clrscr();
 modify();
 getch();
}