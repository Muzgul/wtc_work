<?php
$servername = "localhost";
$username = "root";
$password = "cullygme";
$dbname = "itemsdb";

// Create connection
$conn = mysqli_connect($servername, $username, $password);

// Check connection
if ($conn) {
    $sql = "CREATE DATABASE itemsdb";
    if (mysqli_query($conn, $sql))
    {
    	$conn = mysqli_connect($servername, $username, $password, $dbname);
    	$sql = "CREATE TABLE tblItems(
			  	id INT(6) UNSIGNED AUTO_INCREMENT PRIMARY KEY,
			  	item VARCHAR(30) NOT NULL,
			  	size INT(8),
			  	weight INT(8)
				)";
		mysqli_query($conn, $sql);
    }
}

?>

<!DOCTYPE html>
<html>
<head>
	<title>ENTER NAME</title>
	<link rel = "stylesheet" type = "text/css" href = "style.css" />	
	<script src="misc.js"></script>
</head>
<body>
	<div class="bodydiv">
		<form method="POST" action="home.php">
			<label for="login">Username: </label>
			<input type="text" name="login" id="username" required>
			<br>
			<label for="passwd">Password: </label>
			<input type="password" name="passwd" required>
			<br>
			<input type="submit" name="submit" value="Enter">
			<input type="submit" name="submit" value="Join">
		</form>
		<p><span class="signup">Already</span><span class="signin">Don't</span> have an account? Click <a href="" id="log_switch" onclick="return false;">here</a>.</p>
		<div>
			<ul>
			<?php
			// to display the top in each category
			$conn = mysqli_connect($servername, $username, $password, $dbname); 
			$sql = "SELECT * FROM tblitems";
			$result = mysqli_query($conn, $sql);
			$arr = [];
			if (mysqli_num_rows($result) > 0) {
			// output data of each row
				while($row = mysqli_fetch_assoc($result)) {
					array_push($arr, $row);
			    }
			    $size_max['size'] = 0;
			    $wght_max['weight'] = 0;
			    foreach ($arr as $key => $value) {
			    	if ($value['size'] > $size_max['size'])
			    		$size_max = $value;
			    	if ($value['weight'] > $wght_max['weight'])
			    		$wght_max = $value;
			    }
			    echo "<li> Top Weight: " . $wght_max['item'] . " (" . $wght_max['weight'] . ")</li>";
			    echo "<li> Top Size: " . $size_max['item'] . " (" . $size_max['size'] . ")</li>";
			}
			?>
			</ul>
		</div>
	</div>
</body>
</html>