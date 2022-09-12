// public class WhileTest {

//         public static void main(String[] args) {
    
//             int num = 1;
            
//             while(num <= 10) {
//                 System.out.println(num);
//                 num++;
//             }
            
//             System.out.println("Statement after while!");
    
//         }}


// Java program to illustrate while loop

public class WhileLoopDemo {
	public static void main(String args[])
	{
		int x = 1, sum = 0;
		while (x <= 10) {
			// summing up x
			sum = sum + x;
			x++;
		}
		System.out.println("Summation: " + sum);
	}
}

