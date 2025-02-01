import java.util.*;

public class SoldierandBananas {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int cost = sc.nextInt();
        int dollars = sc.nextInt();
        int banana = sc.nextInt();
        int borrow,finalcost=0,temp;

        for (int i = 1; i <= banana; i++) {
            temp =(i*cost);
            finalcost += temp;
        }
        
        borrow=finalcost-dollars;
        if(borrow>0){
        System.out.println(borrow);
        }else{
            System.out.println("0");
        }
    }
}
