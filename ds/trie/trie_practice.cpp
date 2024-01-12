#include<iostream>
using namespace std;

class TrieNode{
    public:
    char data;
    TrieNode* arr[26];
   bool isTerminal;
   TrieNode(char data)
   {
       this->data = data;
       isTerminal = false;
       for(int i=0;i<26;i++)
       {
           arr[i]==NULL;
       }
   }
};

class Trie {
    TrieNode* t;
public:

    /** Initialize your data structure here. */
    Trie() {
        t = new TrieNode('\0');
    }
    void insertUtil(TrieNode* t,string word)
    {
         if(word.length()==0)
        {
            t->isTerminal = true;
            return;
        }
        //present
        TrieNode* child ;
        int index = word[0] - 'a';
        if(t->arr[index]!=NULL)
        {
            child = t->arr[index];
        }
        else{
            //not present ,insert
            child = new TrieNode(word[0]);
            t->arr[index] = child;

        }
        //recursion
        insertUtil(child,word.substr(1));

    }
    /** Inserts a word into the trie. */
    void insert(string word) {
       insertUtil(t, word);
    }

    /** Returns if the word is in the trie. */
    bool searchUtil(TrieNode* t,string word)
    {
         if(word.length()==0)
        {
            return t->isTerminal;
        }
        //present
        TrieNode* child ;
        int index = word[0] - 'a';
        if(t->arr[index]!=NULL)
        {
            child = t->arr[index];
        }
        else{
            //not present ,insert
            return false;

        }
        //recursion
        return searchUtil(child,word.substr(1));
    }
    bool search(string word) {
        return searchUtil(t, word);
    }

    /** Returns if there is any word in the trie that starts with the given prefix. */
    bool startsWithUtil(TrieNode* t,string prefix)
    {
        if(prefix.length()==0)
        {
            return true;
        }
        int index = prefix[0]-'a';
        TrieNode* child;
        if(t->arr[index]!=NULL)
        {
            child = t->arr[index];
            
        }
        else{
            return false;
        }
        return startsWithUtil(child,prefix.substr(1));
    }
    bool startsWith(string prefix) {
        return startsWithUtil(t,prefix);
    }
};