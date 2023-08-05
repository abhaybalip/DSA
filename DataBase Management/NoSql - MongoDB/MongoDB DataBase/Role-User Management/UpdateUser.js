// MongoDB - Update User

db.updateUser("admin", { pwd: "new_password" });

db.runCommand({
    updateUser: "admin",
    updateDocument: {
      pwd: "new_password",
      roles: [
        { role: "readWrite", db: "my_db" }
      ]
    }
});