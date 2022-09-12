// public class IfElseDemo {
//     public static void main(String[] args)
//       {
//        int  i=10;
//        if(i<15)
//         System.out.println("i is smaller then 15");
//         else
//         System.out.println("i is greater then 15");
//     }
    

public class IfElseDemo{
    public static void main(String[]args)
    {
        int time =15;
        if(time>=1 && time<12)
         {
          System.out.println("Good Morning!..");
         }
          else if(time>=12 && time<15){
          System.out.println("Good Afternoon!..");
          }
          else if(time>=15 && time<=18)
         {
          System.out.println("Good Evening!..");
        }
        else 
        System.out.println("Good Night!...");
        
    }
}