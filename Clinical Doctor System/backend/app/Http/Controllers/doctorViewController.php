<?php

namespace App\Http\Controllers;

use Illuminate\Http\Request;
use Illuminate\Support\Facades\DB;

class doctorViewController extends Controller
{
    public function index(){
        $doctors = DB::select('select * from doctor');
        return view('doctor', ['doctors' => $doctors]);
    }
}
