# 💊 Medicine Reminder System (C Language)

A simple console-based **Medicine Reminder System** written in C.
This program helps users schedule medicines and check reminders based on the current system time.

---

## 🚀 Features

* ➕ Add medicine with time (24-hour format)
* 📋 View all scheduled medicines
* ⏰ Check reminder based on current system time
* ❌ Exit program easily
* 🧠 Simple and beginner-friendly C code

---

## 🛠️ Technologies Used

* C Programming Language
* Standard Libraries:

  * `stdio.h`
  * `string.h`
  * `time.h`

---

## 📦 How It Works

1. User adds medicine name and time.
2. Data is stored in a structure array.
3. When checking reminders:

   * System fetches current time
   * Matches it with stored schedule
   * Displays reminder if matched

---

## ▶️ How to Run

### Step 1: Clone the repository

```bash
git clone https://github.com/your-username/medicine-reminder.git
```

### Step 2: Navigate to project folder

```bash
cd medicine-reminder
```

### Step 3: Compile the program

```bash
gcc reminder.c -o reminder
```

### Step 4: Run the program

```bash
./reminder
```

---

## 📌 Sample Output

```
=== Medicine Reminder System ===
1. Add Medicine
2. View Medicines
3. Check Reminder
4. Exit
Enter your choice:
```

---

## ⚠️ Limitations

* Maximum 10 medicines can be stored
* Reminder works only when you manually check
* No persistent storage (data resets after program closes)

---

## 🌟 Future Improvements

* 🔔 Automatic background reminder
* 💾 File storage (save data permanently)
* 📱 GUI version
* 🔊 Sound notification

---

## 🤝 Contributing

Feel free to fork this repository and improve the project!

---

## 📄 License

This project is open-source and free to use.

---

## 👨‍💻 Author

**Suryajyoti Banerjee**
GitHub: https://github.com/your-username

---

✨ *If you like this project, give it a star!*
