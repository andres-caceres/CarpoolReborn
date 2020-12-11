@echo off
title REGENtxt 1.0
echo Se eliminaran los archivos txt
ping localhost -n 2 >nul
pause
cls
del Conductores.txt
del Contactos.txt
del ListaListasCoordenadas.txt
del Pasajeros.txt
del pasajerosXviajes.txt
del Rutas.txt
del Seguridad.txt
del Tarjetas.txt
del UsuarioLogeado.txt
del Usuarios.txt
del Vehiculos.txt
del Viajes.txt

echo Se crearan los txt en blanco
ping localhost -n 2 >nul
pause
cls

break> Conductores.txt
break> Contactos.txt
break> ListaListasCoordenadas.txt
break> Pasajeros.txt
break> pasajerosXviajes.txt
break> Rutas.txt
break> Seguridad.txt
break> Tarjetas.txt
break> UsuarioLogeado.txt
break> Usuarios.txt
break> Vehiculos.txt
break> Viajes.txt
cls
echo Archivos regenerados
ping localhost -n 2 >nul
pause