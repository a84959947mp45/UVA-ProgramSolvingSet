//UVA10420�GList of Conquests 
//�D��:�@�y�ܲĤ@�ӳ�r��England�N�[1�A�@�y�ܲĤ@�ӳ�r��Spain�N�[1�A�̫�L�X��
//���D:�L��

#include <iostream>
#include <string>

using namespace std;

int main(){

   string str;
   int i,a=0,b=0;
   //��J�C�檺�� 
   while(getline(cin,str,'\n')){
       //�P�_�Ĥ@�ӼƬO England �� Spain
       if(str[0]=='E'){
          a++;
       }else if(str[0]=='S'){
          b++;
       }
   }
   //��� 
   cout<<"England "<<a<<endl;
   cout<<"Spain "<<b<<endl;

}


