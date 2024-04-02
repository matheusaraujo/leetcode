class Solution {
    public boolean isIsomorphic(String ss, String tt) {
        HashMap<Character, Character> map1 = new HashMap<>();
        HashMap<Character, Character> map2 = new HashMap<>();

        for(int i = 0; i < ss.length(); i++) {
            Character s = ss.charAt(i), t = tt.charAt(i);
            
            if (!map1.containsKey(s)) map1.put(s, t);
            if (!map2.containsKey(t)) map2.put(t, s);
            
            if (map1.get(s) != t || map2.get(t) != s)
                return false;
        }   

        return true;
    }
}
