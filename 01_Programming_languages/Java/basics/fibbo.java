import java.util.Scanner;
public class fibbo {
    public static int fibb(int x){
        if (x <= 2) {
            return 1 ;
            
        } else {
            return (fibb(x-1) + fibb(x-2)) ;
        }
    }
    
    
    public static void main(String[] args){

        Scanner input =  new Scanner(System.in);
        int num = input.nextInt();
      
        for(int i = 1 ; i < num ; i++){
            System.out.printf("%d\t" , fibb(i));   
        }

    

        input.close();
    }
    
}


