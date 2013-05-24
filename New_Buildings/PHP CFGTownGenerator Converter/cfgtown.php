<?php
/*******************************/
/* CFGTownGenerator PHP Parser */
/*      Created by Seven       */
/*******************************/
function getClasses($file){
	$classes = array("POSITION"=>null, "TYPE"=>null, "AZIMUT"=>null);
	$class = array();
	$objects = array();
	$total = 0;
	$skippedJunk = false;
	$file = $file.".Sara/mission.biedi";
	//Check if file exists.
	if(File_Exists($file)) {
		//Split into lines
		$contents = explode("\n",file_get_contents($file));
	}
	foreach ($contents as $line) {
		//Cleanup any spaces in each line
		$line = trim($line);
		$parts = array();
		//Remove blank lines
		if(empty($line) || $line == ""){
			continue;
		}
		//Find start of object
		if($line == 'objectType="vehicle";') {
			$class[$total] = array("POSITION"=>"0,0,0", "TYPE"=>"blank", "AZIMUT"=>"0");
			$skippedJunk = true;
			continue;
		}
		//Don't Parse until we find the start string
		if(!$skippedJunk) 
			continue;
		//Find end of Object and reset everything
		if($line == "};") {
			$objects[count($objects)] = $class[$total];
			$total++;
			$skippedJunk = false;
			continue;
		}
		//Split the var from the value
		if(strpos($line,"="))
			$parts = explode("=", $line);
		//Cleanup and add them to the class array
		if( count($parts) > 0 && array_key_exists(trim($parts[0]), $classes)) {
			if($parts[0] == "POSITION")
				$parts[1] = substr($parts[1],2,-3);
			if($parts[0] == "TYPE")
				$parts[1] = substr($parts[1],1,-2);
			if($parts[0] == "AZIMUT")
				(float)$parts[1] = substr($parts[1],1,-2);
			$class[$total][ trim($parts[0]) ] = trim( $parts[1] );
		}
	}
	return $objects;
}

function GenerateCFGTown($zone) {
	//Loop through all the zone
	for($i=0;$i<count($zone);$i++) {
	//Check if there is a file for the zone
		if(File_Exists($zone[$i][0].".Sara/mission.biedi")) {
			//Start Generating class for zone
			echo "	class ".$zone[$i][0]." {<br>";
			echo "		position[] = ".$zone[$i][1].";<br>";
			echo "		size = ".$zone[$i][2].";<br><br>";
			//Generate class for building
			$classes = getClasses($zone[$i][0]);
			for($j=0;$j<count($classes);$j++) {
				echo "		class Object".$j." {<br>";
				echo "			Type=\"".$classes[$j]["TYPE"]."\";<br>";
				echo "			position[] = {".$classes[$j]["POSITION"]."};<br>";
				echo "			direction = ".$classes[$j]["AZIMUT"].";<br>";
				echo "			SetZUp = 1;<br>		};<br>";
			}
			echo "	};<br>";
		}
	}
}
$zones[0] 				= array("NWI","{3549.5293, 16948.412}","2750");;
$zones[count($zones)]	= array("EMLZ1","{9084.665, 15606.263}","4250");
$zones[count($zones)]	= array("EMLZ2","{13508.527, 16287.334}","3000");
$zones[count($zones)]	= array("EMLZ3","{17841.162, 13019.341}","2750");
$zones[count($zones)]	= array("EMLZ4","{16090.729, 9587.1191}","2000");
$zones[count($zones)]	= array("EMLZ5","{12505.881, 10952.824}","2000");
$zones[count($zones)]	= array("EMLZ6","{9737.9395, 7844.0952}","1200");
$zones[count($zones)]	= array("EMLZ7","{13373.855, 8715.9863}","1500");
$zones[count($zones)]	= array("WMLZ1","{7483.5483, 8740.6846}","2750");
$zones[count($zones)]	= array("WMLZ2","{10256.928, 10019.207}","1850");
$zones[count($zones)]	= array("WMLZ3","{12007.973, 6930.9556}","1800");
$zones[count($zones)]	= array("WMLZ4","{10791.405, 5391.6064}","1500");
$zones[count($zones)]	= array("WMLZ5","{8694.2754, 5947.1602}","1600");
$zones[count($zones)]	= array("WMLZ6","{9737.9395, 7844.0952}","1200");
$zones[count($zones)]	= array("NEI","{17719.813, 18512.668}","1800");
$zones[count($zones)]	= array("SWI","{2596.4631, 2593.689}","1900");
$zones[count($zones)]	= array("SEI","{17488.941, 3990.011}","1800");
/*Run The Generator*/
echo "<pre>";
	GenerateCFGTown($zones);
echo "</pre>";
?>