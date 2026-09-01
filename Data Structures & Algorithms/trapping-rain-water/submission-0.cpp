class Solution {
public:
    int trap(vector<int>& height) {
        // at any idx, the water trapped it min(max height at left, max height at right)
        int n = height.size();
        vector<int> leftMax(n, 0), rightMax(n,0);

        int maxH=0;
        for(int i=1;i<n;i++){
            maxH=max(maxH, height[i-1]);
            leftMax[i]=maxH;
        }

        maxH=0;
        for(int i=n-2;i>=0;i--){
            maxH=max(maxH, height[i+1]);
            rightMax[i]=maxH;
        }

        int totalWater = 0;
        for(int i=0;i<n;i++){
            totalWater += max(0, min(leftMax[i], rightMax[i])-height[i]); //imp
        }
        return totalWater;
    }
};
