// Honor Pledge:
//
// I pledge that I have neither given nor receieved any help
// on this assignment.

#include "Stack.h"
#include "Node.h"

// The top Node object that all other Node objects will be inheriting from.
class Num_Node : public Node
{
public:
//	Num_Node (void);
	Num_Node (int);
//	~Num_Node (void) {};
	void accept (Visitor &);
	int getVal();
	void setVal(int);

private:
	int val;
//	virtual void preorder (ostream &) = 0;
//	virtual bool execute (Stack <int> & stack) = 0;
//	virtual int precedence() = 0;
};
