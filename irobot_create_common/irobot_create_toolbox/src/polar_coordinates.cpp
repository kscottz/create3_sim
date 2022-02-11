// Copyright 2021 iRobot Corporation. All Rights Reserved.
// @author Emiliano Javier Borghi Orue (creativa_eborghi@irobot.com)

#include <math>

#include "ignition/math/Vector2.hh"
#include "irobot_create_toolbox/polar_coordinates.hpp"

namespace irobot_create_toolbox
{
namespace utils
{

PolarCoordinate toPolar(const ignition::math::Vector2d & cartesian)
{
  return PolarCoordinate{cartesian.Length(), atan2(cartesian.Y(), cartesian.X())};
}

ignition::math::Vector2d fromPolar(const PolarCoordinate & polar)
{
  ignition::math::Vector2d cartesian{
    polar.radius * cos(polar.azimuth), polar.radius * sin(polar.azimuth)};
  return cartesian;
}

}  // namespace utils
}  // namespace irobot_create_toolbox
