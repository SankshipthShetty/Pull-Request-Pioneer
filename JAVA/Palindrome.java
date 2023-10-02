import java.util.*;

class Palindrome{  
    public static void main(String args[]){  
        int rev=0,temp;

        Scanner in = new Scanner(System.in);
        System.out.println("Enter a Number to check if it is a Palindrome: ");
        int num = in.nextInt();

        temp=num;    
        while(num>0){
            rev=(rev*10)+(num%10);    
            num=num/10;    
        }

        if(temp==rev)    
            System.out.println("Entered Number is palindrome.");    
        else    
            System.out.println("Entered Number is Not Palindrome");    
    }
}  