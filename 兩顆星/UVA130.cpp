#include <iostream>
#include <vector>

using namespace std; 
int judge(int , int,vector<int>);
int counterPositionValue(int position,vector<int>);

int main(){

	
	int n,k,i,j,p;
	
	while(cin>>n>>k){
		if(n==0&&k==0){
			break;
		}
		
		int head=0,die=0,j;
		vector<int>people;
		people.push_back(0);
	    //將每個位置都填上人 
		for(i=1;i<=n;i++){
			people.push_back(i);
		}
		
		//開始殺人及移動 
	//	while(1){
			head = judge(head,k,people);
			
			cout<<people[head]<<endl;
	/*		die = head;
			head++;
			head = judge(head,n-1,people);
			
			cout<<people[die]<<" ";
			
			
			head+=(k-1);
			head = judge(head,n-1,people);
			

			people[die]=people[head];
			people[head] = 0;
			
			head = die;
			head++;
			head = judge(head,n-1,people);
		
		}
		
		cout<<endl;
		if(people[head]==1){
			cout<<p<<endl;
			
		}
	
	*/	
   //  }

	}
	
		
	
	
	

}

int judge(int position,int count,vector<int> people){
	//第一次的變數
	int first=0;
	 
	for(int i=0;i<count;i++){
		int countX=0;
		//判斷下一個是不是-1 
		while(1){
		   //整個people裡面都是-1	
		   if(countX==people.size()){
		   	  return -2;
		   }	
			
		   if(counterPositionValue(position,people)==-1){
		   	 countX++;
		     continue;
	       }
	       	
	       	
	       	 break;
		   		
		}	

	} 	
	return position;
	
}
int counterPositionValue(int& position,vector<int>people){
	
	position++;
	if(position==people.size()){
		position-=people.size();
	}
	
	return people[position];
	
	
}

