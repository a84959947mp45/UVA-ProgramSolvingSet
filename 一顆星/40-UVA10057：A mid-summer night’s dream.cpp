//40-UVA10057�GA mid-summer night��s dream 
//�D��:���p�Ʀr��X1�BX2�BX3...�A���򥲶����@��A�A�ϱo( |X1-A| + |X2-A| + |X3-A| + ... + |Xn-A|)���̤p
/*���D:�C�Ӹ�ƪ��Ĥ@�ӼƦr�����h�ָ�ƻݭn�Q�B�z(cases)�A���U�ӴN�O���(X1�BX2 ... Xn)�C

1. ��X����ơC

2. �p�⦳�X�өM����Ƥ@�˪��Ʀr�C���(cases)�O���ƭӮɤ���Ʀ�2�ӡB��ƬO�_�ƭӮɤ���Ʀ�1�ӡC

3. ��X�i�঳�X�س̤p��(�]�t���b�ҿ�J����Ƹ̭�)�A��Ƭ��_�ƭӮɵ��׬�1�A��Ƭ����ƭӮɵ��׬�2�Ӥ���Ƭ۴�[1�C 
*/ 
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

  int x,i;
  

  while(cin>>x){
     int re,min,b=0,c=0;
     //�ŧivector�λ��j�� 
     vector<int>a;
     vector<int>::iterator  it_i;
     //��J��� 
     for(i=0;i<x;i++){
       cin>>re;
       a.push_back(re);
     }
     //�ƧǱq�p��j 
     sort(a.begin(),a.end());
     //�P�_�򰸼ơA���ᰵ�B�� 
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
      //�`��X 
      cout<<min<<" "<<b<<" "<<c<<endl;
  
  
  }


}
