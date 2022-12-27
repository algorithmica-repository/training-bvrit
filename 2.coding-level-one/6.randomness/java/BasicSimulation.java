import java.util.Random;

public class BasicSimulation {

	// simulation of coin toss
	public static void simulateCoinToss() {
		Random r = new Random();
		System.out.println(r.nextInt(2));
	}

	// simulation of dice throw experiment
	public static void simulateDiceThrow() {
		Random r = new Random();
		System.out.println(r.nextInt(6));
	}

	// how do you know that experiment is giving outcome with equal chance?
	public static void verify(int nexperiments) {
		int nheads = 0;
		int ntails = 0;
		Random r = new Random();
		for (int i = 0; i < nexperiments; ++i) {
			if (r.nextInt(2) == 0)
				nheads += 1;
			else
				ntails += 1;
		}
		System.out.println(nheads);
		System.out.println(ntails);
	}

	public static void main(String[] args) {
		simulateCoinToss();
		simulateDiceThrow();
		verify(100);

	}
}