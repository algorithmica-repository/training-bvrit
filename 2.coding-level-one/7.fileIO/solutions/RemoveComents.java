package dummy;

import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.FileReader;
import java.io.FileWriter;
import java.util.Scanner;

public class RemoveComents {

	public static void removeComments(String in_name, String out_name) throws Exception {
		BufferedReader inf = new BufferedReader(new FileReader(in_name));
		BufferedWriter outf = new BufferedWriter(new FileWriter(out_name));
		String line;
		while ((line = inf.readLine()) != null) {
			int pos = line.indexOf('#');
			if (pos >= 0)
				outf.write(line.substring(0, pos) + "\n");
			else
				outf.write(line + "\n");
		}
		inf.close();
		outf.close();
	}

	public static void main(String[] args) throws Exception {
		Scanner scanner = new Scanner(System.in);
		String in_name = scanner.nextLine();
		String out_name = scanner.nextLine();
		removeComments(in_name, out_name);
	}
}
