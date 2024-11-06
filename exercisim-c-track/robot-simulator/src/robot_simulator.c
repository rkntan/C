#include "robot_simulator.h"

robot_status_t robot_create(robot_direction_t direction, int x, int y) {

    robot_status_t my_robot = {.direction = direction, .position = {x, y}};

    return my_robot;
}

void robot_move(robot_status_t *robot, const char *commands) {

    for (int i = 0; commands[i] != '\0'; i++) {
        switch (commands[i]) {
        case 'R':
            robot->direction = (robot->direction + 1) % DIRECTION_MAX;

            break;
        case 'L':
            robot->direction = (robot->direction - 1 + DIRECTION_MAX) % DIRECTION_MAX;

            break;
        case 'A':
            switch (robot->direction) {
            case DIRECTION_NORTH:
                robot->position.y += 1;
                break;
            case DIRECTION_EAST:
                robot->position.x += 1;
                break;
            case DIRECTION_SOUTH:
                robot->position.y -= 1;
                break;
            case DIRECTION_WEST:
                robot->position.x -= 1;
                break;
            default:
                break;
            }
            break;
        default:
            break;
        }
    }
}