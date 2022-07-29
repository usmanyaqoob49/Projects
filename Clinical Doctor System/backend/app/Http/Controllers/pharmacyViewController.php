<?php

namespace App\Http\Controllers;

use Illuminate\Http\Request;
use Illuminate\Support\Facades\DB;

class pharmacyViewController extends Controller
{
    public function index(){
        $pharmacies = DB::select('select * from pharmacy_store');
        return view('pharmacies', ['pharmacies' => $pharmacies]);
    }
}
