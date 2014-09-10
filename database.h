#ifndef DATABASE_H
#define DATBASE_H

class Database {
  sqlite3 *database;
  string db_name;
public:
  Database();
  ~Database();
  bool openDatabase();
  bool closeDatabase();
};
