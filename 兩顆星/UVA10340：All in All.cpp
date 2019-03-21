#include <iostream>
#include <string>

using namespace std;

int main(){
  
   string s1,s2;
   //輸入字串 
   while(cin>>s1>>s2){
   	 int i,c=0;
   	 //判斷內部是否有相同字元 
   	 for(i=0;i<s2.size();i++){
   	 	if(s2[i]==s1[c]){
   	 	  c++;
   	 	}
   	 }
   	 //如果相同的字元跟S1總字數一樣輸入Yes，否則No 
     if(c==s1.size()){
        cout<<"Yes"<<endl;
     }else{
        cout<<"No"<<endl;
     }
   
   
   
   }
	return 0;
}
