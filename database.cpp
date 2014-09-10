#include <iostream>
#include <string>
#include <sqlite3.h>
#include "database-h"

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
   return true;
};

bool Database::closeDatabase()
{
   int rc;
 
   rc = sqlite3_close(databse);

   if ( rc != SQLITE_OK ) {
      cout << "Cannot close Databse" << endl;
      return false;
   }
   return true;
};

Database::~Database()
{
   int rc;

   rc = sqlite3_close(database);

   if ( rc != SQLITE_OK ) {
       cout << "Cannot close Database" << endl;
   }
};


