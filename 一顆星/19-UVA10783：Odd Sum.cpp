//19-UVA10783�GOdd Sum 
//�D��:��Ja,b,�⤤������ƥ[�_��
//�t��k:�L��BJ4
 
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

