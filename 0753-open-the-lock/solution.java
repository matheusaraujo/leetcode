class Solution {
    public int openLock(String[] deadendsString, String target) {
        Set<String> deadends = new HashSet<>(Arrays.asList(deadendsString));

        if (deadends.contains("0000")) return -1;

        Queue<Pair<String, Integer>> queue = new LinkedList<>();

        queue.offer(new Pair<>("0000", 0));
        Set<String> visited = new HashSet<>();

        visited.add("0000");

        while(!queue.isEmpty()) {
            Pair<String, Integer> current = queue.poll();
            String combination = current.getKey();
            int moves = current.getValue();

            if (combination.equals(target)) return moves;

            for(int i = 0; i < 4; i++) {
                for(int delta : new int[]{-1, 1}) {
                    String newCombination = combination.substring(0, i) + 
                        (combination.charAt(i) - '0' + delta + 10) % 10                    
                        + combination.substring(i + 1);

                    if (!visited.contains(newCombination) && !deadends.contains(newCombination)) {
                        visited.add(newCombination);
                        queue.offer(new Pair<>(newCombination, moves + 1));
                    }
                }
            }
        }

        return -1;
    }
}
