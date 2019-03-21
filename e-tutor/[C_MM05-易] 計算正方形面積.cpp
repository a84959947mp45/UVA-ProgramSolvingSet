#include <iostream> 
#include <iomanip> 
  
using namespace std;  
  
int main(){  
  
  double r1;  
  double sum;  
   while(cin>>r1){  
     sum=(r1*r1);  
      sum+=0.05;
      cout<<fixed<<setprecision(1)<<sum<<endl;  
  }  
  
  
}  
