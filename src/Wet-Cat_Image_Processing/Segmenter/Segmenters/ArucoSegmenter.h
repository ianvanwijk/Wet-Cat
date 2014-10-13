#ifndef ARUCOSEGMENTER_H
#define ARUCOSEGMENTER_H

#include "../ISegmenter.h"
#include <aruco/aruco.h>
#include "../../Defines.h"
#include "../../Blob.h"

class ArucoSegmenter : public ISegmenter
{
public:
    ArucoSegmenter();
    virtual bool segment(Image *image);
    aruco::MarkerDetector* MDetector;
    vector<aruco::Marker> Markers;
};

#endif // ARUCOSEGMENTER_H
