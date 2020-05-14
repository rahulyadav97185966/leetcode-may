//Implement Trie (Prefix Tree)

class Trie {
  private:
    map<char, Trie*> next = {};
    bool isword = false;
public:
    Trie() {}

    void insert(string word)
    {
        Trie* root = this;
        for (char ch : word) {
            if (!root->next.count(ch)) { root->next[ch] = new Trie(); }
            root = root->next[ch];
        }
        root->isword = true;
    }

    bool search(string word) {
        Trie* root = this;
        for (char ch : word) {
            if (!root->next.count(ch)) { return false; }
            root = root->next[ch];
        }
        return root->isword;
    }
    bool startsWith(string prefix) 
    {
        Trie* root = this;
        for (char ch : prefix) {
            if (!root->next.count(ch)) { return false; }
            root = root->next[ch];
        }
        return true;
    }
};
