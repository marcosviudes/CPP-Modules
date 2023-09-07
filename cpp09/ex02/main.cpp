#include "./PmergeMe.hpp"
#include <iostream>
#include <vector>
#include <unistd.h>
# include <sys/time.h>

uint64_t	time_get_msec(uint64_t start);

int main(int argc, char **argv)
{
	try{
		PmergeMe fuc(argc, argv);
	
		std::vector<int> arr;
		std::cout << "Before:	" << std::endl;
		for (size_t i = 0; i < fuc.getVector().size(); i++) {
			std::cout << fuc.getVector()[i] << " ";
		} std::cout << std::endl;

	
		uint64_t start = time_get_msec(0);
		std::vector<std::pair <int, int> >  pares = fuc.merge(arr);


//		for (size_t i = 0; i < pares.size(); i++) {
//			std::cout << "("<< pares[i].first << ", " << pares[i].second << ") ";
	//	} std::cout << std::endl;

		std::vector<int> result = fuc.insertion(pares);
		uint64_t elapsed_time = time_get_msec(start);

		std::cout << "After:	" << std::endl;
		for (size_t i = 0; i < result.size(); i++) {
			std::cout << result[i] << " ";
		} std::cout << std::endl;

		std::cout << "Time to process a range of " << fuc.getVector().size() <<" elements with std::vector : " << elapsed_time <<  "us"  << std::endl;
		
		start = time_get_msec(0);
		std::deque<int> arr2;
		std::deque<std::pair <int, int> >  pares2 = fuc.merge(arr2);
		std::deque<int> result2 = fuc.insertion(pares2);
		elapsed_time = time_get_msec(start);
		std::cout << "Time to process a range of " << fuc.getDeque().size() <<" elements with std::deque : " << elapsed_time <<  "us"  << std::endl;
	}catch(std::runtime_error &e){
		std::cerr << "Error: " << e.what() << std::endl;
	}
}

uint64_t	time_get_msec(uint64_t start)
{
	uint64_t		ret;
	struct timeval	time;

	gettimeofday(&time, NULL);
	ret = time.tv_sec * 1000000;
	ret += time.tv_usec;
	ret -= start;
	return (ret);
}