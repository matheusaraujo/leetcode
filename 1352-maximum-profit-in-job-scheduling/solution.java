class Solution {

    class Job {
        int start, finish, profit;
        Job(int start, int finish, int profit)
        {
            this.start = start;
            this.finish = finish;
            this.profit = profit;
        }
    }

    public static int findLastNonConflictingJob(List<Job> jobs, int n)
    {
        for (int i = n - 1; i >= 0; i--)
        {
            if (jobs.get(i).finish <= jobs.get(n).start) {
                return i;
            }
        }
 
        return -1;
    }
 
    public static int findMaxProfit(List<Job> jobs)
    {
        Collections.sort(jobs, Comparator.comparingInt(x -> x.finish));
 
        int n = jobs.size();
 
        if (n == 0) {
            return 0;
        }
 
        int[] maxProfit = new int[n];
 
        maxProfit[0] = jobs.get(0).profit;
 
        for (int i = 1; i < n; i++)
        {
            int index = findLastNonConflictingJob(jobs, i);
 
            int incl = jobs.get(i).profit;
            if (index != -1) {
                incl += maxProfit[index];
            }
 
            maxProfit[i] = Math.max(incl, maxProfit[i - 1]);
        }
 
        return maxProfit[n - 1];
    }

    public int jobScheduling(int[] startTime, int[] endTime, int[] profit) {
        List<Job> jobs = new ArrayList<Job>();
        for(int i = 0; i < startTime.length; i++) {
            jobs.add(new Job(startTime[i], endTime[i], profit[i]));
        }
        return findMaxProfit(jobs);
    }
}
