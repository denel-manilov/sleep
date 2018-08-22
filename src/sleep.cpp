#ifdef _WIN32
	#include <windows.h>

	void sleepWrap(unsigned milliseconds)
	{
		Sleep(milliseconds);
	}
#else
	#include <unistd.h>

	void sleepWrap(unsigned milliseconds)
	{
		sleep(milliseconds);
	}
#endif

int main(void)
{
	while (true) 
	{
		sleepWrap(1000);
	}
	return 0;
}
