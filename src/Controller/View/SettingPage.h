#pragma once

#include <Controller/Core/BasicView.h>
#include <Controller/Core/GlobalAgent.hpp>
#include <Controller/Core/UiBase.h>

EVENTO_UI_START

class SettingPage : public BasicView, private GlobalAgent<SettingPageBridge> {
public:
    SettingPage(slint::ComponentHandle<UiEntryName> uiEntry);
    SettingPage(SettingPage&) = delete;

private:
    void onCreate() override;
};

EVENTO_UI_END