package policy;

import java.util.ArrayList;
import java.util.Scanner;

public class policy {
    public static void main(String[] args) {

        ArrayList<Character> fact = new ArrayList<Character>();
        fact.add('A');fact.add('B');fact.add('C');fact.add('D');fact.add('E');
        char rule[][] = new char[][]{{'X', 'B', 'E', 'Y'}, {'Y', 'D', 'Z'}, {'A', 'X'}};
        int len, len1, len2, i, j, k;
        char n;
        len1=rule.length;
        int m = len1;

        while (m >= 1) {
            for (i = 0; i < len1; i++) {             /*先循环二维数组(规则库)的每个一维数组，len1为其中一维数组的个数*/
                len = rule[i].length;
                for (j = 0; j < len - 1; j++) {        /*再循环每个数组(规则)中的元素，len为每个一维数组的长度*/
                    len2 = fact.size();
                    for (k = 0; k < len2; k++) {       /*最后每个数组的元素循环比较事实库的元素，len2为事实库的长度*/
                        if (rule[i][j] == fact.get(k)) {
                            break;                      /*只要事实库中有与规则条件相同的情况就跳出第三层循环*/
                        }
                    }
                    if (k < len2) {                     /*跳出三层循环时的k拿来判断是否要继续执行事实的判断*/
                        continue;
                    } else {
                        break;
                    }
                }
                if (j >= len - 1) {                     /*二层循环结束，判断是否命题的所有条件都在事实库中*/
                    if (!fact.contains(rule[i][len - 1])) {  /*是的话再判断当前事实库有无此事实，以防重复*/
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
        for (k = 0; k < len2; k++) {               /*判断当前输入的命题是否在事实库中*/
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
