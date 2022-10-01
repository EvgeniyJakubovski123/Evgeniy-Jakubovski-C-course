package classwork1;

public class Classwork13 {
	public static void main(String[] args) {
		if(args.length <= 0) {
			System.out.println("No command line arguments");
		} else {
			for(String a:args) {
				System.out.println(a);
			}			
		}
	}

}
