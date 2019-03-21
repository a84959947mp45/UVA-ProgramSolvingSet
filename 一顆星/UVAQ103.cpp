#include <iostream>
#include <vector>

using namespace std;

vector< vector<int> >Box;
		vector<int> Best_Box; //最多容納樹的箱子
		vector<int> Next_Box; //往回推箱子

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
