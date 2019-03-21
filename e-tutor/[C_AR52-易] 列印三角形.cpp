#include <iostream>
#include <string>

using namespace std;

void count(int);

   
   int r1,r2,r3,r4=3;
   int i,re;

int main(){
   
   int x,input;
   
   cin>>x;
   
   r1=x-1;
   r2=1;
   re=x;
   while(x--){
      
      for(i=r1;i>0;i--){
      	  cout<<"@";
	  }
      if(r2==re+2&&r3!=re+2){
      	count(r1*2-1);
      	goto dothis;
	  }
	  for(i=r2;i>0;i--){
	     cout<<"*";
	  }
	  r2+=2;
      dothis:
	  for(i=r1;i>0;i--){
      	  cout<<"@";
	  }
	  r1--;
   
      cout<<endl;
   }

} 
void count(int r3){
	for(i=r4;i>0;i--){
		cout<<"*";
	}
	for(i=r3;i>0;i--){
		cout<<"@";
	}
	for(i=r4;i>0;i--){
		if(r4==re&&i==1){
			break;
		}
		cout<<"*";
	}
	r4+=2;
}
