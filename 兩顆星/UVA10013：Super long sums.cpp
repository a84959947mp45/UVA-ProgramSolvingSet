//�D��:�ϥΤj�ƥ[�k�A�@�}�l���@�ӼƦr�N��X�ո�ơA�C�@�ո�ƲĤ@�ӼƦr�����X��ơA����|����Ӥ@�ժ��Ʀr
//      �[�_����ܴN�i�H�F�C
//���D:�L�k�ϥ�long long int�D�ؼƦr�|�W�L �A�@�w�n�ΰ}�C�A�ҥH�ڭ̨ϥ�vector
//      P.S.vector���ȬO�i�H��ʪ� 
#include <iostream>
#include <vector>

using namespace std;

int main(){
   //��ܦ��X�ո�� 
   int x;
   cin>>x;
   while(x--){
   	  //y��ܦ��X��� 
      int y;
      //jump��ܦ��i�� 
      int i,jump=0;
      //�ŧivecotr�}�C 
      vector<int>a;
      vector<int>b;
      vector<int>c;
      vector<int>::iterator it_i;
      //��J�X��ơA�i���J 
      cin>>y;
      while(y--){
        int r1,r2;
        cin>>r1>>r2;
        a.push_back(r1);
        b.push_back(r2); 
      }
      //�q�̫�@��Ʀr�i��[��A�Y���i��hjump=1�A�U�@���p�⥲���[1 
      for(i=a.size()-1;i>=0;i--){
         //�Ȧs�ŧi 
		 int r1;
         //�P�_�O�_���W�@�Ӫ��i�� 
         if(jump==1){
           r1=a[i]+b[i]+1;
         }else{
           r1=a[i]+b[i];
         }
         //�P�_r1���L�j��10�A������JUMP=1���U�@���B��+1 
         if(r1>=10){
            r1-=10;
            c.push_back(r1);
            jump=1;
         }else{
            c.push_back(r1);
            jump=0;
         }
         //�̫�@���p��P�_JUMP�O�_��1 
         if(i==0){
            if(jump==1){
               c.push_back(1);
            }
         }
      }
      //���Xc-vector�q����ܪ���e�� 
      for(it_i=c.end()-1;it_i!=c.begin();it_i--){
         cout<<(*it_i);
      }
      cout<<(*it_i);
      cout<<endl;
      //�C�ո�Ƥ����n�Ť@�� 
      if(x!=0){
         cout<<endl;
      }
   }
   return 0;
}
