package classwork1;

public class Classwork1_6 {
	public static void main(String[] args) {
		if(args.length <= 0) {
			System.out.println("No command line arguments");
		} else {
			double sum_args = 0;
			double next_x = 0;
			for(String a:args) {
				next_x = Double.parseDouble(a);
				sum_args += next_x;
				System.out.println(a);
			}	
			System.out.println("Sum = " + sum_args);
		}
	}

}
