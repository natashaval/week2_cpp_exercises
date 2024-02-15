#include <iostream>
#include <random>
#include <functional>

bool InsideUnitSphere(double x, double y, double z)
{
    return ((x*x + y*y + z*z) <= 1);
}

bool InsideNSphere(std::vector<double> point)
{
    double inner_prod = 0;
    for (const auto &x: point) {
        inner_prod += (x*x);
    }
    return (inner_prod <= 1);
}

// pass a function as parameter https://www.codingame.com/playgrounds/15869/c-runnable-snippets/passing-a-function-as-parameter
double IntegrateMonteCarlo3D(int n_points, int num_dim, double min, double max, 
    std::function<bool(std::vector<double>)> testPoint)
{
    int count = 0;
    // N.B. std::pow with integer arguments can be less efficient than
    // writing the multiplication explicitly, so be careful about using it
    // inside loops for example!
    double VolCube = std::pow((max - min), num_dim);

    //set up random number generator here
    // std::default_random_engine generator;
    std::mt19937 rng_mt(1);
    std::uniform_real_distribution<double> uniform_dist(min, max);

    // SOLUTION: std::bind
    auto ran_pos = std::bind(uniform_dist, rng_mt);

    std::vector<double> point(num_dim);
    for(int i = 0; i < n_points; i++)
    {
        //generate random points here
        // std::bind so that we don't need to pass generator the the distribution every time
        // std::bind NOT WORKING; result = Volume estimate of sphere using 10000 points = 0
        // double x = uniform_dist(rng_mt);
        // double y = uniform_dist(rng_mt);
        // double z = uniform_dist(rng_mt);

        for (auto &x: point) {
            x = ran_pos();
        }
        if(testPoint(point)) count++;
    }

    return static_cast<double>(count) / n_points * VolCube;
}


int main()
{
    int N_points;

    std::cout << "Enter the number of points to sample (default = 1000): ";
    std::cin >> N_points;
    if (N_points == 0) N_points = 1000;
    
    double circleArea = IntegrateMonteCarlo3D(N_points, 2, -1.0, 1.0,
    &InsideNSphere);
    double sphereVolume = IntegrateMonteCarlo3D(N_points, 3, -1.0, 1.0,
    &InsideNSphere);

    std::cout << "Volume estimate of circle using " << N_points << " points = " << circleArea << std::endl;
    std::cout << "Volume estimate of sphere using " << N_points << " points = " << sphereVolume << std::endl;
}