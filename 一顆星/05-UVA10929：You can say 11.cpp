#include <iostream>
#include <string>

using namespace std;

int main(){

   string x;
   
   while(cin>>x){
      if(x.size()==1&&x[0]=='0'){
         break;
      }
      
      int r1=0,r2=0;
      int i;
      int y;
      
    
      
      for(i=0;i<x.size();i+=2){
          r1+=x[i]-'0';
      }
      for(i=1;i<x.size();i+=2){
          r2+=x[i]-'0';
      }
      
      if((r1-r2)==0||(r1-r2)%11==0||(r2-r1)%11==0){
         cout<<x<<" is a multiple of 11."<<endl;
      }else{
         cout<<x<<" is not a multiple of 11."<<endl;
      }
   
   
   }

}
