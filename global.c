/*
 * File:   global.h
 * Author: pehladik
 *
 * Created on 21 avril 2011, 12:14
 */

#include "global.h"

RT_TASK tServeur;
RT_TASK tconnect;
RT_TASK tmove;
RT_TASK tenvoyer;
RT_TASK twatchrobot;
RT_TASK tcheckconnexion;

RT_MUTEX mutexEtat;
RT_MUTEX mutexMove;
RT_MUTEX mutexCountErrors;

RT_SEM semConnecterRobot;
RT_SEM semCheckBattery;
RT_SEM semWatchRobot;

RT_QUEUE queueMsgGUI;
RT_QUEUE queueErrMsg;


int etatCommMoniteur = 1;
int etatCommRobot = 1;
int countErrors = 0;
DRobot *robot;
DMovement *move;
DServer *serveur;


int MSG_QUEUE_SIZE = 10;

int PRIORITY_TSERVEUR = 30;
int PRIORITY_TCONNECT = 20;
int PRIORITY_TMOVE = 10;
int PRIORITY_TENVOYER = 25;
int PRIORITY_TWATCHROBOT = 99;
int PRIORITY_TCHECKCONNEXION = 5;
