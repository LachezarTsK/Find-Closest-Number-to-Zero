
public class Solution {

    public int findClosestNumber(int[] input) {
        final int maxValue = (int) Math.pow(10, 5);
        int closest = maxValue + 1;
        for (int n : input) {
            if (Math.abs(n) < Math.abs(closest) || n == Math.abs(closest)) {
                closest = n;
            }
        }
        return closest;
    }
}
