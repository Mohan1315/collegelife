<?php
//this script will handle login
// session_start();

//check if the user is already logged in
if (isset($_SESSION['email'])) {
    header("location: welcome.php");
    exit;
}

require_once "config.php";

$email = $password = "";
$err = "";

//if request method is post

if ($_SERVER['REQUEST_METHOD'] == "POST"){

    if (empty(trim($_POST['email'])) || empty(trim($_POST['password']))) {
        $err = "Please enter your email + password";
    }

    else {
        $email = trim($_POST['email']);
        $password = trim($_POST['password']);

    }
    if (empty($err)) {
        $sql = "SELECT id, email, password FROM users WHERE email = ?";
        $stmt = mysqli_prepare($conn, $sql);
        mysqli_stmt_bind_param($stmt, "s", $param_email);
        $param_email = $email;
    }

    // Try to execute this statement

    if (mysqli_stmt_execute($stmt)) {
        mysqli_stmt_store_result($stmt);
        if (mysqli_stmt_num_rows($stmt) == 1) {
            mysqli_stmt_bind_result($stmt, $id, $email, $hashed_password);
            if (mysqli_stmt_fetch($stmt)) {
                if (password_verify($password, $hashed_password)) {
                    //this means the password is correct. Allow to user to login
                    session_start();
                    $_SESSION["email"] = $email;
                    $_SESSION["id"] = $id;
                    $_SESSION["loggedin"] = true;

                    //redirect to user welcome page

                    header("location: welcome.php");

                }
            }
        }
    }

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
            <button class="btnlogin-popup" onclick="window.location.href = 'register.php'">Register</button>
        </nav>
    </header>

    <div class="wrapper">
        <!-- <span class="icon-close"><ion-icon name="close"></ion-icon></span> -->
    <div class="form-box login">
        <h2>Login</h2>
        <form action="" method="post">
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
                    <input type="checkbox">Remember me
                </label>
                <a href="#">Forgot Password?</a>
            </div>

            <button type="submit" class="btn">Login</button>

            <div class="login-register">
                <p>Don't have an account?<a href="register.php" class="register-link">Register</a></p>
            </div>
        </form>
    </div>


  
    <!-- <div class="form-box register">
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
                <p>Already have an account?<a href="#" class="login-link">Login</a></p>
            </div>
        </form>
    </div> -->
</div>
    <script type="module" src="https://unpkg.com/ionicons@7.1.0/dist/ionicons/ionicons.esm.js"></script>
<script nomodule src="https://unpkg.com/ionicons@7.1.0/dist/ionicons/ionicons.js"></script>
    <script src="script.js"></script>
</body>
</html>