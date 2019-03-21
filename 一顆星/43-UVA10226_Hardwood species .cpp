//UVA10226：Hardwood species 
//題目:計算樹的種類及個數，排列之後顯示出名稱，及所佔的百分比
//難題:學會MAP容器，題目會很簡單，MAP可以用任何型別作為索引值，這題使用string 

#include <iostream>
#include <string>
#include <map>
#include <cstdio>
#include <iomanip>

using namespace std;

int main(){

  int x;
  char nouse,str;
  
  cin>>x;
  //nouse為讀到不需要的東西 
  nouse=getchar();
  nouse=getchar();
  while(x--){
     //宣告變數 
     map<string ,double >a;
     map<string, double >::iterator it_i;
     string str;
     double sum=0;
     double count;
     //取string到空字串的時候停止 
     while(getline(cin,str,'\n')){
        if(str.empty()){
           break;
        }
        a[str]++;
        sum++;
        
     }
     count=100/sum;
     //走訪MAP，印出他需要的東西 
     for(it_i = a.begin(); it_i != a.end(); it_i++) {
       cout <<fixed<<setprecision(4)<< (it_i->first) << " " << (it_i->second)*count << endl;
     }
    //最後一行不要'\n' 
     if(x!=0){
      cout<<endl;
     }
  
  }

  return 0;



}
