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

// Function: sub_002E3300
// Address: 0x2e3300 - 0x2e3510
void sub_002E3300_0x2e3300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E3300_0x2e3300");
#endif

    switch (ctx->pc) {
        case 0x2e3370u: goto label_2e3370;
        case 0x2e3380u: goto label_2e3380;
        case 0x2e3398u: goto label_2e3398;
        case 0x2e33b0u: goto label_2e33b0;
        case 0x2e33c0u: goto label_2e33c0;
        case 0x2e33e0u: goto label_2e33e0;
        case 0x2e33f0u: goto label_2e33f0;
        case 0x2e3408u: goto label_2e3408;
        case 0x2e3420u: goto label_2e3420;
        case 0x2e343cu: goto label_2e343c;
        case 0x2e344cu: goto label_2e344c;
        case 0x2e345cu: goto label_2e345c;
        case 0x2e3474u: goto label_2e3474;
        case 0x2e3484u: goto label_2e3484;
        case 0x2e3494u: goto label_2e3494;
        case 0x2e34a4u: goto label_2e34a4;
        case 0x2e34c0u: goto label_2e34c0;
        case 0x2e34e0u: goto label_2e34e0;
        default: break;
    }

    ctx->pc = 0x2e3300u;

    // 0x2e3300: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x2e3300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x2e3304: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2e3304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2e3308: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2e3308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2e330c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2e330cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2e3310: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2e3310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2e3314: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e3314u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2e3318: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e3318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e331c: 0xafa40070  sw          $a0, 0x70($sp)
    ctx->pc = 0x2e331cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 4));
    // 0x2e3320: 0xafa50080  sw          $a1, 0x80($sp)
    ctx->pc = 0x2e3320u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 5));
    // 0x2e3324: 0xafa60090  sw          $a2, 0x90($sp)
    ctx->pc = 0x2e3324u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 6));
    // 0x2e3328: 0xafa700a0  sw          $a3, 0xA0($sp)
    ctx->pc = 0x2e3328u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 7));
    // 0x2e332c: 0xafa800b0  sw          $t0, 0xB0($sp)
    ctx->pc = 0x2e332cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 8));
    // 0x2e3330: 0xafa900c0  sw          $t1, 0xC0($sp)
    ctx->pc = 0x2e3330u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 9));
    // 0x2e3334: 0x8fb300c0  lw          $s3, 0xC0($sp)
    ctx->pc = 0x2e3334u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2e3338: 0x8fb20090  lw          $s2, 0x90($sp)
    ctx->pc = 0x2e3338u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2e333c: 0x8fb100a0  lw          $s1, 0xA0($sp)
    ctx->pc = 0x2e333cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2e3340: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2e3340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2e3344: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2e3344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e3348: 0x12220015  beq         $s1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2E3348u;
    {
        const bool branch_taken_0x2e3348 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e3348) {
            ctx->pc = 0x2E33A0u;
            goto label_2e33a0;
        }
    }
    ctx->pc = 0x2E3350u;
    // 0x2e3350: 0x16600036  bnez        $s3, . + 4 + (0x36 << 2)
    ctx->pc = 0x2E3350u;
    {
        const bool branch_taken_0x2e3350 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e3350) {
            ctx->pc = 0x2E342Cu;
            goto label_2e342c;
        }
    }
    ctx->pc = 0x2E3358u;
    // 0x2e3358: 0x16400011  bnez        $s2, . + 4 + (0x11 << 2)
    ctx->pc = 0x2E3358u;
    {
        const bool branch_taken_0x2e3358 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e3358) {
            ctx->pc = 0x2E33A0u;
            goto label_2e33a0;
        }
    }
    ctx->pc = 0x2E3360u;
    // 0x2e3360: 0x27a4006c  addiu       $a0, $sp, 0x6C
    ctx->pc = 0x2e3360u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x2e3364: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x2e3364u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2e3368: 0xc0b81d8  jal         func_2E0760
    ctx->pc = 0x2E3368u;
    SET_GPR_U32(ctx, 31, 0x2E3370u);
    ctx->pc = 0x2E0760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0760u, 0x2E3368u, 0x2E3370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3370u;
label_2e3370:
    // 0x2e3370: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2e3370u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3374: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e3374u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3378: 0xc0b81c8  jal         func_2E0720
    ctx->pc = 0x2E3378u;
    SET_GPR_U32(ctx, 31, 0x2E3380u);
    ctx->pc = 0x2E0720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0720u, 0x2E3378u, 0x2E3380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3380u;
