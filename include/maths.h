#ifndef MATHS_H
#define MATHS_H
#include <math.h>
#include <stdio.h>

#define PI 3.141592653589793238462643383279502884197169399375105820974944592307816406286208998628034825342117068

/* STRUCTURES */

// structure d'un vecteur
typedef struct Vector3d{
    double x;
    double y;
    double z;
} Vector3d;

// structure d'un point
typedef struct Point3d{
    double x;
    double y;
    double z;
} Point3d;

// structure d'un angle
typedef struct Angle3d{
    double x;
    double y;
    double z;
} Angle3d;

/* FONCTIONS */

void turnVectorAngle(Vector3d *vct, Angle3d *angle);
double degToRad(double a);
double calculateDiscriminant(double a, double b, double c);
double calculateFirstSolution(double disc, double a, double b);
double calculateSecondSolution(double disc, double a, double b);
int minPositiveTabIndex(double *tab, int sizeTab);
double pixelToMeter(double px);
double angleBetweenVectors(Vector3d *v1, Vector3d *v2);
double distBetweenPoints(Point3d *p1, Point3d *p2);
double illuminationInfluence(double illumination);

#endif