//UVA10226�GHardwood species 
//�D��:�p��𪺺����έӼơA�ƦC������ܥX�W�١A�ΩҦ����ʤ���
//���D:�Ƿ|MAP�e���A�D�ط|��²��AMAP�i�H�Υ��󫬧O�@�����ޭȡA�o�D�ϥ�string 

#include <iostream>
#include <string>
#include <map>
#include <cstdio>
#include <iomanip>

using namespace std;

int main(){

  int x;
  char nouse,str;
  
  cin>>x;
  //nouse��Ū�줣�ݭn���F�� 
  nouse=getchar();
  nouse=getchar();
  while(x--){
     //�ŧi�ܼ� 
     map<string ,double >a;
     map<string, double >::iterator it_i;
     string str;
     double sum=0;
     double count;
     //��string��Ŧr�ꪺ�ɭ԰��� 
     while(getline(cin,str,'\n')){
        if(str.empty()){
           break;
        }
        a[str]++;
        sum++;
        
     }
     count=100/sum;
     //���XMAP�A�L�X�L�ݭn���F�� 
     for(it_i = a.begin(); it_i != a.end(); it_i++) {
       cout <<fixed<<setprecision(4)<< (it_i->first) << " " << (it_i->second)*count << endl;
     }
    //�̫�@�椣�n'\n' 
     if(x!=0){
      cout<<endl;
     }
  
  }

  return 0;



}
