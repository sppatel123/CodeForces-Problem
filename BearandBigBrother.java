import java.util.*;

public class BearandBigBrother {

    public static void main(String[] args) {
        int a,b,year=0;
        Scanner sc = new  Scanner(System.in);
        a = sc.nextInt();
        b = sc.nextInt();

        while(a<=b){
            a=a*3;
            b=b*2;
            year++;
        }
        System.out.println(year);
        
    }
}