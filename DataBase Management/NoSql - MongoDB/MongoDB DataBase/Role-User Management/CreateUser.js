// MongoDB - Create User

db.createUser({
    user: 'test_user',
    pwd: 'test_pass',
    roles: [
        {role:'readWrite',db: 'test'}
    ],
    // parametre
    writeConcern: null,
    authenticationRestrictions: [
        { clientSource: null },
    ],
    mechanisms: null, 
    digestPassword: null
});

// show user role
db.getRole();