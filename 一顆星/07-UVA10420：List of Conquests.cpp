//UVA10420：List of Conquests 
//題目:一句話第一個單字為England就加1，一句話第一個單字為Spain就加1，最後印出來
//難題:無腦

#include <iostream>
#include <string>

using namespace std;

int main(){

   string str;
   int i,a=0,b=0;
   //輸入每行的值 
   while(getline(cin,str,'\n')){
       //判斷第一個數是 England 或 Spain
       if(str[0]=='E'){
          a++;
       }else if(str[0]=='S'){
          b++;
       }
   }
   //顯示 
   cout<<"England "<<a<<endl;
   cout<<"Spain "<<b<<endl;

}


