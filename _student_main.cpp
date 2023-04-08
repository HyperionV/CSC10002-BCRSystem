#include "_student_h.h"

int StudentMain(schoolYear schoolYr, string id, studentNode* stuNode){
    string yr = id.substr(0,2);
    yr = to_string(stoi(yr) + 2000) + "-" + to_string(stoi(yr) + 2001);
    
    student A = getStudentData(id, schoolYr, stuNode);
    viewProfile(A,schoolYr);
}