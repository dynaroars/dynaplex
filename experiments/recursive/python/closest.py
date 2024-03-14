import math

def euclidean_distance(point1, point2):
    return math.sqrt((point1[0] - point2[0])**2 + (point1[1] - point2[1])**2)

def brute_force_closest_pair(points):
    min_distance = float('inf')
    closest_pair = None
    ### 10_O_None
    for i in range(len(points)):
        ### 12_N_10
        for j in range(i+1, len(points)):
            distance = euclidean_distance(points[i], points[j])
            if distance < min_distance:
                min_distance = distance
                closest_pair = (points[i], points[j])
    return closest_pair

def closest_pair(points: list[tuple[int, int]]) -> tuple:
    if len(points) <= 3:
        return brute_force_closest_pair(points)
    else:
        mid = len(points) // 2
        left_points = points[:mid]
        right_points = points[mid:]
        
        left_closest = closest_pair(left_points)
        right_closest = closest_pair(right_points)
        
        min_distance = min(euclidean_distance(left_closest[0], left_closest[1]),
                           euclidean_distance(right_closest[0], right_closest[1]))
        
        strip_points = []
        ### 35_S_12
        for point in points:
            if abs(point[0] - points[mid][0]) < min_distance:
                strip_points.append(point)
        strip_closest = brute_force_closest_pair(strip_points)
        
        if euclidean_distance(strip_closest[0], strip_closest[1]) < min_distance:
            return strip_closest
        elif euclidean_distance(left_closest[0], left_closest[1]) < euclidean_distance(right_closest[0], right_closest[1]):
            return left_closest
        else:
            return right_closest

