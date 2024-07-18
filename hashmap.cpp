#include<iostream>
/*#include<map>
#include<unordered_map>*/
using namespace std;
int main() {
    
    cout<<"hello"<<endl;
    return 0;
    /*//creation
    unordered_map<string,int> m;
    //insertion
    pair<string,int> p=make_pair("babbar",3);
    m.insert(p);
    //2 
    pair<string,int> p2("love",2);
    m.insert(p2);
    //3
    m["mera"]=1;
    m["tera"]=5;
    //search
    cout<<m["mera"]<<endl;
    cout<<m.at("babbar")<<endl;
//    cout<<m.at("unknowkey"); error
    cout<<m["unknowkey"]<<endl;//will make another this and map it to 0
    //size
    cout<<m.size()<<endl;
    //to check presence of key
    cout<<m.count("hat")<<endl;
    cout<<m.count("love")<<endl;
    //erase
    m.erase("love");
    //printing all element of map
    for(auto i : m)
    {
        cout<<i.first<<"  "<<i.second<<endl;
    }
    //second way
    //using iterator
    unordered_map<string,int> :: iterator it=m.begin();
    while(it!=m.end())
    {
        cout<<it->first<<"  "<<it->second<<endl;
        it++;
    }
    return 0;*/
}
//Word with maximum frequency
/*string maximumFrequency(string s){
      unordered_map<string, int> count;
    unordered_map<string, int> firstOccurrence;

    // Use stringstream to split the string into words
    stringstream ss(s);
    string word;
    int position = 0;

    while (ss >> word) {
        count[word]++;
        if (firstOccurrence.find(word) == firstOccurrence.end()) {
            // Record the position of the first occurrence of the word
            firstOccurrence[word] = position;
        }
        position++;
    }

    int maxi = INT_MIN;
    string ans;

    for (auto i : count) {
        if (i.second > maxi || (i.second == maxi && firstOccurrence[i.first] < firstOccurrence[ans])) {
            maxi = i.second;
            ans = i.first;
        }
    }

    return ans + " " + to_string(maxi);
}*/
//for int
/*int maximumFrequency(vector<int> &s,int n){
        unordered_map<int,int> count;
        for(int i=0;i<s.size();i++)
        {
            count[s[i]]++;
        }
        int maxi=INT_MIN;
        int ans;
        for(auto i : count)
        {
            if(i.second > maxi)
            {
                maxi=i.second;
                ans=i.first;
            }
        }
        return ans;
} */
