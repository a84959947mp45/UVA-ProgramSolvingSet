#include <iostream>
#include <string>

using namespace std;

int main(){
  
   string s1,s2;
   //��J�r�� 
   while(cin>>s1>>s2){
   	 int i,c=0;
   	 //�P�_�����O�_���ۦP�r�� 
   	 for(i=0;i<s2.size();i++){
   	 	if(s2[i]==s1[c]){
   	 	  c++;
   	 	}
   	 }
   	 //�p�G�ۦP���r����S1�`�r�Ƥ@�˿�JYes�A�_�hNo 
     if(c==s1.size()){
        cout<<"Yes"<<endl;
     }else{
        cout<<"No"<<endl;
     }
   
   
   
   }
	return 0;
}
