#pragma once
#include "raylib.h"
#include <functional>
#include <string>

class Button {
public:
    Button(float x, float y, float width, float height, const std::string& text,
           Color background = GRAY);

    // Draws button and handles hover/click visual states
    void draw();

    // Sets the callback for click events
    void on_click(std::function<void()> callback);

private:
    Rectangle rec;
    std::string button_text;
    Color background;
    std::function<void()> click_callback;
};
