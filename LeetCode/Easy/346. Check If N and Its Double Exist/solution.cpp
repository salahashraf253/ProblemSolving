class Solution {
public:
     static bool search(vector<int>&arr,int m){
        int mid,start=0,end=arr.size()-1;
        while(start<=end){
            mid=(start+end)/2;
            if(arr[mid]==m){
                return true;
            }
            else if(arr[mid]<m){
                start=mid+1;
            }
            else end=mid-1;
        }
        return false;
    }
    bool checkIfExist(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int zero=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]==0){
                zero++;
                if(zero>1)
                    return true;
            }
            else if(abs(arr[i])%2==0){
                if(search(arr,arr[i]/2))
                    return true;
            }
        }
        return false;
    }
};
