public class add {
    public static void main(String[] args){
        
        //create object
        adi num = new adi() ;

        int val = num.addi(23) ;
        System.out.println("square is : " + val );


    }  
}

class adi {
public int addi( int x) {
    return x*x ;   
  }
} 