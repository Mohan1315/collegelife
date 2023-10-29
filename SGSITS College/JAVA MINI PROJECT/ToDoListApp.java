import java.io.*;
import java.util.ArrayList;
import java.util.Scanner;

class Task {
    private String description;
    private boolean completed;

    public Task(String description) {
        this.description = description;
        this.completed = false;
    }

    public String getDescription() {
        return description;
    }

    public boolean isCompleted() {
        return completed;
    }

    public void setCompleted(boolean completed) {
        this.completed = completed;
    }

    public void setDescription(String description) {
        this.description = description;
    }
}

public class ToDoListApp {
    public static void main(String[] args) {
        ArrayList<Task> tasks = new ArrayList<>();
        Scanner scanner = new Scanner(System.in);

        loadTasksFromFile(tasks);

        while (true) {
            System.out.println("To-Do List Menu:");
            System.out.println("1. Add Task");
            System.out.println("2. List Tasks");
            System.out.println("3. Mark Task as Completed");
            System.out.println("4. Edit Task");
            System.out.println("5. Delete Task");
            System.out.println("6. Save Tasks to File");
            System.out.println("7. Quit");
            System.out.print("Enter your choice: ");
            int choice = scanner.nextInt();
            scanner.nextLine();

            switch (choice) {
                case 1:
                    System.out.print("Enter task description: ");
                    String description = scanner.nextLine();
                    tasks.add(new Task(description));
                    System.out.println("Task added!");
                    break;
                case 2:
                    listTasks(tasks);
                    break;
                case 3:
                    markTaskAsCompleted(tasks, scanner);
                    break;
                case 4:
                    editTask(tasks, scanner);
                    break;
                case 5:
                    deleteTask(tasks, scanner);
                    break;
                case 6:
                    saveTasksToFile(tasks);
                    System.out.println("Tasks saved to file.");
                    break;
                case 7:
                    System.out.println("Goodbye!");
                    saveTasksToFile(tasks); // Save tasks before quitting
                    System.exit(0);
                default:
                    System.out.println("Invalid choice. Try again.");
            }
        }
    }

    private static void listTasks(ArrayList<Task> tasks) {
        System.out.println("Task List:");
        for (int i = 0; i < tasks.size(); i++) {
            Task task = tasks.get(i);
            System.out.println(i + 1 + ". " + (task.isCompleted() ? "[X]" : "[ ]") + " " + task.getDescription());
        }
    }

    private static void markTaskAsCompleted(ArrayList<Task> tasks, Scanner scanner) {
        System.out.print("Enter the task number to mark as completed: ");
        int taskNumber = scanner.nextInt();
        if (isValidTaskNumber(taskNumber, tasks.size())) {
            Task task = tasks.get(taskNumber - 1);
            task.setCompleted(true);
            System.out.println("Task marked as completed!");
        } else {
            System.out.println("Invalid task number.");
        }
    }

    private static void editTask(ArrayList<Task> tasks, Scanner scanner) {
        System.out.print("Enter the task number to edit: ");
        int taskNumber = scanner.nextInt();
        if (isValidTaskNumber(taskNumber, tasks.size())) {
            scanner.nextLine(); // Consume the newline character
            System.out.print("Enter the new task description: ");
            String newDescription = scanner.nextLine();
            Task task = tasks.get(taskNumber - 1);
            task.setDescription(newDescription);
            System.out.println("Task edited!");
        } else {
            System.out.println("Invalid task number.");
        }
    }

    private static void deleteTask(ArrayList<Task> tasks, Scanner scanner) {
        System.out.print("Enter the task number to delete: ");
        int deleteTaskNumber = scanner.nextInt();
        if (isValidTaskNumber(deleteTaskNumber, tasks.size())) {
            tasks.remove(deleteTaskNumber - 1);
            System.out.println("Task deleted!");
        } else {
            System.out.println("Invalid task number.");
        }
    }

    private static boolean isValidTaskNumber(int taskNumber, int taskCount) {
        return taskNumber > 0 && taskNumber <= taskCount;
    }

    private static void loadTasksFromFile(ArrayList<Task> tasks) {
        try {
            File file = new File("tasks.txt");
            if (file.exists()) {
                BufferedReader reader = new BufferedReader(new FileReader(file));
                String line;
                while ((line = reader.readLine()) != null) {
                    tasks.add(new Task(line));
                }
                reader.close();
            }
        } catch (IOException e) {
            e.printStackTrace();
        }
    }

    private static void saveTasksToFile(ArrayList<Task> tasks) {
        try {
            File file = new File("tasks.txt");
            BufferedWriter writer = new BufferedWriter(new FileWriter(file));
            for (Task task : tasks) {
                writer.write(task.getDescription());
                writer.newLine();
            }
            writer.close();
        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}
