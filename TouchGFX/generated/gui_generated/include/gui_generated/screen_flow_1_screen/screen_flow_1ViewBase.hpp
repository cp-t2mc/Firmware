/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef SCREEN_FLOW_1VIEWBASE_HPP
#define SCREEN_FLOW_1VIEWBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/screen_flow_1_screen/screen_flow_1Presenter.hpp>
#include <touchgfx/widgets/Box.hpp>
#include <touchgfx/containers/Container.hpp>
#include <gui/containers/thinking_circles_container.hpp>
#include <touchgfx/widgets/TextArea.hpp>
#include <touchgfx/widgets/Image.hpp>
#include <touchgfx/containers/buttons/Buttons.hpp>
#include <touchgfx/widgets/TextAreaWithWildcard.hpp>
#include <touchgfx/widgets/canvas/Circle.hpp>
#include <touchgfx/widgets/canvas/PainterRGB888.hpp>
#include <gui/containers/keyboardAlias_container.hpp>
#include <gui/containers/textArea_container.hpp>
#include <gui/containers/close_button_container.hpp>

class screen_flow_1ViewBase : public touchgfx::View<screen_flow_1Presenter>
{
public:
    screen_flow_1ViewBase();
    virtual ~screen_flow_1ViewBase();
    virtual void setupScreen();
    virtual void handleTickEvent();

    /*
     * Virtual Action Handlers
     */
    virtual void tickEventScreen()
    {
        // Override and implement this function in screen_flow_1
    }
    virtual void assignAliasPressed()
    {
        // Override and implement this function in screen_flow_1
    }
    virtual void hideKeyboardPressed()
    {
        // Override and implement this function in screen_flow_1
    }
    virtual void showKeyboardPressed()
    {
        // Override and implement this function in screen_flow_1
    }
    virtual void enterKeyboardPressed()
    {
        // Override and implement this function in screen_flow_1
    }
    virtual void acceptSuccessPressed()
    {
        // Override and implement this function in screen_flow_1
    }
    virtual void qrSmallPressed()
    {
        // Override and implement this function in screen_flow_1
    }
    virtual void qrBackPressed()
    {
        // Override and implement this function in screen_flow_1
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
    touchgfx::TextArea wait_read_nfc_text1;
    touchgfx::TextArea wait_read_nfc_text2;
    touchgfx::Image wait_read_nfc_image;
    touchgfx::Container s2_viewTagInfo;
    touchgfx::TextButtonStyle< touchgfx::BoxWithBorderButtonStyle< touchgfx::ClickButtonTrigger >  >  btn_assign_alias;
    touchgfx::TextArea text_uid_info;
    touchgfx::TextAreaWithOneWildcard text_uid;
    touchgfx::TextArea text_alias_info;
    touchgfx::TextAreaWithOneWildcard text_alias;
    touchgfx::IconButtonStyle< touchgfx::BoxWithBorderButtonStyle< touchgfx::ClickButtonTrigger >  >  btn_back;
    touchgfx::Container container_qr_small_code;
    touchgfx::Circle circle_qr_small;
    touchgfx::PainterRGB888 circle_qr_smallPainter;
    touchgfx::TextArea text_qr_small;
    touchgfx::IconButtonStyle< touchgfx::ClickButtonTrigger >  btn_qr_small;
    touchgfx::Container s3_typeAlias;
    keyboardAlias_container keyboard_alias;
    textArea_container keyboard_text_area;
    touchgfx::IconButtonStyle< touchgfx::ClickButtonTrigger >  keyboard_btn_hide;
    touchgfx::BoxWithBorderButtonStyle< touchgfx::ClickButtonTrigger >  keyboard_btn_show;
    touchgfx::IconButtonStyle< touchgfx::ClickButtonTrigger >  keyboard_btn_enter;
    touchgfx::TextAreaWithOneWildcard keyboard_text_typed;
    touchgfx::TextArea keyboard_text_info;
    touchgfx::Container s4_waitReadWriteNFC;
    touchgfx::TextArea wait_read_write_nfc_text1;
    touchgfx::TextArea wait_read_write_nfc_text2;
    touchgfx::Image wait_read_write_nfc_image;
    touchgfx::Container s5_writeSuccess;
    touchgfx::TextButtonStyle< touchgfx::BoxWithBorderButtonStyle< touchgfx::ClickButtonTrigger >  >  btn_accept_success;
    touchgfx::TextArea write_success_text;
    touchgfx::Image write_success_image;
    close_button_container close_button;

    /*
     * Wildcard Buffers
     */
    static const uint16_t TEXT_UID_SIZE = 25;
    touchgfx::Unicode::UnicodeChar text_uidBuffer[TEXT_UID_SIZE];
    static const uint16_t TEXT_ALIAS_SIZE = 25;
    touchgfx::Unicode::UnicodeChar text_aliasBuffer[TEXT_ALIAS_SIZE];
    static const uint16_t KEYBOARD_TEXT_TYPED_SIZE = 25;
    touchgfx::Unicode::UnicodeChar keyboard_text_typedBuffer[KEYBOARD_TEXT_TYPED_SIZE];

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
    touchgfx::Callback<screen_flow_1ViewBase, const touchgfx::AbstractButtonContainer&> flexButtonCallback;

    /*
     * Callback Handler Declarations
     */
    void flexButtonCallbackHandler(const touchgfx::AbstractButtonContainer& src);

};

#endif // SCREEN_FLOW_1VIEWBASE_HPP