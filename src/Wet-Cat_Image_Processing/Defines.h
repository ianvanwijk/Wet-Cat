#ifndef DEFINES_H
#define DEFINES_H

//blob movement possibility
#define MAX_MOVEMENT 75

//blob types
#define CAT1 1
#define CAT2 2
#define CAT3 3
#define DANGER1 4
#define DANGER2 5
#define DANGER3 6
#define DANGER4 7
#define REMOVE 8
#define NONE 0

//blob statuses
#define FIRST_SEEN 1
#define SEEN 2
#define ACTION_READY 3
#define ACTION_EXECUTE 4
#define ACTION_DONE 5

//default image size
#define WIDTH 640
#define HEIGHT 480

//fps of timertick (2 fps, = 500ms)
#define FPS 5

//default camera to use
#define CAMERA 0

//UART settings
#define COMPORT "COM2"
#define BAUDRATE 9600

#endif // DEFINES_H
