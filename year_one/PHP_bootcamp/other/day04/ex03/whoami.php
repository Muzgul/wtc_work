<?php 
	if (isset($_SESSION['loggued_in_user']) && $_SESSION['loggued_in_user'] != "")
		echo $_SESSION['loggued_in_user'];
	else
		echo "ERROR" . PHP_EOL;
?>