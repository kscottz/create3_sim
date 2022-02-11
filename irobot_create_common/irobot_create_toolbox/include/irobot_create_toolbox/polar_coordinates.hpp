// Copyright 2021 iRobot Corporation. All Rights Reserved.
// @author Emiliano Javier Borghi Orue (creativa_eborghi@irobot.com)

#ifndef IROBOT_CREATE_TOOLBOX__POLAR_COORDINATES_HPP_
#define IROBOT_CREATE_TOOLBOX__POLAR_COORDINATES_HPP_

#include "ignition/math/Vector2.hh"

namespace irobot_create_toolbox
{
namespace utils
{
// Very useful Polar Coordinates tools when working with Fields of views and distances.
struct PolarCoordinate
{
  double radius;
  double azimuth;
};

PolarCoordinate toPolar(const ignition::math::Vector2d & cartesian);

ignition::math::Vector2d fromPolar(const PolarCoordinate & polar);

}  // namespace utils
}  // namespace irobot_create_toolbox

#endif  // IROBOT_CREATE_TOOLBOX__POLAR_COORDINATES_HPP_
