/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef KEYBOARDPASSWORDCHECK_CONTAINERBASE_HPP
#define KEYBOARDPASSWORDCHECK_CONTAINERBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <touchgfx/containers/Container.hpp>
#include <touchgfx/widgets/Image.hpp>

class keyboardPasswordCheck_containerBase : public touchgfx::Container
{
public:
    keyboardPasswordCheck_containerBase();
    virtual ~keyboardPasswordCheck_containerBase();
    virtual void initialize();

protected:
    FrontendApplication& application() {
        return *static_cast<FrontendApplication*>(touchgfx::Application::getInstance());
    }

    /*
     * Member Declarations
     */
    touchgfx::Image keyboardAlphaNum;

private:

};

#endif // KEYBOARDPASSWORDCHECK_CONTAINERBASE_HPP