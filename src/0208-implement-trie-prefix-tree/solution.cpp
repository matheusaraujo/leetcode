class TrieNode {
private:
    void init() {
        isWord = false;
        for(int i = 0; i < 26; i++) this->children[i] = NULL;
    }

public:
    char val;
    bool isWord;
    TrieNode* children[26];
    
    TrieNode() { 
        init();
    }
    TrieNode(char val) { 
        this->val = val;
        init();
    }
};

class Trie {
private:
    TrieNode* root;

    TrieNode* find(string word) {
        TrieNode* ws = root;
        for(int i = 0; i < word.length(); i++) {
            char c = word[i] - 'a';
            if (ws->children[c] == NULL) return NULL;
            ws = ws->children[c];
        }
        return ws;
    }
public:
    Trie() {
        root = new TrieNode();
        root->val = '\0';
    }
    
    void insert(string word) {
        TrieNode* ws = root;
        for(int i = 0; i < word.length(); i++) {
            char c = word[i] - 'a';
            if (ws->children[c] == NULL)
                ws->children[c] = new TrieNode(c);
            ws = ws->children[c];
        }
        ws->isWord = true;
    }
    
    bool search(string word) {
        TrieNode* n = find(word);
        return n != NULL && n->isWord;
    }
    
    bool startsWith(string prefix) {
        return find(prefix) != NULL;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */
