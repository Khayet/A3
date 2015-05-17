#include "circle.hpp"

Circle::Circle() 
{
  radius_ = 0.0;
}

Circle::Circle(double r)
{
  radius_ = r;
}

/*
bool operator<(const Circle& lhs, const Circle& rhs)
{
  return (lhs.radius() < rhs.radius());
}

bool operator==(const Circle& lhs, const Circle& rhs)
{
  return (lhs.radius() == rhs.radius());
}

bool operator>(const Circle& lhs, const Circle& rhs)
{
  return (lhs.radius() > rhs.radius());
}
*/