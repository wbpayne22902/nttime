#include <Windows.h>
#include <iostream>
#include <cstdio>

//extern "C" NTSYSAPI NTSTATUS NTAPI NtQuerySystemTime(PLARGE_INTEGER SystemTime);

int main()
{
    SYSTEMTIME st, localSt;
    GetSystemTime(&st);

    // Convert system time to local time
    SystemTimeToTzSpecificLocalTime(NULL, &st, &localSt);

    std::cout << "The current local time is: " << localSt.wHour << ":" << localSt.wMinute << ":" << localSt.wSecond << std::endl;
    return 0;
}
