class Solution {
public:
    int maximumGroups(vector<int>& grades) {
        sort(grades.begin(), grades.end());
        int n = grades.size();
        int res =0;
        int currentgrade =0, currentcount =0 , prevgrade =0, prevcount=0;
        for(int i=0; i<n ;i++)
        {
            currentgrade += grades[i];
            currentcount ++;
            if(currentcount>prevcount && currentgrade>prevgrade)
            {
                res++;
                prevcount = currentcount;
                prevgrade = currentgrade;
                currentgrade=0;
                currentcount =0;
            }
        }
        return res;
    }
};
