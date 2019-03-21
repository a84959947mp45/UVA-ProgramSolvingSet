#include <iostream> 
#include <iomanip> 
  
using namespace std;  
  
int main(){  
  
  int r1,r2;  
  int add,mul,sub,adv,mod; 
   while(cin>>r1>>r2){  
     add=r1+r2;
     mul=r1*r2;
     sub=r1-r2;
     adv=r1/r2;
     mod=r1%r2;
     cout<<r1<<"+"<<r2<<"="<<add<<endl; 
     cout<<r1<<"*"<<r2<<"="<<mul<<endl; 
     cout<<r1<<"-"<<r2<<"="<<sub<<endl;
	 cout<<r1<<"/"<<r2<<"="; 
     if(r1<0)  
            cout << r1/r2-1 << "..." << r1%r2+r2 << endl;  
        else  
            cout << r1/r2 << "..." << r1%r2 << endl;
  }  
  
  
}  
