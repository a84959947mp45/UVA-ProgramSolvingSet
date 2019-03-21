//31-UVA10193：All You Need Is Love 
//題目:輸入兩個數字會有一個數(大於1)同餘為0，簡單來說就是兩個數找最大公因數，如果互值就印出Love is not all you need! 
//    ，若有最大公因數則印出All you need is love!
//難題: 仔細看看題目，英文很重要，看懂就沒什麼問題了


#include <iostream>
#include <string>

using namespace std;

int main(){

  int x ;
  int p;
  //輸入總共有幾筆資料 
  cin>>x;
  
  for(p=1;p<=x;p++){
    string r1,r2;
    int q1=0,q2=0,q3;
    int i;
    int m=1;
    int re=0,check=0;
    
    
    cin>>r1>>r2;
    //換成十進位數 
    for(i=r1.size()-1;i>=0;i--){
       if(r1[i]=='1'){
         q1+=m;
       }
       m*=2;
    }
    m=1;
    for(i=r2.size()-1;i>=0;i--){
       if(r2[i]=='1'){
         q2+=m;
       }
       m*=2;
    }
    //輾轉相除法 
    while(1){
      re=q1%q2;
      if(re==0){
        check=q2;
        break;
      }
      q1=q2;
      q2=re;
    }
    
    //顯示 
    cout<<"Pair #"<<p<<": ";
    if(check>1){
        cout<<" All you need is love!"<<endl;
    }else{
        cout<<"Love is not all you need!"<<endl;
    }
   
    
   
  }


}




