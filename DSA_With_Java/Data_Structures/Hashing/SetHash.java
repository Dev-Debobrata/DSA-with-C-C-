package DSA_With_Java.Data_Structures.Hashing;

import java.util.HashSet;
import java.util.Iterator;

public class SetHash {
  public static void main(String[] args) {
    HashSet<Integer> set = new HashSet<>();

    set.add(4);
    set.add(6);
    set.add(8);
    set.add(4);

    Iterator<Integer> it = set.iterator();

    it.next();

    System.out.print(it.next());
    System.out.print(set);
    System.out.println();
  }
}
