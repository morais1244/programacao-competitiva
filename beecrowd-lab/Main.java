
import java.util.*;

public class Main {
    public static void main(String[] args) throws Exception {
       Scanner leitor = new Scanner(System.in);
		int N = leitor.nextInt();
		for (int i = 0; i < N; i++) {
			int M = leitor.nextInt();
			ArrayList Mi = new ArrayList<>();
			for (int j = 0; j < M; j++) {
				int temp = leitor.nextInt();
				if (temp % 2 == 1) {
					Mi.add(temp);
				}
			}
			Collections.sort(Mi);
			String str = "";
			if (Mi.size() % 2 != 0) {
				int cont = 0;
				for (int j = 0; cont != Mi.size(); j++) {
					if (j < Mi.size() / 2) {
						str += (Mi.get(Mi.size() - 1 - j) + " " + Mi.get(j) + " ");
						cont += 2;
					} else {
						str += (Mi.get(j));
						cont++;
					}
				}
			} else {
				for (int j = 0; j < Mi.size() / 2; j++) {
					if (j + 1 < Mi.size() / 2)
						str += (Mi.get(Mi.size() - 1 - j) + " " + Mi.get(j) + " ");
					else
						str += (Mi.get(Mi.size() - 1 - j) + " " + Mi.get(j));
				}
			}
			System.out.println(str.trim());
		}
    }
}
