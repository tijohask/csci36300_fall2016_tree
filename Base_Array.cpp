// Honor Pledge:
//
// I pledge that I have neither given nor receieved any help
// on this assignment.

#include "Base_Array.h"
#include <stdexcept>         // for std::out_of_bounds exception

//
// Array
//
template <typename T>
Base_Array <T>::Base_Array (void): data_(NULL), cur_size_(0), max_size_(0)
{

}

//
// Array (size_t)
//
template <typename T>
Base_Array <T>::Base_Array (size_t length): data_(NULL), cur_size_(length), max_size_(length)
{
	if(length > 0)
	{
		data_ = new T[length];
	}
}

//
// Array (size_t, value)
//
template <typename T>
Base_Array <T>::Base_Array (size_t length, T fill): data_(NULL), cur_size_(length), max_size_(length)
{
	//check if the length is greater than 0
	if(length > 0)
	{
		data_ = new T[length];//allocate a new array
		this->fill(fill);//fill it with the element
	}
}

//
// Array (const Array &)
//
template <typename T>
Base_Array <T>::Base_Array (const Base_Array & array): data_(NULL), cur_size_(array.size()), max_size_(array.max_size())
{
	//check if the array length is greater than 0
	if(array.max_size() > 0)
	{
		data_ = new T[array.max_size()];//allocate a new array
		for(size_t i = 0; i < cur_size_; i++)
		{//and copy the data in from the other array
			data_[i] = array[i];
		}
	}
}

//
// ~Array
//
template <typename T>
Base_Array <T>::~Base_Array (void)
{
	if(data_ != NULL)
	{//if the variable has data, delete it
		delete [] data_;
	}
}

//
// operator =
//
template <typename T>
const Base_Array <T> & Base_Array <T>::operator = (const Base_Array & rhs)
{
	//(this != &rhs) compares the addresses. 
	//If the object is being assigned to itself, its caught and nothing happens
	
	//(*this != rhs) compares the actual objects.
	//It'll save time if many identical arrays are being compared to 
	//each other, but it'll waste time if the majority of arrays are not
	//similar
	
	if(this != &rhs)//check the addresses
	{
		delete [] data_;//get rid of the old data
		data_ = new T[rhs.max_size()];//allocate a new array
		cur_size_ = rhs.size();//set the sizes to their new values
		max_size_ = rhs.max_size();
		for(size_t i = 0; i < cur_size_; i++)
		{//iterate through the array, copying the rhs
			data_[i] = rhs[i];
		}
	}
}

//
// operator []
//
template <typename T>
T & Base_Array <T>::operator [] (size_t index)
{
	if(index >= max_size_)
	{//throw exception if out of range
		throw std::out_of_range ("Index out of range");
	}
	return data_[index];//return the character otherwise
}

//
// operator [] 
//
template <typename T>
const T & Base_Array <T>::operator [] (size_t index) const
{
	if(index >= max_size_)
	{//throw exception if out of range
		throw std::out_of_range ("Index out of range");
	}
	return data_[index];//return the character otherwise

}

//
// get
//
template <typename T>
T Base_Array <T>::get (size_t index) const
{
	if(index >= max_size_)
	{//throw exception if out of range
		throw std::out_of_range ("Index out of range");
	}
	return data_[index];//return the character otherwise

}

//
// set
//
template <typename T>
void Base_Array <T>::set (size_t index, T value)
{
	if(index >= max_size_)
	{//throw exception if out of range
		throw std::out_of_range ("Index out of range");
	}
	data_[index] = value;//assign the element to data
	if(cur_size_ < index)
	{//adjust the current size if necessary
		cur_size_ = index;
	}
}

//
// find (element)
//
template  <typename T>
int Base_Array <T>::find (T value) const
{
	//use the other method to find the element
	return this->find(value, 0);
}

//
// find (element, size_t) 
//
template <typename T>
int Base_Array <T>::find (T val, size_t start) const
{
	if(start >= max_size_)
	{//throw exception if out of range
		throw std::out_of_range ("Index is out of range");
	}
	for(int i = start; i < max_size_; i++)
	{//iterate through the array
		if(data_[i] == val)
		{//return the index if found
			return static_cast<int>(i);
		}
	}
	return -1;//return -1 otherwise
}

//
// operator ==
//
template <typename T>
bool Base_Array <T>::operator == (const Base_Array & rhs) const
{
	if(this == &rhs)
	{//check the addresses first
		return true;
	}
	if(cur_size_ == rhs.size() && max_size_ == rhs.max_size())
	{//if the sizes are the same
		for(size_t i = 0; i < max_size_; i++)
		{//iterate through the array
			if(data_[i] != rhs[i])
			{//and return false if a difference is found
				return false;
			}
		}
		return true;
	}
	return false;
}

//
// operator !=
//
template <typename T>
bool Base_Array <T>::operator != (const Base_Array & rhs) const
{
	//using the other operation for this one
	return !(*this == rhs);
}

//
// fill
//
template <typename T>
void Base_Array <T>::fill (T value)
{
	for(size_t i = 0; i < max_size_; i++)
	{//iterate through the array, copying the value
		data_[i] = value;
	}
}
