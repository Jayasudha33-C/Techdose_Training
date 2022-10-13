class Solution {
public:
  string capitalizeTitle(string title) {
    int i=0,j=0;
    while(j<title.size()){
        while(j<title.size()&&title[j]!=' '){
            j++;
        }
        if(j-i<=2){
            while(i!=j){
                title[i]=tolower(title[i]);
                i++;
            }
        }
        else{
            title[i]=toupper(title[i]);
            i++;
            while(i!=j){
                title[i]=tolower(title[i]);
                i++;
            }  
        }
        i++;
        j++;
    }
    return title;
    }
};