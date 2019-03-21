//題目題號 UVA113 Power of Cryptography

//題目簡述:
//給你兩個整數 n（n >= 1）和 p（p >=1），你必須寫一個程式來計算出 p 的正 n 次方根。
//在這個問題裡，p 皆可表成 kn 的形式，其中 k 為整數。（k也就是你的程式所要求的）
//
//每組測試資料2列，第1列有1個整數 n（1 <= n <= 200），第2列有1個整數 p（1 <= p <= 10101）。 
//並且存在一個整數 k，（1 <= k <= 109），使得 pow(k,n)=p。
// 答案輸出k

//演算法:
//創立大數物件，做以下算是

//難題:1.要了解大樹運算以及數學log原理
//     2.程式中log底數是尤拉數e，換底公式需在除log(欲換底數)

import java.lang.*;
import java.math.*;
import java.util.*;

public class UVA113{

	public static void main(String[] args){
		//宣告輸入類別物件input
		Scanner input = new Scanner(System.in);
		//檢查輸入是否結束
		while(input.hasNext()){
		
			double n,re,k;
			String p;
			//宣告大數B物件
			BigInteger P ;	
			//輸入一個Double
			n = input.nextDouble();
			//輸入一個String
			p = input.next();
			//初始化大數B，給予建構子b字串
			P =  new BigInteger(p);
			
			//求出log2(k)=re
			re = Math.log(P.doubleValue())/Math.log(2)/n;
			//求出k
			k = Math.pow(2,re);
		
			System.out.printf("%.0f%n",k);				
					
		}

			

	}


}