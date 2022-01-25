class Solution {
public:
    int getMaxPosition(vector<int>&arr){
        for(int i=0;i<arr.size()-1;i++){
            if(!(arr[i]<arr[i+1])){
                if(arr[i]==arr[i+1])
                    return -1;
                else return i;
            }
        }
        return -1;
    }
    bool check(vector<int>&arr){
        int maxPosition=getMaxPosition(arr);
        if(maxPosition==-1 || maxPosition>=arr.size()-1 || maxPosition==0)
            return false;
        for(int i=maxPosition;i<arr.size()-1;i++){
            if(!(arr[i]>arr[i+1]))
                return false;
        }
        return true;
    }
    bool validMountainArray(vector<int>& arr) {
        if(arr.size()<3)return false;
        if(arr.size()==3){
            if(arr[1]>arr[0]&&arr[1]>arr[2])
                return true;
            else return false;
        }
        return check(arr);
    }
};
// Runtime: 70 ms, faster than 5.17% of C++ online submissions for Valid Mountain Array.
// Memory Usage: 22.4 MB, less than 48.39% of C++ online submissions for Valid Mountain Array.
