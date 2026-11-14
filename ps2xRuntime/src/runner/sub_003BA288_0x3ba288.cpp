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

// Function: sub_003BA288
// Address: 0x3ba288 - 0x3ba4b0
void sub_003BA288_0x3ba288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BA288_0x3ba288");
#endif

    switch (ctx->pc) {
        case 0x3ba2b4u: goto label_3ba2b4;
        case 0x3ba2c0u: goto label_3ba2c0;
        case 0x3ba300u: goto label_3ba300;
        case 0x3ba318u: goto label_3ba318;
        case 0x3ba33cu: goto label_3ba33c;
        case 0x3ba354u: goto label_3ba354;
        case 0x3ba378u: goto label_3ba378;
        case 0x3ba390u: goto label_3ba390;
        case 0x3ba3a8u: goto label_3ba3a8;
        case 0x3ba3bcu: goto label_3ba3bc;
        case 0x3ba3d4u: goto label_3ba3d4;
        case 0x3ba3f0u: goto label_3ba3f0;
        case 0x3ba408u: goto label_3ba408;
        case 0x3ba424u: goto label_3ba424;
        case 0x3ba43cu: goto label_3ba43c;
        case 0x3ba458u: goto label_3ba458;
        case 0x3ba470u: goto label_3ba470;
        default: break;
    }

    ctx->pc = 0x3ba288u;

    // 0x3ba288: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3ba288u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3ba28c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x3ba28cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x3ba290: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x3ba290u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x3ba294: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3ba294u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ba298: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3ba298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x3ba29c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3ba29cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ba2a0: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x3ba2a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x3ba2a4: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x3ba2a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x3ba2a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3ba2a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3ba2ac: 0xc10376a  jal         func_40DDA8
    ctx->pc = 0x3BA2ACu;
    SET_GPR_U32(ctx, 31, 0x3BA2B4u);
    ctx->pc = 0x3BA2B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BA2ACu;
    // 0x3ba2b0: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DDA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DDA8u, 0x3BA2ACu, 0x3BA2B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BA2B4u;
label_3ba2b4:
    // 0x3ba2b4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3ba2b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3ba2b8: 0xc1036d2  jal         func_40DB48
    ctx->pc = 0x3BA2B8u;
    SET_GPR_U32(ctx, 31, 0x3BA2C0u);
    ctx->pc = 0x3BA2BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BA2B8u;
    // 0x3ba2bc: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB48u, 0x3BA2B8u, 0x3BA2C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BA2C0u;
label_3ba2c0:
    // 0x3ba2c0: 0x1a400071  blez        $s2, . + 4 + (0x71 << 2)
    ctx->pc = 0x3BA2C0u;
    {
        const bool branch_taken_0x3ba2c0 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x3BA2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA2C0u;
        // 0x3ba2c4: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ba2c0) {
            ctx->pc = 0x3BA488u;
            goto label_3ba488;
        }
    }
    ctx->pc = 0x3BA2C8u;
    // 0x3ba2c8: 0x240a02d  daddu       $s4, $s2, $zero
    ctx->pc = 0x3ba2c8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ba2cc: 0x141023  negu        $v0, $s4
    ctx->pc = 0x3ba2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 20)));
    // 0x3ba2d0: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x3ba2d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x3ba2d4: 0x10600033  beqz        $v1, . + 4 + (0x33 << 2)
    ctx->pc = 0x3BA2D4u;
    {
        const bool branch_taken_0x3ba2d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BA2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA2D4u;
        // 0x3ba2d8: 0x26720008  addiu       $s2, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ba2d4) {
            ctx->pc = 0x3BA3A4u;
            goto label_3ba3a4;
        }
    }
    ctx->pc = 0x3BA2DCu;
    // 0x3ba2dc: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x3ba2dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3ba2e0: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x3BA2E0u;
    {
        const bool branch_taken_0x3ba2e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BA2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA2E0u;
        // 0x3ba2e4: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ba2e0) {
            ctx->pc = 0x3BA364u;
            goto label_3ba364;
        }
    }
    ctx->pc = 0x3BA2E8u;
    // 0x3ba2e8: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3BA2E8u;
    {
        const bool branch_taken_0x3ba2e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BA2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA2E8u;
        // 0x3ba2ec: 0x8e44fffc  lw          $a0, -0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294967292)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ba2e8) {
            ctx->pc = 0x3BA32Cu;
            goto label_3ba32c;
        }
    }
    ctx->pc = 0x3BA2F0u;
    // 0x3ba2f0: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3BA2F0u;
    {
        const bool branch_taken_0x3ba2f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BA2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA2F0u;
        // 0x3ba2f4: 0x24100008  addiu       $s0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ba2f0) {
            ctx->pc = 0x3BA304u;
            goto label_3ba304;
        }
    }
    ctx->pc = 0x3BA2F8u;
    // 0x3ba2f8: 0xc0ec6a4  jal         func_3B1A90
    ctx->pc = 0x3BA2F8u;
    SET_GPR_U32(ctx, 31, 0x3BA300u);
    ctx->pc = 0x3B1A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1A90u, 0x3BA2F8u, 0x3BA300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BA300u;
