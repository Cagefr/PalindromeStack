class StackNode{
	private:
		char value;
		StackNode *next;
		
	public:
		StackNode(){value='X'; next=nullptr;}
		StackNode(char val, StackNode * n){value=val;next = n;}
		void setNext(StackNode *n){next = n;}
		void setValue(char val){ value = val;}

		StackNode *getNext(){return next;}
		char getValue(){return value;}
		void printInfo();
};

void StackNode::printInfo()
{
	cout << fixed << setprecision(2) << showpoint;
	cout << "\n\t\t\tStackNode value : " << value << endl;
}

StackNode *createNode(int value)
{      
        StackNode *node;

        try{    
                node = new StackNode(value,nullptr);
                //node->printInfo();
        }
        catch(bad_alloc){
                cout << "\n\n\t\t\tYikes! Out of memory!!!\n";
                node = nullptr;
        }

        return node;
}

