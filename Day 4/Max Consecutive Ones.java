class Main {
    public int findMaxConsecutiveOnes(int[] nums) {
        int ans = 0, count = 0;
        for (int num : nums) {
            if (num == 1) {
                ans = Math.max(ans, ++count);
            } else {
                count = 0;
            }
        }
        return ans;
    }
}
