class Solution {
public:
    void merge(vector<int>& a, int m, vector<int>& b, int n) {
        int i=m-1,j=n-1,k=a.size()-1;
        while(j>=0 && i>=0){
            if(a[i]>=b[j]){
                    a[k]=a[i];
                    i--;
            }
            else{
                    a[k]=b[j];
                    j--;
            }
            k--;
        }
        while(j>=0){
            a[k]=b[j];
            j--;
            k--;
        }
    }
};
