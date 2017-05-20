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

    /** Augmented Sigma Points */
//    MatrixXd Xsig_aug = MatrixXd(15, 7);
//    ukf.AugmentedSigmaPoints(&Xsig_aug);

    /** Sigma point prediction */
//    MatrixXd Xsig_pred = MatrixXd(15, 5);
//    ukf.SigmaPointPrediction(&Xsig_pred);

/** Predict mean and covariance */
//    VectorXd x_pred = VectorXd(5);
//    MatrixXd P_pred = MatrixXd(5, 5);
//    ukf.PredictMeanAndCovariance(&x_pred, &P_pred);
/** Predict Radar Measurements */
    VectorXd z_out = VectorXd(3);
    MatrixXd S_out = MatrixXd(3, 3);
    ukf.PredictRadarMeasurement(&z_out, &S_out);

    return 0;
}