#include <iostream> 
#include <iomanip> 
  
using namespace std;  
  
int main(){  
  
  double r1,r2,r3;  
  double sum;  
   while(cin>>r1>>r2>>r3){  
     sum=(r1+r2)*r3/2;  
      cout<<"Trapezoid area:"<<fixed<<setprecision(1)<<sum<<endl;  
  }  
  
  
}  
