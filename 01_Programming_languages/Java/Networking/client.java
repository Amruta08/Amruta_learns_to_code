package Networking;
import java.io.DataOutputStream;
import java.io.IOException;
import java.net.*;

public class client {
    public static void main(String args[]) throws UnknownHostException, IOException{
        
        // Create socket object
        Socket s = new Socket("localhost", 6666);

        // Output stream to send Hello message to server
        DataOutputStream dout = new DataOutputStream(s.getOutputStream());

        dout.writeUTF("Hello");
        dout.flush();
        dout.close();

        // CLose socket
        s.close();

    }
    
}
