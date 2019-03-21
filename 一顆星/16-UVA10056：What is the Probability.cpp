/*
16-UVA10056：What is the Probability? 

題目: 求出每個人獲勝的機率

講解:這題需要用到一點數學。首先，我們先來了解一下題目的意思，這就是一個有關機率的遊戲，題目會告訴你有幾個玩家，勝率多少，然後要你求出第x個玩家獲勝的機率。那玩家play的順序是從第一個到最後一個，若沒有人獲勝，就到第二輪，若第二輪還沒有人獲勝，就到第三輪，直到有人獲勝為止。
算法大致上就是先求出第一輪x玩家獲勝的機率，再加上第二輪x玩家獲勝的機率...一直加到無窮大。我們先把算式列出來:

設p = 獲勝的機率, q = 沒有獲勝的機率 = 1 - p, n = 總共的玩家數, x = 第幾個玩家要贏
算式就是這樣:

p * q ^ (x - 1) + p * q ^ (n + x - 1) + p * q ^ (2 * n + x - 1)...

接下來我們可以把 p * q ^ (x - 1)提出來:

( p * q ^ (x - 1) ) * ( 1 + q ^ n + q ^ (2 * n)... )

1 + q ^ n + q ^ (2 * n)...很明顯是個無窮等比級數，所以利用無窮等比級數公式代掉後，會變成以下式子:

( p * q ^ (x - 1) ) * ( 1 / (1 - q ^ n) )

整理一下:

( p * q ^ (x - 1) ) / (1 - q ^ n)

這就是最後的公式，只要把input代進去就可以求出解了。
*/

#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>   //pow的標頭黨 

using namespace std;

int main(){

  int x=0,n,m;
  double p,s=0;
  double temp=0;
  
  cin>>x;
  
  while(x--){
   
     cin>>n>>p>>m; 
  
     //若機率為0直接輸出為0 
     if(p==0){
        cout<<"0.0000"<<endl;
        continue;
     }
     //帶入公式 
     s=p*pow((1-p),(m-1))/(1-pow(1-p,n));
     //輸出 
     cout<<fixed<<setprecision(4)<<s<<endl;
  
  }


}




