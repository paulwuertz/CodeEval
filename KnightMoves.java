import java.io.*;
import java.util.List;

public class Main {
    public static void main (String[] args) throws IOException {
        File file = new File(args[0]);
        BufferedReader buffer = new BufferedReader(new FileReader(file));
        String line;
        while ((line = buffer.readLine()) != null) {
            line = line.trim();
            int x=cha(line.charAt(0)),y=Integer.parseInt(""+line.charAt(1));
            String min="";
            if(x-2>0 && y-1>0){int ya=y-1;
                min+=num(x-2)+""+ya+" ";}
            if(x-2>0 && y+1<9){int ya=y+1;
                min+=num(x-2)+""+ya+" ";}
            if(x-1>0 && y-2>0){int ya=y-2;
                min+=num(x-1)+""+ya+" ";}
            if(x-1>0 && y+2<9){int ya=y+2;
                min+=num(x-1)+""+ya+" ";}
            if(x+1<9 && y-2>0){int ya=y-2;
                min+=num(x+1)+""+ya+" ";}
            if(x+1<9 && y+2<9){int ya=y+2;
                min+=num(x+1)+""+ya+" ";}
            if(x+2<9 && y-1>0){int ya=y-1;
                min+=num(x+2)+""+ya+" ";}
            if(x+2<9 && y+1<9){int ya=y+1;
                min+=num(x+2)+""+ya+" ";}

            System.out.println(min);
        }
    }

    public static char num(int n){
        switch (n){
            case 1:return 'a';
            case 2:return 'b';
            case 3:return 'c';
            case 4:return 'd';
            case 5:return 'e';
            case 6:return 'f';
            case 7:return 'g';
            case 8:return 'h';
            default:return 'x';
        }
    }
    public static int cha(char n){
        switch (n){
            case 'a':return 1;
            case 'b':return 2;
            case 'c':return 3;
            case 'd':return 4;
            case 'e':return 5;
            case 'f':return 6;
            case 'g':return 7;
            case 'h':return 8;
            default:return -1;
        }
    }
}
