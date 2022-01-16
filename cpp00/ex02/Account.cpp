#include "Account.hpp"
#include <iostream>
#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit){
	_accountIndex = _nbAccounts++;
	_amount = initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_totalAmount += initial_deposit;
	_displayTimestamp();
	std::cout << 
		"index:" << _accountIndex << ";" <<
		"amount:" << _amount << ";" <<
		"created" << std::endl;
}

void Account::displayAccountsInfos(void){
	_displayTimestamp();
	std::cout <<
		"accounts:"	<<	_nbAccounts	<<
		";total:"	<<	_totalAmount <<
		";deposits:"	<<	_totalNbDeposits <<
		";withdrawals:"	<<	_totalNbWithdrawals << std::endl;
}

void Account::makeDeposit(int deposit){
	int	amount;

	amount = _amount;
	_amount += deposit;
	_nbDeposits++;
	_totalAmount += deposit;
	_displayTimestamp();
	std::cout <<
		"index:"	<< _accountIndex << 
		";p_amount:" << amount <<
		";deposit:"	<< deposit <<
		";amount:"	<< _amount << 
		";nb_deposits:" << _nbDeposits << std::endl;
	_totalNbDeposits++;
}

bool Account::makeWithdrawal(int withdrawal){
	int	amount;

	amount = _amount;
	_displayTimestamp();
	std::cout << 
		"index:" << _accountIndex <<
		";p_amount:" << amount;
	if(checkAmount() < 0 || amount - withdrawal < 0)
	{
		std::cout << ";withdrawal:refused" << std::endl;
		return(false);
	}
	_amount -= withdrawal;
	_nbWithdrawals++;
	std::cout <<
		";withdrawal:" << withdrawal <<
		";amount:" << _amount <<
		";nb_withdrawals:" << _nbWithdrawals << std::endl;
	_totalAmount -= withdrawal;
	_totalNbWithdrawals++;
	return(true);

}

int Account::checkAmount(void) const{
	return(_amount);
}

void Account::displayStatus(void) const {
	_displayTimestamp();
	std::cout << 
		"index:"	<< _accountIndex <<
		";amount:"	<< _amount <<
		";deposits:"	<< _nbDeposits <<
		";withdrawals:" << _nbWithdrawals << std::endl;
}

void Account::_displayTimestamp(void){
	time_t		rawtime;
	struct tm	*timeinfo;
	char		buffer[16];

	time (&rawtime);
	timeinfo = localtime (&rawtime);
	strftime (buffer,16,"%Y%m%d_%H%M%S",timeinfo);
	std::cout << "[" << buffer << "] ";
}

int Account::getNbAccounts(void){
	return(_nbAccounts);
}

int Account::getTotalAmount(void){
	return(_totalAmount);
}

int Account::getNbDeposits(void){
	return(_totalNbDeposits);
}

int Account::getNbWithdrawals(void){
	return(_totalNbWithdrawals);
}

Account::~Account(void){
	_displayTimestamp();
	std::cout <<
		"index:" << _accountIndex <<
		";amount:" << _amount <<
		";closed" << std::endl;
}