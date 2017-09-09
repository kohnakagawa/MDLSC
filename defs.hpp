#if !defined DEFS_HPP
#define DEFS_HPP

#define SIMULATION_3D

#ifdef SIMULATION_3D
#include "tensor3.hpp"

namespace LocalStress {
  template <typename T>
  using Vec = Vector3<T>;

  template <typename T>
  using Tensor = Tensor3<T>;

  enum : std::size_t {X, Y, Z, D};
}

#else
#include "tensor2.hpp"

namespace LocalStress {
  template <typename T>
  using Vec = Vector2<T>;

  template <typename T>
  using Tensor = Tensor2<T>;

  enum : std::size_t {X, Y, D};
}

#endif
#endif
