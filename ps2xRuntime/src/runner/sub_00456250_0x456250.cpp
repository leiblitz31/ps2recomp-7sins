#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00456250
// Address: 0x456250 - 0x456400
void sub_00456250_0x456250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00456250_0x456250");
#endif

    switch (ctx->pc) {
        case 0x45627cu: goto label_45627c;
        case 0x4562a8u: goto label_4562a8;
        case 0x4562ecu: goto label_4562ec;
        case 0x456328u: goto label_456328;
        case 0x45633cu: goto label_45633c;
        case 0x456380u: goto label_456380;
        default: break;
    }

    ctx->pc = 0x456250u;

    // 0x456250: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x456250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x456254: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x456254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x456258: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x456258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x45625c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x45625cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x456260: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x456260u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x456264: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x456264u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x456268: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x456268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x45626c: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x45626cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x456270: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x456270u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x456274: 0xc042514  jal         func_109450
    ctx->pc = 0x456274u;
    SET_GPR_U32(ctx, 31, 0x45627Cu);
    ctx->pc = 0x109450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109450u, 0x456274u, 0x45627Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45627Cu;
label_45627c:
    // 0x45627c: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x45627cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x456280: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x456280u;
    {
        const bool branch_taken_0x456280 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x456280) {
            ctx->pc = 0x456294u;
            goto label_456294;
        }
    }
    ctx->pc = 0x456288u;
    // 0x456288: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x456288u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45628c: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x45628Cu;
    {
        const bool branch_taken_0x45628c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45628c) {
            ctx->pc = 0x4563E0u;
            goto label_4563e0;
        }
    }
    ctx->pc = 0x456294u;
label_456294:
    // 0x456294: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x456294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x456298: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x456298u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x45629c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x45629cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4562a0: 0xc043544  jal         func_10D510
    ctx->pc = 0x4562A0u;
    SET_GPR_U32(ctx, 31, 0x4562A8u);
    ctx->pc = 0x10D510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D510u, 0x4562A0u, 0x4562A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4562A8u;
label_4562a8:
    // 0x4562a8: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x4562a8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4562ac: 0x2863c  dsll32      $s0, $v0, 24
    ctx->pc = 0x4562acu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 24));
    // 0x4562b0: 0x10863f  dsra32      $s0, $s0, 24
    ctx->pc = 0x4562b0u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 24));
    // 0x4562b4: 0x101e3c  dsll32      $v1, $s0, 24
    ctx->pc = 0x4562b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 24));
    // 0x4562b8: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x4562b8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x4562bc: 0x24020022  addiu       $v0, $zero, 0x22
    ctx->pc = 0x4562bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x4562c0: 0x14620032  bne         $v1, $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x4562C0u;
    {
        const bool branch_taken_0x4562c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x4562c0) {
            ctx->pc = 0x45638Cu;
            goto label_45638c;
        }
    }
    ctx->pc = 0x4562C8u;
    // 0x4562c8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x4562c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4562cc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x4562ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4562d0: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x4562d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x4562d4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x4562d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4562d8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x4562d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x4562dc: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x4562dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4562e0: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x4562e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4562e4: 0xc115900  jal         func_456400
    ctx->pc = 0x4562E4u;
    SET_GPR_U32(ctx, 31, 0x4562ECu);
    ctx->pc = 0x456400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x456400u, 0x4562E4u, 0x4562ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4562ECu;
label_4562ec:
    // 0x4562ec: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4562ECu;
    {
        const bool branch_taken_0x4562ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4562ec) {
            ctx->pc = 0x456300u;
            goto label_456300;
        }
    }
    ctx->pc = 0x4562F4u;
    // 0x4562f4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4562f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4562f8: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x4562F8u;
    {
        const bool branch_taken_0x4562f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4562f8) {
            ctx->pc = 0x4563E0u;
            goto label_4563e0;
        }
    }
    ctx->pc = 0x456300u;
label_456300:
    // 0x456300: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x456300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x456304: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x456304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x456308: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x456308u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x45630c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x45630cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x456310: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x456310u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x456314: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x456314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x456318: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x456318u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x45631c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x45631cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x456320: 0xc043544  jal         func_10D510
    ctx->pc = 0x456320u;
    SET_GPR_U32(ctx, 31, 0x456328u);
    ctx->pc = 0x10D510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D510u, 0x456320u, 0x456328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x456328u;
