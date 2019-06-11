import java.util.Scanner;
import java.util.ArrayList;
import java.util.Collections;
public class LargestPossibleNumber
{
    public static void main(String args[])
    {
        Scanner in = new Scanner(System.in);
        ArrayList<Integer> inputList= new ArrayList<Integer>();
        int size = in.nextInt();
				int x;
        while(size>0){
        	inputList.add(in.nextInt());
					size--;
        }
		Collections.sort(inputList);
		Collections.reverse(inputList);
		if(inputList.get(0)==0)
			System.out.print("0");
		else{
			for(Integer i: inputList)	
				System.out.print(i);
		}
    }
}
