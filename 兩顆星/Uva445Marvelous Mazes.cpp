#include<iostream> 

using namespace std;
int main(){
	string str;
	while(getline(cin,str)){
		
		if(str=="\n"){
			cout<<endl;
			continue;
		}
		int count=0;
		for(int i=0;i<str.size();i++){
			if(str[i]=='!'){
				cout<<endl;
			}else if('0'<=str[i]&&str[i]<='9'){
				count+=(str[i]-'0');
			}else{
				for(int j=0;j<count;j++){
					if(str[i]=='b'){
						cout<<" ";
					}else{
						cout<<str[i];
					}
				}
				count=0;
			}
		}
		
		
	}
	
	
	
}
