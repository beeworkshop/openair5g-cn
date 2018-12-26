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


#include "VelocityEstimate.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

VelocityEstimate::VelocityEstimate()
{
    m_HSpeed = 0.0f;
    m_Bearing = 0;
    m_VSpeed = 0.0f;
    m_HUncertainty = 0.0f;
    m_VUncertainty = 0.0f;
    
}

VelocityEstimate::~VelocityEstimate()
{
}

void VelocityEstimate::validate()
{
    // TODO: implement validation
}

nlohmann::json VelocityEstimate::toJson() const
{
    nlohmann::json val = nlohmann::json::object();

    val["hSpeed"] = m_HSpeed;
    val["bearing"] = m_Bearing;
    val["vSpeed"] = m_VSpeed;
    val["vDirection"] = ModelBase::toJson(m_VDirection);
    val["hUncertainty"] = m_HUncertainty;
    val["vUncertainty"] = m_VUncertainty;
    

    return val;
}

void VelocityEstimate::fromJson(const nlohmann::json& val)
{
    setHSpeed(val.at("hSpeed"));
    setBearing(val.at("bearing"));
    setVSpeed(val.at("vSpeed"));
    setHUncertainty(val.at("hUncertainty"));
    setVUncertainty(val.at("vUncertainty"));
    
}


float VelocityEstimate::getHSpeed() const
{
    return m_HSpeed;
}
void VelocityEstimate::setHSpeed(float const value)
{
    m_HSpeed = value;
    
}
int32_t VelocityEstimate::getBearing() const
{
    return m_Bearing;
}
void VelocityEstimate::setBearing(int32_t const value)
{
    m_Bearing = value;
    
}
float VelocityEstimate::getVSpeed() const
{
    return m_VSpeed;
}
void VelocityEstimate::setVSpeed(float const value)
{
    m_VSpeed = value;
    
}
VerticalDirection VelocityEstimate::getVDirection() const
{
    return m_VDirection;
}
void VelocityEstimate::setVDirection(VerticalDirection const& value)
{
    m_VDirection = value;
    
}
float VelocityEstimate::getHUncertainty() const
{
    return m_HUncertainty;
}
void VelocityEstimate::setHUncertainty(float const value)
{
    m_HUncertainty = value;
    
}
float VelocityEstimate::getVUncertainty() const
{
    return m_VUncertainty;
}
void VelocityEstimate::setVUncertainty(float const value)
{
    m_VUncertainty = value;
    
}

}
}
}
}

