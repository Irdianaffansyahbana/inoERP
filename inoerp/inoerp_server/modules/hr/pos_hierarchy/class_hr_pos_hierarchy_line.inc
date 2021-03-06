<?php

class hr_pos_hierarchy_line extends dbObject {

 public static $table_name = "hr_pos_hierarchy_line";
 public static $primary_column = "hr_pos_hierarchy_line_id";
 public static $parent_primary_column = "hr_pos_hierarchy_header_id";
 public static $key_column = 'position_id';
 public static $module = "hr";
 public $field_a = [
    'hr_pos_hierarchy_line_id',
    'hr_pos_hierarchy_header_id',
    'position_id',
    'effective_start_date',
    'effective_end_date',
    'created_by',
    'creation_date',
    'last_update_by',
    'last_update_date',
 ];
 public $fields_inHeader_needsToBeInserted_inPOST = [
    "hr_pos_hierarchy_header_id"
 ];
 public $requiredField = [
    'hr_pos_hierarchy_header_id',
    'position_id',
 ];
 public $hr_pos_hierarchy_line_id;
 public $hr_pos_hierarchy_header_id;
 public $position_id;
 public $effective_start_date;
 public $effective_end_date;
 public $created_by;
 public $creation_date;
 public $last_update_by;
 public $last_update_date;

 public function __set($name, $value) {
  $this->$name = $value;
 }

 public static function find_all_by_hr_position_hierarchyHeaderId($hr_pos_hierarchy_headerId) {

  $sql = " Select * from ";
  $sql .= self::$table_name;
  $sql .= " WHERE hr_pos_hierarchy_header_id = :hr_pos_hierarchy_header_id ";

  global $db;
  $value_a = ['hr_pos_hierarchy_header_id' => $hr_pos_hierarchy_headerId];
  $all_hr_pos_hierarchy_lines = $db->findBySql($sql, $value_a);

  return $all_hr_pos_hierarchy_lines;
 }

}

//end of inv_transaction class
?>