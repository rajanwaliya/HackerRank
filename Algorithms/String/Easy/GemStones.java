import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

   public static void main(String[] args) throws Exception {
	       
    	BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int n = Integer.parseInt(br.readLine());
		StringBuffer sbuff = new StringBuffer();
		int count =0;
		int[][] ss = new int[n][26];
		for(int i=0;i<n;i++){
			String s = br.readLine();
			for(int j=0;j<s.length();j++){
				ss[i][s.charAt(j)-'a']++;
			}
		}// all strings are stored  in ss[][]
		
		for(int i=0;i<26;i++){// for each alphabate
			boolean isGem = true;
			for(int j=0;j<n;j++){
				if(ss[j][i]==0){isGem=false;break;}
			}
		if(isGem){count++;}
		}
		System.out.println(count);
	}
}