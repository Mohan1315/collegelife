<?php

require_once "config.php";

$username = $email = $password  = "";
$username_err = $email_err = $password_err = "";

if ($_SERVER['REQUEST_METHOD'] == "POST"){

    //check if username is empty

    if(empty(trim($_POST['username']))){
        $username_err = "Username cannot be blank";
    }
    else {
        $sql = "SELECT id FROM users WHERE username = ?";
        $stmt = mysqli_prepare($conn, $sql);
        if ($stmt) {
            mysqli_stmt_bind_param($stmt, "s", $param_username);

            //set the value of param username

            $param_username =trim($_POST['username']);

            // Try to execute this statement

            if (mysqli_stmt_execute($stmt)) {
                mysqli_stmt_store_result($stmt);

                if (mysqli_stmt_num_rows($stmt) == 1) {
                    $username_err = "This username is already taken";
                }

                else{
                    $username = trim($_POST['username']);
                }
            }

            else {
                echo "something went wrong";
            }

        }

    }

    mysqli_stmt_close($stmt);



    //check if email is empty

    if(empty(trim($_POST['email']))){
        $email_err = "email cannot be blank";
    }
    else {
        $sql = "SELECT id FROM users WHERE email = ?";
        $stmt = mysqli_prepare($conn, $sql);
        if ($stmt) {
            mysqli_stmt_bind_param($stmt, "s", $param_email);

            //set the value of param email

            $param_email =trim($_POST['email']);

            // Try to execute this statement

            if (mysqli_stmt_execute($stmt)) {
                mysqli_stmt_store_result($stmt);

                if (mysqli_stmt_num_rows($stmt) == 1) {
                    $email_err = "This email is already taken";
                }

                else{
                    $email = trim($_POST['email']);
                }
            }

            else {
                echo "something went wrong";
            }

        }

    }

    mysqli_stmt_close($stmt);


// check for password

if (empty(trim($_POST['password']))) {
    $password_err = "password cannot be blank";
}

elseif (strlen(trim($_POST['password'])) < 5) {
    $password_err = "password cannot be less than 5 chatacters";
}

else {
    $password = trim($_POST['password']);
}

// if there were no errors, go ahead and insert into the database

if (empty($username_err) && empty($email_err) && empty($password_err)) {
    $sql = "INSERT INTO users (username, email, password) VALUES (?,?,?)";
    $stmt = mysqli_prepare($conn, $sql);

    if ($stmt) {
        mysqli_stmt_bind_param($stmt, "sss", $param_username, $param_email,$param_password);

        //set the parameters
        $param_username = $username;
        $param_email = $email;
        $param_password = password_hash($password, PASSWORD_DEFAULT);

        //Try to execute the querry
        if (mysqli_stmt_execute($stmt)) {
            header("location: login.php");
        }

        else {
            echo "something went wrong... cannot redirect!";
        }

    }

    mysqli_stmt_close($stmt);
}
mysqli_close($conn);
}
?>





<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Login and Signup</title>
    <link rel="stylesheet" href="istyle.css">
</head>
<body>

    <header>
        <h2 class="logo">Logo</h2>
        <nav class="navigation">
            <a href="#">Home</a>
            <a href="about.html">About</a>
            <a href="#">Services</a>
            <a href="#">Contact</a>
            <button class="btnlogin-popup" onclick="window.location.href = 'login.php'">Login</button>
        </nav>
    </header>

    <div class="wrapper">
        <!-- <span class="icon-close"><ion-icon name="close"></ion-icon></span> -->

    <div class="form-box register">
        <h2>Register</h2>
        <form action="" method="post">

            <div class="input-box">
                <span class="icon"><ion-icon name="person"></ion-icon></span>
                <input type="text" name="username" required>
                <label >Username</label>
            </div>

            <div class="input-box">
                <span class="icon"><ion-icon name="mail"></ion-icon></span>
                <input type="Email" name="email" required>
                <label >Email</label>
            </div>
        
            <div class="input-box">
                <span class="icon"><ion-icon name="lock-closed"></ion-icon></span>
                <input type="password" name="password" required>
                <label >Password</label>
            </div>
            <div class="remember-forgot">
                <label>
                    <input type="checkbox">I agree to the terms & conditions
                </label>
                
            </div>

            <button type="submit" class="btn">Register</button>

            <div class="login-register">
                <p>Already have an account?<a href="login.php" class="login-link">Login</a></p>
            </div>
        </form>
    </div>
</div>
    <script type="module" src="https://unpkg.com/ionicons@7.1.0/dist/ionicons/ionicons.esm.js"></script>
<script nomodule src="https://unpkg.com/ionicons@7.1.0/dist/ionicons/ionicons.js"></script>
    <script src="script.js"></script>
</body>
</html>