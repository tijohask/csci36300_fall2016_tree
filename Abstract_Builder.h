// Honor Pledge:
//
// I pledge that I have neither given nor receieved any help
// on this assignment.

#ifndef _ABSTRACT_BUILDER_H_
#define _ABSTRACT_BUILDER_H_

#include "Node.h"
#include "Num_Node.h"
#include "Binary_Node.h"
#include "Add_Node.h"
#include "Sub_Node.h"
#include "Mul_Node.h"
#include "Div_Node.h"
#include "Mod_Node.h"

// Abstract Builder, the builder that other builders inherit from.
class Abstract_Builder
{
public:
	virtual bool build_add_node(void) = 0;
	virtual bool build_sub_node(void) = 0;
	virtual bool build_mul_node(void) = 0;
	virtual bool build_div_node(void) = 0;
	virtual bool build_mod_node(void) = 0;

	virtual bool build_num_node(int) = 0;
	
	virtual bool clear_op_stack(int) = 0;
	virtual void push_tree(Node*) = 0;
	virtual Node * get_top() = 0;
};

#endif
