#include <iostream>
#include <vector>

using namespace std;

vector< vector<int> >Box;
		vector<int> Best_Box; //�̦h�e�Ǿ𪺽c�l
		vector<int> Next_Box; //���^���c�l

void initialData(){
	
}

int main(){
	int k,n;
	while(cin>>k>>n){
		vector<int>re;
		re.resize(n);
		Box.resize(k);
		for(int i =0;i<k;i++){
			Box.push_back(re);
		}
		for(int i =0 ;i<Box.size();i++){
			for(int j=0;j<Box[i].size();j++){
				cout<<Box[i][j];
			}
			cout<<endl;
		}
		
 		
 		
	}
	
} 
