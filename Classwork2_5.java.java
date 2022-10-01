package classwork1;

public class Classwork2_5 {
	public static void main(String[] args) {
		if(args.length <= 0) {
			System.out.println("No command line arguments found");
		} else {
			int l = args.length;
			String next_arg = "";
			for(int i=l-1; i>=0; i--) {
				next_arg = args[i];
				System.out.printf("%s ", next_arg);
			}
		}
	}

}
