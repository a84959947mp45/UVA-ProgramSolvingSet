#include<iostream>
#include<cstdio>

using namespace std;

int main() {
    int n, x, k, i;
    int test = 0;
    //n為總人數 
    while(cin>>n) {
    	//x為存活人數 
        cin>>x;
        
        int p[51], pt = n;
        //初始化 
        for(i = 0; i <= n; i++){ 
            p[i] = 1;
        }    
        for(i = 0; i < 20; i++) {
            cin>>k;
            //存活人數跟題目所需存活人數一樣的時候就一值執行到結束 
            if(pt == x){
                continue;
			}
			//cnt為目前屬的個數
            int j, cnt = 0;
            for(j = 1; j <= n; j++) {
                cnt += p[j];
                //如果數的個數為K(牌的大小)，則運算 
                if(cnt == k) {
                	//pt存活人數跟總人數一樣的時候就一值執行到結束  
                    if(pt == x)
                        break;
                    //屬的個數cnt歸零，pt-1死了一個 
                    p[j] = 0, cnt = 0, pt--;
                }
            }
        }
        //顯示 
        printf("Selection #%d\n", ++test);
        int flag = 0;
        for(i = 1; i <= n; i++) {
            if(p[i]) {
                if(flag)
                    cout<<" ";
                cout<<i;
                flag = 1;
            }
        }
        cout<<endl<<endl;
    }
    return 0;
}

