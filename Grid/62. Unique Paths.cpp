---------Recursive----------
class Solution {
public:  int countPaths(int i,int j,int n,int m)
    {
        if( i>=n || j>=m ) return 0;
        if(i==(n-1) && j==(m-1))return 1;
        else return countPaths(i+1,j,n,m)+countPaths(i,j+1,n,m);
}
    int uniquePaths(int m, int n)
    {
        return countPaths(0,0,n,m);
   
    }
};