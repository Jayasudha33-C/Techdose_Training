int longestSumArray(vector<int> v, int target){
    int n=v.size();
    int s=0;
    int ans=0;
    vector<int> T(n);
    for(int i=0;i<n;i++){
        s+=v[i];
        if(s<=target)  
            ans=i+1;
        else{
           while(i-ans>0 && T[i-ans-1]>=s-target)  ans++;
        }
        if(i==0)
           T[i]=s;
        else    
           T[i]=max(T[i-1],s);
    }
    return ans;
}