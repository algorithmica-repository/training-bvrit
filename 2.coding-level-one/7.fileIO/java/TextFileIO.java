import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.FileReader;
import java.io.FileWriter;
import java.util.Scanner;

public class TextFileIO {

	public static void readWrite(String infile, String outfile) throws Exception {
		BufferedReader fin = new BufferedReader(new FileReader(infile));
		BufferedWriter fout = new BufferedWriter(new FileWriter(outfile));
		String line;
		while ((line = fin.readLine()) != null) {
			fout.write(line);
			fout.write("\n");
		}
		fin.close();
		fout.close();
	}

	public static void main(String[] args) throws Exception {
		Scanner scanner = new Scanner(System.in);
		String infile = scanner.nextLine();
		String outfile = scanner.nextLine();
		readWrite(infile, outfile);
	}
}
