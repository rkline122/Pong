#ifndef BALL_H
#define BALL_H

#include <SDL2/SDL.h>


class Ball{

    public:

        enum class Direction{
            LEFT,
            RIGHT
        };

        Ball();
        ~Ball() = default;


        void update(double delta_time);
        void draw(SDL_Renderer *renderer);  

    private:

        SDL_Rect m_body;
        Direction m_direction;
        
        int m_ball_position_x;
        int m_ball_position_y;

        float m_speed;

        int get_position_x();
        int get_position_y();

};


#endif