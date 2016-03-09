using System;
using System.Collections.Generic;
using System.IO;

class Program
{
    static void Main(string[] args)
    {
        int i = 0;
        Boolean two = false;
        string[] text = { ", yeah!", ", this is crazy, I tell ya.", ", can U believe this?", ", eh?", ", aw yea.", ", yo.", "? No way!", ". Awesome!" };
        using (StreamReader reader = File.OpenText(args[0]))
            while (!reader.EndOfStream)
            {
                string line = reader.ReadLine();
                if (null == line)
                    continue;
                for (int j = 0; j < line.Length; j++)
                {
                    if (two && (line[j] == '.' || line[j] == '!' || line[j] == '?'))
                    {
                        line = line.Substring(0, j) + text[i] + line.Substring(j + 1, line.Length - j - 1);
                        j += text[i].Length;
                        i++;
                        i = i % 8;
                        two = false;
                    }
                    else if (line[j] == '.' || line[j] == '!' || line[j] == '?')
                        two = true;
                }
                Console.WriteLine(line);
            }
    }

}