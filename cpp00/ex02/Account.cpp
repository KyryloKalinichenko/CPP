#include "Account.hpp"
#include <iostream>
#include <ctime>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit ){
	_nbAccounts += 1;
	Account::_totalAmount += initial_deposit;
	Account::_totalNbDeposits += 1;
	this->_accountIndex = _nbAccounts - 1;
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:"
		<< initial_deposit << ";created" << std::endl;
    return ;
}

Account::~Account( void ){
	Account::_nbAccounts -= 1;
	Account::_totalAmount -= _amount;
	Account::_totalNbWithdrawals += 1;
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:"
		<< _amount << ";closed" << std::endl;
    return ;
}

void Account::makeDeposit( int deposit ){
	this->_amount += deposit;
	this->_nbDeposits += 1;
	Account::_totalNbDeposits += 1;
	Account::_totalAmount += deposit;
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";p_amount:"
		<< this->_amount - deposit << ";deposit:" << deposit <<
		";amount:" << _amount << ";nb_deposits:" << this->_nbDeposits << std::endl;
    return ;
}

bool Account::makeWithdrawal( int withdrawal ){
	if (_amount > withdrawal){
		this->_amount -= withdrawal;
		Account::_totalNbWithdrawals++;
		this->_nbWithdrawals++;
		_displayTimestamp();
		std::cout << "index:" << this->_accountIndex << ";p_amount:"
			<< this->_amount + withdrawal << ";withdrawal:" << withdrawal <<
			";amount:" << _amount << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
    	return 0;
	}
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";p_amount:"
		<< this->_amount << ";withdrawal:refused" << std::endl;
	return 1;
}

int Account::checkAmount( void ) const{
    return this->_amount;
}

void Account::displayStatus( void ) const{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:"
		<< _amount << ";deposits:" << _nbDeposits <<
		";withdrawals:" << _nbWithdrawals << std::endl;
    return ;
}

int	Account::getNbAccounts( void ){
	return _nbAccounts;
}

int	Account::getTotalAmount( void ){
	return _totalAmount;
}

int	Account::getNbDeposits( void ){
	return _totalNbDeposits;
}

int	Account::getNbWithdrawals( void ){
	return _totalNbWithdrawals;
}

void	Account::displayAccountsInfos( void ){
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts() << ";total:" << getTotalAmount()
		<< ";deposits:" << getNbDeposits() << ";withdrawals:" << getNbWithdrawals() << std::endl;
	return ;
}

void	Account::_displayTimestamp( void ){
	std::time_t res = std::time(nullptr);
	std::string here = std::asctime(std::localtime(&res));
	here.pop_back();
	here += " ] ";
	here.insert(0, "[ ");
	std::cout << here;
	return ;
}
