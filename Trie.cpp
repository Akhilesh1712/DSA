#include<iostream>
using namespace std;
int main()
{
	cout<<" ";
	return 0;
}
/*class TrieNode{
	public:
		char data;
		TrieNode * children[26];
		bool isLeaf;
		TrieNode(char ch)
		{
			data=ch;
			for(int i=0;i<26;i++)
			{
				children[i]=NULL;
			}
			isLeaf=false;
		}
};
Class Trie{
	public:
		TrieNode * root;
		Trie(){
			root=new TrieNode('\0');
		}
		
        void insertutil( TrieNode *root, string key)
        {
              if(key.length()==0)
              {
                     root->isLeaf=true;
                      return;
              }
              int index=key[0] - 'a';
              TrieNode* child;
              if(root->children[index]!=NULL)
              {
                   child=root->children[index];
               }
               else
               {
                   child = getNode();
                   root->children[index]=child;
                }
                insert(child,key.substr(1));
        }
        void insert(string word)
        {
        	insertutil(root,word);
		}

        bool searchutil( TrieNode *root, string key) 
        {   
            if(root==NULL)
            {
                return false;
            }
            if(key.length()==0)
            {    
                 return root->isLeaf;
            } 
             int index=key[0] - 'a';
             TrieNode* child;
             if(root->children[index]!=NULL)
             {
                  child=root->children[index];
              }
              else
              {
                   return false;
              }
              return search(child,key.substr(1));
        }
        bool search(string word)
        {
        	return searchutil(root,word);
		}
};
int main()
{
	Trie * t=new Trie();
	t->insert("hsdhfkj");
	cout<<t->search("jlksjfj")<<endl;
	return 0;
}*/
//delettion in the Trie
/*void remove(TrieNode* root,string w)
{
	if(w.length()==0)
	{
		root->isLeaf=false;
		return;
	}
	int index=w[0] - 'a';
	TrieNode* child;
	if(root->children[index]!=NULL)
	{
		child=root->children[index];
	}
	else
	{
		return;
	}
	remove(root,w.substr(1));
}*/
//gfg me ase diya hua tha 
 /*void deleteKey(trie_node_t* root, char key[]) {
        if (strlen(key) == 0) {
            root->value = 0;
            return;
        }

        int index = key[0] - 'a';
        trie_node_t* child;

        if (root->children[index] != NULL) {
            child = root->children[index];
        } else {
            return;
        }

        int i = 1;
        deleteKey(child, &key[i]);
    }*/
    
    
//Phone directory    
/*class TrieNode {
public:
    char data;
    TrieNode* children[26];
    bool isterminal;

    TrieNode(char ch) {
        data = ch;
        for (int i = 0; i < 26; i++) {
            children[i] = NULL;
        }
        isterminal = false;
    }
};

class Trie {
public:
    TrieNode* root;

    Trie() {
        root = new TrieNode('\0');
    }

    void insertutil(TrieNode* root, string wd) {
        if (wd.length() == 0) {
            root->isterminal = true;
            return;
        }
        int index = wd[0] - 'a';
        TrieNode* child;
        if (root->children[index] != NULL) {
            child = root->children[index];
        } else {
            child = new TrieNode(wd[0]);
            root->children[index] = child;
        }
        insertutil(child, wd.substr(1));
    }

    void insertword(string str) {
        insertutil(root, str);
    }

    void printsuggestion(TrieNode* curr, vector<string>& temp, string &prefix) {
        if (curr->isterminal) {
            temp.push_back(prefix);
        }
        for (char ch = 'a'; ch <= 'z'; ch++) {
            TrieNode* next = curr->children[ch - 'a'];
            if (next != NULL) {
                prefix.push_back(ch);
                printsuggestion(next, temp, prefix);
                prefix.pop_back();
            }
        }
    }

    vector<vector<string>> getsolution(string s) {
        TrieNode* prev = root;
        vector<vector<string>> output;
        string prefix="";
        for (int i = 0; i < s.length(); i++) {
            char lastch = s[i];
            prefix.push_back(lastch);
            TrieNode* curr = prev->children[lastch - 'a'];
            if (curr == NULL) {
                break;
            }
            vector<string> temp;
            printsuggestion(curr,temp,prefix);
            output.push_back(temp); // Collect suggestions for each prefix
            temp.clear();
            prev = curr;
        }
        return output;
    }
};

class Solution {
public:

    vector<vector<string>> displayContacts(int n, string contact[], string s) {
        Trie* t = new Trie();
        for (int i = 0; i < n; i++) {
            string str = contact[i];
            t->insertword(str);
        }
        return t->getsolution(s);
    }
};*/    
        
