//28-UVA10931�GParity 
//�D��:��Q�i��Ʀr����2�i��Ʀr�A�p��X��1
//���D:�ϥ�string�A�F��string�U�إ\��
//     ��Q�i�쪺�Ʀr�ܦ��G�i�쪺�Ʀr�A�P�ɭp��1���ƶq

#include <iostream>
#include <string>

using namespace std;

int main(){

  int x;
  
  string str;
  
  while(cin>>x){
    int c=0; //count number of 1
    int re,i;
    //��J��0�ɡA�h�X 
    if(x==0){
      break;
    }else if(x==1){
       //�Y�X�{��1�A�ƶq��1�[�Jc�A�P�����str=1�A�~���J 
	   str+="1";
       c++;
       cout<<"The parity of ";
       for(i=str.size()-1;i>=0;i--){
          cout<<str[i];
       }
       cout<<" is "<<c<<" (mod 2)."<<endl;
       str.clear();
       continue;
    }
    //�p��Q�i����G�i�줧�ᤧ�Ʀr�A�P�ɭp��1���ƶq 
    while(1){
       re=x%2;
       x/=2;
       if(re==1){
         str+="1";
         c++;
       }else{
         str+="0";
       }
       
       if(x==1){
         str+="1";
         c++;
         break;
       }
    
    }
      //��� 
       cout<<"The parity of ";
       for(i=(str.size()-1);i>=0;i--){
          cout<<str[i];
       }
       cout<<" is "<<c<<" (mod 2)."<<endl;
     //�M��str���� 
       str.clear();
  
  
  }



}



