#ifndef WHEEL_H_
#define WHEEL_H_

#include <functional>
#include <string>

class Wheel {
public:
  Wheel(int angle, const std::function<void(bool)> &onFullTurn);

  void turn(int angle);

  std::string toString() const;

private:
  int _angle;
  std::function<void(bool)> onFullTurnCb;
};

#endif /* WHEEL_H_ */
