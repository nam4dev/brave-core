/* Copyright (c) 2019 The Brave Authors. All rights reserved.
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this file,
 * You can obtain one at http://mozilla.org/MPL/2.0/. */

#include "brave/components/brave_ads/common/pref_names.h"

namespace brave_ads {

namespace prefs {

const char kBraveAdsEnabled[] = "brave.brave_ads.enabled";
const char kBraveAdsPerHour[] = "brave.brave_ads.ads_per_hour";
const char kBraveAdsPerDay[] = "brave.brave_ads.ads_per_day";
const char kBraveAdsIdleThreshold[] = "brave.brave_ads.idle_threshold";
const int kBraveAdsPrefsDefaultVersion = 1;
const int kBraveAdsPrefsCurrentVersion = 2;
const char kBraveAdsPrefsVersion[] = "brave.brave_ads.prefs.version";
const char kBraveAdsShowAdsNotification[] =
    "brave.brave_ads.show_ads_notification";
const char kBraveAdsLaunchNotificationTimestamp[] =
    "brave.brave_ads.launch_notification_timestamp";

}  // namespace prefs

}  // namespace brave_ads