label_3ba300:
    // 0x3ba300: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x3ba300u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_3ba304:
    // 0x3ba304: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x3ba304u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x3ba308: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3BA308u;
    {
        const bool branch_taken_0x3ba308 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BA30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA308u;
        // 0x3ba30c: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ba308) {
            ctx->pc = 0x3BA320u;
            goto label_3ba320;
        }
    }
    ctx->pc = 0x3BA310u;
    // 0x3ba310: 0xc0e9f1e  jal         func_3A7C78
    ctx->pc = 0x3BA310u;
    SET_GPR_U32(ctx, 31, 0x3BA318u);
    ctx->pc = 0x3A7C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7C78u, 0x3BA310u, 0x3BA318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BA318u;
label_3ba318:
    // 0x3ba318: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x3ba318u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x3ba31c: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x3ba31cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ba320:
    // 0x3ba320: 0x26720014  addiu       $s2, $s3, 0x14
    ctx->pc = 0x3ba320u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
    // 0x3ba324: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x3ba324u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x3ba328: 0x8e44fffc  lw          $a0, -0x4($s2)
    ctx->pc = 0x3ba328u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294967292)));
label_3ba32c:
    // 0x3ba32c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3BA32Cu;
    {
        const bool branch_taken_0x3ba32c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BA330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA32Cu;
        // 0x3ba330: 0x24100008  addiu       $s0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ba32c) {
            ctx->pc = 0x3BA340u;
            goto label_3ba340;
        }
    }
    ctx->pc = 0x3BA334u;
    // 0x3ba334: 0xc0ec6a4  jal         func_3B1A90
    ctx->pc = 0x3BA334u;
    SET_GPR_U32(ctx, 31, 0x3BA33Cu);
    ctx->pc = 0x3B1A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1A90u, 0x3BA334u, 0x3BA33Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BA33Cu;
label_3ba33c:
    // 0x3ba33c: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x3ba33cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_3ba340:
    // 0x3ba340: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x3ba340u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3ba344: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3BA344u;
    {
        const bool branch_taken_0x3ba344 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ba344) {
            ctx->pc = 0x3BA348u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BA344u;
            // 0x3ba348: 0x2308821  addu        $s1, $s1, $s0 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BA35Cu;
            goto label_3ba35c;
        }
    }
    ctx->pc = 0x3BA34Cu;
    // 0x3ba34c: 0xc0e9f1e  jal         func_3A7C78
    ctx->pc = 0x3BA34Cu;
    SET_GPR_U32(ctx, 31, 0x3BA354u);
    ctx->pc = 0x3A7C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7C78u, 0x3BA34Cu, 0x3BA354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BA354u;
