import java.util.Scanner;
import java.util.Stack;
class Main
{
    public boolean isValid(String s)
    {
        Stack<Character> st = new  Stack<Character>();
        for(int i =0; i< s.length(); i++)
        {
            char ch = s.charAt(i);
            if(ch == '{' ||ch =='(' ||ch == '[')
                st.push(ch);
            else
            {
                if(st.isEmpty()) return false;
                if(ch == '}' && st.peek() == '{') st.pop();
                else if(ch == ')' && st.peek() == '(') st.pop();
                else if(ch == ']' && st.peek() == '[') st.pop();
                else return false;
            }
        }
        return st.isEmpty();
    }
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        String input = sc.nextLine();
        Main vp = new Main();
        boolean result = vp.isValid(input);
        if(result)
        {
            System.out.println("Valid");
        }
        else
        {
            System.out.println("Invalid");
        }
        sc.close();
    }
}
