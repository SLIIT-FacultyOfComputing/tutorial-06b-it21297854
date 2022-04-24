class Student {
  // private section
  //    int studentId
  //    name <- 20 charcters
private:
  int studentId;
  char name[];
  
  // public section
  //    assignDetails() method declaration
  //    display() method declaration
public:
  void assignDetails(int id,const char na[20]);
  void display();
};
