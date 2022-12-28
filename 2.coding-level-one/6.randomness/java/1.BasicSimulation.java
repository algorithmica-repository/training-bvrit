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

	public static void main(String[] args) {
		simulateCoinToss();
		simulateDiceThrow();
	}
}
