//UVA11132 Summing Digits   
//題目:每個位數都一個一個加起來變成一個值，一直重複直到剩一個數字 
//難題:要學會C++的stringstream(標頭黨sstream) 用來處理int轉成string最後寫一個function比較方便，
//     在一個一個讀數字，加起來判斷
//      http://www.cnblogs.com/oomusou/archive/2007/01/06/613413.html 教學網址
#include <string>
#include <iostream>
#include <sstream>

using namespace std;

string IntToString(long long int& x);

int main(){
 
   long long int input;
   
  
   int i;
   //輸入 
   while(cin>>input){
      string str;
      long long  int sum=0,temp=1;
      //讀到0的時候退出，讀到10以下的數字直接顯示後退出 
	  if(input==0){
         
         break;
      }else if(input<10){
         cout<<input<<endl;
         continue;
      }
      //將每個位數都加起來，直到小於十，然後顯示 
      str=IntToString(input);
      sum=input;
      while(temp!=0){ 
        sum=0;
        for(i=0;i<str.size();i++){
          sum+=str[i]-48;
        } 
        str=IntToString(sum);
        if(sum>=10){
          sum=temp;
        }else{
           temp=0;
        }
      }
       
      cout<<str<<endl;
   
   }


}
//把數字變成字串的FUNCTION 
string IntToString(long long int& x){
   string s;
   stringstream ss(s);
   ss<<x;
  
    return ss.str();
}