label_3ba354:
    // 0x3ba354: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x3ba354u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x3ba358: 0x2308821  addu        $s1, $s1, $s0
    ctx->pc = 0x3ba358u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
label_3ba35c:
    // 0x3ba35c: 0x2652000c  addiu       $s2, $s2, 0xC
    ctx->pc = 0x3ba35cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
    // 0x3ba360: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x3ba360u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
label_3ba364:
    // 0x3ba364: 0x8e44fffc  lw          $a0, -0x4($s2)
    ctx->pc = 0x3ba364u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294967292)));
    // 0x3ba368: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3BA368u;
    {
        const bool branch_taken_0x3ba368 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BA36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA368u;
        // 0x3ba36c: 0x24100008  addiu       $s0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ba368) {
            ctx->pc = 0x3BA37Cu;
            goto label_3ba37c;
        }
    }
    ctx->pc = 0x3BA370u;
    // 0x3ba370: 0xc0ec6a4  jal         func_3B1A90
    ctx->pc = 0x3BA370u;
    SET_GPR_U32(ctx, 31, 0x3BA378u);
    ctx->pc = 0x3B1A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1A90u, 0x3BA370u, 0x3BA378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BA378u;
label_3ba378:
    // 0x3ba378: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x3ba378u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_3ba37c:
    // 0x3ba37c: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x3ba37cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3ba380: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3BA380u;
    {
        const bool branch_taken_0x3ba380 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ba380) {
            ctx->pc = 0x3BA384u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BA380u;
            // 0x3ba384: 0x2308821  addu        $s1, $s1, $s0 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BA398u;
            goto label_3ba398;
        }
    }
    ctx->pc = 0x3BA388u;
    // 0x3ba388: 0xc0e9f1e  jal         func_3A7C78
    ctx->pc = 0x3BA388u;
    SET_GPR_U32(ctx, 31, 0x3BA390u);
    ctx->pc = 0x3A7C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7C78u, 0x3BA388u, 0x3BA390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BA390u;
label_3ba390:
    // 0x3ba390: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x3ba390u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x3ba394: 0x2308821  addu        $s1, $s1, $s0
    ctx->pc = 0x3ba394u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
label_3ba398:
    // 0x3ba398: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x3ba398u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x3ba39c: 0x1280003a  beqz        $s4, . + 4 + (0x3A << 2)
    ctx->pc = 0x3BA39Cu;
    {
        const bool branch_taken_0x3ba39c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BA3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA39Cu;
        // 0x3ba3a0: 0x2652000c  addiu       $s2, $s2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ba39c) {
            ctx->pc = 0x3BA488u;
            goto label_3ba488;
        }
    }
    ctx->pc = 0x3BA3A4u;
label_3ba3a4:
    // 0x3ba3a4: 0x240982d  daddu       $s3, $s2, $zero
    ctx->pc = 0x3ba3a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3ba3a8:
    // 0x3ba3a8: 0x8e64fffc  lw          $a0, -0x4($s3)
    ctx->pc = 0x3ba3a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294967292)));
    // 0x3ba3ac: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3BA3ACu;
    {
        const bool branch_taken_0x3ba3ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BA3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA3ACu;
        // 0x3ba3b0: 0x24100008  addiu       $s0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ba3ac) {
            ctx->pc = 0x3BA3C0u;
            goto label_3ba3c0;
        }
    }
    ctx->pc = 0x3BA3B4u;
    // 0x3ba3b4: 0xc0ec6a4  jal         func_3B1A90
    ctx->pc = 0x3BA3B4u;
    SET_GPR_U32(ctx, 31, 0x3BA3BCu);
    ctx->pc = 0x3B1A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1A90u, 0x3BA3B4u, 0x3BA3BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BA3BCu;
