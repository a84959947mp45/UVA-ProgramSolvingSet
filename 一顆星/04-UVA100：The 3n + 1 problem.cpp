//04-UVA100The 3n + 1 problem 
//肈ヘ: 块ㄢ耞硂い丁硂ㄢ计┮Τ计计秖 
//  
//  if n is odd then n ■ 3n + 1
//  else n ■ n/2
//  1氨ゎ眖1秨﹍癹伴Ω计秖1

//  ㄢ计い丁–计常璶禲Ω程计秖ぇ陪ボ 

//  秆肈мォ :  癹伴ㄏノ


#include <iostream>
#include <string>

using namespace std;

int main(){
 
   int x,y;
   int i,c,p,max=0;
   int temp1,temp2;
   //input
   while(cin>>x>>y){
      //judge which bigs
      if(x>y){
         temp2=x;
         temp1=y;
      }else{
         temp1=x;
         temp2=y;
      }
      //耞砏玥
      c=1;max=0;
      for(i=temp1;i<=temp2;i++){
         p=i;c=1;
         while(p!=1){
            if(p%2==1){
                p=3*p+1;c++;
            }else{
                p=p/2;c++;
            }
         }
         //т程计秖 
         if(c>max){
            max=c;
         } 
      }
      //块
      cout<<x<<" "<<y<<" "<<max<<endl;
   }

}


