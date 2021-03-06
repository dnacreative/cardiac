<?php
/* 
 *  Copyright (c) 2009 Denic Wibowo<denicwibowo@gmail.com>.
 *  All rights reserved.
 *  
 *  This program is free software; you can redistribute it and/or modify it 
 *  under the terms of the GNU General Public License as published by the 
 *  Free Software Foundation; either version 2 of the License, or 
 *  (at your option) any later version.
 *  
 *  This program is distributed in the hope that it will be useful, but 
 *  WITHOUT ANY WARRANTY; without even the implied warranty of 
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General 
 *  Public License for more details.
 *  
 *  You should have received a copy of the GNU General Public License along 
 *  with this program; if not, write to the Free Software Foundation, Inc., 
 *  59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
 *  
 *  config.php
 *  
 *  Created on Oct 6, 2009, 11:28:24 AM
 */

class punggungConfig extends config
{
    var $rdbms = 'mysql';
    var $dbpunggung = array(
        'name' => 'layanan_kesehatan',
        'prefix' => '',
        'suffix' => '',
        'tbprefix' => '',
        'tbsuffix' => '',
        'host' => 'localhost',
        'user' => 'root',
        'passwd' => 'emmank'
    );
    var $hiddenfields = array(
        'id'
    );

    var $typeoffields = array(
        'id' => 'hidden',
        'punggung_inspections' => 'checkbox',
        'palpations' => 'checkbox',
        'bunyi_pernafasan' => 'select',
        'bunyi_tambahan' => 'select',
        'others' => 'checkbox'

    );

    var $fieldsisarray = array(
        'punggung_inspections','palpations','bunyi_pernafasan','bunyi_tambahan','others'
    );
    var $reftable = array(
        'punggung_inspections' => array('ref_punggung_inspections','inspections'),
        'palpations' => array('ref_punggung_palpations','palpations'),
        'bunyi_pernafasan' => array('ref_punggung_bunyi_pernafasan','bunyi_pernafasan'),
        'bunyi_tambahan' => array('ref_punggung_bunyi_tambahan','bunyi_tambahan'),
        'others' => array('ref_punggung_others','others')
    );
    var $table_scheme = array(
        'punggung' => array(
            'id' => array(
                'type' => 'int(11)',
                'null' => 0,
                'key' => 'pri',
                'default' => NULL,
                'extra' => ''
            ),
            'punggung_inspections' => array(
                'type' => 'varchar(255)',
                'null' => 1,
                'key' => '',
                'default' => NULL,
                'extra' => ''
            ),
            'palpations' => array(
                'type' => 'varchar(255)',
                'null' => 1,
                'key' => '',
                'default' => NULL,
                'extra' => ''
            ),
            'bunyi_pernafasan' => array(
                'type' => 'int(11)',
                'null' => 1,
                'key' => '',
                'default' => NULL,
                'extra' => ''
            ),
            'bunyi_tambahan' => array(
                'type' => 'int(11)',
                'null' => 1,
                'key' => '',
                'default' => NULL,
                'extra' => ''
            ),
            'others' => array(
                'type' => 'varchar(255)',
                'null' => 1,
                'key' => '',
                'default' => NULL,
                'extra' => ''
            )
        )
    );
}