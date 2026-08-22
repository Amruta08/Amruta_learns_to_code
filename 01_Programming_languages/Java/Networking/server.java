package Networking;

import java.io.*;
import java.net.*;

public class server {
    public static void main(String args[]) throws IOException {

        // Create a serverSocket object with certain port no
        ServerSocket ss = new ServerSocket(6666);

        // Server waits for client's request & accepts it
        Socket s = ss.accept();

        // Input stream form receving message from client
        DataInputStream dis = new DataInputStream(s.getInputStream());
        String str = (String) dis.readUTF();
        System.out.println(str);

        // CLose socket
        ss.close();

    }

}
