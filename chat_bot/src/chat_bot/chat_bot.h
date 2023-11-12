#ifndef CHAT_BOT_H
#define CHAT_BOT_H

#include "rclcpp/rclcpp.hpp"
#include <vector>
#include <regex>

class ChatBot : public rclcpp::Node
{
private:
   std::vector<std::regex> regexs_;

public:
   ChatBot();
   void ask_command();
   void interpret_command(const std::string &command);
};

#endif // CHAT_BOT_H