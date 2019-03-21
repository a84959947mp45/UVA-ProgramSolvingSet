//28-UVA10931：Parity 
//題目:把十進位數字換成2進位數字，計算幾個1
//難題:使用string，了解string各種功能
//     把十進位的數字變成二進位的數字，同時計算1的數量

#include <iostream>
#include <string>

using namespace std;

int main(){

  int x;
  
  string str;
  
  while(cin>>x){
    int c=0; //count number of 1
    int re,i;
    //輸入為0時，退出 
    if(x==0){
      break;
    }else if(x==1){
       //若出現為1，數量為1加入c，同時顯示str=1，繼續輸入 
	   str+="1";
       c++;
       cout<<"The parity of ";
       for(i=str.size()-1;i>=0;i--){
          cout<<str[i];
       }
       cout<<" is "<<c<<" (mod 2)."<<endl;
       str.clear();
       continue;
    }
    //計算十進位轉二進位之後之數字，同時計算1的數量 
    while(1){
       re=x%2;
       x/=2;
       if(re==1){
         str+="1";
         c++;
       }else{
         str+="0";
       }
       
       if(x==1){
         str+="1";
         c++;
         break;
       }
    
    }
      //表示 
       cout<<"The parity of ";
       for(i=(str.size()-1);i>=0;i--){
          cout<<str[i];
       }
       cout<<" is "<<c<<" (mod 2)."<<endl;
     //清空str的值 
       str.clear();
  
  
  }



}



