#include<condition_variable>
#include<chrono>

using namespace std;

condition_variable cv;
mutex cv_m;

int main()
{
	switch (unique_lock<mutex>ik(cv_m); cv.wait_for(ik, 100ms))
	{
	case std::cv_status::timeout:
		break;
	case std::cv_status::no_timeout:
		break;
	}
	return 0;
}