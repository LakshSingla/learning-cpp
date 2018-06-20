#include <iostream>
#include <algorithm>
#include <vector>

std::vector<int>::const_iterator bsearch (const std::vector<int>::const_iterator beg, const std::vector<int>::const_iterator end, int elem) {
	std::vector<int>::const_iterator mid = beg + (end - beg)/2; 
	if(*mid == elem) return mid;
	if(*mid > elem ) return bsearch(beg    , mid -1  , elem);
	if(*mid < elem ) return bsearch(mid + 1, end     , elem);
}

int main(){
	std::vector<int> v{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	std::vector<int>::const_iterator it = bsearch(v.cbegin(), v.cend(), 4);
	std::cout << *it << std::endl;
}
