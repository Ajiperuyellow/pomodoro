#include <iostream>
#include <string>
#include <sqlite3.h>
#include "database.h"

using namespace std;

Database::Database()
{
   db_name = "pomodoro.db";
};

bool Database::openDatabase()
{
   int rc;
   
   rc = sqlite3_open(db_name.c_str(), &database);

   if ( rc != SQLITE_OK ) {
      cout << "Database cannot opened" << endl;
      return false;
   }
   cout << "Database opened" << endl;
   return true;
};

bool Database::closeDatabase()
{
   int rc;
 
   rc = sqlite3_close(database);

   if ( rc != SQLITE_OK ) {
      cout << "Cannot close Databse" << endl;
      return false;
   }
   cout << "Database closed" << endl;
   return true;
};

Database::~Database()
{
   int rc;

   rc = sqlite3_close(database);

   if ( rc != SQLITE_OK ) {
       cout << "Destructor Cannot close Database( is closed )" << endl;
   }
};

bool Database::createTable()
{
   int rc;                //return code
   sqlite3_stmt **ppStmt; //prepared statement
  
   char zSql[] = "CREATE TABLE activitytable("
                      // "id INT PRIMARY KEY,"    
                       "activity TEXT PRIMARY KEY,"
                       "estimated_pomodoros INT,"
                       "todotodayflag INT,"
                       "priority INT,"
                       "finishedflag INT,"
                       "usedpromodoros INT,"
                       "internalinterrupt INT,"
                       "externalinterrupt INT,"
                       "unplannedurgent INT);";
   cout << zSql << endl;  

   rc = sqlite3_prepare(database,zSql,-1, ppStmt, NULL);

   if ( rc != SQLITE_OK ) {
      cout << "preparing statement in createTable() failed" << endl;
      return false;
   } 
   rc = sqlite3_step(*ppStmt);
   if ( rc == SQLITE_ERROR ) {
      cout << "error in creating table" << endl;
      return false;
   }
   if ( rc == SQLITE_DONE ) {
      rc = sqlite3_finalize(*ppStmt);
      if ( rc != SQLITE_OK ) {
         cout << "Cannot destroy the preparing statement" << endl;
         return false;
      }
      return true;
   }else{
      sqlite3_finalize(*ppStmt);
      return false;
   }
};

bool Database::insertActivityItem(std::string activity)
{
   int rc;                //return code
   sqlite3_stmt **ppStmt; //prepared statement
   std::string zSql = "INSERT INTO activitytable (activity) VALUES ('" + activity + "');"; 
   cout << zSql << endl;

   //rc = insertSqlCmd(zSql);
   //return rc;

   rc = sqlite3_prepare(database,zSql.c_str(),-1, ppStmt, NULL);

   if ( rc != SQLITE_OK ) {
      cout << "preparing statement in insertActivityItem() failed" << endl;
      return false;
   }
   rc = sqlite3_step(*ppStmt);
   if ( rc == SQLITE_ERROR ) {
      cout << "error in insertActivityItem()" << endl;
      return false;
   }
   if ( rc == SQLITE_DONE ) {
      rc = sqlite3_finalize(*ppStmt);
      if ( rc != SQLITE_OK ) {
         cout << "Cannot destroy the preparing statement" << endl;
         return false;
      }
      return true;
   }else{
      sqlite3_finalize(*ppStmt);
      return false;
   }
};

bool Database::updateEstimatedPromodoro(int activity_index, int numbers)
{

   return true;
};

bool Database::updatePomodoro(int activity_index)
{

   return true;
};

bool Database::selectDayToDoTodayActivity(int activity_index)
{

   return true;
};

bool Database::markActivityFinished(int activity_index)
{

   return true;
};

bool Database::insertExternalInterrupt(int activity_index)
{

   return true;
};

bool Database::insertInternalInterrupt(int activity_index)
{

   return true;
};

bool Database::insertUnplannedUrgentActivity(int activity_index)
{

   return true;
};

bool getActivityInventory()
{
   int rc;
   std::string zSql = "SELECT activity,estimated_pomodoros FROM activitytable;";
   sqlite3_stmt **ppStmt;
   std::string activity;
   int pomodoros;   

   rc = sqlite3_prepare(database,zSql.c_str(),-1, ppStmt, NULL);
   rc = sqlite3_step(*ppStmt);
   if ( rc == SQLITE_ROW ) {
      activity = sqlite3(*ppStmt, 0);
      pomodoros = sqlite3(*ppStmr, 1);
   }
   sqlite3_finalize(*ppStmt);  

   return true;
};

int Database::insertSqlCmd(std::string zSql)
{
   int rc;
   sqlite3_stmt **ppStmt; //prepared statement
   std::string cmdSql = zSql;

   cout << zSql << endl;

   rc = sqlite3_prepare(database,cmdSql.c_str(),-1, ppStmt, NULL);

   cout << "perpare done" << endl;

   if ( rc != SQLITE_OK ) {
      cout << "preparing statement in insertActivityItem() failed" << endl;
      return false;
   }
   rc = sqlite3_step(*ppStmt);
   if ( rc == SQLITE_ERROR ) {
      cout << "error in insertActivityItem()" << endl;
      return false;
   }
   cout << "step done" << endl;
   if ( rc == SQLITE_DONE ) {
      rc = sqlite3_finalize(*ppStmt);
      if ( rc != SQLITE_OK ) {
         cout << "Cannot destroy the preparing statement" << endl;
         return false;
      }
      return true;
   }else{
      sqlite3_finalize(*ppStmt);
      return false;
   } 
};