label_2e3380:
    // 0x2e3380: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x2e3380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2e3384: 0x24640008  addiu       $a0, $v1, 0x8
    ctx->pc = 0x2e3384u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x2e3388: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x2e3388u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2e338c: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x2e338cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e3390: 0xc0b7b20  jal         func_2DEC80
    ctx->pc = 0x2E3390u;
    SET_GPR_U32(ctx, 31, 0x2E3398u);
    ctx->pc = 0x2DEC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DEC80u, 0x2E3390u, 0x2E3398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3398u;
label_2e3398:
    // 0x2e3398: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x2E3398u;
    {
        const bool branch_taken_0x2e3398 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e3398) {
            ctx->pc = 0x2E342Cu;
            goto label_2e342c;
        }
    }
    ctx->pc = 0x2E33A0u;
label_2e33a0:
    // 0x2e33a0: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x2e33a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2e33a4: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x2e33a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2e33a8: 0xc0b8d58  jal         func_2E3560
    ctx->pc = 0x2E33A8u;
    SET_GPR_U32(ctx, 31, 0x2E33B0u);
    ctx->pc = 0x2E3560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3560u, 0x2E33A8u, 0x2E33B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E33B0u;
label_2e33b0:
    // 0x2e33b0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e33b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e33b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e33b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e33b8: 0xc0b81c0  jal         func_2E0700
    ctx->pc = 0x2E33B8u;
    SET_GPR_U32(ctx, 31, 0x2E33C0u);
    ctx->pc = 0x2E0700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0700u, 0x2E33B8u, 0x2E33C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E33C0u;
label_2e33c0:
    // 0x2e33c0: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x2e33c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x2e33c4: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2e33c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2e33c8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2e33c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e33cc: 0x1622000b  bne         $s1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2E33CCu;
    {
        const bool branch_taken_0x2e33cc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x2e33cc) {
            ctx->pc = 0x2E33FCu;
            goto label_2e33fc;
        }
    }
    ctx->pc = 0x2E33D4u;
    // 0x2e33d4: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x2e33d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2e33d8: 0xc0b7d18  jal         func_2DF460
    ctx->pc = 0x2E33D8u;
    SET_GPR_U32(ctx, 31, 0x2E33E0u);
    ctx->pc = 0x2DF460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF460u, 0x2E33D8u, 0x2E33E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E33E0u;
label_2e33e0:
    // 0x2e33e0: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x2e33e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x2e33e4: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x2e33e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2e33e8: 0xc0b7d08  jal         func_2DF420
    ctx->pc = 0x2E33E8u;
    SET_GPR_U32(ctx, 31, 0x2E33F0u);
    ctx->pc = 0x2DF420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF420u, 0x2E33E8u, 0x2E33F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E33F0u;
label_2e33f0:
    // 0x2e33f0: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x2e33f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x2e33f4: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x2E33F4u;
    {
        const bool branch_taken_0x2e33f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e33f4) {
            ctx->pc = 0x2E3478u;
            goto label_2e3478;
        }
    }
    ctx->pc = 0x2E33FCu;
label_2e33fc:
    // 0x2e33fc: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x2e33fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2e3400: 0xc0b7d10  jal         func_2DF440
    ctx->pc = 0x2E3400u;
    SET_GPR_U32(ctx, 31, 0x2E3408u);
    ctx->pc = 0x2DF440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF440u, 0x2E3400u, 0x2E3408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3408u;
label_2e3408:
    // 0x2e3408: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2e3408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e340c: 0x1622001a  bne         $s1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2E340Cu;
    {
        const bool branch_taken_0x2e340c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x2e340c) {
            ctx->pc = 0x2E3478u;
            goto label_2e3478;
        }
    }
    ctx->pc = 0x2E3414u;
    // 0x2e3414: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x2e3414u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2e3418: 0xc0b7d10  jal         func_2DF440
    ctx->pc = 0x2E3418u;
    SET_GPR_U32(ctx, 31, 0x2E3420u);
    ctx->pc = 0x2DF440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF440u, 0x2E3418u, 0x2E3420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3420u;
label_2e3420:
    // 0x2e3420: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x2e3420u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x2e3424: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2E3424u;
    {
        const bool branch_taken_0x2e3424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e3424) {
            ctx->pc = 0x2E3478u;
            goto label_2e3478;
        }
    }
    ctx->pc = 0x2E342Cu;
