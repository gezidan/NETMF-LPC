//-----------------------------------------------------------------------------
//
//    ** DO NOT EDIT THIS FILE! **
//    This file was generated by a tool
//    re-running the tool will overwrite this file.
//
//-----------------------------------------------------------------------------


#include "spot_net_native.h"
#include "spot_net_native_Microsoft_SPOT_Net_NetworkInformation_Wireless80211.h"

using namespace Microsoft::SPOT::Net::NetworkInformation;


HRESULT Library_spot_net_native_Microsoft_SPOT_Net_NetworkInformation_Wireless80211::UpdateConfiguration___STATIC__VOID__MicrosoftSPOTNetNetworkInformationWireless80211__BOOLEAN( CLR_RT_StackFrame& stack )
{
    TINYCLR_HEADER(); hr = S_OK;
    {
        UNSUPPORTED_TYPE param0;
        TINYCLR_CHECK_HRESULT( Interop_Marshal_UNSUPPORTED_TYPE( stack, 0, param0 ) );

        CHAR param1;
        TINYCLR_CHECK_HRESULT( Interop_Marshal_CHAR( stack, 1, param1 ) );

        Wireless80211::UpdateConfiguration( param0, param1, hr );
        TINYCLR_CHECK_HRESULT( hr );
    }
    TINYCLR_NOCLEANUP();
}

HRESULT Library_spot_net_native_Microsoft_SPOT_Net_NetworkInformation_Wireless80211::SaveAllConfigurations___STATIC__VOID( CLR_RT_StackFrame& stack )
{
    TINYCLR_HEADER(); hr = S_OK;
    {
        Wireless80211::SaveAllConfigurations( hr );
        TINYCLR_CHECK_HRESULT( hr );
    }
    TINYCLR_NOCLEANUP();
}