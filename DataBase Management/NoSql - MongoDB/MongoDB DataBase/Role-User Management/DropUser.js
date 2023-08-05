// MongoDB - Drop User

db.runCommand({
    dropUser: 'admin',
    writeConcern: null
});

db.dropUser('admin')

db.dropAllUsers()