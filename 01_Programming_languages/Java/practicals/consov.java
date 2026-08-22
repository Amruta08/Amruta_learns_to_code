package practicals;

public class consov {
    public static void main (String[] args){
        demoov s1  = new demoov(1,"Ankit");
        demoov s2 = new demoov(2,"Sunny",88);

        System.out.println(s1.name);
        System.out.println(s2.marks);
    }  
}

class demoov{

    int no;  
    String name;  
    float marks; 

    demoov(int a,String n){
        no=a;  
        name=n; 
    }

    demoov(int a,String n,float m){
        no=a;  
        name=n;  
        marks=m;     
    }
}


