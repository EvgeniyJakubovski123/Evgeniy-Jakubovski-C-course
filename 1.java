import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;

public class TextReader {
    public static void main(String[] args) {
        try {
            FileReader fr = new FileReader("textfile.txt");
            BufferedReader br = new BufferedReader(fr);
            String line;
            while ((line = br.readLine()) != null) {
                if (line.length() <= 42) {
                    System.out.println(line);
                } else {
                    int endIndex = 42;
                    for (int i = 0; i < 42; i++) {
                        if (line.charAt(i) == ',' || line.charAt(i) == '!' || line.charAt(i) == '?') {
                            endIndex = i;
                            break;
                        }
                    }
                    System.out.println(line.substring(0, endIndex));
                }
            }
            br.close();
            fr.close();
        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}
