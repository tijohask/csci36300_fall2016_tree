// Honor Pledge:
//
// I pledge that I have neither given nor receieved any help
// on this assignment.

#ifndef _NUM_NODE_H_
#define _NUM_NODE_H_

#include "Stack.h"
#include "Node.h"
//#include "Visitor.h"

// Number node, for storing numbers
class Num_Node : public Node
{
public:
	Num_Node (int);
	void accept (Visitor &);
	int getVal();

private:
	int val;//stored value
};

#endif
