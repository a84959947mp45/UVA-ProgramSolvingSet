#include<iostream>
#include<string>

using namespace std;

void count(long long int);
long long int pow(int,int);

int main(){

   long long int n;
   int x=1;
   while(cin>>n){
      //前面輸出代號 
      if(x>0&&x<10){
        cout<<"   "<<x<<".";
      }else{
        cout<<"  "<<x<<".";
      }
      //0為special case 
      if(n==0){
        cout<<" 0"<<endl;
        x++;
        
        continue;
      }
      count(n);
      cout<<endl;
       x++;
   
   }
   return 0;


}
void count(long long int n){
   long long int p1,p2=0,p3=0,p4=0,p5=0;
   int i,j;
   
   p1=n/pow(10,7);
        //超過一百表示有兩組 
         if(p1>=100){
               
               count(p1);
               cout<<" kuti";
         }else if(p1!=0){
               cout<<" "<<p1<<" kuti";
         }
   p2=(n-p1*pow(10,7))/pow(10,5);  
         if(p2!=0){
               cout<<" "<<p2<<" lakh";
         }     
   p3=(n-p1*pow(10,7)-p2*pow(10,5))/pow(10,3);
         if(p3!=0){
               cout<<" "<<p3<<" hajar";
         }  
   p4=(n-p1*pow(10,7)-p2*pow(10,5)-p3*pow(10,3))/pow(10,2);
         if(p4!=0){
               cout<<" "<<p4<<" shata";
         } 
   p5=n%100;
         if(p5!=0){
             cout<<" "<<p5;
         }

}
long long int pow(int x,int y){
    int i;
    long long sum=1;
    for(i=0;i<y;i++){
       sum*=10;
    }
    return sum;

}

