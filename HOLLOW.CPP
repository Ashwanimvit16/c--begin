 #include<iostream.h>
 #include<conio.h>
  void main()
  {
   clrscr();
   int n,z=1;
   cout<<"Enter the no of rows:";
   cin>>n;
    for(int i=0;i<n;i++)
    {
     cout<<endl;
     for(int j=n;j>0;j--)
     cout<<" ";
     cout<<"*";
      if(i!=0)
     { for(int k=1;k<z;k++)
      cout<<" ";
      cout<<"*";
      z+=2;
      }
      for(i=0;i<=z+1;i++)
      cout<<"*";
    }
    getch();
    }
