import java.util.*;

class practice {
	public static void main (String[] args) {
		Scanner sc = new Scanner (System.in);
		int test_case = sc.nextInt();
		for (int tc=0; tc<test_case; tc++) {
			int n = sc.nextInt(); int[][] a = new int[n][3]; int max=0;
			for (int i=0; i<n; i++) a[i][0] = sc.nextInt(); 
            for (int i=0; i<n; i++) { //n^2
				int temp=0;
				for (int j=0; j<i; j++) {
					if (a[i][0]>a[j][0] && temp<a[j][1]) temp=a[j][1];
				}
				a[i][1] = temp + 1;
				if (max<a[i][1]) max = a[i][1];
			}
			System.out.println(max);
        }
	}
}