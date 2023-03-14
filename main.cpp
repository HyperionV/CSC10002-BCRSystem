#include "_modification_.cpp"

int main() {
    schoolYear SC;
    createSchoolYear(SC, "2022");
    createClass(SC);
    semester sem;
    createSemester(sem);
    createCourse(sem);
}
