#include<iostream>
#include<cstdio>

using namespace std;

int main() {
    int n, x, k, i;
    int test = 0;
    //n���`�H�� 
    while(cin>>n) {
    	//x���s���H�� 
        cin>>x;
        
        int p[51], pt = n;
        //��l�� 
        for(i = 0; i <= n; i++){ 
            p[i] = 1;
        }    
        for(i = 0; i < 20; i++) {
            cin>>k;
            //�s���H�Ƹ��D�ةһݦs���H�Ƥ@�˪��ɭԴN�@�Ȱ���쵲�� 
            if(pt == x){
                continue;
			}
			//cnt���ثe�ݪ��Ӽ�
            int j, cnt = 0;
            for(j = 1; j <= n; j++) {
                cnt += p[j];
                //�p�G�ƪ��ӼƬ�K(�P���j�p)�A�h�B�� 
                if(cnt == k) {
                	//pt�s���H�Ƹ��`�H�Ƥ@�˪��ɭԴN�@�Ȱ���쵲��  
                    if(pt == x)
                        break;
                    //�ݪ��Ӽ�cnt�k�s�Apt-1���F�@�� 
                    p[j] = 0, cnt = 0, pt--;
                }
            }
        }
        //��� 
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

