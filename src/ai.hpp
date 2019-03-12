#pragma once
// internal
#include "common.hpp"
#include "fighter.hpp"
#include "damageEffect.hpp"

class AI : public Fighter
{
  public:
    AI(unsigned int id, AIType type);

    bool get_in_play() const;
    void set_in_play(bool value);
    Attack * update(float ms, std::vector<Platform> platforms, vec2 player1Position);
    float distance(vec2 pos1, vec2 pos2);

  private:
    bool in_play = false; // denotes if a player object is currently in play, false by default
    AIType aitype;
};