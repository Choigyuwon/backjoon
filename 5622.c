import java.util.*;

public class Main {
	
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		String string = s.nextLine();
		
		int sum = 0;
		
		for (int i=0;i<string.length();i++) 
		{
			if(string.charAt(i) <= 'C') sum = sum+ 3;
				else if(string.charAt(i) <= 'F') sum = sum + 4;
				else if(string.charAt(i) <= 'I') sum = sum + 5;
				else if(string.charAt(i) <= 'L') sum = sum + 6;
				else if(string.charAt(i) <= 'O') sum = sum + 7;
				else if(string.charAt(i) <= 'S') sum = sum + 8;
				else if(string.charAt(i) <= 'V') sum = sum + 9;
				else sum = sum + 10;	
			}
					System.out.println(sum);
	}
}
