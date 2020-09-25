//Copyright (c) 2020 Eric Lendvai MIT License

// #include <stdlib.h>

#include "hbapi.h"

#ifdef _WIN32
#include <windows.h>
#endif

HB_FUNC( HB_VFP_OUTPUTDEBUGSTRING )   // For Windows Only
{
#ifdef _WIN32
	OutputDebugString( hb_parc(1) );
#endif
}

//=================================================================================================================

