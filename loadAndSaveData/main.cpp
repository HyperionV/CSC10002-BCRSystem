#include "_modification_.h"

int main()
{
    string start_path = "Data";

    schoolYear hold = loadSchoolyear(start_path, "2020-2021");

    delete_directory(start_path);

    writeSchoolyear(start_path, hold);



    // while(hold->_class) {
    //     while(hold->_class->data._student) {
    //         cout << hold->_class->data._student->data.lastName << endl;
    //         cout << hold->_class->data._student->data._course->data.other << " "; 
    //         cout << hold->_class->data._student->data._course->data.midterm << " "; 
    //         cout << hold->_class->data._student->data._course->data.final << " "; 
    //         cout << hold->_class->data._student->data._course->data.total << endl; 


    //         hold->_class->data._student= hold->_class->data._student->next;
    //     }
    //     cout << endl;
    //     hold->_class= hold->_class->next;
    // }

    // while(hold->sem) {
    //     cout << hold->sem->name.name << " : " << endl;
    //     while(hold->sem->name._course) {
    //         cout << hold->sem->name._course->data.name << " " << hold->sem->name._course->data.className << " " << hold->sem->name._course->data.teacher << endl;
    //         cout << "Danh sach hoc sinh tham gia khoa hoc : "  << endl ;
    //             while(hold->sem->name._course->data.enrolled) {
    //                 cout << hold->sem->name._course->data.enrolled->data.lastName << endl ;
    //                 while(hold->sem->name._course->data.enrolled->data._course) {
    //                     cout << hold->sem->name._course->data.enrolled->data._course->data.other << " " << hold->sem->name._course->data.enrolled->data._course->data.midterm << " " << hold->sem->name._course->data.enrolled->data._course->data.final << endl; 
    //                     hold->sem->name._course->data.enrolled->data._course= hold->sem->name._course->data.enrolled->data._course->next;
    //                 }
    //             hold->sem->name._course->data.enrolled= hold->sem->name._course->data.enrolled->next;
    //             }
    //     hold->sem->name._course= hold->sem->name._course->next;
    //     }
    //     cout << endl << endl;
    //     hold->sem= hold->sem->next;
    // }

    return 0;
}
