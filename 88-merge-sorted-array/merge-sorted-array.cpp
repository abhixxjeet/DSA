class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int>temp=nums1;
        int a=0;
        int b=0;
        for(int i=0;i<m+n;i++){
            if(a>=m){
                nums1[i]=nums2[b];
                b++;
            }
            else if(b>=n){
                nums1[i]=temp[a];
                a++;
            }
            else if(temp[a]>nums2[b]){
            nums1[i]=temp[a];
            a++;
            }
            else{
                nums1[i]=nums2[b];
                b++;
            }
        }
        sort(nums1.begin(),nums1.end());
    }
};