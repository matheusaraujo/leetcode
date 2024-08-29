import java.util.Arrays;
import java.util.Queue;
import java.util.LinkedList;

class Solution {
    public int[] deckRevealedIncreasing(int[] deck) {
        Arrays.sort(deck);
        
        Queue<Integer> q = new LinkedList<>();
        for(int i = 0; i < deck.length; i++)
            q.offer(i);

        int[] ans = new int[deck.length];

        int i = 0;

        while(!q.isEmpty()) {
            int k = q.peek();
            ans[k] = deck[i];
            q.poll();

            if (!q.isEmpty()) {
                int x = q.peek();
                q.offer(x);
                q.poll();
            }
            i++;
        }

        return ans;
    }
}

// 2 3 5 6 11 13 17

// 11 13 17 6

// 2 5 