label_3ba3bc:
    // 0x3ba3bc: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x3ba3bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_3ba3c0:
    // 0x3ba3c0: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x3ba3c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3ba3c4: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3BA3C4u;
    {
        const bool branch_taken_0x3ba3c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ba3c4) {
            ctx->pc = 0x3BA3C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BA3C4u;
            // 0x3ba3c8: 0x2308821  addu        $s1, $s1, $s0 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BA3DCu;
            goto label_3ba3dc;
        }
    }
    ctx->pc = 0x3BA3CCu;
    // 0x3ba3cc: 0xc0e9f1e  jal         func_3A7C78
    ctx->pc = 0x3BA3CCu;
    SET_GPR_U32(ctx, 31, 0x3BA3D4u);
    ctx->pc = 0x3A7C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7C78u, 0x3BA3CCu, 0x3BA3D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BA3D4u;
label_3ba3d4:
    // 0x3ba3d4: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x3ba3d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x3ba3d8: 0x2308821  addu        $s1, $s1, $s0
    ctx->pc = 0x3ba3d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
label_3ba3dc:
    // 0x3ba3dc: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x3ba3dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x3ba3e0: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3BA3E0u;
    {
        const bool branch_taken_0x3ba3e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BA3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA3E0u;
        // 0x3ba3e4: 0x24100008  addiu       $s0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ba3e0) {
            ctx->pc = 0x3BA3F4u;
            goto label_3ba3f4;
        }
    }
    ctx->pc = 0x3BA3E8u;
    // 0x3ba3e8: 0xc0ec6a4  jal         func_3B1A90
    ctx->pc = 0x3BA3E8u;
    SET_GPR_U32(ctx, 31, 0x3BA3F0u);
    ctx->pc = 0x3B1A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1A90u, 0x3BA3E8u, 0x3BA3F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BA3F0u;
label_3ba3f0:
    // 0x3ba3f0: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x3ba3f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_3ba3f4:
    // 0x3ba3f4: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x3ba3f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x3ba3f8: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3BA3F8u;
    {
        const bool branch_taken_0x3ba3f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ba3f8) {
            ctx->pc = 0x3BA3FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BA3F8u;
            // 0x3ba3fc: 0x2308821  addu        $s1, $s1, $s0 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BA410u;
            goto label_3ba410;
        }
    }
    ctx->pc = 0x3BA400u;
    // 0x3ba400: 0xc0e9f1e  jal         func_3A7C78
    ctx->pc = 0x3BA400u;
    SET_GPR_U32(ctx, 31, 0x3BA408u);
    ctx->pc = 0x3A7C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7C78u, 0x3BA400u, 0x3BA408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BA408u;
label_3ba408:
    // 0x3ba408: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x3ba408u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x3ba40c: 0x2308821  addu        $s1, $s1, $s0
    ctx->pc = 0x3ba40cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
label_3ba410:
    // 0x3ba410: 0x8e640014  lw          $a0, 0x14($s3)
    ctx->pc = 0x3ba410u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x3ba414: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3BA414u;
    {
        const bool branch_taken_0x3ba414 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BA418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA414u;
        // 0x3ba418: 0x24100008  addiu       $s0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ba414) {
            ctx->pc = 0x3BA428u;
            goto label_3ba428;
        }
    }
    ctx->pc = 0x3BA41Cu;
    // 0x3ba41c: 0xc0ec6a4  jal         func_3B1A90
    ctx->pc = 0x3BA41Cu;
    SET_GPR_U32(ctx, 31, 0x3BA424u);
    ctx->pc = 0x3B1A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1A90u, 0x3BA41Cu, 0x3BA424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BA424u;
