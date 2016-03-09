import java.io.*;
public class Main {
    public static void main (String[] args) throws IOException {
        File file = new File(args[0]);
        BufferedReader buffer = new BufferedReader(new FileReader(file));
        String line;
        while ((line = buffer.readLine()) != null) {
            line = line.trim();
            String[] v=line.split(",");
            int a=Integer.parseInt(v[1]),b=Integer.parseInt(v[2]);
            String z=Integer.toBinaryString(Integer.parseInt(v[0]));
            System.out.println(z.charAt(z.length()-a)==z.charAt(z.length()-b));
        }
    }
}
