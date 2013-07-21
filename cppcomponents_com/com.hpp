#include <objbase.h>

namespace cppcomponents{

	namespace com{
		struct com_initializer{
		
			com_initializer(){
				::CoInitializeEx(nullptr, COINIT_MULTITHREADED);
			}
		};
	}

}

