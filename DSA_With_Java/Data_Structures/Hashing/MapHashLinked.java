package DSA_With_Java.Data_Structures.Hashing;

import java.util.LinkedHashMap;

public class MapHashLinked {
  public static void main(String[] args) {
    LinkedHashMap<String, Integer> linkedMap = new LinkedHashMap<>();

    linkedMap.put("A", 10);
    linkedMap.put("B", 11);
    linkedMap.put("C", 12);

    System.out.print(linkedMap.get("A"));
    System.out.print(linkedMap.containsKey("E"));
    System.out.print(linkedMap);
    System.out.println();
  }
}
