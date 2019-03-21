#include<iostream>
#include<string>
#include<cstdio>
#include<cmath>

using namespace std;

int main(){

   int i,x,y,r=0,p[15]={0};
   char count1[15],count2[15];
   
   while(cin>>x>>y){
     r=0;memset(p,0,60);
     if(x==0&&y==0){
       return 0;
     }
     sprintf(count1,"%011d",x);
     sprintf(count2,"%011d",y);
     
     for(i=11;i>0;i--){
       
       p[i]+=(count1[i]-48)+(count2[i]-48);
       if(p[i]>=10){
          p[i-1]++;
          p[i]-=10;
          r++;
       }
     }
     if(r==0){
        cout<<"No carry operation."<<endl;
     }else if(r==1){
          cout<<"1"<<" "<<"carry operation."<<endl;
     }else{ 
        cout<<r<<" "<<"carry operations."<<endl;
     }
   }
   
   
 
}
