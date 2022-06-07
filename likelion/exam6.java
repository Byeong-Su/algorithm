package algorithm.likelion;

import java.util.Scanner;
import java.util.ArrayList;

public class exam6 {
    public static void main(String[] args){
		Scanner sc = new Scanner(System.in);

        String input;
        //종료 여부 판단
        boolean isTrue = true;
        //제목 저장 ArrayList
        ArrayList<String> title = new ArrayList<String>();
        //내용 저장 ArrayList
        ArrayList<String> content = new ArrayList<String>();

        while(isTrue){
            //명령어 입력
            System.out.print("명령어) ");
            input = sc.nextLine();

            switch(input) {
                //등록 mode
                case "등록" :
                    System.out.print("제목 : ");
                    //공백포함 입력받기위해 nextLine()사용
                    input = sc.nextLine();
                    title.add(input);
                    System.out.print("내용 : ");
                    input = sc.nextLine();
                    content.add(input);
                    System.out.println("[알림] " + title.size() + "번글이 등록되었습니다.");
                    break;
                //조회 mode
                case "조회" :
                    System.out.println("번호 / 제목");
                    System.out.println("-------------------");
                    for(int i=title.size()-1; i>=0; i--){
                        System.out.println(title.size() + " / " + title.get(i));
                    }
                    break;
                //종료 mode
                    case "종료" :
                    System.out.println("프로그램을 종료합니다.");
                    isTrue=false;
                    break;
                //잘못된 입력 예외처리
                    default :
                    System.out.println("명령어를 잘 못 입력하셨습니다. 등록, 조회, 종료 중 하나를 입력해주세요.");
                    break;
            }
        }		
	}
}
