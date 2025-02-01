import java.util.*;

public class Elephant {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int x= sc.nextInt();
        int step,step1,step2,step3,step4,step5,a5,a4,a3,a2,a1;
        
        step1= x/5;
        a4=x%5;

        step2= a4/4;
        a3=a4%4;

        step3= a3/3;
        a2=a3%3;

        step4= a2/2;
        a1=a2%2;

        step5= a1/1;
        
        step=step1+step2+step3+step4+step5;
        System.out.println(step);
    }
}
