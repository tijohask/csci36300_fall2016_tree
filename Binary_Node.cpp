// Honor Pledge:
//
// I pledge that I have neither given nor receieved any help
// on this assignment.
#include "Binary_Node.h"
#include "Node.h"

//Binary_Node :: Binary_Node (void)
//{
//
//}

Binary_Node :: ~Binary_Node (void) 
{
	delete child1;
	delete child2;
}

Node * Binary_Node :: getChild1()
{
	return child1;
}

void Binary_Node :: setChild1(Node * node)
{
	child1 = node;
}

Node * Binary_Node :: getChild2()
{
	return child2;
}

void Binary_Node :: setChild2(Node * node)
{
	child2 = node;
}
