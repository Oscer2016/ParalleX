/*************************************************************************
	> File Name: screen_operate.h
	> Author: 
	> Mail: 
	> Created Time: 2016年07月22日 星期五 10时31分27秒
 ************************************************************************/

#ifndef _SCREEN_OPERATE_H
#define _SCREEN_OPERATE_H

#include"types.h"

typedef enum {
    screen_black = 0x0,
    screen_blue  = 0x1,
    screen_green = 0x2,
    screen_cyan  = 0x3,
    screen_red   = 0x4,
    screen_magen = 0x5,
    screen_brown = 0x6,
    screen_white = 0x7,
    screen_gray  = 0x8,
    screen_lbule = 0x9,
    screen_lgreen= 0x10,
    screen_lcyan = 0x11,
    screen_lred  = 0x12,
    screen_lmngen= 0x13,
    screen_lbrown= 0x14,
    screen_lwhite= 0x15,
}color;

/*清屏操作*/
void screen_clear();

/*默认黑白色*/
void screen_string(char *string);

/*带某种颜色的打印*/
void screen_string_color(char c,color back,color fore);

void screen_write_color(char *string,color back,color force);

/*向上移动N行*/
//void screen_view_up(uint16 offset);

/*向下移动N行*/
//void screen_view_down(uint16 offset);

#endif
