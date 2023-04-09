#include "_student_h.h"

int StudentMain(schoolYearNode* schoolYrHead, string id, studentNode* stuNode)
{
    string yr = id.substr(0,2);
    yr = to_string(stoi(yr) + 2000) + "-" + to_string(stoi(yr) + 2001);
    schoolYear thisYr;
    bool check = false;
    while (schoolYrHead)
    {
        if (schoolYrHead->data._schoolYear == yr) {
            thisYr = schoolYrHead->data;
            check = true;
            break;
        }
        schoolYrHead = schoolYrHead->next;
    }
    if (check)
    {
        classNode* tmp =thisYr._class;
        studentNode* tmpStu;
        while (tmp || !stuNode)
        {
            while (tmp->data._student)
            {
                tmpStu = tmp->data._student;
                if (tmpStu->data.id == id)
                {
                    stuNode = tmpStu;
                    break;
                }
                tmp->data._student = tmp->data._student->next;
            }
            if (!tmp && !stuNode) 
            {
                cout << "No student exists with such student id\n";
                break;
            } 
            tmp=tmp->next;
        }
        if (stuNode){
            student A = getStudentData(id, thisYr._schoolYear, stuNode);
            viewProfile(A,thisYr);
        }
    }
    else {
        cout << "Unable to locate school year\n";
        return 0;
    }
}