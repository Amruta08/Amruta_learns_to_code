package practicals;
public class metov {
    
     public static void main(String[] args) {

        area d = new area();
        double sum = area.Area(10);
        System.out.println(sum);
        
     }
    
}

class area{
    public static float Area(int a , int b) {
        return a*b ;
    }

    public static double Area(int r) {
        return 3.14*r*r ;
    }
}





