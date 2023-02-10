function el_GetProcessID()
local l_iProcessID

#ifdef __PLATFORM__WINDOWS
    l_iProcessID := wapi_GetCurrentProcessId()
#else
    #ifdef __PLATFORM__LINUX
        l_iProcessID := posix_GetPID()
    #else
        l_iProcessID := 0
    #endif
#endif

return l_iProcessID
