package algorithm.likelion;

import java.util.Scanner;
import java.util.ArrayList;

public class exam4
{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		
		ArrayList<Integer> list = new ArrayList<Integer>();

        System.out.println("[안내] 0을 입력하시면 입력이 종료됩니다.");        
        while(true){
            System.out.print("숫자 " + (list.size()+1) + " : ");	
			//입력		
			String input = sc.next();
			//입력값이 숫자인지 확인
			boolean isNumber = true;
			for(int i=0; i<input.length(); i++){
				//각 자리 입력값이 0~9가 아니면 isNumber을 false
				if( (input.charAt(i)-'0')<0 || (input.charAt(i)-'0')>9 ){
					System.out.println("[입력오류] : 숫자로 입력해주세요.");
					isNumber=false;
					break;
				}
			}
			//숫자 맞는경우 ArrayList에 추가
			if(isNumber){
			    if(Integer.parseInt(input)==0){ break; }
			    list.add(Integer.parseInt(input));
			}
        }
		
        //출력
		System.out.print("결과 : ");  
		for(int i=0; i<list.size(); i++){
            System.out.print(list.get(i));
			if( i != (list.size()-1) ){ System.out.print(", "); }
        }
	}
}
