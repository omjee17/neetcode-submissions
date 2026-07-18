class Solution {
public:
    int trap(vector<int>& height) {
        int water = 0;
        int n=height.size();
        vector<int> left(n,0);
        vector<int> right(n,0);

        int maxi = height[0];
        for(int i=0;i<n;i++){
            if(maxi<height[i]){
                maxi=height[i];
            } 
            left[i]=maxi;
        }
        maxi=height[n-1];
        for(int i=n-1;i>0;i--){
            if(maxi<height[i]){
                maxi=height[i];
            } 
            right[i]=maxi;
        }

        // for(int i=0;i<n;i++){
        //     cout<<left[i]<<" ";
        // }
        // cout<<endl;
        // for(int i=0;i<n;i++){
        //     cout<<right[i]<<" ";
        // }
        // 0 1 2 3 4 5 6 7 8 9
        // 0 2 2 3 3 3 3 3 3 3 
        // 0 3 3 3 3 3 3 3 2 1 

        for(int i=1;i<n-1;i++){
            water+=min(left[i],right[i])-height[i];
        }

        return water;

    }
};
