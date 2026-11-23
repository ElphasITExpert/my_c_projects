🎓 Student Grading System in C
📌 Project Description

The Student Grading System is a simple console-based application written in the C programming language. It is designed to process and evaluate the average marks of 10 students, assign grades based on their performance, and determine whether each student has passed or failed.

This project demonstrates fundamental C programming concepts, including functions, arrays, loops, conditional statements, and input validation.

✨ Features
Accepts marks for 10 students.
Validates user input (marks must be between 0 and 100).
Automatically assigns grades based on student marks.
Determines whether a student has passed or failed.
Uses a grading function to simplify grade calculation.
Displays a final summary of student results.
📊 Grading System
Marks Range	Grade	Result
70–100	A	Pass
60–69	B	Pass
50–59	C	Pass
40–49	D	Pass
0–39	F	Fail
🛠️ Technologies Used
Programming Language: C
Compiler: GCC
Editor: Visual Studio Code (or any C-supported editor)
Platform: Windows, Linux, or macOS
🚀 How to Run the Project
1. Clone the repository
bash
git clone https://github.com/YOUR-USERNAME/YOUR-REPOSITORY.git

2. Navigate to the project folder
bash
cd YOUR-REPOSITORY

3. Compile the program

Using GCC:

bash
gcc main.c -o grading_system

4. Run the program

Windows:

bash
grading_system.exe


Linux/macOS:

bash
./grading_system

💻 Example Output
text
=== STUDENT GRADING SYSTEM ===

Enter average mark for student 1 (0-100): 85
PASS
Grade: A

Enter average mark for student 2 (0-100): 35
FAIL
Grade: F

--- SUMMARY ---
Total Passed: 1
Total Failed: 1


Note: The example above shows two students for illustration. The program is designed to process 10 students.

📚 Programming Concepts Demonstrated
Functions: The getGrade() function determines the grade based on marks.
Arrays: An array stores the marks of 10 students.
Loops: A for loop processes each student's marks.
Conditional Statements: if, else if, and else determine grades and pass/fail status.
Input Validation: Ensures that marks fall within the range of 0–100.
Variables: Stores student marks and pass/fail counters.
🔮 Future Improvements
Display the highest and lowest marks.
Calculate the class average.
Display all student results in a table.
Allow users to process a flexible number of students.
Save student results to a file.
👨‍💻 Author

Your Name

GitHub: Your GitHub Profile

📄 License

This project is open-source and available for educational and learning purposes.
