#ifndef _INC_STDDEF  //in stddef.h line 9
#include<stddef.h>
#endif

#ifndef _MY_TINY_STL_ALLOCATOR //in case of Duplication
#define _MY_TINY_STL_ALLOCATOR
namespace TinyStl {

template <typename T>
class allocator
{
public:
	typedef T				theType;
	typedef T*				thePointer;
	typedef const T*		theConstPointer;
	typedef T&				theReference;
	typedef const T			theConstReference;
	typedef size_t			theSizeCounter;
	typedef ptrdiff_t		theIndexDiffer;

	static thePointer		allocate();
	static thePointer		allocate(theSizeCounter n);
	static void				deallocate(thePointer ptr);
	static void				construct(thePointer ptr);






};






};//end of namespace TinyStl
#endif //end of _MY_TINY_STL_ALLOCATOR