//UVA10041�GVito's family 
//�D��:   ���@�ӤH�Q�n�\�Фl�A�\�b���@�s�˱��a�̪񪺦a��A�D���C�ӿ˱��a���Z���`�M
//�t��k:  ���ƦC�˱��a����l�A�b��X�˱��a��l������ơA�C�ӿ˱��a���򤤦�Ƭ۴�A�b�[�_�ӡA�Y���ҨD
//���D:   ��ӼƬO��ƪ��ɭԡA����Ƭ��������Ʀr�A
//        �Y�����ơA�h�������ȫe��@�ӼƬҥi�����\�Фl���a��A�h���p�� 
 
#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

int main(){
   //�ŧi�ܼ� 
   int a[600],x,y;
   int i,j,r,temp,mid,sum;
   //���X�մ��ո�� 
   cin>>x;
   
   while(x--){
      //�Na�}�C�̡A�Ҧ��ȳ��M��0 
	  memset(a,0,600*4);sum=0;
	  //��J�ƶq 
      cin>>y;
      //��J�� 
      for(i=0;i<y;i++){
        cin>>a[i];
      }
      //�w�j�ƦC�A�Ѥp��j�Ƨ� 
      for(i=y-2;i>=0;i--){
        for(j=0;j<=i;j++){
           if(a[j]>a[j+1]){
              temp=a[j];
              a[j]=a[j+1];
              a[j+1]=temp;
           }
        }
      }
      //�P�_�Ʀr���򰸼ơA�M��䤤��� 
      if(y%2==1){
          mid=a[(y-1)/2];
      }else{
          mid=a[y/2];
      }
      //�N�P����ƩҦ��Z���[�_�� 
      for(i=0;i<y;i++){
         sum+=abs(mid-a[i]);
      }
      //��� 
      cout<<sum<<endl;
   }


}




