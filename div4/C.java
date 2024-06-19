import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        while (n-- > 0) {
            solve(scanner);
        }
        scanner.close();
    }

    public static void solve(Scanner scanner) {
        long n = scanner.nextLong();
        List<Long> vect = new ArrayList<>();
        for (int i = 0; i < n; i++) {
            vect.add(scanner.nextLong());
        }
        long pref = 0;
        if (vect.get(0) == 0)
            pref++;
        for (int i = 1; i < n; i++) {
            List<Long> subvect = new ArrayList<>(vect.subList(0, i + 1));
            Collections.sort(subvect);
            long sum = 0;
            for (int j = 0; j < subvect.size() - 1; j++) {
                sum += subvect.get(j);
            }
            if (sum == subvect.get(subvect.size() - 1))
                pref++;
        }
        System.out.println(pref);
    }
}
