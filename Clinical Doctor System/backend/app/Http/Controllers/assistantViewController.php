<?php

namespace App\Http\Controllers;

use Illuminate\Http\Request;
use Illuminate\Support\Facades\DB;

class assistantViewController extends Controller
{
    public function index(){
        $assistants = DB::select('select * from medical_assistant');
        return view('medassis', ['assistants' => $assistants]);
    }
}
