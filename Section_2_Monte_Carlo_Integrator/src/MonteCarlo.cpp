#include <iostream>
#include <random>
#include <functional>

bool InsideUnitSphere(double x, double y, double z)
{
    return ((x*x + y*y + z*z) <= 1);
}

// pass a function as parameter https://www.codingame.com/playgrounds/15869/c-runnable-snippets/passing-a-function-as-parameter
double IntegrateMonteCarlo3D(int n_points, double min, double max, 
    std::function<bool(double, double, double)> isInsideUnitSphere)
{
    int count = 0;
    // N.B. std::pow with integer arguments can be less efficient than
    // writing the multiplication explicitly, so be careful about using it
    // inside loops for example!
    double VolCube = std::pow((max - min), 3);

    //set up random number generator here
    // std::default_random_engine generator;
    std::mt19937 rng_mt(1);
    std::uniform_real_distribution<double> uniform_dist(-1.0, 1.0);

    for(int i = 0; i < n_points; i++)
    {
        //generate random points here
        // std::bind so that we don't need to pass generator the the distribution every time
        // std::bind NOT WORKING; result = Volume estimate of sphere using 10000 points = 0
        double x = uniform_dist(rng_mt);
        double y = uniform_dist(rng_mt);
        double z = uniform_dist(rng_mt);
        if(isInsideUnitSphere(x, y, z)) count++;
    }

    return static_cast<double>(count) / n_points * VolCube;
}


int main()
{
    int N_points = 10000;
    
    double UnitSphereVol = IntegrateMonteCarlo3D(N_points, -1.0, 1.0,
    &InsideUnitSphere);

    std::cout << "Volume estimate of sphere using " << N_points << " points = " << UnitSphereVol << std::endl;

    std::mt19937 rng_mt(1);
    std::uniform_real_distribution<double> uniform_dist(-1.0, 1.0);

    auto generatePoint = std::bind(uniform_dist, rng_mt);
    // std::bind so that we don't need to pass generator the the distribution every time
    double x = generatePoint();
    double y = generatePoint();
    double z = generatePoint();

    std::cout << x << " " << y << " "<< z << std::endl;
    std::cout << "isInsideUnitSphere: " << InsideUnitSphere(x, y, z) << std::endl;
}