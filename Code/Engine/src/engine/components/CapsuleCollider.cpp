//
//  Author: Vikas M.
//

#include "CapsuleCollider.h"

CapsuleCollider::CapsuleCollider(float radius, float height, float mass) : BaseCollider(new btCapsuleShape(radius, height), mass)
{
}
