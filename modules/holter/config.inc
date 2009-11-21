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
 *  Created on Oct 1, 2009, 1:10:09 PM
 */

class holterConfig extends config
{
    var $rdbms = 'mysql';
    var $dbholter = array(
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
        'id', 'id_pasien'
    );
    var $fields_form_type = array(
        'id' => 'hidden',
        'patients' => 'hidden',
        'tgl' => 'hidden',
        'irama_dasar' => 'select',
        'denyut_jantung' => 'select',
        'gelombang_p' => 'select',
        'interval_pr' => 'select',
        'qrs_axis' => 'select',
        'qrs_durasi' => 'select',
        'qrs_konfigurasi_patologi' => 'select',
        'qrs_konfigurasi_r_s' => 'select',
        'segmen_st_depresi_1mm_2mm' => 'select',
        'segmen_st_depresi_2mm_3mm' => 'select',
        'segmen_st_depresi_3mm' => 'select',
        'segmen_st_elevasi_1mm_2mm' => 'select',
        'segmen_st_elevasi_2mm_3mm' => 'select',
        'segmen_st_elevasi_3mm' => 'select',
        'gelombang_t_normal' => 'checkbox',
        'gelombang_t_inverted' => 'select',
        'q_interval' => 'select',
        'inputer' => 'hidden',
        'inputtime' => 'hedden',
        'updated' => 'hedden'
    );

    var $fieldsisarray = array(
        'irama_dasar',
        'denyut_jantung',
        'gelombang_p',
        'interval_pr',
        'qrs_axis',
        'qrs_durasi',
        'qrs_konfigurasi_patologi',
        'qrs_konfigurasi_r_s',
        'segmen_st_depresi_1mm_2mm' ,
        'segmen_st_depresi_2mm_3mm',
        'segmen_st_depresi_3mm' ,
        'segmen_st_elevasi_1mm_2mm' ,
        'segmen_st_elevasi_2mm_3mm',
        'segmen_st_elevasi_3mm' ,
        'gelombang_t_inverted',
        'q_interval'
    );

    var $reftable = array(
        'irama_dasar' => array('ref_holter_irama','irama'),
        'denyut_jantung' => array('ref_holter_denyut_jantung', 'denyut_jantung'),
        'gelombang_p' => array('ref_holter_gelombangP', 'gelombangP'),
        'interval_pr' => array('ref_holter_intervalPR', 'intervalPR'),
        'qrs_axis' => array('ref_holterQrs_axis', 'axis'),
        'qrs_durasi' => array('ref_holterQrs_durasi', 'durasi'),
        'qrs_konfigurasi_patologi' => array('ref_holter_sandapan', 'sandapan'),
        'qrs_konfigurasi_r_s' => array('ref_holterQrs_RlbS', 'RlbS'),
        'segmen_st_depresi_1mm_2mm' => array('ref_holter_sandapan', 'sandapan'),
        'segmen_st_depresi_2mm_3mm' => array('ref_holter_sandapan', 'sandapan'),
        'segmen_st_depresi_3mm' => array('ref_holter_sandapan', 'sandapan'),
        'segmen_st_elevasi_1mm_2mm' => array('ref_holter_sandapan', 'sandapan'),
        'segmen_st_elevasi_2mm_3mm' => array('ref_holter_sandapan', 'sandapan'),
        'segmen_st_elevasi_3mm' => array('ref_holter_sandapan', 'sandapan'),
        'gelombang_t_inverted' => array('ref_holter_sandapan', 'sandapan'),
        'q_interval' => array('ref_holter_q_interval', 'q_interval')
    );
}