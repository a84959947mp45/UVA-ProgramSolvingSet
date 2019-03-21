#include <iostream>
#include <map>

using namespace std;

int main(){

   map<char,int>a;
   map<char,int>:: iterator it_i;
   int x;
   char y;
     cin>>x;
   while(x--){
   	  cin>>y;
   	  a[y]++;
   }
   for(it_i=a.begin();it_i!=a.end();it_i++){
       cout<<it_i->first<<" "<<it_i->second<<endl;
   }
    return 0;
} 
