#include <iostream>

#define NO_CHILD    8
using namespace std;

struct OBox
{
public:
    float l, w, h;
    OBox(float length = 0.0f,
         float width = 0.0f,
         float height = 0.0f)
        :l(length), w(width), h(height){}
};

class node
{
    int iCount = 0;
    int iIndex = 0;
    int iDepth = 0;
    node* parent = nullptr;
    
    node* x;
    node* y;
    node* w;
    node* h;
      
    node()
    {
        x = NULL;
        y = NULL;
        w = NULL;
        h = NULL;
    }
    node(int id) : iIndex(id)
    {

    }
    ~node(){}
};

class OctreeNode 
{
public:
    node* rootNode = nullptr;
    vector<node*> child[NO_CHILD];
   
    OctreeNode(int id) : node(id)
    {

    }
    ~OctreeNode()
    {
        for (int i = 0; i < child[NO_CHILD];i++)
        {
            delete child[i];
        }
    }
};

void insert(node* pNode)
{
    node* pNewnode = new OctreeNode();
    pNewnode
}

int main()
{
    

}

