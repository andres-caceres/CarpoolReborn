# CarpoolReborn

*Proyecto final del curso de Lenguaje de Programación Orientado a Objetos - Ciclo 2020-2*

## Sobre el proyecto

Proyecto implementado con la estructura MVC y persistencia de datos mediante base de datos (SQL) y al igual que archivos .txt
Se buscará implementar la persistencia de datos en base de datos en su totalidad en un futuro cercano.

## Utilitades

Estas son utilidades que hemos implementado para hacer modificaciones de una manera más ágil al cambiar de base de datos.

### *GlobalSettings.h*

Hemos incluido en CarpoolController/GlobalSettings.h las directivas de base de datos para poder establecer una conexión usando SQL de manera fácil para todo el proyecto.
Solo se deben cambiar estas directivas con la dirección, la instancia de base de datos, el usuario y la contraseña para poder ingresar a cualquier base de datos por SQL.

### *000REGENtxt.bat*

Para evitar tener que borrar los archivos .txt manualmente al reiniciar el sistema, hemos incluido el script 000Regentxt.bat ubicado en /CarpoolView que se puede ejecutarse borrará los datos de los archivos .txt y los volverá a generar sin nigun contenido para ser utilizados por el sitema.
