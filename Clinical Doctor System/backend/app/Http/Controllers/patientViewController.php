<?php

namespace App\Http\Controllers;

use Illuminate\Http\Request;
use Illuminate\Support\Facades\DB;

class patientViewController extends Controller
{
    public function index(){
        $patients = DB::select('select * from patient');
        return view('patients', ['patients' => $patients]);
    }
}
