#ifndef RESSOURCE_CONSTANTS_H
#define RESSOURCE_CONSTANTS_H

#define DATABASE_FILENAME "DataBase.wfdb"

// ******************************************************************
// ======================= SQL statements: ==========================
// ******************************************************************

/*
 * MailAccounts
 *	- MailID INTEGER PRIMARY KEY
 *	- MailAddress TEXT
 *
 * Passwords
 *	- PasswordID INTEGER PRIMARY KEY
 *	- Salt TEXT
 *	- Password TEXT
 *
 * Entries
 *	- EntryID INTEGER PRIMARY KEY
 *	- Service TEXT
 *	- UserName TEXT
 *	- MailID INTEGER REFERENCES MailAccounts (MailID)
 *	- Notes TEXT
 *	- PasswordID INTEGER REFERENCES Passwords(PasswordID)
 *
 * Options
 *	- OptionID INTEGER PRIMARY KEY
 *	- OptionKey TEXT
 *	- OptionValue TEXT
 */
#define CREATE_NEW_DATABASE "PRAGMA foreign_keys = ON; CREATE TABLE IF NOT EXISTS MailAccounts (MailID INTEGER PRIMARY KEY, MailAddress TEXT); CREATE TABLE IF NOT EXISTS Passwords (PasswordID INTEGER PRIMARY KEY, Salt TEXT, Password TEXT); CREATE TABLE IF NOT EXISTS Entries (EnrtryID INTEGER PRIMARY KEY, Service TEXT, UserName TEXT, MailID INTEGER REFERENCES MailAccounts (MailID), Notes TEXT, PasswordID INTEGER REFERENCES Passwords(PasswordID)); CREATE TABLE IF NOT EXISTS Options(OptionID INTEGER PRIMARY KEY, OptionKey TEXT, OptionValue TEXT);"

 // INSERT statements:
#define INSERT_NEW_MAILACCOUNT_PART_1 "PRAGMA foreign_keys = ON; INSERT INTO MailAccounts (MailAddress) VALUES (\""
#define INSERT_NEW_MAILACCOUNT_PART_2 "\");"
#define INSERT_NEW_PASSWORD_PART_1 "PRAGMA foreign_keys = ON; INSERT INTO Passwords (Salt, Password) VALUES (\""
#define INSERT_NEW_PASSWORD_PART_2 "\", \""
#define INSERT_NEW_PASSWORD_PART_3 "\");"
#define INSERT_NEW_ENTRY_PART_1 "PRAGMA foreign_keys = ON; INSERT INTO Entries (Service, UserName, MailID, Notes, PasswordID) VALUES (\""
#define INSERT_NEW_ENTRY_PART_2 "\", \""
#define INSERT_NEW_ENTRY_PART_3 "\", "
#define INSERT_NEW_ENTRY_PART_4 ", \""
#define INSERT_NEW_ENTRY_PART_5 "\", "
#define INSERT_NEW_ENTRY_PART_6 ");"
#define INSERT_NEW_OPTION_PART_1 "PRAGMA foreign_keys = ON; INSERT INTO Options (OptionKey, OptionValue) VALUES (\""
#define INSERT_NEW_OPTION_PART_2 "\", \""
#define INSERT_NEW_OPTION_PART_3 "\");"

#endif RESSOURCE_CONSTANTS_H
