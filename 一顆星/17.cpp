#include <iostream>
#include <string>
using namespace std;
int main(){
	long long int S,D;
	while(cin>>S>>D){
		while(D>S) D-=S++;
		cout<<S<<endl;
	}
}

