//UVA11132 Summing Digits   
//�D��:�C�Ӧ�Ƴ��@�Ӥ@�ӥ[�_���ܦ��@�ӭȡA�@�����ƪ���Ѥ@�ӼƦr 
//���D:�n�Ƿ|C++��stringstream(���Y��sstream) �ΨӳB�zint�নstring�̫�g�@��function�����K�A
//     �b�@�Ӥ@��Ū�Ʀr�A�[�_�ӧP�_
//      http://www.cnblogs.com/oomusou/archive/2007/01/06/613413.html �оǺ��}
#include <string>
#include <iostream>
#include <sstream>

using namespace std;

string IntToString(long long int& x);

int main(){
 
   long long int input;
   
  
   int i;
   //��J 
   while(cin>>input){
      string str;
      long long  int sum=0,temp=1;
      //Ū��0���ɭ԰h�X�AŪ��10�H�U���Ʀr������ܫ�h�X 
	  if(input==0){
         
         break;
      }else if(input<10){
         cout<<input<<endl;
         continue;
      }
      //�N�C�Ӧ�Ƴ��[�_�ӡA����p��Q�A�M����� 
      str=IntToString(input);
      sum=input;
      while(temp!=0){ 
        sum=0;
        for(i=0;i<str.size();i++){
          sum+=str[i]-48;
        } 
        str=IntToString(sum);
        if(sum>=10){
          sum=temp;
        }else{
           temp=0;
        }
      }
       
      cout<<str<<endl;
   
   }


}
//��Ʀr�ܦ��r�ꪺFUNCTION 
string IntToString(long long int& x){
   string s;
   stringstream ss(s);
   ss<<x;
  
    return ss.str();
}



