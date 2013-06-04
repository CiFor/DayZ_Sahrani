<?php
/*******************************/
/* CFGTownGenerator PHP Parser */
/*      Created by Seven       */
/*******************************/
function getClasses($file){
	$classes = array("position[]"=>null, "vehicle"=>null, "azimut"=>null, "description"=>null);
	$class = array();
	$objects = array();
	$contents = array();
	$total = 0;
	$skippedJunk = false;
	$skipGroups = false;
	$file = $file.".Sara/mission.sqm";
	//Check if file exists.
	if(File_Exists($file)) {
		//Split into lines
		$contents = explode("\n",file_get_contents($file));
	}
	foreach ($contents as $line) {
		//Cleanup any spaces in each line
		$Cleanline = trim($line);
		$parts = array();
		//Remove blank lines
		if(empty($Cleanline) || $Cleanline == "" || $Cleanline == "{"){
			continue;
		}
		//Find Start of Vehicles
		if(strpos($line,"\tclass Vehicles") !== false && strpos($line,"\t\tclass Vehicles") === false) {
			$skipGroups = true;
			continue;
		}
		//Find start of object
		if(strpos($Cleanline, "class Item") !== false) {
			$class[$total] = array("position"=>"0,0,0", "vehicle"=>"blank", "azimut"=>"0", "description"=>"");
			$skippedJunk = true;
			continue;
		}
		//Don't Parse until we find the start string
		if(!$skipGroups)
			continue;
		if(!$skippedJunk) 
			continue;
		//Find end of Object and reset everything
		if($Cleanline == "};") {
			$objects[count($objects)] = $class[$total];
			$total++;
			$skippedJunk = false;
			continue;
		}
		//Split the var from the value
		if(strpos($Cleanline,"="))
			$parts = explode("=", $Cleanline);
		//Cleanup and add them to the class array
		if( count($parts) > 0 && array_key_exists(trim($parts[0]), $classes)) {
			//Fix var and trim values
			if($parts[0] == "position[]") {
				$parts[0] = substr($parts[0],0,-2);
				$parts[1] = substr($parts[1],2,-3);
			}
			if($parts[0] == "vehicle")
				$parts[1] = substr($parts[1],1,-2);
			if($parts[0] == "azimut")
				$parts[1] = substr($parts[1],0,-1);
			if($parts[0] == "description")
				$parts[1] = substr($parts[1],1,-2);
			$class[$total][ trim($parts[0]) ] = trim( $parts[1] );
		}
	}
	return $objects;
}

function GenerateCFGTown($zone) {
	//Start SQL Statement
	echo "INSERT INTO object_spawns VALUES <br>";
	//Loop through all the zone
	for($i=0;$i<count($zone);$i++) {
	//Check if there is a file for the zone
		if(File_Exists($zone[$i].".Sara/mission.sqm")) {
			//Generate class for building
			$classes = getClasses($zone[$i]);
			for($j=0;$j<count($classes);$j++) {
				echo "	('".$j."', ";
				echo "'".$classes[$j]["vehicle"]."',";
				echo "'[".$classes[$j]["azimut"].",[".$classes[$j]["position"]."]]',";
				echo "'".$classes[$j]["description"]."'";
				if($j < count($classes)-1)
					echo "),<br>";
				else
					echo ");";
			}
		}
	}
}
$zones[0] = "ALL";
/*Run The Generator*/
echo "<pre>";
	GenerateCFGTown($zones);
	//print_r(getClasses('EML_ALL'));
echo "</pre>";
?>