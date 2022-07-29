<?php

namespace App\Http\Controllers;

use Illuminate\Http\Request;
use Illuminate\Support\Facades\DB;

class insertappointment extends Controller
{
   public function insertappointment(){
    return view('appointment');
   }
   public function insert(Request $request){
    $patient_id = $request->input('Patient_ID');
    $doctor_id = $request->input('Doctor_ID');
    $date = $request->input('Date');
    $data = array('Patient_ID' => $patient_id, "Doctor_ID" => $doctor_id, 'Date' => $date);
    DB::table('appointment') -> insert($data);
    return redirect('appointment');
   }
}
