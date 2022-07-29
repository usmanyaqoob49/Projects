<?php

namespace App\Http\Controllers;

use Illuminate\Http\Request;
use Illuminate\Support\Facades\DB;

class medicinesViewController extends Controller
{
    public function index(){
        $medicines = DB::select('select * from medicine');
        return view('medicines', ['medicines' => $medicines]);
    }
}
