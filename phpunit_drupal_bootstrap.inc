<?php

//set the working directory
$_SERVER['HTTP_HOST'] = 'yoursite.local';
$_SERVER['REMOTE_ADDR'] = '127.0.0.1';

//set the working directory
chdir('/var/www/drupal');
define('DRUPAL_ROOT', getcwd());

//Load Drupal
require_once './includes/bootstrap.inc';
drupal_bootstrap(DRUPAL_BOOTSTRAP_FULL);
