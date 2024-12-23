#include<iostream>
#include<vector>
using namespace std;

    void solve(vector<int>nums,vector<vector<int>>&ans,vector<int>output,int index){
        //base case
        if(index==nums.size()){
            ans.push_back(output);
            return;
        }
        //exclude
        solve(nums,ans,output,index+1);
        //include
        int e = nums[index];
        output.push_back(e);
        solve(nums,ans,output,index+1);
    }
    int main(){
        vector<vector<int>>ans;
        vector<int>output;
        vector<int>nums;
        int size;
        cout<<"Size of array: ";
        cin>>size;
        cout<<"Input Array: ";
        for(int i =0;i<size;i++){
            int x;
            cin>>x;
            nums.push_back(x);
        }
        solve(nums,ans,output,0);
        for (const auto &subset : ans) {
        cout << "[";
        for (int num : subset) {
            cout << num << " ";
        }
        cout << "]" << endl;
    }
    }
