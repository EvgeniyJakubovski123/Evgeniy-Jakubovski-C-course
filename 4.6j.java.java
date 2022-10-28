

public class Main
{
	public static double invsqrt(double x,double a){
	    return x/Math.sqrt(1+a*Math.pow(x,2));
	}
	public static double derivative_invsqrt(double x,double a){
	    return (1/Math.sqrt(a*Math.pow(x,2)+1))-(a*Math.pow(x,2)/Math.pow((a*Math.pow(x,2)+1),3/2));
	}
	public static void main(String [] args){
	    System.out.print(invsqrt(1,1)+"\n"+derivative_invsqrt(1,1)+"\n");
	}
}
