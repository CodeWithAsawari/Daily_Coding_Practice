import java.util.Scanner;

public class Assignment2 {
    void add(int p,int q)
    {
        System.out.println(p+q);
    }
}
class cls2 extends Assignment2
{
   void mul(int p,int q)
    {
        System.out.println(p*q);
    }
    void task(int p,int q)
    {
      System.out.print((p*p )+(q*q));   
 }

 

public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
    
        cls2 obj=new cls2();
        int a=sc.nextInt();
        int b=sc.nextInt();
        //String tilde=sc.next();
        obj.add(a,b);
        obj.mul(a,b);
        obj.task(a,b);
    
    }
}

