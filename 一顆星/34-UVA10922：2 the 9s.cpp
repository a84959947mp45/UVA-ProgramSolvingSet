//34-UVA10922：2 the 9s 
/*題目: 讀取一數字，此數字最大有1000位。計算該數字是否為九的倍數？如是，再計算其階層數。

　※判斷是否為九的倍數：所有位數相加 ÷ ９＝０，即為九的倍數。
　※計算階層數：所有位數相加後得出的第一個總和為一階，依此類推直到該數字無法再計算總和。
　Example 1: 
　　999 => 27(9+9+9, 1階) => 9(2+7, 2階)
　Example 2: 
　　99999 99999 99999 99999 9 => 189(9+9+...+9, 1階) => 18(1+8+9, 2階) => 9(1+8, 3階)
*/
//難題:學會stringstream之使用 

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

//自訂function 
void judge(string);
string IntToString(int);

int main(){

  string str;
  //輸入字串Str做判斷 
  while(cin>>str){
    if(str[0]=='0'){
       break;
    } 
    judge(str);  
  }
  return 0; 
}
//判斷是否為9的倍數 
void judge(string str){
  int i,c=0;
  int sum=0;
  string x,print;
  stringstream ss;
  print = str;
  while(sum!=9){
    sum=0;
    for(i=0;i<str.size();i++){
      sum+=str[i]-'0';
    }
      //若加起來不為九，顯示字幕後，直接結束 
      if(sum%9!=0){
        cout<<print<<" is not a multiple of 9."<<endl;
        return;
      }
      str.clear();
      str=IntToString(sum);
      c++;    
    
  }  
  
   cout<<print<<" is a multiple of 9 and has 9-degree "<<c<<"."<<endl;
     

}
//將整數轉為字串 
string IntToString(int x){
   string str;
   stringstream ss;
   ss<<x;
   ss>>str;

   return str; 

}

