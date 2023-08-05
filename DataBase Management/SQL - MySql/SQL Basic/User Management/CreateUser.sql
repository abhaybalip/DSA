-- sql - create user
-- username and Hostname is seaperated by @
CREATE USER [IF NOT EXISTS] username@hostname IDENTIFIED BY 'Password';

-- user without hostname
CREATE USER [IF NOT EXISTS] username@% IDENTIFIED BY 'Password';