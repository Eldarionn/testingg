# Joint Entrance Exam Eligibility Checker

This is a C program that checks if a student is eligible for a joint entrance exam based on their total subject marks. It prompts the user to enter marks for five subjects and calculates the total. If the total marks are greater than or equal to 375, the program considers the user eligible for the exam. Otherwise, it provides feedback to the user.

## How to Use

1. Clone the repository to your local machine using the following command:
   
   ```bash
   git clone https://github.com/eldarionn/student-exam-eligibility.git
   ```

1. Compile the program using a C compiler (e.g., GCC):

   ```bash
   gcc eligibility_checker.c -o eligibility_checker
   ```

4. Run the program:

   ```bash
   ./student_exam_eligibility
   ```


5. Follow the on-screen prompts to enter the marks for five subjects.

6. The program will calculate the total marks and display eligibility information.

## Eligibility Criteria

- If the total marks are less than or equal to `375`, the program will display a message stating that the student is not eligible for the joint entrance exam.

- If the total marks are greater than or equal to `375`, the program will display a message stating that the student is eligible for the joint entrance exam.

- If the total marks are less than or equal to `500` but greater than `375`, the program will show an "invalid total" message, as the total marks must be under `500`.

- If the total marks are above `500`, the program will display an "invalid input" message.

## Contribution

Contributions to this project are welcome. If you have any suggestions for improvements or find any issues, please feel free to open an issue or submit a pull request.

## License

This project is open-source and available under the [MIT License](LICENSE).
