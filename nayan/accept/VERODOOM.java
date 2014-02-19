import java.lang.*;
import java.io.*;
import java.math.BigInteger;
import java.util.Scanner;
class fac
{
	BigInteger gt(long x)
	{
		BigInteger mo=new BigInteger("1");
		for(long i=1;i<=x;i++)
		{
		 String s1=Long.toString(i);	
		 BigInteger mo1=new BigInteger(s1);
		 mo=mo.multiply(mo1);
		}
		return mo;
	}
}
public class VERODOOM{

       public static void main(String[] args) throws Exception{
       long  n,k,d;
       String s1;
       Scanner ab=new Scanner(System.in);
       fac nay=new fac();
       n=ab.nextInt();
       k=ab.nextInt();
       d=n-k-1;
       BigInteger mo=nay.gt(d);
       d=d+2-k;
       BigInteger mo1=nay.gt(d);
       BigInteger mo2=nay.gt(k-2);
       mo=mo.divide(mo1);
       mo=mo.divide(mo2);
       d=(n*d)/(k*(k-1));
       s1=Long.toString(d);
       BigInteger mo3=new BigInteger(s1);
       mo=mo.multiply(mo3);
       d=1000000003;
       s1=Long.toString(d);
       BigInteger mo4=new BigInteger(s1);
       mo=mo.mod(mo4);
       System.out.println(mo);
       
      }
}
