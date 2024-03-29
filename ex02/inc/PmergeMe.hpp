#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <vector>
# include <deque>
# include <string>
# include <iostream>

class PmergeMe
{
	private:
		std::vector<unsigned int>							_auxVec;
		std::vector<unsigned int>							_pendVec;
		std::vector<std::pair<unsigned int, unsigned int> > _pairVec;
		std::vector<unsigned int>							_mainVec;

		std::deque<unsigned int>							_auxDeque;
		std::deque<unsigned int>							_sortedDeque;

		size_t												_n;
		bool												_odd;
	public:
		PmergeMe(std::string argv);
		PmergeMe(PmergeMe &copy);
		PmergeMe& operator=(const PmergeMe &instance);
		~PmergeMe();

		/*vector*/
		void	sortVec();

		void	printAux();
		void	printPend();
		void	printPairs();
		void	printMain();

		class 	WrongArgumentsException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		class 	ArgumentErrorException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
};

#endif