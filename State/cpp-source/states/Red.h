//
// Created by Pavel Akhtyamov on 2019-04-23.
//

#pragma once

#include "State.h"

class Red : public State {
 public:
  void Switch(TrafficLight *light) override;
  std::string GetStringState() override;
};



