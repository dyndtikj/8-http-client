//
// Created by maks on 31.01.2022.
//

#ifndef LAB_08_HTTP_CLIENT_CLIENT_HPP
#define LAB_08_HTTP_CLIENT_CLIENT_HPP

#include "nlohmann/json.hpp"
#include <iostream>
#include <thread>
#include <fstream>
#include <shared_mutex>
#include <sstream>
#include <ostream>
#include <iomanip>
#include <memory>
#include <string>

class suggester_client {
 public:
  std::string request();
  void parse_suggest(const std::string& response_json,
                     std::ostream& out);
};





#endif  // LAB_08_HTTP_CLIENT_CLIENT_HPP
