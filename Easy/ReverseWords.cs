using System;
using System.Collections.Generic;
using System.IO;

class Program
{
    static void Main(string[] args)
    {
        List<string> words;
        using (StreamReader reader = File.OpenText(args[0]))
            while (!reader.EndOfStream)
            {
                string line = reader.ReadLine();
                if (null == line)
                    continue;
                words = getWords(line);
                for (int i = words.Count - 1; i >= 0; i--)
                {
                    Console.Write(words[i]);
                    if (i != 0)
                        Console.Write(" ");
                }
                Console.WriteLine();
            }
    }

        public static List<string> getWords(String cut) { 
            List<string> words=new List<string>();
            int letztes=-1;
            for(int i=0;i<cut.Length;i++){
                if(cut[i]==' '){
                    words.Add(cut.Substring(letztes+1,i-letztes-1));
                    letztes=i;
                }
                else if(i+1==cut.Length)
                    words.Add(cut.Substring(letztes + 1, i - letztes));
            }
            return words;
        }
}