label_3ba424:
    // 0x3ba424: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x3ba424u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_3ba428:
    // 0x3ba428: 0x8e440018  lw          $a0, 0x18($s2)
    ctx->pc = 0x3ba428u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x3ba42c: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3BA42Cu;
    {
        const bool branch_taken_0x3ba42c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ba42c) {
            ctx->pc = 0x3BA430u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BA42Cu;
            // 0x3ba430: 0x2308821  addu        $s1, $s1, $s0 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BA444u;
            goto label_3ba444;
        }
    }
    ctx->pc = 0x3BA434u;
    // 0x3ba434: 0xc0e9f1e  jal         func_3A7C78
    ctx->pc = 0x3BA434u;
    SET_GPR_U32(ctx, 31, 0x3BA43Cu);
    ctx->pc = 0x3A7C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7C78u, 0x3BA434u, 0x3BA43Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BA43Cu;
label_3ba43c:
    // 0x3ba43c: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x3ba43cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x3ba440: 0x2308821  addu        $s1, $s1, $s0
    ctx->pc = 0x3ba440u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
label_3ba444:
    // 0x3ba444: 0x8e640020  lw          $a0, 0x20($s3)
    ctx->pc = 0x3ba444u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x3ba448: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3BA448u;
    {
        const bool branch_taken_0x3ba448 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BA44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA448u;
        // 0x3ba44c: 0x24100008  addiu       $s0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ba448) {
            ctx->pc = 0x3BA45Cu;
            goto label_3ba45c;
        }
    }
    ctx->pc = 0x3BA450u;
    // 0x3ba450: 0xc0ec6a4  jal         func_3B1A90
    ctx->pc = 0x3BA450u;
    SET_GPR_U32(ctx, 31, 0x3BA458u);
    ctx->pc = 0x3B1A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1A90u, 0x3BA450u, 0x3BA458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BA458u;
label_3ba458:
    // 0x3ba458: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x3ba458u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_3ba45c:
    // 0x3ba45c: 0x8e440024  lw          $a0, 0x24($s2)
    ctx->pc = 0x3ba45cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x3ba460: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3BA460u;
    {
        const bool branch_taken_0x3ba460 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ba460) {
            ctx->pc = 0x3BA464u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BA460u;
            // 0x3ba464: 0x2308821  addu        $s1, $s1, $s0 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BA478u;
            goto label_3ba478;
        }
    }
    ctx->pc = 0x3BA468u;
    // 0x3ba468: 0xc0e9f1e  jal         func_3A7C78
    ctx->pc = 0x3BA468u;
    SET_GPR_U32(ctx, 31, 0x3BA470u);
    ctx->pc = 0x3A7C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7C78u, 0x3BA468u, 0x3BA470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BA470u;
label_3ba470:
    // 0x3ba470: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x3ba470u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x3ba474: 0x2308821  addu        $s1, $s1, $s0
    ctx->pc = 0x3ba474u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
label_3ba478:
    // 0x3ba478: 0x26520030  addiu       $s2, $s2, 0x30
    ctx->pc = 0x3ba478u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x3ba47c: 0x2694fffc  addiu       $s4, $s4, -0x4
    ctx->pc = 0x3ba47cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967292));
    // 0x3ba480: 0x1680ffc9  bnez        $s4, . + 4 + (-0x37 << 2)
    ctx->pc = 0x3BA480u;
    {
        const bool branch_taken_0x3ba480 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BA484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA480u;
        // 0x3ba484: 0x26730030  addiu       $s3, $s3, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ba480) {
            ctx->pc = 0x3BA3A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ba3a8;
        }
    }
    ctx->pc = 0x3BA488u;
label_3ba488:
    // 0x3ba488: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3ba488u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ba48c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x3ba48cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3ba490: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x3ba490u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3ba494: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3ba494u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3ba498: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x3ba498u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3ba49c: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x3ba49cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3ba4a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3ba4a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ba4a4: 0x3e00008  jr          $ra
    ctx->pc = 0x3BA4A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BA4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BA4A4u;
        // 0x3ba4a8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BA4A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BA4ACu;
    // 0x3ba4ac: 0x0  nop
    ctx->pc = 0x3ba4acu;
    // NOP
    ctx->pc = 0x3ba4b0u;
}
