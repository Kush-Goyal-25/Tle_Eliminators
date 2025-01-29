import java.util.*;

public class ArrayCloningTechnique {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            int n = sc.nextInt();
            int[] a = new int[n];
            Map<Integer, Integer> freq = new HashMap<>();
            int maxFreq = 0;

            for (int i = 0; i < n; i++) {
                a[i] = sc.nextInt();
                freq.put(a[i], freq.getOrDefault(a[i], 0) + 1);
                maxFreq = Math.max(maxFreq, freq.get(a[i]));
            }

            int operations = 0;
            int copies = maxFreq;

            while (copies < n) {
                int add = Math.min(copies, n - copies);
                operations += 1 + add;
                copies += add;
            }

            System.out.println(operations);
        }
        sc.close();
    }
}
