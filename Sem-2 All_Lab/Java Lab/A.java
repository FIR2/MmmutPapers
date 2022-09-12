  // inherite by subclass to all instance or static member function of superclass
class A 
{ 
  public static  void  f1()
  { System.out.println("Hello this is all member inherite by subclass of super class");}

  public static void main(String[]args)
  {
     B.f1();
    
    
  }
}

class B extends A{
  public static void f1()
  {   
    // System.out.println("Hello")++
  ;}

}

