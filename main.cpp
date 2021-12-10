#include "config.h"

// TODO: use some formatter to reformat the code

int main(int argc, char *argv[]) {
  // TODO: move these hard code infos to config files or environments
  string user = "root";
  string passwd = "root";
  string databasename = "yourdb";

  // parse configuration
  Config config;
  config.parse_arg(argc, argv);

  // TODO: check this: Should it include the webserver.h explictly?
  // Is this way the best practice?
  WebServer server;

  // setup the server
  server.init(config.PORT, user, passwd, databasename, config.LOGWrite,
              config.OPT_LINGER, config.TRIGMode, config.sql_num,
              config.thread_num, config.close_log, config.actor_model);

  // setup logging
  server.log_write();

  // setup database
  server.sql_pool();

  // setup thread pool
  server.thread_pool();

  // trigger mode
  server.trig_mode();

  // listen to events
  server.eventListen();

  // start a loop to serve
  server.eventLoop();

  return 0;
}
