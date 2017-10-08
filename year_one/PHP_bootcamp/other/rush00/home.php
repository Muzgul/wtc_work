<?php		
	include 'auth.php';
	session_start();
	$servername = "localhost";
	$username = "root";
	$password = "cullygme";
	$dbname = "itemsdb";
//Set result to guest by default
	$result = "Guest" . PHP_EOL;
	$_SESSION['loggued_on_user'] = "";
	if (isset($_POST['submit']))
	{
//If trying to make a new user

		if ($_POST['submit'] == "Join")
		{
			if (signup($_POST['login'], $_POST['passwd']))
			{
				$result = $_POST['login'] . PHP_EOL;
				$_SESSION['loggued_on_user'] = $_POST['login'];
			}			
		}

//If trying to log in

		if ($_POST['submit'] == "Enter" && login($_POST['login'], $_POST['passwd']))
		{
			$_SESSION['loggued_on_user'] = $_POST['login'];
			$result = $_POST['login'] . PHP_EOL;
		}
			
	}
	if (isset($_GET['logout']))
	{
		if (strcmp($_GET['logout'], "Logout") == 0)
		{	
			$_SESSION['loggued_on_user'] = "";
			$result = "Guest" . PHP_EOL;
		}
	}
?>
<!DOCTYPE html>
<html>
<head>
	<title>Home</title>
</head>
<body>
	<div class="topnav">
		<form method="GET" action="home.php">
			<img src="">
			<p><?php echo $result ?></p>
			<a href="index.php">Home</a>
			<a href="">View Basket</a>
			<input type="submit" name="logout" value="Logout">			
		</form>
	</div>
	<div>
		<?php 
			// $conn = mysqli_connect($servername, $username, $password, $dbname);
			// if ($conn)
			// {
			// 	$sql = "SELECT * FROM tblitems";
			// 	$result = mysqli_query($conn, $sql);
			// 	if (mysqli_num_rows($result) > 0){
			// 		while ($row = mysqli_fetch_assoc($result)) {
			// 			echo "<p> " . $row['item'] . ": s(" . $row['size'] . ") w(" . $row['weight'] . ")</p>";
			// 		}
			// 	}
			// }
		?>
	</div>
</body>
</html>