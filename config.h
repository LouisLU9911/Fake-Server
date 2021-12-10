// TODO: check the following definition is the best practice or not
#ifndef CONFIG_H
#define CONFIG_H

#include "webserver.h"

using namespace std;

class Config
{
public:
    Config();
    ~Config(){};

    void parse_arg(int argc, char*argv[]);

    // TODO: check the usage of these useful settings

    int PORT;

    // log mode
    // TODO: Is the naming rule of variables right?
    int LOGWrite;

    // trigger mode
    int TRIGMode;

    // listenfd trigger
    int LISTENTrigmode;

    // connfd trigger
    int CONNTrigmode;

    // TODO: why this way is elegant?
    int OPT_LINGER;

    // sql connection num
    int sql_num;

    // thread num
    int thread_num;

    // use log or not
    // TODO: use enable to set this thing
    int close_log;

    // TODO: use concurrency mode to replace this
    int actor_model;
};

#endif