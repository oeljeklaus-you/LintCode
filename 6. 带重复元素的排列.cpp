class Solution {  
public:  
    bool is_a_solution(int k,int n)  
{  
    return n==k;  
}  
  
void process_solution(int solution[],vector<int> &nums,vector<vector<int>> &result)  
{  
    vector<int> tmp;  
    for(int i=1;i<=nums.size();i++)  
    {  
        tmp.push_back(nums[solution[i]]);  
    }  
    result.push_back(tmp);  
}  
  
void construct_candidates(int candidates[],bool position[],int n,map<int,int> &pure,vector<int> &nums,int *ncandidates)  
{  
    for(int i=0,count=0;i<n;i++)  
    {  
        if(!position[i]&&pure.find(nums[i])==pure.end())  
        {  
            pure.insert({nums[i],i});  
            candidates[count++]=i;  
            (*ncandidates)++;  
        }  
    }  
}  
  
  
void backtrack(int solution[],int k,int n,vector<int> &nums,bool position[],vector<vector<int>> &result)  
{  
    int candidates[1000];  
    int ncandidates=0;  
    map<int,int> pure;  
    if(is_a_solution(k,n))  
    {  
        process_solution(solution,nums,result);  
    }  
    else  
    {  
        k++;  
        construct_candidates(candidates,position,n,pure,nums,&ncandidates);  
        for (int i = 0; i <ncandidates; ++i)  
        {  
            solution[k]=candidates[i];  
            position[candidates[i]]=true;  
            backtrack(solution,k,n,nums,position,result);  
            position[candidates[i]]=false;  
        }  
    }  
}  
  
      
    vector<vector<int>> permuteUnique(vector<int>& nums) {  
        int solution[1001];  
    bool position[1001];  
    memset(position,false,sizeof(position));  
    vector<vector<int>> result;  
    backtrack(solution, 0, nums.size(), nums, position,result);  
    return result;  
    }  
};  