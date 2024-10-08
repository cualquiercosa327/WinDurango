#include "pch.h"
#include "Windows.Xbox.Graphics.Display.Internal.DisplayConfigurationInternalHost.h"
#include "Windows.Xbox.Graphics.Display.Internal.DisplayConfigurationInternalHost.g.cpp"

// WARNING: This file is automatically generated by a tool. Do not directly
// add this file to your project, as any changes you make will be lost.
// This file is a stub you can use as a starting point for your implementation.
//
// To add a copy of this file to your project:
//   1. Copy this file from its original location to the location where you store 
//      your other source files (e.g. the project root). 
//   2. Add the copied file to your project. In Visual Studio, you can use 
//      Project -> Add Existing Item.
//   3. Delete this comment and the 'static_assert' (below) from the copied file.
//      Do not modify the original file.
//
// To update an existing file in your project:
//   1. Copy the relevant changes from this file and merge them into the copy 
//      you made previously.
//    
// This assertion helps prevent accidental modification of generated files.


namespace winrt::Windows::Xbox::Graphics::Display::Internal::implementation
{
    void DisplayConfigurationInternalHost::TrySetHdrMode(hstring const& aumid, bool isCallerGameCore, bool& hdrEnabled, float& maxLuminance, float& minLuminance, float& maxFullFrameLuminance)
    {
        throw hresult_not_implemented();
    }
    void DisplayConfigurationInternalHost::GetVariableRefreshRate(float& rateMin, float& rateMax)
    {
        throw hresult_not_implemented();
    }
    void DisplayConfigurationInternalHost::TrySetHdrModeWithPreference(hstring const& aumid, bool isCallerGameCore, winrt::Windows::Xbox::Graphics::Display::Internal::ModePreference const& modePreference, bool& hdrEnabled, float& maxLuminance, float& minLuminance, float& maxFullFrameLuminance)
    {
        throw hresult_not_implemented();
    }
    void DisplayConfigurationInternalHost::TrySetHdrModeWithPreferenceAndMetadata(hstring const& aumid, bool isCallerGameCore, winrt::Windows::Xbox::Graphics::Display::Internal::ModePreference const& modePreference, array_view<uint8_t const> metadata, bool& hdrEnabled, float& maxLuminance, float& minLuminance, float& maxFullFrameLuminance)
    {
        throw hresult_not_implemented();
    }
    void DisplayConfigurationInternalHost::GetDolbyVisionDisplayCapabilities(uint32_t& version, uint32_t& dmVersion, bool& parity, float& minLuminance, float& maxLuminance, float& rx, float& ry, float& gx, float& gy, float& bx, float& by, bool& enabled)
    {
        throw hresult_not_implemented();
    }
    bool DisplayConfigurationInternalHost::GetVrrEnabled()
    {
        throw hresult_not_implemented();
    }
}
