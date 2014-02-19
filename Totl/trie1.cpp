#include<iostream>
#include<fstream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<conio.h>
using namespace std;
 
#define ARRAY_SIZE(a) sizeof(a)/sizeof(a[0])
 

#define ALPHABET_SIZE (26)

#define CHAR_TO_INDEX(c) ((int)c - (int)'a')
 
typedef struct trie_node trie_node_t;
struct trie_node
{
    int value;
    trie_node *children[ALPHABET_SIZE];
};
typedef struct trie trie_t;
struct trie
{
    trie_node *root;
    int count;
};
 trie_node *getNode(void)
{
    trie_node *pNode = NULL;
 
    pNode = (trie_node *)malloc(sizeof(trie_node));
 
    if( pNode )
    {
        int i;
 
        pNode->value = 0;
 
        for(i = 0; i < ALPHABET_SIZE; i++)
        {
            pNode->children[i] = NULL;
        }
    }
 
    return pNode;
}
 void initialize(trie *pTrie)
{
    pTrie->root = getNode();
    pTrie->count = 0;
}

void insert(trie *pTrie, char key[])
{
    int level;
    int length = strlen(key);
    int index;
    trie_node_t *pCrawl;
 
    pTrie->count++;
    pCrawl = pTrie->root;
 
    for( level = 0; level < length; level++ )
    {
        index = CHAR_TO_INDEX(key[level]);
 
        if( pCrawl->children[index] )
        {
            
            pCrawl = pCrawl->children[index];
        }
        else
        {
            
            pCrawl->children[index] = getNode();
            pCrawl = pCrawl->children[index];
        }
    }
 
    
    pCrawl->value = pTrie->count;
}
 

int search(trie *pTrie, char key[])
{
    int level;
    int length = strlen(key);
    int index;
    trie_node *pCrawl;
 
    pCrawl = pTrie->root;
 
    for( level = 0; level < length; level++ )
    {
        index = CHAR_TO_INDEX(key[level]);
 
        if( !pCrawl->children[index] )
        {
            return 0;
        }
 
        pCrawl = pCrawl->children[index];
    }
 
    return (0 != pCrawl && pCrawl->value);
}
 

int main()
{
    ifstream a;
    int j=0,k,i,t=0;
    string s;
    char ch[50];
    char sear[50];
    char key2[50][50];
    a.open("in.txt");
    cout<<"Names in the file are: \n";
    while(t<5)
    {
                     
                a>>s;
                k=s.length();
                
                for(i=0;i<k;i++)
                ch[i]=s[i];
                ch[i]='\0';
                cout<<"-->"<<ch<<"\n";
                
                strcpy(key2[j],ch); 
                j++;
                t++;
    }
    a.close();
    cout<<"\n\n";
    trie trie;
 
    char output[][32] = {"Not present in trie", "Present in trie"};
 
    initialize(&trie);
    for(int i = 0; i < 5; i++)
    {
        insert(&trie, key2[i]);
    }
    cout<<"Enter The string to be searched: ";
    cin>>sear;
    printf("%s --- %s\n", sear, output[search(&trie, sear)] );
    getch();
    return 0;
}
