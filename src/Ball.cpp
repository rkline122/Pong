#include <SDL2/SDL.h>
#include "headers/Ball.hpp"
#include "headers/config.hpp"
#include <iostream>

Ball::Ball(){

    m_body.x = 0;
    m_body.y = 0;
    m_body.w = BALL_WIDTH;
    m_body.h = BALL_HEIGHT;

    m_ball_position_x = BALL_START_X;
    m_ball_position_y = BALL_START_Y;

    m_speed = BALL_SPEED;
    
}

void Ball::update(double delta_time){
    /*
    
        Updates the current frame

    */

    m_direction = Direction::LEFT;

    if(m_direction == Direction::LEFT){
        if(m_ball_position_x > 0)
            m_ball_position_x -= m_speed * delta_time;
    }else if(m_direction == Direction::RIGHT){
        if(m_ball_position_x < SCREEN_WIDTH - m_body.h)
            m_ball_position_x += m_speed * delta_time;
    }else{
        
        m_ball_position_x += 0.0;
        m_ball_position_y += 0.0;
    }


    m_body.x = m_ball_position_x;
    m_body.y = m_ball_position_y;
}


void Ball::draw(SDL_Renderer *renderer){
    /*
        Draws new frame to the renderer
    */

    SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
    SDL_RenderFillRect(renderer, &m_body);
    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
}

int Ball::get_position_x(){
    return m_ball_position_x;
}

int Ball::get_position_y(){
    return m_ball_position_y;
}