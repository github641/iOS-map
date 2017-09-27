//
//  Header.h
//  系统高德地图
//
//  Created by anan on 2017/7/5.
//  Copyright © 2017年 Plan. All rights reserved.
//

#ifndef Header_h
#define Header_h

/* lzy170926注:
  一般是看是否定义了DEBUG=1，这里是是否定义了__OPTIMIZE__。
 学习了。
 */
#ifndef __OPTIMIZE__
#define NSLog(...) NSLog(__VA_ARGS__)
#else
#define NSLog(...) {}
#endif

#endif /* Header_h */


//2、看了MapKit.framework总共有这些个东西：
//MapKit.apinotes
#import <MapKit/MapKit.h> //主头文件
#import <MapKit/MKAnnotation.h> // // 注解容器
#import <MapKit/MKAnnotationView.h> // 注解视图
#import <MapKit/MKCircle.h> //
#import <MapKit/MKCircleRenderer.h> //
#import <MapKit/MKCircleView.h> //
#import <MapKit/MKClusterAnnotation.h> //
#import <MapKit/MKCompassButton.h> //
#import <MapKit/MKDirections.h> //路线规划类
#import <MapKit/MKDirectionsRequest.h> // 导航请求
#import <MapKit/MKDirectionsResponse.h> // 导航返回数据
#import <MapKit/MKDirectionsTypes.h> //  导航类型（哪种交通工具）
#import <MapKit/MKDistanceFormatter.h> //
#import <MapKit/MKFoundation.h> //
#import <MapKit/MKGeodesicPolyline.h> //
#import <MapKit/MKGeometry.h> // 实际地图在几何概念上的映射（point、size、rect的概念，操作，以及他们之间的包含关系；coordinate、span、regin等等）
#import <MapKit/MKLocalSearch.h> //
#import <MapKit/MKLocalSearchCompleter.h> //
#import <MapKit/MKLocalSearchRequest.h> //
#import <MapKit/MKLocalSearchResponse.h> //
#import <MapKit/MKMapCamera.h> //
#import <MapKit/MKMapItem.h> // 地图项，可以通过当前位置或者placeMark创建
#import <MapKit/MKMapSnapshot.h> //
#import <MapKit/MKMapSnapshotOptions.h> //
#import <MapKit/MKMapSnapshotter.h> //
#import <MapKit/MKMapView.h> // 地图视图
#import <MapKit/MKMarkerAnnotationView.h> //
#import <MapKit/MKMultiPoint.h> //
#import <MapKit/MKOverlay.h> // 覆盖层对象
#import <MapKit/MKOverlayPathRenderer.h> // 覆盖层路径渲染器
#import <MapKit/MKOverlayPathView.h> // 覆盖层路径视图
#import <MapKit/MKOverlayRenderer.h> // // 覆盖层渲染器
#import <MapKit/MKOverlayView.h> // 覆盖层视图
#import <MapKit/MKPinAnnotationView.h> //
#import <MapKit/MKPlacemark.h> // 对应有一个CLPlacemark
#import <MapKit/MKPointAnnotation.h> //
#import <MapKit/MKPolygon.h> // 多边形对象
#import <MapKit/MKPolygonRenderer.h> // 多边形渲染器
#import <MapKit/MKPolygonView.h> // 多边形视图
#import <MapKit/MKPolyline.h> //  多段线、折线对象
#import <MapKit/MKPolylineRenderer.h> // 折线渲染器
#import <MapKit/MKPolylineView.h> // 折线视图
#import <MapKit/MKReverseGeocoder.h> // 反地理位置编码
#import <MapKit/MKScaleView.h> //
#import <MapKit/MKShape.h> //
#import <MapKit/MKTileOverlay.h> //
#import <MapKit/MKTileOverlayRenderer.h> //
#import <MapKit/MKTypes.h> //MKMapType、MKErrorCode、MKFeatureVisibility
#import <MapKit/MKUserLocation.h> //
#import <MapKit/MKUserTrackingBarButtonItem.h> //
#import <MapKit/MKUserTrackingButton.h> //
#import <MapKit/NSUserActivity+MKMapItem.h> //

//CoreLocation.framework有以下内容：
//CoreLocation.apinotes
#import <CoreLocation/CLAvailability.h> //
#import <CoreLocation/CLBeaconRegion.h> //
#import <CoreLocation/CLCircularRegion.h> //
#import <CoreLocation/CLError.h> // 错误枚举
#import <CoreLocation/CLErrorDomain.h> // 错误域
#import <CoreLocation/CLGeocoder.h> // 地理位置编码
#import <CoreLocation/CLHeading.h> // 一个指示方向的对象：根据x,y,z坐标构建出来的指向北磁极的矢量（有大小有方向）
#import <CoreLocation/CLLocation.h> // 地理坐标 + 精准时间戳
#import <CoreLocation/CLLocationManager.h> // 定位管理者
#import <CoreLocation/CLLocationManager+CLVisitExtensions.h> //
#import <CoreLocation/CLLocationManagerDelegate.h> // 定位代理

// 以国家、城市、街道信息为展现形式的地理位置信息。在（反）地理位置编码中出现
#import <CoreLocation/CLPlacemark.h>

#import <CoreLocation/CLRegion.h> // 区域 = 坐标 + 范围
#import <CoreLocation/CLVisit.h> //
#import <CoreLocation/CoreLocation.h> // 主头文件
