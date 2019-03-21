#include <iostream>
#include <string>

using namespace std;

int main(){

  int x;
  
  cin>>x;
  
  while(x--){
   
     int i=2,j;
     long long int sum,re,y,store[100];
     string str;
     store[0]=1;
     store[1]=2;
     
     cin>>y;
     re=y;
     int last_1=2,last_2=1;
     while(1){
         if(re==1||re==2){
            break;
         }
         store[i]=last_2+last_1;
         if(store[i]==re){
            i++;
            break;
         }else if(store[i]>re){
            break;
         }
         last_2=last_1;
         last_1=store[i];
         i++;
     }
     if(re==1){
       cout<<"1 = 1 (fib)"<<endl;
        continue;
     }else if(re==2){
       cout<<"2 = 10 (fib)"<<endl;
       continue;
     }
     
     
     for(j=i-1;j>=0;j--){
        if(store[j]<=re){
         re-=store[j];
         str+="1";
        }else{
           str+="0";
        }
     }
      cout<<y<<" = "<<str<<" (fib)"<<endl;
  
  
  
  
  
  
  
  }









}

