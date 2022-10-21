class Solution {
public:
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
    vector<vector<int>> ans (m,vector<int>(n,-1));
    int sr=0,er=m-1,sc=0,ec=n-1;        
    while(head!=NULL){
       for(int i=sc;i<=ec && head!=NULL;i++){
           ans[sr][i]=head->val;
           head=head->next;
       }
      sr++;
      for(int i=sr;i<=er && head!=NULL;i++){
           ans[i][ec]=head->val;
           head=head->next;
       }
      ec--;
      for(int i=ec;i>=sc && head!=NULL;i--){
            ans[er][i]=head->val;
            head=head->next;
       }
       er--;
       for(int i=er;i>=sr && head!=NULL;i--){
           ans[i][sc]=head->val;
           head=head->next;
       }
    sc++;    
    }
    return ans;
    }
};