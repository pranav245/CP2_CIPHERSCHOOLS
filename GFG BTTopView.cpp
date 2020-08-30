#incldue<bits/stdc++.h>

using namespace std;

class Node
{
	public:
		
	int val;
	Node* left;
	Node* right;
	
	int hd; // horizontal distance
	
	Node(int val)
	{
		this->val = val;
		this->hd = 0;
		this->left = NULL;
		this->right = NULL;
	}
};

void topView(Node* root)
{
	if(root==NULL) return;
	
	queue<Node*> q;
	
	map<int,int> m; //horizontal_D, val
	int hd = 0;
	root.hd=hd;
	q.push(root);
	
	cout<<"Top View of the TREE\n\n";
	
	while(q.size())
	{
		hd = root->hd;
		
		if(m.count(hd)==0)
		{
			m[hd] = root->data;
		}
		
		if(root->left)
		{
			root->left->hd = hd-1;
			q.push(root->left);
		}
		
		if(root->right)
		{
			root->right->hd = hd+1;
			q.push(root->right);
		}
		q.pop();
		root = q.front();
	}
	
	for(auto i=m.begin;i!=m.end();i++)
	{
		cout<<i->second<<" ";
	}
}


int main()
{
	Node* root = new Node(1);
	root->left = new Node(2);
	root->right = new Node(3);
	root->left->right= new Node(4);
	root->left->right->right =  new Node(5);
	root->left->right->right->right = new Node(6);

	topView(root);
	return 0;
	//00
}


