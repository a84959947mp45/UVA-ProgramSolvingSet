//31-UVA10193�GAll You Need Is Love 
//�D��:��J��ӼƦr�|���@�Ӽ�(�j��1)�P�l��0�A²��ӻ��N�O��ӼƧ�̤j���]�ơA�p�G���ȴN�L�XLove is not all you need! 
//    �A�Y���̤j���]�ƫh�L�XAll you need is love!
//���D: �J�Ӭݬ��D�ءA�^��ܭ��n�A�����N�S������D�F


#include <iostream>
#include <string>

using namespace std;

int main(){

  int x ;
  int p;
  //��J�`�@���X����� 
  cin>>x;
  
  for(p=1;p<=x;p++){
    string r1,r2;
    int q1=0,q2=0,q3;
    int i;
    int m=1;
    int re=0,check=0;
    
    
    cin>>r1>>r2;
    //�����Q�i��� 
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
    //����۰��k 
    while(1){
      re=q1%q2;
      if(re==0){
        check=q2;
        break;
      }
      q1=q2;
      q2=re;
    }
    
    //��� 
    cout<<"Pair #"<<p<<": ";
    if(check>1){
        cout<<" All you need is love!"<<endl;
    }else{
        cout<<"Love is not all you need!"<<endl;
    }
   
    
   
  }


}




