import java.util.Random;

public class SeedImportance {

	public static void randomWithFixedSeed(int end) {
		Random r = new Random(100);
		for (int i = 0; i < 10; ++i)
			System.out.println(r.nextInt(end));
	}

	public static void randomWithDynamicSeed(int end) {
		Random r = new Random();
		for (int i = 0; i < 10; ++i)
			System.out.println(r.nextInt(end));
	}

	public static void main(String[] args) {
		randomWithFixedSeed(10);
		System.out.println();
		randomWithDynamicSeed(10);
	}

}
