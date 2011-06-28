//-----------------------------------------------------------------------------
//
//    ** DO NOT EDIT THIS FILE! **
//    This file was generated by a tool
//    re-running the tool will overwrite this file.
//
//-----------------------------------------------------------------------------


#include "spot_touch_native.h"
#include "spot_touch_native_Microsoft_SPOT_Touch_Ink.h"

using namespace Microsoft::SPOT::Touch;


HRESULT Library_spot_touch_native_Microsoft_SPOT_Touch_Ink::SetInkRegion___STATIC__VOID__U4__I4__I4__I4__I4__I4__I4__I4__MicrosoftSPOTGraphicsMicrosoftSPOTBitmap( CLR_RT_StackFrame& stack )
{
    TINYCLR_HEADER(); hr = S_OK;
    {
        UINT32 param0;
        TINYCLR_CHECK_HRESULT( Interop_Marshal_UINT32( stack, 0, param0 ) );

        INT32 param1;
        TINYCLR_CHECK_HRESULT( Interop_Marshal_INT32( stack, 1, param1 ) );

        INT32 param2;
        TINYCLR_CHECK_HRESULT( Interop_Marshal_INT32( stack, 2, param2 ) );

        INT32 param3;
        TINYCLR_CHECK_HRESULT( Interop_Marshal_INT32( stack, 3, param3 ) );

        INT32 param4;
        TINYCLR_CHECK_HRESULT( Interop_Marshal_INT32( stack, 4, param4 ) );

        INT32 param5;
        TINYCLR_CHECK_HRESULT( Interop_Marshal_INT32( stack, 5, param5 ) );

        INT32 param6;
        TINYCLR_CHECK_HRESULT( Interop_Marshal_INT32( stack, 6, param6 ) );

        INT32 param7;
        TINYCLR_CHECK_HRESULT( Interop_Marshal_INT32( stack, 7, param7 ) );

        UNSUPPORTED_TYPE param8;
        TINYCLR_CHECK_HRESULT( Interop_Marshal_UNSUPPORTED_TYPE( stack, 8, param8 ) );

        Ink::SetInkRegion( param0, param1, param2, param3, param4, param5, param6, param7, param8, hr );
        TINYCLR_CHECK_HRESULT( hr );
    }
    TINYCLR_NOCLEANUP();
}

HRESULT Library_spot_touch_native_Microsoft_SPOT_Touch_Ink::ResetInkRegion___STATIC__VOID( CLR_RT_StackFrame& stack )
{
    TINYCLR_HEADER(); hr = S_OK;
    {
        Ink::ResetInkRegion( hr );
        TINYCLR_CHECK_HRESULT( hr );
    }
    TINYCLR_NOCLEANUP();
}