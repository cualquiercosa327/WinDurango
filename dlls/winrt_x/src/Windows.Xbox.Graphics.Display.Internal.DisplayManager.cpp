#include "pch.h"
#include "Windows.Xbox.Graphics.Display.Internal.DisplayManager.h"
#include "Windows.Xbox.Graphics.Display.Internal.DisplayManager.g.cpp"

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
    bool DisplayManager::IsHdrGamingSupported()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Graphics::Display::Internal::DisplayValue DisplayManager::GetOption(winrt::Windows::Xbox::Graphics::Display::Internal::DisplayOption const& option)
    {
        throw hresult_not_implemented();
    }
    void DisplayManager::SetOption(winrt::Windows::Xbox::Graphics::Display::Internal::DisplayOption const& option, winrt::Windows::Xbox::Graphics::Display::Internal::DisplayValue const& value)
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Graphics::Display::Internal::DisplayCapabilities DisplayManager::Capabilities()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Graphics::Display::Internal::DisplayModeInternal DisplayManager::DefaultDisplayMode()
    {
        throw hresult_not_implemented();
    }
    void DisplayManager::DefaultDisplayMode(winrt::Windows::Xbox::Graphics::Display::Internal::DisplayModeInternal const& value)
    {
        throw hresult_not_implemented();
    }
    void DisplayManager::SetTempDisplayMode(winrt::Windows::Xbox::Graphics::Display::Internal::DisplayModeInternal const& value)
    {
        throw hresult_not_implemented();
    }
    void DisplayManager::ClearTempDisplayMode()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::Xbox::Graphics::Display::Internal::DisplayModeInternal> DisplayManager::SupportedDisplayModes()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Foundation::Collections::IVectorView<hstring> DisplayManager::GetStateDump()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Graphics::Display::Internal::DisplayState DisplayManager::GetCurrentDisplayState()
    {
        throw hresult_not_implemented();
    }
    winrt::Windows::Xbox::Graphics::Display::Internal::DisplayCalibrationInfo DisplayManager::DisplayCalibration()
    {
        throw hresult_not_implemented();
    }
    void DisplayManager::DisplayCalibration(winrt::Windows::Xbox::Graphics::Display::Internal::DisplayCalibrationInfo const& value)
    {
        throw hresult_not_implemented();
    }
    bool DisplayManager::GetEnhancementOption(winrt::Windows::Xbox::Graphics::Display::Internal::EnhancementOption const& option)
    {
        throw hresult_not_implemented();
    }
    void DisplayManager::SetEnhancementOption(winrt::Windows::Xbox::Graphics::Display::Internal::EnhancementOption const& option, bool value)
    {
        throw hresult_not_implemented();
    }
    bool DisplayManager::IsHdr10GamingSupported()
    {
        throw hresult_not_implemented();
    }
    bool DisplayManager::IsDvllGamingSupported()
    {
        throw hresult_not_implemented();
    }
    void DisplayManager::IsDvllGamingSupportedWithRefreshRate(bool& supported, winrt::Windows::Xbox::Graphics::Display::Internal::DisplayRefreshRate& refreshRate)
    {
        throw hresult_not_implemented();
    }
    void DisplayManager::SetColorTransform(winrt::Windows::Xbox::Graphics::Display::Internal::DisplayColorTransformInfo const& value)
    {
        throw hresult_not_implemented();
    }
}
