//40-UVA10057：A mid-summer night’s dream 
//題目:假如數字為X1、X2、X3...，那麼必須找到一個A，使得( |X1-A| + |X2-A| + |X3-A| + ... + |Xn-A|)為最小
/*難題:每個資料的第一個數字為有多少資料需要被處理(cases)，接下來就是資料(X1、X2 ... Xn)。

1. 找出中位數。

2. 計算有幾個和中位數一樣的數字。資料(cases)是偶數個時中位數有2個、資料是奇數個時中位數有1個。

3. 找出可能有幾種最小值(包含不在所輸入的資料裡面)，資料為奇數個時答案為1，資料為偶數個時答案為2個中位數相減加1。 
*/ 
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

  int x,i;
  

  while(cin>>x){
     int re,min,b=0,c=0;
     //宣告vector及遞迴器 
     vector<int>a;
     vector<int>::iterator  it_i;
     //輸入資料 
     for(i=0;i<x;i++){
       cin>>re;
       a.push_back(re);
     }
     //排序從小到大 
     sort(a.begin(),a.end());
     //判斷基偶數，之後做運算 
     if(a.size()%2==0){
       min=a[(a.size()-1)/2];
       for(it_i=a.begin();it_i!=a.end();it_i++){
         if((*it_i)==min||(*it_i)==a[(a.size()-1)/2+1]){
           b++;
         }
         c=a[(a.size()-1)/2+1]-min+1;
       }    
       
     }else{
       min=a[(x-1)/2];
       c=1;
       for(it_i=a.begin();it_i!=a.end();it_i++){
         if((*it_i)==min){
           b++;
         }
       }
     }
      //總輸出 
      cout<<min<<" "<<b<<" "<<c<<endl;
  
  
  }


}
