public class Hw2_6ver2
{
	public static void main(String[] args) {



        int a = 0; 
        int b = 250; 
        for (int i = 0; i < 10; i++) {
            int random_number1 = a + (int) (Math.random() * b);
            System.out.println(" " + random_number1);
            
        }
    }
}
