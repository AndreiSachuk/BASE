ymaps.ready(init);
var myMap;

function init() {

    myMap = new ymaps.Map("map", {
        center: [52.094256, 23.684553], // Координаты центра карты
        zoom: 12 // Маштаб карты
    });

    myMap.controls.add(
        new ymaps.control.ZoomControl()  // Добавление элемента управления картой
    );

    myPlacemark = new ymaps.Placemark([52.103275, 23.751636], { // Координаты метки объекта
        balloonContent: "<div class='ya_map'>Заезжайте в гости!</div>" // Подсказка метки
    }, {
        preset: "twirl#redDotIcon" // Тип метки
    });

    myMap.geoObjects.add(myPlacemark); // Добавление метки
    myPlacemark.balloon.open(); // Открытие подсказки метки

};
