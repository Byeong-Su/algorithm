package algorithm.likelion;

import java.util.Scanner;
import java.util.ArrayList;
import java.util.Collections;

public class exam5
{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		
		ArrayList<Integer> list = new ArrayList<Integer>();

        int max=0;

        System.out.println("[안내] 0을 입력하시면 입력이 종료됩니다.");        
        while(true){
            System.out.print("숫자 " + (list.size()+1) + " : ");			
			String input = sc.next();
			boolean isNumber = true;
			for(int i=0; i<input.length(); i++){
				if( (input.charAt(i)-'0')<0 || (input.charAt(i)-'0')>9 ){
					System.out.println("[입력오류] : 숫자로 입력해주세요.");
					isNumber=false;
					break;
				}
			}
			if(isNumber){
			    //0입력의 경우 입력 종료
			    if(Integer.parseInt(input)==0){ break; }
			    //이미 입력된 수를 입력하는 경우
			    if(list.contains(Integer.parseInt(input))){
			        System.out.println("[입력오류] : 이미 입력된 숫자 입니다.");
			    }
			    //새로운 수인 경우 ArrayList에 추가
			    else{
			        list.add(Integer.parseInt(input));
			        //최대값 저장
			        if(Integer.parseInt(input)>max){ max=Integer.parseInt(input); }
			    }
			}
        }
        
        //최대값 까지의 수 중 소수 구하기
        boolean primeNum[] = new boolean[max+1];
        //primeNum배열 초기화
        for(int i=2; i<=max; i++){ primeNum[i]=true; }
        //2부터 시작해 특정 수의 배수는 모두 삭제
        for(int i=2; i<=Math.sqrt(max); i++){
            //primeNum[i]가 0이면 이미 삭제된 수이므로 continue
            if(!primeNum[i]){ continue; }
            //i제곱부터 max까지 i배수 검사
            for(int j=i*i; j<=max; j+=i){ primeNum[j]=false; }
        }
        
        ArrayList<Integer> resList = new ArrayList<Integer>();
        //ArrayList값 중 소수인 값 결과ArrayList에 저장
        for(int i=0; i<list.size(); i++){
		    if(primeNum[list.get(i)]){
                resList.add(list.get(i));
		    }
        }
        
        //결과ArrayList 오름차순 정렬
        Collections.sort(resList);

        //결과 출력
		System.out.print("결과 : ");  
		for(int i=0; i<resList.size(); i++){
            System.out.print(resList.get(i));
            if( i != (resList.size()-1) ){ System.out.print(", "); }
        }
	}
}