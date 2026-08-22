import java.util.*;

    

class TempEx extends Exception{
    public TempEx(String s){
        super(s);
    }
}

public class ja{
    public static void main(String args[]){
        int temp;
        Scanner sc = new Scanner(System.in);
        temp = sc.nextInt();

        try{
            if(temp < 100){
                throw new TempEx("Low Temperature");
            }
            System.out.println("High Temperature");
        }
        catch(TempEx e){
            System.out.println(e.getMessage());
        }
    }

}

