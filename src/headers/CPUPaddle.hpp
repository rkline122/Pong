#ifndef CPUPADDLE_H
#define CPUPADDLE_H

#include <SDL2/SDL.h>

class CPUPaddle{
    
    public:

        enum class Direction{
            NONE,
            UP,
            DOWN
        };

        CPUPaddle();
        ~CPUPaddle() = default;

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