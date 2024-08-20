#include<iostream>
using namespace std;
int main()
{
	cout<<"hello";
	return 0;
}
//N-ary Tree Preorder Traversal
/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

/*    void preoder1(Node* root,vector<int> &ans){
        if(!root) return;
        ans.push_back(root->val);
        for(Node* i:root->children){
            preoder1(i,ans);
        }
    }
    vector<int> preorder(Node* root) {
        vector<int> ans;
        if(!root) return ans;
        preoder1(root,ans);
        return ans;
   }*/
// N-ary Tree Postorder Traversal
/*void preoder1(Node* root,vector<int> &ans){
        if(!root) return;
        
        for(Node* i:root->children){
            preoder1(i,ans);
        }
        ans.push_back(root->val);
    }
    vector<int> postorder(Node* root) {
        vector<int> ans;
        if(!root) return ans;
        preoder1(root,ans);
        return ans;
    }*/ 
//Level order traversal 
 /*vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>> ans;
        if(!root) return ans;
        queue<Node*> q;
        q.push(root);
        while(!q.empty()){
            int size = q.size();
            vector<int> ans1;
            for(int i=0;i<size;i++){
                Node* frontnode = q.front();
                q.pop();
                ans1.push_back(frontnode->val);
                for(Node* h : frontnode->children){
                    q.push(h);
                }
            }
            ans.push_back(ans1);
        }
        return ans;
    }*/
//Check Mirror in N-ary tree
/*int checkMirrorTree(int n, int e, int A[], int B[]) {
        unordered_map<int,stack<int>> mp;
        for(int i=0;i<2*e;i+=2){
            mp[A[i]].push(A[i + 1]);
        }
        //checking
        for(int i=0;i<2*e;i+=2){
            if(mp[B[i]].top() != B[i + 1]) return 0;
            mp[B[i]].pop();
        }
        return 1;
    }*/		  

