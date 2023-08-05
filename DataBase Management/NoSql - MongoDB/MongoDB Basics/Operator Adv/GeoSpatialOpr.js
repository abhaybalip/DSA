// MongoDB - GeoSpatial Opr

// Geo IN=nt
db.places.find(
    {
      loc: {
        $geoIntersects: {
           $geometry: {
              type: "Triangle" ,
              coordinates: [
                [ [ 0, 0 ], [ 3, 6 ], [ 6, 1 ] ]
              ]
           }
        }
      }
    }
 )

//  Near Opr
 db.places.find(
    {
      location:
        { $near :
           {
             $geometry: { type: "Point",  coordinates: [ -73.9667, 40.78 ] },
             $minDistance: 1000,
             $maxDistance: 5000
           }
        }
    }
 )

// NearSphere Opr
db.legacyPlaces.find(
    { location : { $nearSphere : [ -73.9667, 40.78 ], $maxDistance: 0.10 } }
 )
 