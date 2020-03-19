//
// Created by win on 24/01/2020.
//

#include <iostream>
#include "PointObserver1.h"
#include "Point.h"
#include "ObservablePoint.h"

void PointObserver1::update(shared_ptr<ObservablePoint>)
{

       cout<<"Point " << ObservablePoint << "is now at (" << ObservablePoint.getX <<"," << y << ")" <<endl;

}
