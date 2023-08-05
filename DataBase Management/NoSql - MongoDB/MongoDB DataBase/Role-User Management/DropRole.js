// MongoDB - Drop Role

db.runCommand({
    dropRole: "readWrite",
    writeConcern: null
});

db.dropRole('admin');

db.dropAllRoles();