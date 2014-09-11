#include <iostream>
#include <string>
#include <sqlite3.h>
#include "database.h"

using namespace std;

Database::Database()
{
   db_name = "promodoro.db";
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
   //char zSql[] = "CREATE TABLE activitytable(index PRIMARY KEY, activity TEXT, 

   return true;
};

bool Database::insertActivityItem(std::string activity)
{

   return true;
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
