class SmallestInfiniteSet {
public:
    bool v[1001];
    SmallestInfiniteSet() {
        for(int i=1;i<1001;i++)
        {
            v[i]=1;
        }
    }
    int popSmallest() {
        int i=1;
        while(v[i]!=1)
        {
            i++;
        }
        v[i]=0;
        return i;
    }
    void addBack(int num) {
        v[num]=1;
    }
};