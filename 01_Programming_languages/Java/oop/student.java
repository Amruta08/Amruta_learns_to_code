package oop;

public class student {
    // Student attributes
    String name = "John";
    int age = 20;
    String grade = "A";

    // Student methods
    public void getDetails() {
        System.out.println("Student Name: " + name);
        System.out.println("Student Age: " + age);
        System.out.println("Student Grade: " + grade);
    }
}

class OnlineStudent extends student{
    String platform = "Zoom";
    
    public void getPlatform(){
        System.out.println("Platform: " + platform);
    }
}