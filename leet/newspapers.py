def is_time_enough(read_times, num_workers, max_time_allowed):
    # [2,3,5,7], 2, 9
    total_t = 0; workers_needed = 1
    for t in read_times:
        if total_t + t > max_time_allowed:
            workers_needed += 1
            total_t = t
        else:
            total_t += t
        if workers_needed > num_workers:
            print(workers_needed, num_workers)
            return False
    print(workers_needed, num_workers)
    return True

def newspapers_split(newspapers_read_times: list[int], num_coworkers: int) -> int:
    # WRITE YOUR BRILLIANT CODE HERE
    total_work = sum(newspapers_read_times)
    left = max(newspapers_read_times); right = total_work
    res = 1
    while left <= right:
        mid = (left+right)//2
        if is_time_enough(newspapers_read_times, num_coworkers, mid):
            right = mid-1
            res = mid
        else:
            left = mid+1
    return res

print(is_time_enough([2,3,5,7],3,7))