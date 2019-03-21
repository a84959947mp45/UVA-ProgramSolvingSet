import java.math.*;
import java.util.*;
import java.lang.*;

public class Uva264{
	
	public static void main(String[] args){
		//宣告10000個位置置放0~i的layer的總大小數
		BigInteger[] putValue=new BigInteger[10000];
		putValue[0]=BigInteger.ZERO;
		//初始化，計算每一層的累積總數
		for(long i =1 ; i<10000;i++){
			
			putValue[(int)i]=putValue[(int)(i-1)].add(BigInteger.valueOf(i));
			
		}
		
		Scanner input = new Scanner(System.in);
        //開始輸入
		while(input.hasNext()){
			//先讀入一行
			String num = input.nextLine();
			
			StringTokenizer st = new StringTokenizer(num);
			//分離一個一個字串讀
		     while (st.hasMoreTokens()) {
		    	 
		    	 String ss=st.nextToken();
				 //總數轉為大數
		    	 BigInteger numBigInteger = new BigInteger(ss);
					
					BigInteger low = new BigInteger("0");
					BigInteger layer = new BigInteger("0");
					//去比較落在哪一個layer中
					for(int i =1 ; i<10000;i++){
					
					   if(numBigInteger.compareTo(putValue[i])==-1){
						   //上一個layer數量做紀錄
						   low=putValue[i-1];
						   layer=BigInteger.valueOf((long)i);
						   break;
					   }   
					  
				    }
					//找出剩餘數量
					BigInteger remainder= numBigInteger.subtract(low);
				
				    //偶數行
				    if(layer.mod(new BigInteger("2")).compareTo(BigInteger.ZERO)==0) {
						if(remainder.compareTo(BigInteger.ZERO)==0) {
							System.out.printf("TERM %s IS %s/%s%n",ss,BigInteger.ONE,layer.subtract(BigInteger.ONE));
						}else {
							System.out.printf("TERM %s IS %s/%s%n",ss,remainder,layer.add(BigInteger.ONE).subtract(remainder));
							
						}
					}else {
						if(remainder.compareTo(BigInteger.ZERO)==0) {
							System.out.printf("TERM %s IS %s/%s%n",ss,layer.subtract(BigInteger.ONE),BigInteger.ONE);
						}else {
							System.out.printf("TERM %s IS %s/%s%n",ss,layer.add(BigInteger.ONE).subtract(remainder),remainder);
							
						}
					}
		     }
		}
		input.close();
	}
	
}