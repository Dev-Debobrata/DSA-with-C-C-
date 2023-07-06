package DSA_With_Java.Problem_Solving;

import java.util.*;

public class Two_Sum {

  public int[] twoSum(int[] nums, int target) {
    Map<Integer, Integer> numToIndex = new HashMap<>();
    for (int i = 0; i < nums.length; i++) {
      if (numToIndex.containsKey(target - nums[i])) {
        return new int[] { numToIndex.get(target - nums[i]), i };
      }
      numToIndex.put(nums[i], i);
    }
    return new int[] {};
  }
}
