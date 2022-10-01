package classwork1;

public class Classwork1_7 {
	public static void main(String[] args) {
		if(args.length <= 0) {
			System.out.println("No command line arguments");
		} else {
			String username = args[0];
			System.out.println("Hello, " + username);
		}
	}

}
