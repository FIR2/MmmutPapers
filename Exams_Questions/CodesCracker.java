import java.util.Scanner;

public class CodesCracker
{
   public static void main(String[] args)
   {
      int i, j, k, sum=0;
      int[][] matrixOne = new int[3][3];
      int[][] matrixTwo = new int[3][3];
      int[][] matrixThree = new int[3][3];
      Scanner scan = new Scanner(System.in);
      
      System.out.print("Enter 9 Elements of First Matrix: ");
      for(i=0; i<3; i++)
      {
         for(j=0; j<3; j++)
         {
            matrixOne[i][j] = scan.nextInt();
         }
      }

      System.out.print("Enter 9 Elements of Second Matrix: ");
      for(i=0; i<3; i++)
      {
         for(j=0; j<3; j++)
         {
            matrixTwo[i][j] = scan.nextInt();
         }
      }
      
      // multiplying the two matrices
      for(i=0; i<3; i++)
      {
         for(j=0; j<3; j++)
         {
            sum = 0;
            for(k=0; k<3; k++)
            {
               sum = sum + (matrixOne[i][k] * matrixTwo[k][j]);
            }
            matrixThree[i][j] = sum;
         }
      }
      
      System.out.println("\nMultiplication Result of Two Matrices is:");
      for(i=0; i<3; i++)
      {
         for(j=0; j<3; j++)
         {
            System.out.print(matrixThree[i][j]+ "  ");
         }
         System.out.print("\n");
      }
   }
}