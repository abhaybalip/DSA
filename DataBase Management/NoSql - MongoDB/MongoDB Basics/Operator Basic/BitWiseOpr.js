// MongoDB - BitWise Opr

db.inventory.find( { a: { $bitsAllClear: [ 1, 5 ] } } )

db.inventory.find( { a: { $bitsAllClear: [ 1, 5 ] } } )

db.inventory.find( { a: { $bitsAnyClear: [ 5, 10 ] } } )

db.inventory.find( { a: { $bitsAnySet: [ 1, 5 ] } } )