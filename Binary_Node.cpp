// Honor Pledge:
//
// I pledge that I have neither given nor receieved any help
// on this assignment.
#include "Binary_Node.h"
//#include "Node.h"

// Ryan: Make sure to include comments in each file.
// FIXED: Added Comments
Binary_Node :: ~Binary_Node (void) 
{//recursively delete all nodes attached to this node
	delete child1;
	delete child2;
}

Node * Binary_Node :: getChild1()
{//get the node's children
	return child1;
}

void Binary_Node :: setChild1(Node * node)
{//set the node's children
	child1 = node;
}

Node * Binary_Node :: getChild2()
{//get the node's children
	return child2;
}

void Binary_Node :: setChild2(Node * node)
{//set the node's children
	child2 = node;
}
