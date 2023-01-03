package dummy;

import java.io.BufferedReader;
import java.io.FileReader;
import java.util.Scanner;

public class FindMissingComents {

	public static void findMissingComents(String in_name) throws Exception {
		BufferedReader inf = new BufferedReader(new FileReader(in_name));
		String line;
		String prev = " ";
		int lineNum = 0;
		while ((line = inf.readLine()) != null) {
			++lineNum;
			// System.out.println(line);
			if (line.startsWith("def") && prev.charAt(0) != '#') {
				String fname = line.substring(4, line.indexOf('('));
				System.out.println(fname + ":" + lineNum);
			}
			if (line.length() == 0)
				prev = " ";
			else
				prev = line;
		}
		inf.close();
	}

	public static void main(String[] args) throws Exception {
		Scanner scanner = new Scanner(System.in);
		String in_name = scanner.nextLine();
		findMissingComents(in_name);
	}
}
