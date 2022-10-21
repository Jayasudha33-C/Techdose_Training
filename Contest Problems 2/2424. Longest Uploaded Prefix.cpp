class LUPrefix {
public:
 unordered_set<int> st;
    int cnt;
    LUPrefix(int n) {
        cnt=0;
    }
    
    void upload(int video) {
        st.insert(video);
        while(st.count(cnt+1))
            cnt++;
    }
    
    int longest() {
        return cnt;
    }
};
