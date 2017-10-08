<?php
	include 'auth.php';
	session_start();
	if ($_GET['submit'] == "OK" && auth($_GET['login'], $_GET['passwd'])){
		$_SESSION['loggued_on_user'] = $_GET['login'];
		echo "OK" . PHP_EOL;
	}
	else{
		$_SESSION['loggued_on_user'] = "";
		echo "ERROR" . PHP_EOL;
	}
?>
