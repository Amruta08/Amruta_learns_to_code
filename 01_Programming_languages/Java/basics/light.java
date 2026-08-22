public class light {
    public static void main(String[] args){
        lamp a = new lamp() ;
        lamp b = new lamp() ;
        a.on();
        b.off();


    }
}


class lamp{
    boolean ison ;

    void on(){
        ison = true ;
        System.out.println("light is on :" + ison);

    }

    void off(){
        ison = false ;
        System.out.println("light is on :" + ison);

    }

}