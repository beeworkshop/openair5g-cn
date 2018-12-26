/**
* AMF Location Service
* AMF Location Service
*
* OpenAPI spec version: 1.R15.0.0
* 
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/
/*
 * ProvideUELocation.h
 *
 * 
 */

#ifndef ProvideUELocation_H_
#define ProvideUELocation_H_


#include "ModelBase.h"

#include "GnssPositioningMethodAndUsage.h"
#include "AccuracyFulfilmentIndicator.h"
#include "Ecgi.h"
#include "Ncgi.h"
#include "CivicAddress.h"
#include "GeographicArea.h"
#include "VelocityEstimate.h"
#include "PositioningMethodAndUsage.h"
#include <string>
#include <vector>

namespace org {
namespace openapitools {
namespace server {
namespace model {

/// <summary>
/// 
/// </summary>
class  ProvideUELocation
    : public ModelBase
{
public:
    ProvideUELocation();
    virtual ~ProvideUELocation();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    nlohmann::json toJson() const override;
    void fromJson(const nlohmann::json& json) override;

    /////////////////////////////////////////////
    /// ProvideUELocation members

    /// <summary>
    /// 
    /// </summary>
    GeographicArea getLocationEstimate() const;
    void setLocationEstimate(GeographicArea const& value);
    bool locationEstimateIsSet() const;
    void unsetLocationEstimate();
    /// <summary>
    /// 
    /// </summary>
    AccuracyFulfilmentIndicator getAccuracyFulfilmentIndicator() const;
    void setAccuracyFulfilmentIndicator(AccuracyFulfilmentIndicator const& value);
    bool accuracyFulfilmentIndicatorIsSet() const;
    void unsetAccuracyFulfilmentIndicator();
    /// <summary>
    /// 
    /// </summary>
    int32_t getAgeOfLocationEstimate() const;
    void setAgeOfLocationEstimate(int32_t const value);
    bool ageOfLocationEstimateIsSet() const;
    void unsetAgeOfLocationEstimate();
    /// <summary>
    /// 
    /// </summary>
    VelocityEstimate getVelocityEstimate() const;
    void setVelocityEstimate(VelocityEstimate const& value);
    bool velocityEstimateIsSet() const;
    void unsetVelocityEstimate();
    /// <summary>
    /// 
    /// </summary>
    std::vector<PositioningMethodAndUsage>& getPositioningData();
    bool positioningDataIsSet() const;
    void unsetPositioningData();
    /// <summary>
    /// 
    /// </summary>
    GnssPositioningMethodAndUsage getGnssPositioningData() const;
    void setGnssPositioningData(GnssPositioningMethodAndUsage const& value);
    bool gnssPositioningDataIsSet() const;
    void unsetGnssPositioningData();
    /// <summary>
    /// 
    /// </summary>
    Ecgi getEcgi() const;
    void setEcgi(Ecgi const& value);
    bool ecgiIsSet() const;
    void unsetEcgi();
    /// <summary>
    /// 
    /// </summary>
    Ncgi getNcgi() const;
    void setNcgi(Ncgi const& value);
    bool ncgiIsSet() const;
    void unsetNcgi();
    /// <summary>
    /// 
    /// </summary>
    std::string getTargetServingNode() const;
    void setTargetServingNode(std::string const& value);
    bool targetServingNodeIsSet() const;
    void unsetTargetServingNode();
    /// <summary>
    /// 
    /// </summary>
    CivicAddress getCivicAddress() const;
    void setCivicAddress(CivicAddress const& value);
    bool civicAddressIsSet() const;
    void unsetCivicAddress();
    /// <summary>
    /// 
    /// </summary>
    int32_t getBarometricPressure() const;
    void setBarometricPressure(int32_t const value);
    bool barometricPressureIsSet() const;
    void unsetBarometricPressure();
    /// <summary>
    /// 
    /// </summary>
    std::string getSupportedFeatures() const;
    void setSupportedFeatures(std::string const& value);
    bool supportedFeaturesIsSet() const;
    void unsetSupportedFeatures();

protected:
    GeographicArea m_LocationEstimate;
    bool m_LocationEstimateIsSet;
    AccuracyFulfilmentIndicator m_AccuracyFulfilmentIndicator;
    bool m_AccuracyFulfilmentIndicatorIsSet;
    int32_t m_AgeOfLocationEstimate;
    bool m_AgeOfLocationEstimateIsSet;
    VelocityEstimate m_VelocityEstimate;
    bool m_VelocityEstimateIsSet;
    std::vector<PositioningMethodAndUsage> m_PositioningData;
    bool m_PositioningDataIsSet;
    GnssPositioningMethodAndUsage m_GnssPositioningData;
    bool m_GnssPositioningDataIsSet;
    Ecgi m_Ecgi;
    bool m_EcgiIsSet;
    Ncgi m_Ncgi;
    bool m_NcgiIsSet;
    std::string m_TargetServingNode;
    bool m_TargetServingNodeIsSet;
    CivicAddress m_CivicAddress;
    bool m_CivicAddressIsSet;
    int32_t m_BarometricPressure;
    bool m_BarometricPressureIsSet;
    std::string m_SupportedFeatures;
    bool m_SupportedFeaturesIsSet;
};

}
}
}
}

#endif /* ProvideUELocation_H_ */
