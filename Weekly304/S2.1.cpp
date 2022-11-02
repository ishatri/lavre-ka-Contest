//ath based aproach where after sorting the grades we know that what we have to essetialy is just addd the numbers in this fashion 
//1+2+3+4....k <=n in order to satisfy the given conditions 
//thus all we need is just k 
//hence the solution is

 int maximumGroups(vector<int>& grades) {
        int k = 0, total = 0, n = grades.size();
        while (total + k + 1 <= n)
            total += ++k;
        return k;
    }

// in the given approach we can find the greatest k and return a k 
// for searching we use binary search

 int maximumGroups(vector<int>& grades) {
  int l = 1, r = 446, n = grades.size();
    while (l < r) {
        int m = (l + r + 1) / 2;
        if (m * (m + 1) / 2 <= n)
            l = m;
        else
            r = m - 1;
    }
    return l;
}
