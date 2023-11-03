<?php

/**
 * struct shash_node_s - Node of a sorted hash table
 *
 * @key: The key, string
 * The key is unique in the HashTable
 * @value: The value corresponding to a key
 * @next: A pointer to the next node of the List
 * @sprev: A pointer to the previous element of the sorted linked list
 * @snext: A pointer to the next element of the sorted linked list
 */
class shash_node_t
{
	public $key;
	public $value;
	public $next;
	public $sprev;
	public $snext;

	public function __construct($key, $value)
	{
		$this->key = $key;
		$this->value = $value;
		$this->next = null;
		$this->sprev = null;
		$this->snext = null;
	}
}

/**
 * struct shash_table_s - Sorted hash table data structure
 *
 * @size: The size of the array
 * @array: An array of size @size
 * @shead: A pointer to the first element of the sorted linked list
 * @stail: A pointer to the last element of the sorted linked list
 */
class shash_table_t
{
	public $size;
	public $array;
	public $shead;
	public $stail;

	public function __construct($size)
	{
		$this->size = $size;
		$this->array = array_fill(0, $size, null);
		$this->shead = null;
		$this->stail = null;
	}
}

/**
 * shash_table_create - Creates a new sorted hash table
 * @size: The size of the hash table
 *
 * Return: The created hash table
 */
function shash_table_create($size)
{
	return new shash_table_t($size);
}

/**
 * shash_table_set - Adds or updates a key-value pair in the sorted hash table
 * @ht: The hash table
 * @key: The key string
 * @value: The value corresponding to the key
 *
 * Return: 1 on success, 0 otherwise
 */
function shash_table_set($ht, $key, $value)
{
	if ($ht == null || $key == null || $value == null)
		return 0;

	$index = djb2_hash($key) % $ht->size;
	$node = $ht->array[$index];

	/* Search for the key in the linked list */
	while ($node != null) {
		if ($node->key == $key) {
			$node->value = $value; 

			/* Updated the value if the key is found */
			return 1;
		}
		$node = $node->next;
	}

	/* Key not found, create a new node */
	$newNode = new shash_node_t($key, $value);

	/* Insert the new node at the beginning of the linked list */
	$newNode->next = $ht->array[$index];
	$ht->array[$index] = $newNode;

	/* Insert the new node into the sorted doubly linked list */
	if ($ht->shead == null) {
		$ht->shead = $newNode;
		$ht->stail = $newNode;
	} else {
		$current = $ht->shead;
		while ($current != null && strcmp($current->key, $key) < 0) {
			$current = $current->snext;
		}

		if ($current == null) {
			/* Insert at the end of the list */
			$newNode->sprev = $ht->stail;
			$ht->stail->snext = $newNode;
			$ht->stail = $newNode;
		} else {
			/* Insert before the current node */
			$newNode->sprev = $current->sprev;
			$newNode->snext = $current;
			if ($current->sprev != null)
				$current->sprev->snext = $newNode;
			else
				$ht->shead = $newNode;
			$current->sprev = $newNode;
		}
	}

	return 1;
}

/**
 * shash_table_get - Retrieves the value associated with akey in the sorted hash table
 * @ht: The hash table
 * @key: The key string
 *
 * Return: The value associated with the key, or NULL if not found
 */
function shash_table_get($ht, $key)
{
	if ($ht == null || $key == null)
		return null;

	$index = djb2_hash($key) % $ht->size;
	$node = $ht->array[$index];

	/* Search for the key in the linked list */
	while ($node != null) {
		if ($node->key == $key)
			return $node->value;
		$node = $node->next;
	}

	return null;
}

/**
 * shash_table_print - Prints the hash table using the sorted linked list
 * @ht: The hash table
 */
function shash_table_print($ht)
{
	if ($ht == null)
		return;

	$current = $ht->shead;
	echo "{";
	while ($current != null) {
		echo "'" . $current->key . "': '" . $current->value . "'";
		$current = $current->snext;
		if ($current != null)
			echo ", ";
	}
	echo "}\n";
}

/**
 * shash_table_print_rev - Prints the hash table in reverse order using the sorted linked list
 * @ht: The hash table
 */
function shash_table_print_rev($ht)
{
	if ($ht == null)
		return;

	$current = $ht->stail;
	echo "{";
	while ($current != null) {
		echo "'" . $current->key . "': '" . $current->value . "'";
		$current = $current->sprev;
		if ($current != null)
			echo ", ";
	}
	echo "}\n";
}

/**
 * shash_table_delete - Deletes the hash table and frees the memory
 * @ht: The hash table
 */
function shash_table_delete($ht)
{
	if ($ht == null)
		return;

	for ($i = 0; $i < $ht->size; $i++) {
		$node = $ht->array[$i];
		while ($node != null) {
			$next = $node->next;
			unset($node);
			$node = $next;
		}
	}

	unset($ht->array);
	unset($ht);
}

/**
 * djb2_hash - Hash function for strings
 * @str: The input string
 *
 * Return: The hash value
 */
function djb2_hash($str)
{
	$hash = 5381;
	$len = strlen($str);
	for ($i = 0; $i < $len; $i++) {
		$hash = (($hash << 5) + $hash) + ord($str[$i]);
	}
	return $hash;
}
