import java.util.Scanner;
import java.util.ArrayList;
import java.util.Collections;
public class RepeatedNumbers
{
    public static void main(String args[])
    {
        Scanner in = new Scanner(System.in);
        ArrayList<Integer> inputList= new ArrayList<Integer>();
				ArrayList<Integer> duplicates= new ArrayList<Integer>();
        int size = in.nextInt();
				int x;
        while(size>0){
        	x= in.nextInt();
					if(inputList.contains(x)){
						if(duplicates.contains(x)==false)
						    duplicates.add(x);
					}
					else{
						inputList.add(x);
					}
					size--;
        }
		Collections.sort(duplicates);
		if(duplicates.isEmpty())
			System.out.print("unique");
		else{
			for(Integer i: duplicates)	
				System.out.print(i+" ");
		}
    }
}
