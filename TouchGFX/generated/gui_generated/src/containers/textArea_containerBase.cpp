/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/containers/textArea_containerBase.hpp>
#include <touchgfx/Color.hpp>

textArea_containerBase::textArea_containerBase()
{
    setWidth(230);
    setHeight(30);
    circle2.setPosition(200, 0, 30, 30);
    circle2.setCenter(15, 15);
    circle2.setRadius(15);
    circle2.setLineWidth(0);
    circle2.setArc(0, 360);
    circle2Painter.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    circle2.setPainter(circle2Painter);
    add(circle2);

    circle1.setPosition(0, 0, 30, 30);
    circle1.setCenter(15, 15);
    circle1.setRadius(15);
    circle1.setLineWidth(0);
    circle1.setArc(0, 360);
    circle1Painter.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    circle1.setPainter(circle1Painter);
    add(circle1);

    box.setPosition(15, 0, 200, 30);
    box.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    add(box);
}

textArea_containerBase::~textArea_containerBase()
{

}

void textArea_containerBase::initialize()
{

}