//dummy circle for aufgabe8
#ifndef CIRCLE_HPP
#define CIRCLE_HPP

class Circle
{
  public:
    Circle();
    Circle(double);
    double radius() const { return radius_; }

  private:
    double radius_;
};

#endif