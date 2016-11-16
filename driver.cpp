// Honor Pledge:
//
// I pledge that I have neither given nor receieved any help
// on this assignment.

//Lord that's a lot of includes...
#include "Array.h"
#include "Base_Array.h"
#include "Stack.h"
#include "Queue.h"
#include "Node.h"
#include "Binary_Node.h"
#include "Add_Node.h"
#include "Sub_Node.h"
//#include "Mul_Node.h"
//#include "Div_Node.h"
//#include "Mod_Node.h"
#include "Num_Node.h"
#include "Builder.h"
#include "Visitor.h"
#include "Eval_Visitor.h"

#include <stdexcept>
#include <iostream>
#include <sstream>
#include <cstdlib>

void run_code();
bool infix_to_tree( std::istringstream&, Builder& );
bool check_equation( std::istringstream& );
bool is_integer( std::string );

int main()
{

	printf( "Welcome to the Infix to Postfix converting program\n" );
	printf( "Type \"QUIT\" to leave.\n" );
	run_code();

}

void run_code()
{
	std::string input;
	bool flag = true;
	while(true)
	{
		std::istringstream infix ("");
		Node * node;
		flag = false;
		printf("Please input an equation:\n");
		getline(std::cin, input);
		if( input.compare("QUIT") == 0 )
		{
			break;
		}

		if( input.find_first_not_of(' ') != std::string::npos )
		{// make sure the user doesn't just input whitespace or nothing.
			flag = true;
		}

		if( flag )
		{//check the equation to make sure it's valid
			infix.clear();
			infix.str( input );
			flag = check_equation( infix );
		}

		if( flag )
		{//run the evaluation on the equation
			printf("The equation is valid\n");
			infix.clear();
			infix.str( input );
			Builder builder;
			infix_to_tree( infix, builder );
			node = builder.get_top();
			Eval_Visitor visitor;
			node->accept(visitor);
			printf( "%d\n", visitor.pop() );
			delete node;
		}
		else
		{
			printf("The equation is not valid\n");
		}
	}
	printf("Goodbye.\n");
}

bool infix_to_tree ( std::istringstream & infix, Builder & builder )
{
	std::string token;
	while(!infix.eof())
	{
		infix >> token;
		
		if( token.compare("+") == 0 )
		{
			builder.build_add_node();
		}
		else if( token.compare("-") == 0 )
		{
			builder.build_sub_node();
		}
		else if( token.compare("*") == 0 )
		{
			
		}
		else if( token.compare("/") == 0 )
		{

		}
		else if( token.compare("%") == 0 )
		{

		}
		else if( token.compare("(") == 0 )
		{//recurse onto itself if "(" is found
			Builder other;
			infix_to_tree( infix, other );
			builder.push_tree( other.get_top() );
		}
		else if( token.compare(")") == 0 )
		{//end recurse when ")" is found
			return true;
		}
		else
		{
			builder.build_num_node(std::stoi(token));
		}
	}
	return true;

}

/*
 * Checks the input equation to make sure it can be accepted by the other
 * methods as a valid equation.
 */

bool check_equation( std::istringstream & check )
{
	std::string token;
	bool num_next = true; //used to make sure the equation is in proper order
	int parens = 0;//used to make sure there is an equivalent number of parens
	while( !check.eof() )
	{
		check >> token;

		if( is_integer(token) )
		{
			if ( num_next )
			{//if a number is supposed to be next, we're good
				num_next = false;
			}
			else
			{//a problem has emerged
				printf("Error: Expected Operator.\n");
				return false;
			}
		}
		else if ( token.compare("+") == 0 ||
		token.compare("-") == 0 ||
		token.compare("*") == 0 ||
		token.compare("/") == 0 ||
		token.compare("%") == 0 )
		{
			if ( !num_next )
			{//if an operator is supposed to be next, we're good
				num_next = true;
			}
			else
			{//a problem has emerged
				printf( "Error: \"%s\" Operator without numbers.\n",
					token.c_str() );
				return false;
			}
		}
		else if ( token.compare("(") == 0 )
		{
			parens += 1;
			if ( num_next )
			{//if a number is supposed to be next, a "(" will work fine
				num_next = true;
			}
			else
			{//a problem has emerged
				printf( "Error: Expected Operator.\n" );
				return false;
			}
		}
		else if ( token.compare(")") == 0 )
		{
			parens -= 1;
			if ( !num_next )
			{//if an operator is supposed to be next, a ")" will work fine.
				if ( parens < 0 )
				{//if more closed parens than open parens have been encountered
				//at any time, something has gone wrong.
					printf( "Error: \")\" without \"(\"\n" );
					return false;
				}
			}
			else
			{//a problem has emerged
				printf( "Error: Invalid equation inside parenthesis.\n" );
				return false;
			}
		}
		else
		{//unrecognized token will not be accepted
			printf( "Error: %s not recognized.\n", token.c_str() );
			return false;
		}
	}
	if( parens != 0 )
	{
		printf( "Error: Unequal \"(\" and \")\" operators.\n" );
		return false;
	}
}

/*
 * Checks whether the input string is a valid integer value.
 * Allows for negative signs.
 */
bool is_integer(std::string line)
{
    char* p;
    strtol(line.c_str(), &p, 10);
    return *p == 0;
}


