#include<bits/stdc++.h>
using namespace std;

int main()
{ int test;
  cin>> test;
  while(test--)
  {   
      int n ;cin>>n;
      int c=0;
      
      for(int i = 0;i<n;i++)
      {   
          long long e;
          cin>>e;
          
          if(e%2 !=0)
           c++;
      }
      
      if( c%2 == 0){
       cout<<"yes"<<endl; 
       cout<<(c%2)<<endl;}
       else 
       cout<<"no"<<endl;
       
      c=0;
      
  }
    return 0;
}
