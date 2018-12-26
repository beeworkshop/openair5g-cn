/**
* Namf_EventExposure Service
* AMF Event Exposure Service
*
* OpenAPI spec version: 1.R15.0.0
* 
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/


#include "EutraLocation.h"

namespace org {
namespace openapitools {
namespace server {
namespace model {

EutraLocation::EutraLocation()
{
    m_AgeOfLocationInformation = 0;
    m_AgeOfLocationInformationIsSet = false;
    m_UeLocationTimestamp = "";
    m_UeLocationTimestampIsSet = false;
    m_GeographicalInformation = "";
    m_GeographicalInformationIsSet = false;
    m_GeodeticInformation = "";
    m_GeodeticInformationIsSet = false;
    m_GlobalNgenbIdIsSet = false;
    
}

EutraLocation::~EutraLocation()
{
}

void EutraLocation::validate()
{
    // TODO: implement validation
}

nlohmann::json EutraLocation::toJson() const
{
    nlohmann::json val = nlohmann::json::object();

    val["tai"] = ModelBase::toJson(m_Tai);
    val["ecgi"] = ModelBase::toJson(m_Ecgi);
    if(m_AgeOfLocationInformationIsSet)
    {
        val["ageOfLocationInformation"] = m_AgeOfLocationInformation;
    }
    if(m_UeLocationTimestampIsSet)
    {
        val["ueLocationTimestamp"] = ModelBase::toJson(m_UeLocationTimestamp);
    }
    if(m_GeographicalInformationIsSet)
    {
        val["geographicalInformation"] = ModelBase::toJson(m_GeographicalInformation);
    }
    if(m_GeodeticInformationIsSet)
    {
        val["geodeticInformation"] = ModelBase::toJson(m_GeodeticInformation);
    }
    if(m_GlobalNgenbIdIsSet)
    {
        val["globalNgenbId"] = ModelBase::toJson(m_GlobalNgenbId);
    }
    

    return val;
}

void EutraLocation::fromJson(const nlohmann::json& val)
{
    if(val.find("ageOfLocationInformation") != val.end())
    {
        setAgeOfLocationInformation(val.at("ageOfLocationInformation"));
    }
    if(val.find("ueLocationTimestamp") != val.end())
    {
        setUeLocationTimestamp(val.at("ueLocationTimestamp"));
        
    }
    if(val.find("geographicalInformation") != val.end())
    {
        setGeographicalInformation(val.at("geographicalInformation"));
    }
    if(val.find("geodeticInformation") != val.end())
    {
        setGeodeticInformation(val.at("geodeticInformation"));
    }
    if(val.find("globalNgenbId") != val.end())
    {
        if(!val["globalNgenbId"].is_null())
        {
            GlobalRanNodeId newItem;
            newItem.fromJson(val["globalNgenbId"]);
            setGlobalNgenbId( newItem );
        }
        
    }
    
}


Tai EutraLocation::getTai() const
{
    return m_Tai;
}
void EutraLocation::setTai(Tai const& value)
{
    m_Tai = value;
    
}
Ecgi EutraLocation::getEcgi() const
{
    return m_Ecgi;
}
void EutraLocation::setEcgi(Ecgi const& value)
{
    m_Ecgi = value;
    
}
int32_t EutraLocation::getAgeOfLocationInformation() const
{
    return m_AgeOfLocationInformation;
}
void EutraLocation::setAgeOfLocationInformation(int32_t const value)
{
    m_AgeOfLocationInformation = value;
    m_AgeOfLocationInformationIsSet = true;
}
bool EutraLocation::ageOfLocationInformationIsSet() const
{
    return m_AgeOfLocationInformationIsSet;
}
void EutraLocation::unsetAgeOfLocationInformation()
{
    m_AgeOfLocationInformationIsSet = false;
}
std::string EutraLocation::getUeLocationTimestamp() const
{
    return m_UeLocationTimestamp;
}
void EutraLocation::setUeLocationTimestamp(std::string const& value)
{
    m_UeLocationTimestamp = value;
    m_UeLocationTimestampIsSet = true;
}
bool EutraLocation::ueLocationTimestampIsSet() const
{
    return m_UeLocationTimestampIsSet;
}
void EutraLocation::unsetUeLocationTimestamp()
{
    m_UeLocationTimestampIsSet = false;
}
std::string EutraLocation::getGeographicalInformation() const
{
    return m_GeographicalInformation;
}
void EutraLocation::setGeographicalInformation(std::string const& value)
{
    m_GeographicalInformation = value;
    m_GeographicalInformationIsSet = true;
}
bool EutraLocation::geographicalInformationIsSet() const
{
    return m_GeographicalInformationIsSet;
}
void EutraLocation::unsetGeographicalInformation()
{
    m_GeographicalInformationIsSet = false;
}
std::string EutraLocation::getGeodeticInformation() const
{
    return m_GeodeticInformation;
}
void EutraLocation::setGeodeticInformation(std::string const& value)
{
    m_GeodeticInformation = value;
    m_GeodeticInformationIsSet = true;
}
bool EutraLocation::geodeticInformationIsSet() const
{
    return m_GeodeticInformationIsSet;
}
void EutraLocation::unsetGeodeticInformation()
{
    m_GeodeticInformationIsSet = false;
}
GlobalRanNodeId EutraLocation::getGlobalNgenbId() const
{
    return m_GlobalNgenbId;
}
void EutraLocation::setGlobalNgenbId(GlobalRanNodeId const& value)
{
    m_GlobalNgenbId = value;
    m_GlobalNgenbIdIsSet = true;
}
bool EutraLocation::globalNgenbIdIsSet() const
{
    return m_GlobalNgenbIdIsSet;
}
void EutraLocation::unsetGlobalNgenbId()
{
    m_GlobalNgenbIdIsSet = false;
}

}
}
}
}

