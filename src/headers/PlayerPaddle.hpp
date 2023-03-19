#ifndef PLAYERPADDLE_H
#define PLAYERPADDLE_H

#include <SDL2/SDL.h>

class PlayerPaddle{
    
    public:

        enum class Direction{
            NONE,
            UP,
            DOWN
        };

        PlayerPaddle();
        ~PlayerPaddle() = default;

        void handle_events(SDL_Event const &event);
        void update(double delta_time);
        void draw(SDL_Renderer *renderer);
        
        

    private:
        SDL_Rect m_paddle;
        Direction m_direction;

        double m_position_x;
        double m_position_y;
        double m_movement_speed;

};

#endif