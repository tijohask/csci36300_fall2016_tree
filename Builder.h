// Honor Pledge:
//
// I pledge that I have neither given nor receieved any help
// on this assignment.

#ifndef _BUILDER_H_
#define _BUILDER_H_

#include "Node.h"
#include "Num_Node.h"
#include "Binary_Node.h"
#include "Add_Node.h"
//#include "Sub_Node.h"
//#include "Mul_Node.h"
//#include "Div_Node.h"
//#include "Mod_Node.h"
//#include <sstream>
#include <cstdlib>

// Ryan: Incomplete class.

class Builder
{
public:
	bool build_add_node(void);
//	build_sub_node(void);
//	build_mul_node(void);
//	build_div_node(void);
//	build_mod_node(void);

	bool build_num_node(int);
	
	bool clear_op_stack( int );
	Node * getTop();

private:
	Stack<Binary_Node*> op_stack;
	Stack<Node*> tree_stack;
};

#endif

