// Copyright (c) 2017 Doyub Kim
//
// I am making my contributions/submissions to this project solely in my
// personal capacity and am not conveying any rights to any intellectual
// property of any third parties.

#ifndef INCLUDE_JET_VIZ_TEXTURE_H_
#define INCLUDE_JET_VIZ_TEXTURE_H_

namespace jet {
namespace viz {

class Renderer;

enum class TextureSamplingMode : uint8_t { kNearest = 0, kLinear = 1 };

}  // namespace viz
}  // namespace jet

#endif  // INCLUDE_JET_VIZ_TEXTURE_H_