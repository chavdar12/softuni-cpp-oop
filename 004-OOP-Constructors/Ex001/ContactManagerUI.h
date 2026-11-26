#ifndef CONTACT_MANAGER_UI_H
#define CONTACT_MANAGER_UI_H

#include "Echo.h"
#include "EmailContact.h"
#include <algorithm>
#include <sstream>
#include <vector>

class ContactManagerUI {
  std::vector<EmailContact> &contacts;
  bool running;

public:
  ContactManagerUI(std::vector<EmailContact> &contacts, bool hintsOn);

  void start();

  void stop();

private:
  void handleInput(char choice);

  void printMenu();

  std::vector<EmailContact>::iterator queryContact();
};

#endif // !CONTACT_MANAGER_UI_H
