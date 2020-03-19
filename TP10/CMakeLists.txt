cmake_minimum_required(VERSION 3.7)
project(tp10)

set(CMAKE_CXX_STANDARD 14)

add_executable(tp10 main.cpp Observateur.cpp Observateur.h Agriculteur.cpp Agriculteur.h Sujet.cpp Sujet.h StationMeteo.cpp StationMeteo.h Point.cpp Point.h Subject.cpp Subject.h Observer.cpp Observer.h ObservablePoint.cpp ObservablePoint.h PointObserver1.cpp PointObserver1.h)