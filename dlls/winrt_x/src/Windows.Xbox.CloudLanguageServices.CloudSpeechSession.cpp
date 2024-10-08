#include "pch.h"
#include "Windows.Xbox.CloudLanguageServices.CloudSpeechSession.h"
#include "Windows.Xbox.CloudLanguageServices.CloudSpeechSession.g.cpp"

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


namespace winrt::Windows::Xbox::CloudLanguageServices::implementation
{
    void CloudSpeechSession::NotifyConversationMessage(winrt::Windows::Xbox::CloudLanguageServices::IConversationMessage const& conversationMessage)
    {
        throw hresult_not_implemented();
    }
    void CloudSpeechSession::NotifyTransientMessage(winrt::Windows::Xbox::CloudLanguageServices::ITransientMessage const& transientMessage)
    {
        throw hresult_not_implemented();
    }
    void CloudSpeechSession::NotifyContextRequired()
    {
        throw hresult_not_implemented();
    }
    void CloudSpeechSession::NotifyConversationMessageRaw(hstring const& message)
    {
        throw hresult_not_implemented();
    }
    void CloudSpeechSession::NotifyTransientMessageRaw(hstring const& message)
    {
        throw hresult_not_implemented();
    }
    void CloudSpeechSession::SubmitTextQuery(hstring const& textQuery)
    {
        throw hresult_not_implemented();
    }
    void CloudSpeechSession::SubmitActionQuery(hstring const& actionQuery, hstring const& itemId)
    {
        throw hresult_not_implemented();
    }
    void CloudSpeechSession::set_Context(hstring const& contextDoc)
    {
        throw hresult_not_implemented();
    }
    void CloudSpeechSession::EnableContinuousReco()
    {
        throw hresult_not_implemented();
    }
    void CloudSpeechSession::DisableContinuousReco()
    {
        throw hresult_not_implemented();
    }
    winrt::event_token CloudSpeechSession::ConversationMessageArrived(winrt::Windows::Xbox::CloudLanguageServices::ConversationMessageHandler const& handler)
    {
        throw hresult_not_implemented();
    }
    void CloudSpeechSession::ConversationMessageArrived(winrt::event_token const& token) noexcept
    {
        throw hresult_not_implemented();
    }
    winrt::event_token CloudSpeechSession::TransientMessageArrived(winrt::Windows::Xbox::CloudLanguageServices::TransientMessageHandler const& handler)
    {
        throw hresult_not_implemented();
    }
    void CloudSpeechSession::TransientMessageArrived(winrt::event_token const& token) noexcept
    {
        throw hresult_not_implemented();
    }
    winrt::event_token CloudSpeechSession::CloudStreamingStateChanged(winrt::Windows::Xbox::CloudLanguageServices::CloudStreamingStateChangedHandler const& handler)
    {
        throw hresult_not_implemented();
    }
    void CloudSpeechSession::CloudStreamingStateChanged(winrt::event_token const& token) noexcept
    {
        throw hresult_not_implemented();
    }
    winrt::event_token CloudSpeechSession::QueryingModeStateChanged(winrt::Windows::Xbox::CloudLanguageServices::QueryingModeStateChangedHandler const& handler)
    {
        throw hresult_not_implemented();
    }
    void CloudSpeechSession::QueryingModeStateChanged(winrt::event_token const& token) noexcept
    {
        throw hresult_not_implemented();
    }
    winrt::event_token CloudSpeechSession::ContextRequired(winrt::Windows::Xbox::CloudLanguageServices::ContextRequiredHandler const& handler)
    {
        throw hresult_not_implemented();
    }
    void CloudSpeechSession::ContextRequired(winrt::event_token const& cookie) noexcept
    {
        throw hresult_not_implemented();
    }
    winrt::event_token CloudSpeechSession::ConversationMessageErrorArrived(winrt::Windows::Xbox::CloudLanguageServices::ConversationMessageErrorHandler const& handler)
    {
        throw hresult_not_implemented();
    }
    void CloudSpeechSession::ConversationMessageErrorArrived(winrt::event_token const& token) noexcept
    {
        throw hresult_not_implemented();
    }
}
