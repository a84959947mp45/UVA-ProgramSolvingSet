//34-UVA10922�G2 the 9s 
/*�D��: Ū���@�Ʀr�A���Ʀr�̤j��1000��C�p��ӼƦr�O�_���E�����ơH�p�O�A�A�p��䶥�h�ơC

�@���P�_�O�_���E�����ơG�Ҧ���Ƭۥ[ �� ���ע��A�Y���E�����ơC
�@���p�ⶥ�h�ơG�Ҧ���Ƭۥ[��o�X���Ĥ@���`�M���@���A�̦���������ӼƦr�L�k�A�p���`�M�C
�@Example 1: 
�@�@999 => 27(9+9+9, 1��) => 9(2+7, 2��)
�@Example 2: 
�@�@99999 99999 99999 99999 9 => 189(9+9+...+9, 1��) => 18(1+8+9, 2��) => 9(1+8, 3��)
*/
//���D:�Ƿ|stringstream���ϥ� 

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

//�ۭqfunction 
void judge(string);
string IntToString(int);

int main(){

  string str;
  //��J�r��Str���P�_ 
  while(cin>>str){
    if(str[0]=='0'){
       break;
    } 
    judge(str);  
  }
  return 0; 
}
//�P�_�O�_��9������ 
void judge(string str){
  int i,c=0;
  int sum=0;
  string x,print;
  stringstream ss;
  print = str;
  while(sum!=9){
    sum=0;
    for(i=0;i<str.size();i++){
      sum+=str[i]-'0';
    }
      //�Y�[�_�Ӥ����E�A��ܦr����A�������� 
      if(sum%9!=0){
        cout<<print<<" is not a multiple of 9."<<endl;
        return;
      }
      str.clear();
      str=IntToString(sum);
      c++;    
    
  }  
  
   cout<<print<<" is a multiple of 9 and has 9-degree "<<c<<"."<<endl;
     

}
//�N����ର�r�� 
string IntToString(int x){
   string str;
   stringstream ss;
   ss<<x;
   ss>>str;

   return str; 

}

