/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef SCREEN_FLOW_4VIEWBASE_HPP
#define SCREEN_FLOW_4VIEWBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/screen_flow_4_screen/screen_flow_4Presenter.hpp>
#include <touchgfx/widgets/Box.hpp>
#include <touchgfx/containers/Container.hpp>
#include <gui/containers/thinking_circles_container.hpp>
#include <touchgfx/widgets/TextArea.hpp>
#include <touchgfx/widgets/Image.hpp>
#include <touchgfx/containers/buttons/Buttons.hpp>
#include <touchgfx/widgets/TextAreaWithWildcard.hpp>
#include <gui/containers/close_button_container.hpp>

class screen_flow_4ViewBase : public touchgfx::View<screen_flow_4Presenter>
{
public:
    screen_flow_4ViewBase();
    virtual ~screen_flow_4ViewBase();
    virtual void setupScreen();
    virtual void handleTickEvent();

    /*
     * Virtual Action Handlers
     */
    virtual void tickEventScreen()
    {
        // Override and implement this function in screen_flow_4
    }
    virtual void clonePressed()
    {
        // Override and implement this function in screen_flow_4
    }
    virtual void retryPressed()
    {
        // Override and implement this function in screen_flow_4
    }
    virtual void exitSuccessPressed()
    {
        // Override and implement this function in screen_flow_4
    }
    virtual void exitFailPressed()
    {
        // Override and implement this function in screen_flow_4
    }

protected:
    FrontendApplication& application() {
        return *static_cast<FrontendApplication*>(touchgfx::Application::getInstance());
    }

    /*
     * Member Declarations
     */
    touchgfx::Box __background;
    touchgfx::Box background;
    touchgfx::Container s0_initNFC;
    thinking_circles_container init_nfc_thinking_circles;
    touchgfx::TextArea init_nfc_text1;
    touchgfx::TextArea init_nfc_text2;
    touchgfx::Image init_nfc_image;
    touchgfx::Container s1_waitReadNFC;
    touchgfx::TextArea text1;
    touchgfx::Image image1;
    touchgfx::Container s2_viewTagInfo;
    touchgfx::TextButtonStyle< touchgfx::BoxWithBorderButtonStyle< touchgfx::ClickButtonTrigger >  >  btn_clone;
    touchgfx::TextArea text_uid_info;
    touchgfx::TextAreaWithOneWildcard text_uid;
    touchgfx::TextArea text_alias_info;
    touchgfx::TextAreaWithOneWildcard text_alias;
    touchgfx::Container s3_readError;
    touchgfx::TextButtonStyle< touchgfx::BoxWithBorderButtonStyle< touchgfx::ClickButtonTrigger >  >  btn_retry;
    touchgfx::TextArea text3;
    touchgfx::Image image3;
    touchgfx::Container s4_waitReadWriteNFC;
    touchgfx::TextArea text4;
    touchgfx::Image image4;
    touchgfx::Container s5_writeError;
    touchgfx::TextButtonStyle< touchgfx::BoxWithBorderButtonStyle< touchgfx::ClickButtonTrigger >  >  btn_exit_fail;
    touchgfx::TextArea text5;
    touchgfx::Container s6_writeSuccess;
    touchgfx::TextButtonStyle< touchgfx::BoxWithBorderButtonStyle< touchgfx::ClickButtonTrigger >  >  btn_exit_success;
    touchgfx::TextArea text6;
    touchgfx::Image image6;
    close_button_container close_button;

    /*
     * Wildcard Buffers
     */
    static const uint16_t TEXT_UID_SIZE = 25;
    touchgfx::Unicode::UnicodeChar text_uidBuffer[TEXT_UID_SIZE];
    static const uint16_t TEXT_ALIAS_SIZE = 25;
    touchgfx::Unicode::UnicodeChar text_aliasBuffer[TEXT_ALIAS_SIZE];

private:

    /*
     * Canvas Buffer Size
     */
    static const uint32_t CANVAS_BUFFER_SIZE = 4800;
    uint8_t canvasBuffer[CANVAS_BUFFER_SIZE];

    /*
     * Tick Counter Declarations
     */
    static const uint32_t TICK_INTERACTION1_INTERVAL = 10;
    uint32_t frameCountInteraction1Interval;

    /*
     * Callback Declarations
     */
    touchgfx::Callback<screen_flow_4ViewBase, const touchgfx::AbstractButtonContainer&> flexButtonCallback;

    /*
     * Callback Handler Declarations
     */
    void flexButtonCallbackHandler(const touchgfx::AbstractButtonContainer& src);

};

#endif // SCREEN_FLOW_4VIEWBASE_HPP