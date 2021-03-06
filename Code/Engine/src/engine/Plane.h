//
//  Author: Vikas M.
//

#pragma once

#include "Mesh.h"

class Plane
{
public:
  Plane(void);
  ~Plane(void);

  static std::shared_ptr<Mesh> getMesh(void);
};