label_2e342c:
    // 0x2e342c: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x2e342cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2e3430: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x2e3430u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2e3434: 0xc0b8d58  jal         func_2E3560
    ctx->pc = 0x2E3434u;
    SET_GPR_U32(ctx, 31, 0x2E343Cu);
    ctx->pc = 0x2E3560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3560u, 0x2E3434u, 0x2E343Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E343Cu;
label_2e343c:
    // 0x2e343c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e343cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3440: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e3440u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3444: 0xc0b81b8  jal         func_2E06E0
    ctx->pc = 0x2E3444u;
    SET_GPR_U32(ctx, 31, 0x2E344Cu);
    ctx->pc = 0x2E06E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E06E0u, 0x2E3444u, 0x2E344Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E344Cu;
label_2e344c:
    // 0x2e344c: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x2e344cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x2e3450: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x2e3450u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2e3454: 0xc0b7d08  jal         func_2DF420
    ctx->pc = 0x2E3454u;
    SET_GPR_U32(ctx, 31, 0x2E345Cu);
    ctx->pc = 0x2DF420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF420u, 0x2E3454u, 0x2E345Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E345Cu;
label_2e345c:
    // 0x2e345c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2e345cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e3460: 0x16220005  bne         $s1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E3460u;
    {
        const bool branch_taken_0x2e3460 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x2e3460) {
            ctx->pc = 0x2E3478u;
            goto label_2e3478;
        }
    }
    ctx->pc = 0x2E3468u;
    // 0x2e3468: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x2e3468u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2e346c: 0xc0b7d08  jal         func_2DF420
    ctx->pc = 0x2E346Cu;
    SET_GPR_U32(ctx, 31, 0x2E3474u);
    ctx->pc = 0x2DF420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF420u, 0x2E346Cu, 0x2E3474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3474u;
label_2e3474:
    // 0x2e3474: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x2e3474u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
label_2e3478:
    // 0x2e3478: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e3478u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e347c: 0xc0b8d50  jal         func_2E3540
    ctx->pc = 0x2E347Cu;
    SET_GPR_U32(ctx, 31, 0x2E3484u);
    ctx->pc = 0x2E3540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3540u, 0x2E347Cu, 0x2E3484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3484u;
label_2e3484:
    // 0x2e3484: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x2e3484u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x2e3488: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e3488u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e348c: 0xc0b81c0  jal         func_2E0700
    ctx->pc = 0x2E348Cu;
    SET_GPR_U32(ctx, 31, 0x2E3494u);
    ctx->pc = 0x2E0700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0700u, 0x2E348Cu, 0x2E3494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3494u;
label_2e3494:
    // 0x2e3494: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2e3494u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2e3498: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e3498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e349c: 0xc0b81b8  jal         func_2E06E0
    ctx->pc = 0x2E349Cu;
    SET_GPR_U32(ctx, 31, 0x2E34A4u);
    ctx->pc = 0x2E06E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E06E0u, 0x2E349Cu, 0x2E34A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E34A4u;
label_2e34a4:
    // 0x2e34a4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2e34a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2e34a8: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2e34a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2e34ac: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2e34acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e34b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e34b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e34b4: 0x24450004  addiu       $a1, $v0, 0x4
    ctx->pc = 0x2e34b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2e34b8: 0xc042858  jal         func_10A160
    ctx->pc = 0x2E34B8u;
    SET_GPR_U32(ctx, 31, 0x2E34C0u);
    ctx->pc = 0x10A160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A160u, 0x2E34B8u, 0x2E34C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E34C0u;
label_2e34c0:
    // 0x2e34c0: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x2e34c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2e34c4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2e34c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2e34c8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2e34c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2e34cc: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x2e34ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x2e34d0: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x2e34d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e34d4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2e34d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e34d8: 0xc0b8d44  jal         func_2E3510
    ctx->pc = 0x2E34D8u;
    SET_GPR_U32(ctx, 31, 0x2E34E0u);
    ctx->pc = 0x2E3510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3510u, 0x2E34D8u, 0x2E34E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E34E0u;
label_2e34e0:
    // 0x2e34e0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2e34e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e34e4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2e34e4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e34e8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2e34e8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e34ec: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2e34ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e34f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e34f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e34f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e34f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e34f8: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x2e34f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2e34fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2E34FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E34FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E3504u;
    // 0x2e3504: 0x0  nop
    ctx->pc = 0x2e3504u;
    // NOP
    // 0x2e3508: 0x0  nop
    ctx->pc = 0x2e3508u;
    // NOP
    // 0x2e350c: 0x0  nop
    ctx->pc = 0x2e350cu;
    // NOP
    ctx->pc = 0x2e3510u;
}
