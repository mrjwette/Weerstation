<?php
//connecting to the database
define('DB_HOST', 'http://databases.aii.avans.nl/');
define('DB_NAME', 'mrjwette_db');
define('DB_USER','mrjwette');
define('DB_PASSWORD','Ab12345');

$con=mysql_connect(DB_HOST,DB_USER,DB_PASSWORD) or die("Failed to connect to MySQL: " . mysql_error());
$db=mysql_select_db(DB_NAME,$con) or die("Failed to connect to MySQL: " . mysql_error());

$sql = "INSERT INTO mrjwette_db.meetwaarden (value) VALUES ('".$_GET["value"]."')";
// Execute SQL statement
mysql_query($sql,$con);
mysql_close($con);
?>