#include "common_header.h"

#include "ukf.h"

using namespace std;
using Eigen::MatrixXd;
using Eigen::VectorXd;
using std::vector;

int main() {

    //Create a UKF instance
    UKF ukf;

/*******************************************************************************
* Programming assignment calls
*******************************************************************************/

//    MatrixXd Xsig = MatrixXd(11, 5);
//    ukf.GenerateSigmaPoints(&Xsig);
//    std::cout << "Xsig = " << std::endl << Xsig << std::endl;

    /**
     * Augmented Sigma Points
     */
    MatrixXd Xsig_aug = MatrixXd(15, 7);
    ukf.AugmentedSigmaPoints(&Xsig_aug);

    //print result

    return 0;
}