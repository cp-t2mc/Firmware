/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/containers/keyboardPassphrase_containerBase.hpp>
#include <images/BitmapDatabase.hpp>

keyboardPassphrase_containerBase::keyboardPassphrase_containerBase()
{
    setWidth(320);
    setHeight(123);
    keyboardAlphaNum.setXY(0, 0);
    keyboardAlphaNum.setBitmap(touchgfx::Bitmap(BITMAP_KEYBOARDALPHANUM_BACKGROUND_1_ID));
    add(keyboardAlphaNum);
}

keyboardPassphrase_containerBase::~keyboardPassphrase_containerBase()
{

}

void keyboardPassphrase_containerBase::initialize()
{

}