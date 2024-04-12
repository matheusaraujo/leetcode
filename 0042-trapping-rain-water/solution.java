class Solution {
    public int trap(int[] h) {
        int N = h.length, ans = 0;

        if (N == 0) return 0;

        int[] l = new int[N];
        int[] r = new int[N];

        l[0] = h[0];
        for(int i = 1; i < N; i++)
            l[i] = Math.max(l[i-1], h[i]);

        r[N - 1] = h[N - 1];
        for(int i = N - 2; i >= 0; i--)
            r[i] = Math.max(r[i+1], h[i]);

        for(int i = 0; i < N; i++)
            ans += Math.min(l[i], r[i]) - h[i];

        return ans;
    }
}
