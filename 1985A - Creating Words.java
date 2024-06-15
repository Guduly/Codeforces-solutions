import java.util.Scanner;
import java.util.ArrayList; 
 
public class ol{
 
    public static void main(String[] args){
     
        Scanner in = new Scanner(System.in); 
 
        int t  = in.nextInt(); 
 
        for(int i = 0; i  < t; i++){
            in.nextLine();
            String one = in.next(); 
            String two = in.next(); 
 
            String sub_1 = one.substring(0,1); 
            String sub_2 = two.substring(0,1); 
 
            String output_1 = sub_2 + one.substring(1);
            String output_2 = sub_1 + two.substring(1);
            
            System.out.println(output_1 + " " + output_2); 
        }
 
        in.close();
    }
 
}
