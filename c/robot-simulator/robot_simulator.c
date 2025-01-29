#include "robot_simulator.h"

robot_status_t robot_create(robot_direction_t direction, int x, int y) {

  robot_position_t pos = {x,y};
  robot_status_t rob_stat;
  rob_stat.direction = direction;
  rob_stat.position = pos;
  return rob_stat;
}

void robot_move(robot_status_t *robot, const char *commands)
{
  int i = 0;
  while(commands[i] != '\0')
  {
  robot_direction_t dir = robot->direction;
  int x = robot->position.x;
  int y = robot->position.y;
  
    if (commands[i] == 'A')
    {
      switch (dir) {
        case DIRECTION_NORTH:
          y+=1;
          break;
        case DIRECTION_SOUTH:
          y-=1;
        break;
        case DIRECTION_EAST:
          x+=1;
          break;
        case DIRECTION_WEST:
          x-=1;
          break;
        case DIRECTION_MAX:
          y+=1;
          break;
        default:
          break;
    }
    }
    else if (commands[i] == 'L'){
      if (dir > DIRECTION_NORTH)
        {dir -=1;}
      else {dir = DIRECTION_WEST;}
    }

    else if(commands[i] == 'R'){
      if (dir < DIRECTION_WEST)
        {dir +=1;}
      else{dir = DIRECTION_NORTH;}
    }
    
    robot->direction = dir;
    robot->position.x = x;
    robot->position.y = y;
    i++;
  }
}
