<?php

use Illuminate\Support\Facades\Route;
use App\Http\Controllers\doctorViewController;
use App\Http\Controllers\assistantViewController;
use App\Http\Controllers\pharmacyViewController;
use App\Http\Controllers\medicinesViewController;
use App\Http\Controllers\patientViewController;
use App\Http\Controllers\insertappointmentController;

/*
|--------------------------------------------------------------------------
| Web Routes
|--------------------------------------------------------------------------
|
| Here is where you can register web routes for your application. These
| routes are loaded by the RouteServiceProvider within a group which
| contains the "web" middleware group. Now create something great!
|
*/

Route::get('/', function () {
    return view('website');
});

Route::get('doctors', function () {
    return view('doctor');
});
Route::get('doctors',[doctorViewController::class, 'index']);

Route::get('assistants', function () {
    return view('medassis');
});
Route::get('assistants',[assistantViewController::class, 'index']);

Route::get('medicines', function () {
    return view('medicines');
});
Route::get('medicines',[medicinesViewController::class, 'index']);


Route::get('patients', function () {
    return view('patients');
});
Route::get('patients',[patientViewController::class, 'index']);


Route::get('pharmacies', function () {
    return view('pharmacy');
});
Route::get('pharmacies',[pharmacyViewController::class, 'index']);


Route::get('appointment', function () {
    return view('appointment');
});
Route::get('appointment',[insertappoimentController::class, 'index']);


 