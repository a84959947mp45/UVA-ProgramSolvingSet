/*
16-UVA10056�GWhat is the Probability? 

�D��: �D�X�C�ӤH��Ӫ����v

����:�o�D�ݭn�Ψ�@�I�ƾǡC�����A�ڭ̥��ӤF�Ѥ@�U�D�ت��N��A�o�N�O�@�Ӧ������v���C���A�D�ط|�i�D�A���X�Ӫ��a�A�Ӳv�h�֡A�M��n�A�D�X��x�Ӫ��a��Ӫ����v�C�����aplay�����ǬO�q�Ĥ@�Ө�̫�@�ӡA�Y�S���H��ӡA�N��ĤG���A�Y�ĤG���٨S���H��ӡA�N��ĤT���A���즳�H��Ӭ���C
��k�j�P�W�N�O���D�X�Ĥ@��x���a��Ӫ����v�A�A�[�W�ĤG��x���a��Ӫ����v...�@���[��L�a�j�C�ڭ̥���⦡�C�X��:

�]p = ��Ӫ����v, q = �S����Ӫ����v = 1 - p, n = �`�@�����a��, x = �ĴX�Ӫ��a�nĹ
�⦡�N�O�o��:

p * q ^ (x - 1) + p * q ^ (n + x - 1) + p * q ^ (2 * n + x - 1)...

���U�ӧڭ̥i�H�� p * q ^ (x - 1)���X��:

( p * q ^ (x - 1) ) * ( 1 + q ^ n + q ^ (2 * n)... )

1 + q ^ n + q ^ (2 * n)...�ܩ���O�ӵL�a����żơA�ҥH�Q�εL�a����żƤ����N����A�|�ܦ��H�U���l:

( p * q ^ (x - 1) ) * ( 1 / (1 - q ^ n) )

��z�@�U:

( p * q ^ (x - 1) ) / (1 - q ^ n)

�o�N�O�̫᪺�����A�u�n��input�N�i�h�N�i�H�D�X�ѤF�C
*/

#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>   //pow�����Y�� 

using namespace std;

int main(){

  int x=0,n,m;
  double p,s=0;
  double temp=0;
  
  cin>>x;
  
  while(x--){
   
     cin>>n>>p>>m; 
  
     //�Y���v��0������X��0 
     if(p==0){
        cout<<"0.0000"<<endl;
        continue;
     }
     //�a�J���� 
     s=p*pow((1-p),(m-1))/(1-pow(1-p,n));
     //��X 
     cout<<fixed<<setprecision(4)<<s<<endl;
  
  }


}




