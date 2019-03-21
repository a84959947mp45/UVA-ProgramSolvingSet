#include <iostream>
#include <string>
#include <map>
#include <cctype>

using namespace std;

int main(){

   int x,i,c=50;
   map<char,int>a;
   map<char,int>::iterator it_i;
   
    string str;
   while(getline(cin,str,'\n')){
     
      
      for(i=0;i<str.size();i++){
          if('a'<=str[i]&&str[i]<='z'){
            a[toupper(str[i])]++;
          }else if('A'<=str[i]&&str[i]<='Z'){
            a[str[i]]++;
          }
      }
   }
   
   for(i=c;i>0;i--){   
       for(it_i=a.begin();it_i!=a.end();it_i++){
           if(it_i->second==i){
             cout<<it_i->first<<" "<<it_i->second<<endl;
           }
       }
   
   }






}
