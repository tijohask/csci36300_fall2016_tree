// Honor Pledge:
//
// I pledge that I have neither given nor receieved any help
// on this assignment.

#ifndef _BINARY_NODE_H_
#define _BINARY_NODE_H_

#include "Stack.h"
#include "Visitor.h"
#include "Node.h"

// The top Node object that all other Node objects will be inheriting from.
class Binary_Node : public Node
{
public:
	Binary_Node (void);
	virtual ~Binary_Node (void);
	virtual void accept (Visitor &) = 0;
//	virtual void preorder (ostream &) = 0;
//	virtual bool execute (Stack <int> & stack) = 0;
	virtual int precedence() = 0;

	Node * getChild1();
	void setChild1(Node*);
	
	Node * getChild2();
	void setChild2(Node*);
private:
	Node * child1;
	Node * child2;
};

#endif
