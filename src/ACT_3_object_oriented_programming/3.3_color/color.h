#pragma once

#define RED 0
#define GREEN 1
#define BLUE 2
#define YELLOW 3
#define MAGENTA 4
#define CYAN 5
#define WHITE 6

class Color {
public:

    // constructor
    Color(int color);

    // copy constructor
    Color(const Color &another_color) {
        color = another_color.color;
    }

    // equality
    bool operator==(const Color &rhs) const;

    // operator overload
    Color operator+(Color const &another_color) {
        switch (color) {
            case RED:
                switch (another_color.color) {
                    case GREEN:
                        return Color(YELLOW);
                    case BLUE:
                        return Color(MAGENTA);
                    case RED:
                        return Color(RED);

                }
            case GREEN:
                switch (another_color.color) {
                    case GREEN:
                        return Color(GREEN);
                    case BLUE:
                        return Color(MAGENTA);
                    case RED:
                        return Color(YELLOW);
                }
            case BLUE:
                switch (another_color.color) {
                    case GREEN:
                        return Color(CYAN);
                    case BLUE:
                        return Color(BLUE);
                    case RED:
                        return Color(MAGENTA);
                }
        }
        return Color(WHITE);
    };

private:
    int color;
};
