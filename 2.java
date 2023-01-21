public class SignificantBits {
    public static int countSignificantBits(int number) {
        int count = 0;
        while (number > 0) {
            if ((number & 1) == 1) {
                count++;
            }
            number >>= 1;
        }
        return count;
    }

    public static void main(String[] args) {
        int num1 = 10;
        int num2 = 15;
        int num3 = 32;
        System.out.println("Number of significant bits in " + num1 + ": " + countSignificantBits(num1));
        System.out.println("Number of significant bits in " + num2 + ": " + countSignificantBits(num2));
        System.out.println("Number of significant bits in " + num3 + ": " + countSignificantBits(num3));
    }
}
