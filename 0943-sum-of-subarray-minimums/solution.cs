public class Solution {

    public class Pair {
        public int f, s;
        public Pair(int f, int s) {
            this.f = f;
            this.s = s;
        }
    }

    public int SumSubarrayMins(int[] arr) {
        int n = arr.Length;
        int[] left = new int[n];
        int[] right = new int[n];

        Stack<Pair> s1 = new Stack<Pair>();
        Stack<Pair> s2 = new Stack<Pair>();

        for(int i = 0; i < n; i++) {
            int cnt = 1;
            while(s1.Count != 0 && s1.Peek().f > arr[i]) {
                cnt += s1.Peek().s;
                s1.Pop();
            }
            s1.Push(new Pair(arr[i], cnt));
            left[i] = cnt;
        }

        for(int i = n - 1; i >= 0; i--) {
            int cnt = 1;
            while(s2.Count != 0 && s2.Peek().f >= arr[i]) {
                cnt += s2.Peek().s;
                s2.Pop();
            }
            s2.Push(new Pair(arr[i], cnt));
            right[i] = cnt;
        }

        long ans = 0;
        long mod = 1000000007L;
        
        for(int i = 0; i < n; i++) {
            long a = (long)arr[i] * left[i] * right[i];
            ans = (ans + a);
        }

        return (int)(ans % mod);
    }
}
