import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.FileReader;
import java.io.FileWriter;
import java.util.Scanner;

public class TextFileIO {

	public static void readWrite(String in_name, String out_name) throws Exception {
		BufferedReader inf = new BufferedReader(new FileReader(in_name));
		BufferedWriter outf = new BufferedWriter(new FileWriter(out_name));
		String line;
		while ((line = inf.readLine()) != null) {
			outf.write(line);
			outf.write("\n");
		}
		inf.close();
		outf.close();
	}

	public static void main(String[] args) throws Exception {
		Scanner scanner = new Scanner(System.in);
		String in_name = scanner.nextLine();
		String out_name = scanner.nextLine();
		readWrite(in_name, out_name);
	}
}
