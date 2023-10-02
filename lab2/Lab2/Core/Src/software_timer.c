/*
 * software_timer.c
 *
 *  Created on: Oct 2, 2023
 *      Author: pc msi
 */
#include "software_timer.h"

int timerCounter[10] = {0};
int timerFlag[10] = {0};

void setTimer(int timer_ID, int duration){
	timerCounter[timer_ID] = duration;
	timerFlag[timer_ID] = 0;
}
void timerRun(int timer_ID){
	if(timerCounter[timer_ID] > 0){
		timerCounter[timer_ID]--;
		if(timerCounter[timer_ID] <= 0){
			timerFlag[timer_ID] = 1;
		}
	}
}
