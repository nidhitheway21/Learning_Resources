import java.io.*; 
import java.lang.Math;  
public class ArmstrongNo 
{  
static boolean isArmstrong(int n)   
{   
int temp, digits=0, r=0, sum=0;     
temp=n;    
while(temp>0)    
{   
temp = temp/10;   
digits++;   
}   
temp = n;   
while(temp>0)   
{         
r = temp % 10;   
sum +=  (Math.pow(r, digits));     
temp = temp/10;   
}    
if(n==sum)    
return true;       
else return false;   
}    
public static void main(String args[]) throws IOException    
{     
int num;   
InputStreamReader isr= new InputStreamReader(System.in);
BufferedReader br= new BufferedReader(isr);
 
System.out.print("Enter the limit: ");  
String st= br.readLine(); 
num=Integer.parseInt(st); 
System.out.println("Armstrong Number up to "+ num + " are: ");  
for(int i=0; i<=num; i++)   
if(isArmstrong(i))  
System.out.print(i+ ", ");  
}   
}  