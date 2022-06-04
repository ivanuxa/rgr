#ifndef FLIGHT_H_
#define FLIGHT_H_
#define ID unsigned int
#define TIME unsigned int
typedef struct {
    ID id;
    char* departurePoint;
    char* destinationPoint;
    TIME time[2];
} Flight;

#endif // FLIGHT_H_