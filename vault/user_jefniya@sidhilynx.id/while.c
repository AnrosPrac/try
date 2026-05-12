class Student {
    public:
        int roll;
        string name;

        Student() {
            roll = 0;
            name = "";
        }

        Student(int r, string n) {
            roll = r;
            name = n;
        }

        void display() {
            cout << "Roll: " << roll << endl;
            cout << "Name: " << name << endl;
        }
}

int main() {
    Student s1;
    s1.display();

    Student s2(10, "John");
    s2.display();

    return 0;
}