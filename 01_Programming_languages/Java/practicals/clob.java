package practicals;

public class clob {
    public static void main(String[] args) {

        // Account a1=new Account();  
        student s1 = new student();
        student s2 = new student();
        student s3 = new student();
        s1.insert(1, "Ankit", 78);
        s2.insert(2, "Sunny", 88);
        s3.insert(3, "Elizabeth", 100);

        s1.display();
        s2.display();
        s3.display();

        
    }
}

class student{
int no;  
String name;  
float marks;  

void insert(int a,String n,float m){  
    no=a;  
    name=n;  
    marks=m;  
} 
    
void display(){    
        System.out.println("Name = "+name + " Roll no = "+no + " Marks =" + marks);

}  
}