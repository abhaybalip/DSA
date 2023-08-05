-- sql -  Privileges

-- privileges are assigned to user to perfor task
-- Types : 
-- create delete drop insert select update

-- display privileges
show grant for MySql_user;

-- Grant : <privileges> <db name>.<table name> <user name>
GRANT CREATE, SELECT, INSERT ON * . * TO MySql_user;

GRANT All privileges on *.* TO MySql_user;

-- Revoke :
REVOKE All privileges ON *.* FROM MySql_user;