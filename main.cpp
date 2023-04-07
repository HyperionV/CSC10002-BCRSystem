#include "_modification_.h"

int main()
{
    string start_path = "Data";

    schoolYearNode* list = loadDataFolder(start_path);



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

    // for(int i= 0; i< 3; i++) {
    //     while(hold._semester[i]._course) {
    //         cout << hold._semester[i]._course->data.name << " " << hold._semester[i]._course->data.id << endl ;
    //         while(hold._semester[i]._course->data.enrolled) {
    //             cout << hold._semester[i]._course->data.enrolled->data.firstName << hold._semester[i]._course->data.enrolled->data.lastName << endl;
    //             hold._semester[i]._course->data.enrolled= hold._semester[i]._course->data.enrolled->next;
    //         }
    //         cout << endl;
    //         hold._semester[i]._course = hold._semester[i]._course->next;
    //     }
    // }

    return 0;
}
