public class clas {
    public static void main(String[] args){
        Rectangle r = new Rectangle();
        System.out.println("area of rectangle = " + r.area());

    }
}

class Rectangle {
    int length ;
    int breath ;

    //declare constructor to initialize length and width

    Rectangle(){
        length = 20 ;
        breath = 20 ;
    }
    
    // declare method to calculate area of rectangle
    int area(){
        int rectArea = length*breath;
        return rectArea;
    }
}
