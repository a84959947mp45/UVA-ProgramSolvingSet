#include <iostream>
#include <vector>

using namespace std;

int main(){

	vector< long long int >a;
	int i,s;
	int x;
	a.push_back(0);
	a.push_back(1);
	for(i=2;i<=5000;i++){
	  s=a[i-1]+a[i-2];
	  a.push_back(s);
	}
    while(cin>>x){
      cout<<"The Fibonacci number for "<<x<<" is "<<a[x]<<endl;
    }




}
