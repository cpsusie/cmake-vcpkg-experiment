#ifndef FOOBAR_TARGET_ME_HPP
#define FOOBAR_TARGET_ME_HPP
#include<type_traits>
namespace cjm::concepts
{
	template<typename Char>
	concept character = std::is_same_v<Char, char> || std::is_same_v<Char, wchar_t>;
}

#endif //FOOBAR_TARGET_ME_HPP
