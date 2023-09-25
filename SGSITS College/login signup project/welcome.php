<?php

session_start();

if(!isset($_SESSION['loggedin']) || $_SESSION['loggedin'] !==true) {
    header("location: login.php");
}


?>


<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Login and Signup</title>
    <link rel="stylesheet" href="style.css">
</head>
<body>

    <header>
        <h2 class="logo">Logo</h2>
        <nav class="navigation">
            <a href="#">Home</a>
            <a href="about.html">About</a>
            <a href="#">Services</a>
            <a href="#">Contact</a>
            <button onclick="window.location.href = 'logout.php' "  class="btnlogin-popup">Logout</button>
        </nav>
    </header>

    <h1><?php echo "welcome  - ". $_SESSION['email']?></h1>

  
   
</div>
    <script type="module" src="https://unpkg.com/ionicons@7.1.0/dist/ionicons/ionicons.esm.js"></script>
<script nomodule src="https://unpkg.com/ionicons@7.1.0/dist/ionicons/ionicons.js"></script>
    <script src="script.js"></script>
</body>
</html>