label_456328:
    // 0x456328: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x456328u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x45632c: 0x2863c  dsll32      $s0, $v0, 24
    ctx->pc = 0x45632cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 24));
    // 0x456330: 0x10863f  dsra32      $s0, $s0, 24
    ctx->pc = 0x456330u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 24));
    // 0x456334: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x456334u;
    {
        const bool branch_taken_0x456334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x456334) {
            ctx->pc = 0x45638Cu;
            goto label_45638c;
        }
    }
    ctx->pc = 0x45633Cu;
label_45633c:
    // 0x45633c: 0x10163c  dsll32      $v0, $s0, 24
    ctx->pc = 0x45633cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 24));
    // 0x456340: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x456340u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x456344: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x456344u;
    {
        const bool branch_taken_0x456344 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x456344) {
            ctx->pc = 0x456358u;
            goto label_456358;
        }
    }
    ctx->pc = 0x45634Cu;
    // 0x45634c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x45634cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x456350: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x456350u;
    {
        const bool branch_taken_0x456350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x456350) {
            ctx->pc = 0x4563E0u;
            goto label_4563e0;
        }
    }
    ctx->pc = 0x456358u;
label_456358:
    // 0x456358: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x456358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x45635c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x45635cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x456360: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x456360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x456364: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x456364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x456368: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x456368u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x45636c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x45636cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x456370: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x456370u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x456374: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x456374u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x456378: 0xc043544  jal         func_10D510
    ctx->pc = 0x456378u;
    SET_GPR_U32(ctx, 31, 0x456380u);
    ctx->pc = 0x10D510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D510u, 0x456378u, 0x456380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x456380u;
label_456380:
    // 0x456380: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x456380u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x456384: 0x2863c  dsll32      $s0, $v0, 24
    ctx->pc = 0x456384u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 24));
    // 0x456388: 0x10863f  dsra32      $s0, $s0, 24
    ctx->pc = 0x456388u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 24));
label_45638c:
    // 0x45638c: 0x101e3c  dsll32      $v1, $s0, 24
    ctx->pc = 0x45638cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 24));
    // 0x456390: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x456390u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x456394: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x456394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x456398: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x456398u;
    {
        const bool branch_taken_0x456398 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x456398) {
            ctx->pc = 0x4563DCu;
            goto label_4563dc;
        }
    }
    ctx->pc = 0x4563A0u;
    // 0x4563a0: 0x101e3c  dsll32      $v1, $s0, 24
    ctx->pc = 0x4563a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 24));
    // 0x4563a4: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x4563a4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x4563a8: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x4563a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x4563ac: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x4563ACu;
    {
        const bool branch_taken_0x4563ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4563ac) {
            ctx->pc = 0x4563DCu;
            goto label_4563dc;
        }
    }
    ctx->pc = 0x4563B4u;
    // 0x4563b4: 0x101e3c  dsll32      $v1, $s0, 24
    ctx->pc = 0x4563b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 24));
    // 0x4563b8: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x4563b8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x4563bc: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x4563bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x4563c0: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4563C0u;
    {
        const bool branch_taken_0x4563c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4563c0) {
            ctx->pc = 0x4563DCu;
            goto label_4563dc;
        }
    }
    ctx->pc = 0x4563C8u;
    // 0x4563c8: 0x101e3c  dsll32      $v1, $s0, 24
    ctx->pc = 0x4563c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 24));
    // 0x4563cc: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x4563ccu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x4563d0: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x4563d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x4563d4: 0x1462ffd9  bne         $v1, $v0, . + 4 + (-0x27 << 2)
    ctx->pc = 0x4563D4u;
    {
        const bool branch_taken_0x4563d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x4563d4) {
            ctx->pc = 0x45633Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45633c;
        }
    }
    ctx->pc = 0x4563DCu;
label_4563dc:
    // 0x4563dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4563dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4563e0:
    // 0x4563e0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4563e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4563e4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4563e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4563e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4563e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4563ec: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x4563ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x4563f0: 0x3e00008  jr          $ra
    ctx->pc = 0x4563F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4563F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4563F8u;
    // 0x4563f8: 0x0  nop
    ctx->pc = 0x4563f8u;
    // NOP
    // 0x4563fc: 0x0  nop
    ctx->pc = 0x4563fcu;
    // NOP
    ctx->pc = 0x456400u;
}
