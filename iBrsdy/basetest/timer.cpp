
#include "timer.h"
#include <iostream>


int timet_test()
{
	boost::timer t;
	std::cout<<t.elapsed_min()<<std::endl;

	return 0;
}