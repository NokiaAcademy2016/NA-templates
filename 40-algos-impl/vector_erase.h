#pragma once

//vector_erase(data, 1);
#include<algorithm>

template<typename T>
void vector_erase(T & v, const typename T::value_type & del)
{
	v.erase(std::remove(v.begin(), v.end(), del), v.end());	
}

