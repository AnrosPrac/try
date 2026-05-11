class Student {
public:
    Student() {
        name = "Unknown";
        rollno = 0;
    }
    Student(int r, char n[]) {
        rollno = r;
        name = n;
    }
    ~Student() {
        cout << "Destructor called" << endl;
    }
    void display() {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollno << endl;
    }
private:
    int rollno;
    char name[20];
}

int main() {
    Student s1;
    s1.display();
    Student s2(1, "John");
    s2.display();
    return 0;
}