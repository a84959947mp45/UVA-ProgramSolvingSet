//題目:使用大數加法，一開始有一個數字代表幾組資料，每一組資料第一個數字為有幾位數，之後會有兩個一組的數字
//      加起來顯示就可以了。
//難題:無法使用long long int題目數字會超過 ，一定要用陣列，所以我們使用vector
//      P.S.vector的值是可以更動的 
#include <iostream>
#include <vector>

using namespace std;

int main(){
   //表示有幾組資料 
   int x;
   cin>>x;
   while(x--){
   	  //y表示有幾位數 
      int y;
      //jump表示有進位 
      int i,jump=0;
      //宣告vecotr陣列 
      vector<int>a;
      vector<int>b;
      vector<int>c;
      vector<int>::iterator it_i;
      //輸入幾位數，進行輸入 
      cin>>y;
      while(y--){
        int r1,r2;
        cin>>r1>>r2;
        a.push_back(r1);
        b.push_back(r2); 
      }
      //從最後一位數字進行加減，若有進位則jump=1，下一次計算必須加1 
      for(i=a.size()-1;i>=0;i--){
         //暫存宣告 
		 int r1;
         //判斷是否有上一個的進位 
         if(jump==1){
           r1=a[i]+b[i]+1;
         }else{
           r1=a[i]+b[i];
         }
         //判斷r1有無大於10，有的化JUMP=1讓下一次運算+1 
         if(r1>=10){
            r1-=10;
            c.push_back(r1);
            jump=1;
         }else{
            c.push_back(r1);
            jump=0;
         }
         //最後一次計算判斷JUMP是否為1 
         if(i==0){
            if(jump==1){
               c.push_back(1);
            }
         }
      }
      //走訪c-vector從後顯示直到前面 
      for(it_i=c.end()-1;it_i!=c.begin();it_i--){
         cout<<(*it_i);
      }
      cout<<(*it_i);
      cout<<endl;
      //每組資料中間要空一格 
      if(x!=0){
         cout<<endl;
      }
   }
   return 0;
}
