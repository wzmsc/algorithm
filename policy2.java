package policy;

import java.util.ArrayList;
import java.util.Scanner;

public class policy2 {

    public static void main(String[] args) {

        ArrayList<Character> fact = new ArrayList<Character>();
        fact.add('A');fact.add('B');fact.add('C');fact.add('D');fact.add('E');
        char rule[][] = new char[][]{{'X', 'B', 'E', 'Y'}, {'Y', 'D', 'Z'}, {'A', 'X'}};
        int len, len1, len2, i, j, k;
        char n;
        len1=rule.length;
        int m = 0;

        for (i = 0; i < len1; i++) {            /*得到有几个要进行判断的目标数m*/
            len = rule[i].length;
            for (j = 0; j < len - 1; j++) {
                len2 = fact.size();
                for (k = 0; k < len2; k++) {
                    if (rule[i][j] == fact.get(k)) {
                        break;
                    }
                }
                if (k < len2) {
                    continue;
                } else {
                    break;
                }
            }
            if (j >= len - 1) {
                if (!fact.contains(rule[i][len - 1])) {
                    fact.add(rule[i][len - 1]);
                }
            } else {
                m++;
            }
        }

        while (m >= 1) {
            for (i = 0; i < 3; i++) {
                len = rule[i].length;
                for (j = 0; j < len - 1; j++) {
                    len2 = fact.size();
                    for (k = 0; k < len2; k++) {
                        if (rule[i][j] == fact.get(k)) {
                            break;
                        }
                    }
                    if (k < len2) {
                        continue;
                    } else {
                        break;
                    }
                }
                if (j >= len - 1) {
                    if (!fact.contains(rule[i][len - 1])) {
                        fact.add(rule[i][len - 1]);
                    }
                }
            }
            m = m - 1;
        }

        System.out.println("请输入要判断的命题：");
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
        n = s.charAt(0);
        len2 = fact.size();
        for (k = 0; k < len2; k++) {
            if (n == fact.get(k)) {
                break;
            }
        }
        if (k < len2) {
            System.out.println(n + "是真命题。");
        } else {
            System.out.println(n + "是假命题。");
        }
        System.out.print("事实库为");
        for (i = 0; i < fact.size(); i++) {
            System.out.print(fact.get(i)+" ");
        }
    }
}
