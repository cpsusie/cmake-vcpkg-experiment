#ifndef CMAKE_VCPKG_EXPERIMENT_LIBRARY_HPP_
#define CMAKE_VCPKG_EXPERIMENT_LIBRARY_HPP_
#include <iostream>
#include <string>
#include <type_traits>
#include "impl/target_me.hpp"
namespace cjm
{
	template<concepts::character Char>
	void say_stuff(std::basic_string<Char> x)
	{
		if constexpr (std::is_same_v<Char, char>)
		{
			std::cout << "Stuff: [" << x << "].\n";
		}
		else
		{
			std::wcout << L"Other stuff: [" << x << L"].\n";
		}
	}
}


#endif //CMAKE_VCPKG_EXPERIMENT_LIBRARY_HPP
