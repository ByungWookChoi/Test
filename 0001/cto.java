import java.util.*;

class practice {
	public static void main (String[] args) {
		Scanner sc = new Scanner (System.in);
		int test_case = sc.nextInt();
		for (int tc=0; tc<test_case; tc++) {
            char[] n = sc.next().toCharArray(); int d = sc.nextInt();
            int si=0; int ei=1; int mark=n.length; String output = "";
            while (ei<n.length+1) {
                int current=Integer.parseInt(new String(n,si,ei-si));
                if (current>=d) {
                    output = output + (current/d);
                    char[] r = (""+current%d).toCharArray();
                    for (int i=0; i<r.length; i++) {
                        n[ei-i-1]=r[r.length-i-1];
                    }
                    si=ei-r.length; mark=ei;
                } 
                if (ei>mark) output = output+"0";
                ei++; 
            }
            System.out.println(output==""?0:output);
        }
	}
}