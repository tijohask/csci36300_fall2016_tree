// Honor Pledge:
//
// I pledge that I have neither given nor receieved any help
// on this assignment.

//
// size
//
template <typename T>
inline
size_t Stack <T>::size (void) const
{
	return cur_size_;
}

//
// is_empty
//
template <typename T>
inline
bool Stack <T>::is_empty (void) const
{
	return is_empty_;
}
