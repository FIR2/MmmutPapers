
// A year is leap, if it is divisible by 4 and 400. But, not by 100.
public class LeapYearExample {    
    public static void main(String[] args) {    
        int year=2020;    
        if(((year % 4 ==0) && (year % 100 !=0)) || (year % 400==0))
        {  
            System.out.println("LEAP YEAR");  
        }  
        else
        {  
            System.out.println("COMMON YEAR");  
        }  
    }    
    }    