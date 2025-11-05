#include "button.h"

Button::Button(float x, float y, float width, float height,
               const std::string& text, Color background)
    : button_text(text), background(background) {
    rec = { x, y, width, height };
}

void Button::draw() {
    Vector2 mouse = GetMousePosition();
    bool hovered = CheckCollisionPointRec(mouse, rec);
    bool clicked = hovered && IsMouseButtonPressed(MOUSE_LEFT_BUTTON);

    // Change color on hover
    if (hovered)
        background = LIGHTGRAY;
    else
        background = GRAY;

    DrawRectangleRec(rec, background);
    DrawRectangleLinesEx(rec, 2, BLACK);

    // Center text
    int textWidth = MeasureText(button_text.c_str(), 20);
    DrawText(button_text.c_str(), rec.x + (rec.width - textWidth) / 2,
             rec.y + (rec.height - 20) / 2, 20, BLACK);

    // Trigger callback if clicked
    if (clicked && click_callback) {
        click_callback();
    }
}

void Button::on_click(std::function<void()> callback) {
    click_callback = callback;
}
