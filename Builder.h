// Honor Pledge:
//
// I pledge that I have neither given nor receieved any help
// on this assignment.

#ifndef _BUILDER_H_
#define _BUILDER_H_

#include "Abstract_Builder.h"
//#include "Node.h"
//#include "Num_Node.h"
//#include "Binary_Node.h"
//#include "Add_Node.h"
//#include "Sub_Node.h"
//#include "Mul_Node.h"
//#include "Div_Node.h"
//#include "Mod_Node.h"
//#include <sstream>
//#include <cstdlib>

// Ryan: Incomplete class.

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
	Stack<Binary_Node*> op_stack;
	Stack<Node*> tree_stack;
};

#endif

