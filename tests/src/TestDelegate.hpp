
#pragma once

#include <functional>
#include <jet/live/LiveDelegate.hpp>

class TestDelegate : public jet::LiveDelegate
{
public:
    void onLog(jet::LogSeverity severity, const std::string& message) override;
    void onCodePreLoad() override;
    void onCodePostLoad() override;

    void setCallbacks(std::function<void()>&& codePreLoadCallback, std::function<void()>&& codePostLoadCallback);

private:
    std::function<void()> m_codePreLoadCallback;
    std::function<void()> m_codePostLoadCallback;
};