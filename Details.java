import java.io.*;
public class Main {
    public static void main (String[] args) throws IOException {
        File file = new File(args[0]);
        BufferedReader buffer = new BufferedReader(new FileReader(file));
        String line;
        while ((line = buffer.readLine()) != null) {
            line = line.trim();
            String xy[]=line.split(",");
            int min=-1,l=0;
            for(String t:xy){
                for(int i=0;i<t.length();i++){
                    if(t.charAt(i)=='X')
                        l=i;
                    else if(t.charAt(i)=='Y'){
                        if(min==-1)
                            min=i-l-1;
                        else if(min>i-l-1)
                            min=i-l-1;
                    }
                }
            }
            System.out.println(min);
        }
    }
}
