//13-UVA272�GTeX Quotes 
//�D��:��Ĥ@��"���� ``  �ĤG��"����" 
//���D:�L��

#include <iostream>
#include <string>


using namespace std;

int main(){

   
   string str;
   int i,judge=1;
   while(getline(cin,str,'\n')){
       
       for(i=0;i<str.size();i++){
          if(str[i]=='"'&&judge==1){
             cout<<"``";
             judge++;
          }else if(str[i]=='"'&&judge==2){
             cout<<"''";
             judge--;
          
          }else{
             cout<<str[i];
          } 
       }
       cout<<endl;
   }


}


 

