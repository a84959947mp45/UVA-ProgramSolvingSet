//22-UVA11461�GSquare Numbers 
//�D��:��J��ӼƦr�A����������Ƽƶq�C
//���D:�L��


#include <iostream>

using namespace std;

int main(){

  int a,b;
  int i;
  //��J��ӼƦr 
  while(cin>>a>>b){
     int p=1,count=0;
     //���O�s���ɭ԰h�X 
	 if(a==0&&b==0){
       break;
     }
     //�h��b����������Ʀ��X�� 
     while(1){
       if(p*p>=a&&p*p<=b){
         count++;
       }
       if(p*p>=b){
         break;
       }
       p++;
     }
     //��� 
     cout<<count<<endl;
  
  }


}


