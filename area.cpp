//
// Created by gaura on 2/7/2016.
//

#include <cmath>
#include "Point.h"


double computeArea(const Point &a, const Point &b, const Point &c);

double computeArea(const Point &a, const Point &b, const Point &c){
    double s, da, db, dc;

    da = a.distanceTo(b);
    db = b.distanceTo(c);
    dc = c.distanceTo(a);

    s = (da + db + dc)/2.0;

    return(sqrt(s*(s-da)*(s-db)*(s-dc)));
}
