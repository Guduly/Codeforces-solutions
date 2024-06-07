import java.util.Scanner;
import java.util.ArrayList; 
import java.util.*;

public class ol{

    public static void main(String[] args){
        

        Scanner in = new Scanner(System.in); 
        int t = in.nextInt(); 

        

        for(int i = 0; i < t; i++){
            
            in.nextLine(); 
            int n = in.nextInt(); 

            int[] st = new int[n]; 
            int[] temp = new int[n];
            ArrayList<Integer> max = new ArrayList<>();
            in.nextLine(); 
            for(int j =0; j < n; j++){

                st[j] = in.nextInt(); 
                temp[j] = st[j]; 
                if(j > 0 && j < n){


                    Arrays.sort(temp);
                    max.add(temp[temp.length-1]);

                }


            }

            int pos = 1;
            
            while (pos < n) {
                
                int[] sub = new int[n-pos];

                if(sub.length == 1)
                    break;

                int val = 0; 
                for(int k = pos; k < n; k++){

                    sub[val] = st[k];
                    val++; 

                }



                Arrays.sort(sub);
                max.add(sub[sub.length-1]);
                pos++;


            }
            
            max.add(Math.max(st[0], st[st.length-1]));

            Collections.sort(max); 

            

            System.out.println((max.get(0)-1)); 
            


        }

        in.close();
    }
    

}
