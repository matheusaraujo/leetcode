class Solution {
    public int[][] findFarmland(int[][] land) {
        List<int[]> ans = new ArrayList<int[]>();

        for(int i = 0; i < land.length; i++)
            for(int j = 0; j < land[i].length; j++)
                if (land[i][j] == 1)
                    ans.add(getFarm(land, i, j));
            
        return ans.toArray(new int[ans.size()][]);
    }

    private int[] getFarm(int[][] land, int i, int j) {
        int x = i, y = j;
        
        while(x < land.length && land[x][j] == 1) x++;
        while(y < land[i].length && land[i][y] == 1) y++;

        for(int di = i; di < x; di++)
            for(int dj = j; dj < y; dj++)
                land[di][dj] = 2;

        return new int[] {i, j, x-1, y-1};
    }
}
