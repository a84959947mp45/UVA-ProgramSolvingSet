#include <iostream>
#include <string>
#include <map>

using namespace std;

int main(){
  
   string str1,str2;
   
   
   while(cin>>str1>>str2){
      map<char,int>a;
      map<char,int>b;
      int i,j;
      int re;
      
      for(i=0;i<str1.size();i++){
          a[str1[i]]++;
      }
      for(i=0;i<str2.size();i++){
          b[str2[i]]++;
         
      }
      for(map<char,int>::iterator it_i=a.begin();it_i!=a.end();it_i++){
         re=(it_i->second>b[it_i->first]?b[it_i->first]:it_i->second);
         for(i=0;i<re;i++){
            cout<<it_i->first;
         }
      
      }
      
      cout<<endl;
   
   }

}
