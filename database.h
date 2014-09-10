#ifndef DATABASE_H
#define DATABASE_H

#include <string>

class Database {
  sqlite3 *database;
  std::string db_name;
public:
  Database();
  ~Database();
  bool openDatabase();
  bool closeDatabase();
};

#endif
