#include <iostream>
#include "L_CL_arr.h"
#include "L_CL_list.h"
#include "L_CL_vector.h"

#include "L_CL.h"

#include "List.h"
#include "Cycle_List.h"

#include "Date.h"

#include<thread>

using std::cout;
using std::endl;
using std::function;

template <typename T>
bool b(T d)
{
	if (d % 4 == 0)return true;
	return false;
}

//template <>
//bool b</*����� �����*/>(/*����� �����*/ d)
//{
//	if (d < 50)return true;
//	return false;
//}


int main()
{
	//Cycle_List<int> L;
	//L.set_mode(3);
	//
	//cout << L.add_tail(5)<<' ';
	//cout << L.add_head(14) << ' ';
	//cout << L.add_tail(24) << ' ';
	//cout << L.add_head(105) << ' ';
	//cout << L.size() << endl << endl;
	//
	//
	//cout << L.search_by_index(L.search_first_with (b<int>)) << endl << endl;
	//cout << L.search_by_index(0) << ' '
	//	<< L.search_by_index(1) << ' '
	//	<< L.search_by_index(2) << ' '
	//	<< L.search_by_index(3) << ' '
	//	<< L.search_by_index(4) << ' '
	//	<< L.search_by_index(5) << endl << endl << endl;
	//L.clean();
	//
	//cout << L.add_tail(5) << ' ';
	//cout << L.add_head(14) << ' ';
	//cout << L.add_tail(24) << ' ';
	//cout << L.add_head(105) << ' ';
	//cout << L.size() << endl << endl;
	//
	//
	//cout << L.search_by_index(L.search_first_with(b<int>)) << endl << endl;
	//
	//L.del_i(L.search_first_with(b<int>));
	//cout << L.search_by_index(L.search_first_with(b<int>)) << endl << endl;
	//cout << L.search_by_index(0) << ' '
	//	<< L.search_by_index(1) << ' '
	//	<< L.search_by_index(2) << ' '
	//	<< L.search_by_index(3) << ' '
	//	<< L.search_by_index(4) << ' '
	//	<< L.search_by_index(5) << endl;

	Date d(2019, 14, 75, 1, 1, 1);
	cout << d.is_correct();
	d.make_correct();
	
	system("pause");
	return 0;
}