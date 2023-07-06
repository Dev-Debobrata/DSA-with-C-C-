package DSA_With_Java.Data_Structures.Hashing;

import java.util.LinkedHashSet;

public class SetHashLinked {
  public static void main(String[] args) {
    LinkedHashSet<Integer> linkedSet = new LinkedHashSet<>();

    linkedSet.add(4);
    linkedSet.add(6);
    linkedSet.add(8);
    linkedSet.remove(4);

    System.out.print(linkedSet);
    System.out.println();
  }
}
