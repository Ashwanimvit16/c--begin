//menu program
#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<stdio.h>
#include<process.h>
void getval();
void display();
void add();
void search(int sk);
void modify(int ak);
void del(int ak);
void menu()
{
int choice;
do{
clrscr();
 cout<<"\n\n\t\t MAIN MENU OF  FLIPKART";
 cout<<"\n\t\t 1.Display item";
 cout<<"\n\t\t 2.ADD item";
 cout<<"\n\t\t 3.Search item";
 cout<<"\n\t\t 4.Modification item";
 cout<<"\n\t\t 5.Delete item";
  cout<<"\n\t\t 6.Exit item";
  cout<<"\nenter your choice:";
  cin>>choice;
  switch(choice)
  {
   case 1:
  display();
  break;
   case 2:
  add();
  break;
  case 3:

  int sk;
  cout<<"enter the code:";
  cin>>sk;
  search(sk);
   break;
  case 4:
 { int ak;
  cout<<"enter the code:";
  cin>>ak;
  modify(ak);
  }
  break;
  case 5:
  int ak;
  cout<<"enter the item to be deleted:";
  cin>>ak;
  del(ak);
  break;
  case 6:
  {
  cout<<"\t\t\t\tThanks for visiting";
  cout<<"\t\t\t\tUse it again.....";
  exit(1);
  }
  break;
  default:
  cout<<"\t\t\t\tInvalid choice...";
     }
     getch();
  }while(choice!=0);
      getch();
  }
  struct item
  {
  int price,qty,code;
  char name[100];
  };
  item I[20];
  int n;

  void main()
  {
  clrscr();
    cout<<"How many items you want to create:";
    cin>>n;

    getval();
	menu();
    }

    void getval()
    {
     for(int i=0;i<n;i++)
     {
     cout<<"enter code:";
     cin>>I[i].code;
     cout<<"enter item name:";
      gets(I[i].name);
      cout<<"enter Quantity:";
     cin>>I[i].qty;
     cout<<"enter Price:";
     cin>>I[i].price;
     }
     }

     void display()
     {
       for(int i=0;i<n;i++)
     {
     cout<<"\nCode is:"<<I[i].code;
     cout<<"\nItem name is:"<<I[i].name;
     cout<<"\nQuantity is:"<<I[i].qty;
     cout<<"\nPrice entered is:"<<I[i].price;
     }getch();

     }

     void add()
     {
      cout<<"\nenter code:";
     cin>>I[n].code;
     cout<<"\nenter item name:";
      gets(I[n].name);
      cout<<"\nenter Quantity:";
     cin>>I[n].qty;
     cout<<"\nenter Price:";
     cin>>I[n].price;
     n++;
     }

     void search(int sk)
     {
      char found='f';
      for(int i=0;i<n;i++)
	   if(I[i].code==sk)
     {
       found='t';
      cout<<"\nCode is:"<<I[i].code;
     cout<<"\nItem name is:"<<I[i].name;
     cout<<"\nQuantity is:"<<I[i].qty;
     cout<<"\nPrice entered is:"<<I[i].price;
     }
     if(found=='t')
     cout<<"\nRecord found";
     else
     cout<<"\nNot in the list";
     }

     void modify(int ak)
     {
     char found='f';
     for(int i=0;i<n;i++)
	  if(I[i].code==ak)
     {
       found='t';

       cout<<"\nenter code:";
     cin>>I[i].code;
     cout<<"\nenter item name:";
      gets(I[i].name);
      cout<<"\nenter Quantity:";
     cin>>I[i].qty;
     cout<<"\nenter Price:";
     cin>>I[i].price;

     }
     if(found=='t')
     cout<<"\nRecord modified";
     else
     cout<<"\nNot in the list";
     }


     void del(int ak)
     {  char found='f';
     for(int i=0;i<n;i++)
	  if(I[i].code==ak)
	   { found='t';
	   break;}
     {
       if (found=='t')
      for(int j=i;j<(n-1);j++)
      {I[j]=I[j+1];
	    n--;}
      else
      cout<<"element not in the list";
      }
      }



