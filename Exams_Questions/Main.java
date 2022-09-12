// public class Main {
//    private final int x = 10;
  
//     public static void main(String[] args) {
//       Main myObj = new Main();
//      //myObj.x = 25;  will generate an error: cannot assign a value to a final variable
//       System.out.println(myObj.x);
//     }
//   }
  
  public class Main{
  public final void SomeFunction()
      {System.out.println("Use of final method");}


  }
  class moreMain extends Main{
        void SomeFunction()
     {System.out.println("Over ride the main function");}

    
    public static void main(String[]args)
    {
       moreMain m =new moreMain();
       m.SomeFunction();
    }
  }