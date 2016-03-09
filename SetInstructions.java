import java.io.*;
import java.util.Arrays;

public class Main {
    public static void main (String[] args) throws IOException {
        File file = new File(args[0]);
        BufferedReader buffer = new BufferedReader(new FileReader(file));
        String line;
        while ((line = buffer.readLine()) != null) {
            line = line.trim();
            String lineA[]=line.split(";");
            String[] as=lineA[0].split(","),bs=lineA[1].split(",");

            int[] a = new int[as.length],b= new int[bs.length];

            for (int i = 0; i < as.length; i++) {
                a[i] = Integer.parseInt(as[i]);
            }
            for (int i = 0; i < bs.length; i++) {
                b[i] = Integer.parseInt(bs[i]);
            }

            Arrays.sort(a);
            Arrays.sort(b);
            String p="";
            for(int sa:a){
                for(int i=0;i<b.length;i++){
                    if(b[i]==sa)
                        p+=sa+",";
                }
            }
            if(p.endsWith(","))
                p=p.substring(0,p.length()-1);
            System.out.println(p);
            // Process line of input Here
        }
    }
}