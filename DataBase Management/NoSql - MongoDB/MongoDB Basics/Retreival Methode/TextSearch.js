// MongoDB - Text Search

use('test');

db.getCollection('language');

db.language.insertMany([
    {_id:1 ,Name:'c'},
    {_id:2 ,Name:'cpp'},
    {_id:3 ,Name:'java'},
    {_id:4 ,Name:'python'},
    {_id:5 ,Name:'dart'},
    {_id:6 ,Name:'javascript'}
]);

show('collections');

db.language.createIndex({Name:'text',description:'text'});

db.language.find( { $text: { $search: "cpp" } } );