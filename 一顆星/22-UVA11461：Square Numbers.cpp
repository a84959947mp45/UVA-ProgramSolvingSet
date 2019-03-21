//22-UVA11461：Square Numbers 
//題目:輸入兩個數字，中間的平方數數量。
//難題:無腦


#include <iostream>

using namespace std;

int main(){

  int a,b;
  int i;
  //輸入兩個數字 
  while(cin>>a>>b){
     int p=1,count=0;
     //都是零的時候退出 
	 if(a==0&&b==0){
       break;
     }
     //去算在中間的平方數有幾個 
     while(1){
       if(p*p>=a&&p*p<=b){
         count++;
       }
       if(p*p>=b){
         break;
       }
       p++;
     }
     //顯示 
     cout<<count<<endl;
  
  }


}


