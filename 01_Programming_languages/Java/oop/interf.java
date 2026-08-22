public class interf {
    public static void main(String[] args){
        boat b = new boat() ;
        b.gof();
        b.god();

        car c = new car();
        c.gof();
        c.god();

    }
}

interface Run {
    void gof();
    void god();
}

class car implements Run{
    public void gof() {
        System.out.println("car is going forward");
    }

    public void god() {
        System.out.println("car is going downward");
    }
}

class boat implements Run{
    public void gof() {
        System.out.println("boat is going forward");
    }

    public void god() {
        System.out.println("boat is going downward");
    }
}