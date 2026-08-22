package practicals;

class A extends Thread {
    // 1st thread
    public void run() {
        for (int i = 1; i < 11; i++) {
            System.out.println("2 x "+ i + "=" + 2*i);
        }
    }
}

class B extends Thread {
    // 2nd thread
    public void run() {
        for (int i = 1; i < 11; i++) {
            System.out.println("10 x "+ i + "=" + 10*i);
        }
    }
}


class multithreading {
    public static void main(String[] args) {

        A obj1 = new A();
        B obj2 = new B();

        // calling the start () will invoke the run method
        obj1.start();
        obj2.start();

        System.out.println(obj1.isAlive());
        System.out.println("Threads are sub parts of the program that can run concurrently");
        System.out.println("Multithreading helps to achieve multitasking");

    }
}