#pragma once
#include "Windows.Xbox.Media.MusicDisplayProperties.g.h"

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


namespace winrt::Windows::Xbox::Media::implementation
{
    struct MusicDisplayProperties : MusicDisplayPropertiesT<MusicDisplayProperties>
    {
        MusicDisplayProperties() = default;

        hstring Title();
        void Title(hstring const& value);
        hstring AlbumArtist();
        void AlbumArtist(hstring const& value);
        hstring Artist();
        void Artist(hstring const& value);
        winrt::Windows::Foundation::TimeSpan MediaStart();
        void MediaStart(winrt::Windows::Foundation::TimeSpan const& value);
        winrt::Windows::Foundation::TimeSpan MediaEnd();
        void MediaEnd(winrt::Windows::Foundation::TimeSpan const& value);
        winrt::Windows::Foundation::TimeSpan MinSeek();
        void MinSeek(winrt::Windows::Foundation::TimeSpan const& value);
        winrt::Windows::Foundation::TimeSpan MaxSeek();
        void MaxSeek(winrt::Windows::Foundation::TimeSpan const& value);
        winrt::Windows::Foundation::TimeSpan PlaybackPosition();
        void PlaybackPosition(winrt::Windows::Foundation::TimeSpan const& value);
        float PlaybackRate();
        void PlaybackRate(float value);
        winrt::Windows::Xbox::Media::MediaLoggingLevel LoggingLevel();
        void LoggingLevel(winrt::Windows::Xbox::Media::MediaLoggingLevel const& value);
        hstring SubscriptionType();
        void SubscriptionType(hstring const& value);
        hstring SubscriptionTier();
        void SubscriptionTier(hstring const& value);
        hstring DetailedMediaType();
        void DetailedMediaType(hstring const& value);
        hstring ProviderMediaInstanceId();
        void ProviderMediaInstanceId(hstring const& value);
        hstring BingId();
        void BingId(hstring const& value);
        hstring AcquisitionType();
        void AcquisitionType(hstring const& value);
        hstring AcquisitionContext();
        void AcquisitionContext(hstring const& value);
        hstring AcquisitionContextType();
        void AcquisitionContextType(hstring const& value);
        hstring AcquisitionContextId();
        void AcquisitionContextId(hstring const& value);
        int32_t PlaybackIsStream();
        void PlaybackIsStream(int32_t value);
        int32_t PlaybackIsTethered();
        void PlaybackIsTethered(int32_t value);
        hstring MarketplaceLocation();
        void MarketplaceLocation(hstring const& value);
        hstring ContentLocale();
        void ContentLocale(hstring const& value);
    };
}
