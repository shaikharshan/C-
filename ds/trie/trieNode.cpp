#include<iostream>
#include<queue>
using namespace std;

class trieNode
{
    public:
    char data;
    trieNode* children[26];
    bool isTerminal;
    trieNode(char ch)
    {
        data = ch;
        for(int i=0;i<26;i++)
        {
            children[i]==NULL;
        }
        isTerminal = false;

    }
};

class Trie
{
    public:
    trieNode* root;
    Trie()
    {
        root = new trieNode('\0');
    }
    void insertUtil(trieNode* root,string word)
    {
        //base case 
        if(word.length()==0)
        {
            root->isTerminal=true;
            return;

        }
        //map 26 size array
        int index = word[0] - 'A';
        trieNode* child;
        if(root->children[index]!=NULL)
        {
            //isPresent
            //bas aage badh jao found letter ke index pe
            child = root->children[index];

        }
        else
        {
            //not present
            child = new trieNode(word[0]);
            //present ho gya ye batao
            root->children[index] = child;


        }
        //recursion
        insertUtil(child,word.substr(1));
        //passing word string without first letter
    }
    void insertWord(string word)
    {
        insertUtil(root,word);
    }

    bool searchUtil(trieNode* root , string word)
    {
         if(word.length()==0)
        {
            //check if isTerminal is true   
            return root->isTerminal;

        }
        //map 26 size array
        int index = word[0] - 'A';
        trieNode* child;
        if(root->children[index]!=NULL)
        {
            //isPresent
            //bas aage badh jao found letter ke index pe
            child = root->children[index];

        }
        else
        {
            //not present
            return false;

        }
        //recursion
       return searchUtil(child,word.substr(1));
        //passing word string without first letter

    }
    bool searchWord(string word)
    {
        return searchUtil(root,word);
    }
};

int main()
{
    Trie* t = new Trie();
    t->insertWord("abcd");
    cout<<"done"<<endl;
    cout<<"present or not "<<t->searchWord("abcd");
    cout<<t->searchWord("abd");


    return 0;

}