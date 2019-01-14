/**
* AMF MT Service
* AMF Mobile Termination Service
*
* OpenAPI spec version: 1.R15.0.0
* 
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/

#include "EnableUEReachabilityApi.h"
#include "Helpers.h"

namespace org {
namespace openapitools {
namespace server {
namespace api {

using namespace org::openapitools::server::helpers;
using namespace org::openapitools::server::model;

EnableUEReachabilityApi::EnableUEReachabilityApi(std::shared_ptr<Pistache::Rest::Router> rtr) { 
    router = rtr;
};

void EnableUEReachabilityApi::init() {
    setupRoutes();
}

void EnableUEReachabilityApi::setupRoutes() {
    using namespace Pistache::Rest;

    Routes::Post(*router, base + "/ue-contexts/:ueContextId/ue-reachind", Routes::bind(&EnableUEReachabilityApi::enable_ue_reachability_handler, this));

    // Default handler, called when a route is not found
    router->addCustomHandler(Routes::bind(&EnableUEReachabilityApi::enable_ue_reachability_api_default_handler, this));
}

void EnableUEReachabilityApi::enable_ue_reachability_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {
    // Getting the path params
    auto ueContextId = request.param(":ueContextId").as<std::string>();
    
    // Getting the body param
    
    EnableUeReachabilityReqData enableUeReachabilityReqData;
    
    try {
      nlohmann::json request_body = nlohmann::json::parse(request.body());
    
      enableUeReachabilityReqData.fromJson(request_body);
    
      this->enable_ue_reachability(ueContextId, enableUeReachabilityReqData, response);
    } catch (std::runtime_error & e) {
      //send a 400 error
      response.send(Pistache::Http::Code::Bad_Request, e.what());
      return;
    }

}

void EnableUEReachabilityApi::enable_ue_reachability_api_default_handler(const Pistache::Rest::Request &request, Pistache::Http::ResponseWriter response) {
    response.send(Pistache::Http::Code::Not_Found, "The requested method does not exist");
}

}
}
}
}
