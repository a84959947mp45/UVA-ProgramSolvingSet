//19-UVA10783：Odd Sum 
//題目:輸入a,b,把中間的基數加起來
//演算法:無腦BJ4
 
#include <iostream>

using namespace std;

int main(){

  int count,p=0;
  int x,y,z,i,j;
  
  cin>>x;
  
  while(x--){
    count=0;
    cin>>y>>z;
    for(i=y;i<=z;i++){
       
          if(i%2==1){
             count+=i;
          }
    }
    p++;
    cout<<"Case "<<p<<": "<<count<<endl;
  
  }




}

