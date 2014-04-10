<?php

$labels = array();
$labels['changepasswd']  = 'Change Password';
$labels['curpasswd']  = 'Current Password:';
$labels['newpasswd']  = 'New Password:';
$labels['confpasswd']  = 'Confirm New Password:';

$messages = array();
$messages['nopassword'] = 'Please input new password.';
$messages['nocurpassword'] = 'Please input current password.';
$messages['passwordincorrect'] = 'Current password incorrect.';
$messages['passwordinconsistency'] = 'Passwords do not match, please try again.';
$messages['crypterror'] = 'Could not save new password. Encryption function missing.';
$messages['connecterror'] = 'Could not save new password. Connection error.';
$messages['internalerror'] = 'Could not save new password.';
$messages['passwordshort'] = 'Password must be at least $length characters long.';
$messages['passwordweak'] = 'Password must include at least one number and one punctuation character.';
$messages['passwordforbidden'] = 'Password contains forbidden characters.';

//Valarauco
$labels['restrictions'] = 'In order to change the password, you must:';
$labels['passwordconfirm_current'] = 'Confirm current password.';
$labels['passwordexample'] = 'Example of a valid password: ';
$labels['passwordexampleerror'] = 'Please do not use the example as a password.';
$labels['passwordsaved'] = 'Password saved.';
?>
