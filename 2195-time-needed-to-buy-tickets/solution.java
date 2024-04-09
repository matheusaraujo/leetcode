class Solution {
    public int timeRequiredToBuy(int[] tickets, int k) {
        int ans = 0;

        for(int i = 0 ; i < tickets.length; i++) {
            ans += Math.min(tickets[i], tickets[k] + (i > k ? -1 : 0));
        }

        return ans;
    }
}
