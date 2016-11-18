// Honor Pledge:
//
// I pledge that I have neither given nor receieved any help
// on this assignment.

#ifndef _BUILDER_H_
#define _BUILDER_H_

#include "Abstract_Builder.h"

// Ryan: Incomplete class.
// FIXED: Completed class

// Builder. Builds the tree based on what the driver tells it to do.
class Builder : Abstract_Builder
{
public:
	Builder(void) {};
	~Builder(void) {};
	bool build_add_node(void);
	bool build_sub_node(void);
	bool build_mul_node(void);
	bool build_div_node(void);
	bool build_mod_node(void);

	bool build_num_node(int);
	
	bool clear_op_stack( int );
	void push_tree(Node*);
	Node * get_top();

private:
	//The stack that the operators are sorted on.
	Stack<Binary_Node*> op_stack;
	//The final tree stack.
	Stack<Node*> tree_stack;
};

#endif

