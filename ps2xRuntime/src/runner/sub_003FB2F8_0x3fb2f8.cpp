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

// Function: sub_003FB2F8
// Address: 0x3fb2f8 - 0x3fb690
void sub_003FB2F8_0x3fb2f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003FB2F8_0x3fb2f8");
#endif

    switch (ctx->pc) {
        case 0x3fb358u: goto label_3fb358;
        case 0x3fb370u: goto label_3fb370;
        case 0x3fb388u: goto label_3fb388;
        case 0x3fb3a0u: goto label_3fb3a0;
        case 0x3fb3b8u: goto label_3fb3b8;
        case 0x3fb3d0u: goto label_3fb3d0;
        case 0x3fb3e8u: goto label_3fb3e8;
        case 0x3fb440u: goto label_3fb440;
        case 0x3fb458u: goto label_3fb458;
        case 0x3fb474u: goto label_3fb474;
        case 0x3fb480u: goto label_3fb480;
        case 0x3fb498u: goto label_3fb498;
        case 0x3fb4c0u: goto label_3fb4c0;
        case 0x3fb4ccu: goto label_3fb4cc;
        case 0x3fb4e4u: goto label_3fb4e4;
        case 0x3fb50cu: goto label_3fb50c;
        case 0x3fb520u: goto label_3fb520;
        case 0x3fb530u: goto label_3fb530;
        case 0x3fb54cu: goto label_3fb54c;
        case 0x3fb570u: goto label_3fb570;
        case 0x3fb578u: goto label_3fb578;
        case 0x3fb590u: goto label_3fb590;
        case 0x3fb5b0u: goto label_3fb5b0;
        case 0x3fb5b8u: goto label_3fb5b8;
        case 0x3fb5d0u: goto label_3fb5d0;
        case 0x3fb5f0u: goto label_3fb5f0;
        case 0x3fb5f8u: goto label_3fb5f8;
        case 0x3fb610u: goto label_3fb610;
        case 0x3fb634u: goto label_3fb634;
        default: break;
    }

    ctx->pc = 0x3fb2f8u;

    // 0x3fb2f8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x3fb2f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x3fb2fc: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x3fb2fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x3fb300: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x3fb300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x3fb304: 0x140802d  daddu       $s0, $t2, $zero
    ctx->pc = 0x3fb304u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fb308: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x3fb308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x3fb30c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x3fb30cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fb310: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x3fb310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x3fb314: 0x160902d  daddu       $s2, $t3, $zero
    ctx->pc = 0x3fb314u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fb318: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x3fb318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x3fb31c: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x3fb31cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fb320: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x3fb320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x3fb324: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x3fb324u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fb328: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x3fb328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x3fb32c: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x3fb32cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fb330: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x3fb330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x3fb334: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x3fb334u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fb338: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x3fb338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x3fb33c: 0x120f02d  daddu       $fp, $t1, $zero
    ctx->pc = 0x3fb33cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fb340: 0x12c000c6  beqz        $s6, . + 4 + (0xC6 << 2)
    ctx->pc = 0x3FB340u;
    {
        const bool branch_taken_0x3fb340 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FB344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FB340u;
        // 0x3fb344: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fb340) {
            ctx->pc = 0x3FB65Cu;
            goto label_3fb65c;
        }
    }
    ctx->pc = 0x3FB348u;
    // 0x3fb348: 0x52a000c5  beql        $s5, $zero, . + 4 + (0xC5 << 2)
    ctx->pc = 0x3FB348u;
    {
        const bool branch_taken_0x3fb348 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x3fb348) {
            ctx->pc = 0x3FB34Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3FB348u;
            // 0x3fb34c: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3FB660u;
            goto label_3fb660;
        }
    }
    ctx->pc = 0x3FB350u;
    // 0x3fb350: 0xc0bc60c  jal         func_2F1830
    ctx->pc = 0x3FB350u;
    SET_GPR_U32(ctx, 31, 0x3FB358u);
    ctx->pc = 0x3FB354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FB350u;
    // 0x3fb354: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1830u, 0x3FB350u, 0x3FB358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FB358u;
label_3fb358:
    // 0x3fb358: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3fb358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3fb35c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3fb35cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fb360: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3fb360u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3fb364: 0x2983e  dsrl32      $s3, $v0, 0
    ctx->pc = 0x3fb364u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x3fb368: 0xc0f8ae2  jal         func_3E2B88
    ctx->pc = 0x3FB368u;
    SET_GPR_U32(ctx, 31, 0x3FB370u);
    ctx->pc = 0x3FB36Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FB368u;
    // 0x3fb36c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2B88u, 0x3FB368u, 0x3FB370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FB370u;
label_3fb370:
    // 0x3fb370: 0x13303c  dsll32      $a2, $s3, 0
    ctx->pc = 0x3fb370u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 19) << (32 + 0));
    // 0x3fb374: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x3fb374u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x3fb378: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3fb378u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fb37c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3fb37cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fb380: 0xc0bb778  jal         func_2EDDE0
    ctx->pc = 0x3FB380u;
    SET_GPR_U32(ctx, 31, 0x3FB388u);
    ctx->pc = 0x3FB384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FB380u;
    // 0x3fb384: 0xaea200c8  sw          $v0, 0xC8($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 200), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x3FB380u, 0x3FB388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FB388u;
label_3fb388:
    // 0x3fb388: 0xfeb400d0  sd          $s4, 0xD0($s5)
    ctx->pc = 0x3fb388u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 208), GPR_U64(ctx, 20));
    // 0x3fb38c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3fb38cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fb390: 0xfeb700d8  sd          $s7, 0xD8($s5)
    ctx->pc = 0x3fb390u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 216), GPR_U64(ctx, 23));
    // 0x3fb394: 0xa2be00e8  sb          $fp, 0xE8($s5)
    ctx->pc = 0x3fb394u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 232), (uint8_t)GPR_U32(ctx, 30));
    // 0x3fb398: 0xc0bc60c  jal         func_2F1830
    ctx->pc = 0x3FB398u;
    SET_GPR_U32(ctx, 31, 0x3FB3A0u);
    ctx->pc = 0x3FB39Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FB398u;
    // 0x3fb39c: 0xa2b000e9  sb          $s0, 0xE9($s5) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 21), 233), (uint8_t)GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1830u, 0x3FB398u, 0x3FB3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FB3A0u;
label_3fb3a0:
    // 0x3fb3a0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3fb3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3fb3a4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3fb3a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fb3a8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3fb3a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3fb3ac: 0x2983e  dsrl32      $s3, $v0, 0
    ctx->pc = 0x3fb3acu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x3fb3b0: 0xc0f8ae2  jal         func_3E2B88
    ctx->pc = 0x3FB3B0u;
    SET_GPR_U32(ctx, 31, 0x3FB3B8u);
    ctx->pc = 0x3FB3B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FB3B0u;
    // 0x3fb3b4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2B88u, 0x3FB3B0u, 0x3FB3B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FB3B8u;
label_3fb3b8:
    // 0x3fb3b8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3fb3b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fb3bc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3fb3bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fb3c0: 0x13303c  dsll32      $a2, $s3, 0
    ctx->pc = 0x3fb3c0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 19) << (32 + 0));
    // 0x3fb3c4: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x3fb3c4u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x3fb3c8: 0xc0bb778  jal         func_2EDDE0
    ctx->pc = 0x3FB3C8u;
    SET_GPR_U32(ctx, 31, 0x3FB3D0u);
    ctx->pc = 0x3FB3CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FB3C8u;
    // 0x3fb3cc: 0xaea200e0  sw          $v0, 0xE0($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 224), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x3FB3C8u, 0x3FB3D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FB3D0u;
label_3fb3d0:
    // 0x3fb3d0: 0x26050001  addiu       $a1, $s0, 0x1
    ctx->pc = 0x3fb3d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3fb3d4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3fb3d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fb3d8: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x3fb3d8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x3fb3dc: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x3fb3dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x3fb3e0: 0xc0f8ae2  jal         func_3E2B88
    ctx->pc = 0x3FB3E0u;
    SET_GPR_U32(ctx, 31, 0x3FB3E8u);
    ctx->pc = 0x3FB3E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FB3E0u;
    // 0x3fb3e4: 0x5283e  dsrl32      $a1, $a1, 0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2B88u, 0x3FB3E0u, 0x3FB3E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FB3E8u;
label_3fb3e8:
    // 0x3fb3e8: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x3fb3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x3fb3ec: 0xaea200e4  sw          $v0, 0xE4($s5)
    ctx->pc = 0x3fb3ecu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 228), GPR_U32(ctx, 2));
    // 0x3fb3f0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3fb3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3fb3f4: 0x1a000091  blez        $s0, . + 4 + (0x91 << 2)
    ctx->pc = 0x3FB3F4u;
    {
        const bool branch_taken_0x3fb3f4 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x3FB3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FB3F4u;
        // 0x3fb3f8: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fb3f4) {
            ctx->pc = 0x3FB63Cu;
            goto label_3fb63c;
        }
    }
    ctx->pc = 0x3FB3FCu;
    // 0x3fb3fc: 0x200b82d  daddu       $s7, $s0, $zero
    ctx->pc = 0x3fb3fcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fb400: 0x8fb100a0  lw          $s1, 0xA0($sp)
    ctx->pc = 0x3fb400u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x3fb404: 0x171023  negu        $v0, $s7
    ctx->pc = 0x3fb404u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 23)));
    // 0x3fb408: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x3fb408u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fb40c: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x3fb40cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x3fb410: 0x10600040  beqz        $v1, . + 4 + (0x40 << 2)
    ctx->pc = 0x3FB410u;
    {
        const bool branch_taken_0x3fb410 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FB414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FB410u;
        // 0x3fb414: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fb410) {
            ctx->pc = 0x3FB514u;
            goto label_3fb514;
        }
    }
    ctx->pc = 0x3FB418u;
    // 0x3fb418: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x3fb418u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3fb41c: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x3FB41Cu;
    {
        const bool branch_taken_0x3fb41c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FB420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FB41Cu;
        // 0x3fb420: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fb41c) {
            ctx->pc = 0x3FB4C0u;
            goto label_3fb4c0;
        }
    }
    ctx->pc = 0x3FB424u;
    // 0x3fb424: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x3FB424u;
    {
        const bool branch_taken_0x3fb424 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3fb424) {
            ctx->pc = 0x3FB428u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3FB424u;
            // 0x3fb428: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3FB478u;
            goto label_3fb478;
        }
    }
    ctx->pc = 0x3FB42Cu;
    // 0x3fb42c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x3fb42cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3fb430: 0x26300004  addiu       $s0, $s1, 0x4
    ctx->pc = 0x3fb430u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x3fb434: 0x241e0004  addiu       $fp, $zero, 0x4
    ctx->pc = 0x3fb434u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3fb438: 0xc0bc60c  jal         func_2F1830
    ctx->pc = 0x3FB438u;
    SET_GPR_U32(ctx, 31, 0x3FB440u);
    ctx->pc = 0x3FB43Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FB438u;
    // 0x3fb43c: 0x26f7ffff  addiu       $s7, $s7, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1830u, 0x3FB438u, 0x3FB440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FB440u;
label_3fb440:
    // 0x3fb440: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3fb440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3fb444: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3fb444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fb448: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3fb448u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3fb44c: 0x2983e  dsrl32      $s3, $v0, 0
    ctx->pc = 0x3fb44cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x3fb450: 0xc0f8ae2  jal         func_3E2B88
    ctx->pc = 0x3FB450u;
    SET_GPR_U32(ctx, 31, 0x3FB458u);
    ctx->pc = 0x3FB454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FB450u;
    // 0x3fb454: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2B88u, 0x3FB450u, 0x3FB458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FB458u;
label_3fb458:
    // 0x3fb458: 0x8ea300e4  lw          $v1, 0xE4($s5)
    ctx->pc = 0x3fb458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 228)));
    // 0x3fb45c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3fb45cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fb460: 0x13303c  dsll32      $a2, $s3, 0
    ctx->pc = 0x3fb460u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 19) << (32 + 0));
    // 0x3fb464: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x3fb464u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x3fb468: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x3fb468u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x3fb46c: 0xc0bb778  jal         func_2EDDE0
    ctx->pc = 0x3FB46Cu;
    SET_GPR_U32(ctx, 31, 0x3FB474u);
    ctx->pc = 0x3FB470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FB46Cu;
    // 0x3fb470: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x3FB46Cu, 0x3FB474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FB474u;
label_3fb474:
    // 0x3fb474: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3fb474u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3fb478:
    // 0x3fb478: 0xc0bc60c  jal         func_2F1830
    ctx->pc = 0x3FB478u;
    SET_GPR_U32(ctx, 31, 0x3FB480u);
    ctx->pc = 0x3FB47Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FB478u;
    // 0x3fb47c: 0x26f7ffff  addiu       $s7, $s7, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1830u, 0x3FB478u, 0x3FB480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FB480u;
label_3fb480:
    // 0x3fb480: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3fb480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3fb484: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3fb484u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fb488: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3fb488u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3fb48c: 0x2983e  dsrl32      $s3, $v0, 0
    ctx->pc = 0x3fb48cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x3fb490: 0xc0f8ae2  jal         func_3E2B88
    ctx->pc = 0x3FB490u;
    SET_GPR_U32(ctx, 31, 0x3FB498u);
    ctx->pc = 0x3FB494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FB490u;
    // 0x3fb494: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2B88u, 0x3FB490u, 0x3FB498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FB498u;
label_3fb498:
    // 0x3fb498: 0x8ea300e4  lw          $v1, 0xE4($s5)
    ctx->pc = 0x3fb498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 228)));
    // 0x3fb49c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3fb49cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fb4a0: 0x13303c  dsll32      $a2, $s3, 0
    ctx->pc = 0x3fb4a0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 19) << (32 + 0));
    // 0x3fb4a4: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x3fb4a4u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x3fb4a8: 0x3c31821  addu        $v1, $fp, $v1
    ctx->pc = 0x3fb4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
    // 0x3fb4ac: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x3fb4acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x3fb4b0: 0x27de0004  addiu       $fp, $fp, 0x4
    ctx->pc = 0x3fb4b0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
    // 0x3fb4b4: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x3fb4b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3fb4b8: 0xc0bb778  jal         func_2EDDE0
    ctx->pc = 0x3FB4B8u;
    SET_GPR_U32(ctx, 31, 0x3FB4C0u);
    ctx->pc = 0x3FB4BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FB4B8u;
    // 0x3fb4bc: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x3FB4B8u, 0x3FB4C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FB4C0u;
label_3fb4c0:
    // 0x3fb4c0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3fb4c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3fb4c4: 0xc0bc60c  jal         func_2F1830
    ctx->pc = 0x3FB4C4u;
    SET_GPR_U32(ctx, 31, 0x3FB4CCu);
    ctx->pc = 0x3FB4C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FB4C4u;
    // 0x3fb4c8: 0x26f7ffff  addiu       $s7, $s7, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1830u, 0x3FB4C4u, 0x3FB4CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FB4CCu;
label_3fb4cc:
    // 0x3fb4cc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3fb4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3fb4d0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3fb4d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fb4d4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3fb4d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3fb4d8: 0x2983e  dsrl32      $s3, $v0, 0
    ctx->pc = 0x3fb4d8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x3fb4dc: 0xc0f8ae2  jal         func_3E2B88
    ctx->pc = 0x3FB4DCu;
    SET_GPR_U32(ctx, 31, 0x3FB4E4u);
    ctx->pc = 0x3FB4E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FB4DCu;
    // 0x3fb4e0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2B88u, 0x3FB4DCu, 0x3FB4E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FB4E4u;
label_3fb4e4:
    // 0x3fb4e4: 0x8ea300e4  lw          $v1, 0xE4($s5)
    ctx->pc = 0x3fb4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 228)));
    // 0x3fb4e8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3fb4e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fb4ec: 0x13303c  dsll32      $a2, $s3, 0
    ctx->pc = 0x3fb4ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 19) << (32 + 0));
    // 0x3fb4f0: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x3fb4f0u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x3fb4f4: 0x3c31821  addu        $v1, $fp, $v1
    ctx->pc = 0x3fb4f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
    // 0x3fb4f8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x3fb4f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x3fb4fc: 0x27de0004  addiu       $fp, $fp, 0x4
    ctx->pc = 0x3fb4fcu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
    // 0x3fb500: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x3fb500u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3fb504: 0xc0bb778  jal         func_2EDDE0
    ctx->pc = 0x3FB504u;
    SET_GPR_U32(ctx, 31, 0x3FB50Cu);
    ctx->pc = 0x3FB508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FB504u;
    // 0x3fb508: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x3FB504u, 0x3FB50Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FB50Cu;
label_3fb50c:
    // 0x3fb50c: 0x52e0004c  beql        $s7, $zero, . + 4 + (0x4C << 2)
    ctx->pc = 0x3FB50Cu;
    {
        const bool branch_taken_0x3fb50c = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x3fb50c) {
            ctx->pc = 0x3FB510u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3FB50Cu;
            // 0x3fb510: 0xdea30010  ld          $v1, 0x10($s5) (Delay Slot)
            SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 21), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3FB640u;
            goto label_3fb640;
        }
    }
    ctx->pc = 0x3FB514u;
label_3fb514:
    // 0x3fb514: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x3fb514u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fb518: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x3fb518u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x3fb51c: 0x0  nop
    ctx->pc = 0x3fb51cu;
    // NOP
label_3fb520:
    // 0x3fb520: 0x27d00004  addiu       $s0, $fp, 0x4
    ctx->pc = 0x3fb520u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
    // 0x3fb524: 0x27d10008  addiu       $s1, $fp, 0x8
    ctx->pc = 0x3fb524u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
    // 0x3fb528: 0xc0bc60c  jal         func_2F1830
    ctx->pc = 0x3FB528u;
    SET_GPR_U32(ctx, 31, 0x3FB530u);
    ctx->pc = 0x3FB52Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FB528u;
    // 0x3fb52c: 0x27d2000c  addiu       $s2, $fp, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 30), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1830u, 0x3FB528u, 0x3FB530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FB530u;
label_3fb530:
    // 0x3fb530: 0x26f7fffc  addiu       $s7, $s7, -0x4
    ctx->pc = 0x3fb530u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967292));
    // 0x3fb534: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3fb534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3fb538: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3fb538u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fb53c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3fb53cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3fb540: 0x2983e  dsrl32      $s3, $v0, 0
    ctx->pc = 0x3fb540u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x3fb544: 0xc0f8ae2  jal         func_3E2B88
    ctx->pc = 0x3FB544u;
    SET_GPR_U32(ctx, 31, 0x3FB54Cu);
    ctx->pc = 0x3FB548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FB544u;
    // 0x3fb548: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2B88u, 0x3FB544u, 0x3FB54Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FB54Cu;
label_3fb54c:
    // 0x3fb54c: 0x8ea300e4  lw          $v1, 0xE4($s5)
    ctx->pc = 0x3fb54cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 228)));
    // 0x3fb550: 0x13303c  dsll32      $a2, $s3, 0
    ctx->pc = 0x3fb550u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 19) << (32 + 0));
    // 0x3fb554: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x3fb554u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x3fb558: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3fb558u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fb55c: 0x3c31821  addu        $v1, $fp, $v1
    ctx->pc = 0x3fb55cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
    // 0x3fb560: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x3fb560u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x3fb564: 0x27de0010  addiu       $fp, $fp, 0x10
    ctx->pc = 0x3fb564u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 16));
    // 0x3fb568: 0xc0bb778  jal         func_2EDDE0
    ctx->pc = 0x3FB568u;
    SET_GPR_U32(ctx, 31, 0x3FB570u);
    ctx->pc = 0x3FB56Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FB568u;
    // 0x3fb56c: 0x8e850000  lw          $a1, 0x0($s4) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x3FB568u, 0x3FB570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FB570u;
label_3fb570:
    // 0x3fb570: 0xc0bc60c  jal         func_2F1830
    ctx->pc = 0x3FB570u;
    SET_GPR_U32(ctx, 31, 0x3FB578u);
    ctx->pc = 0x3FB574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FB570u;
    // 0x3fb574: 0x8e840004  lw          $a0, 0x4($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1830u, 0x3FB570u, 0x3FB578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FB578u;
label_3fb578:
    // 0x3fb578: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3fb578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3fb57c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3fb57cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fb580: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3fb580u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3fb584: 0x2983e  dsrl32      $s3, $v0, 0
    ctx->pc = 0x3fb584u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x3fb588: 0xc0f8ae2  jal         func_3E2B88
    ctx->pc = 0x3FB588u;
    SET_GPR_U32(ctx, 31, 0x3FB590u);
    ctx->pc = 0x3FB58Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FB588u;
    // 0x3fb58c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2B88u, 0x3FB588u, 0x3FB590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FB590u;
label_3fb590:
    // 0x3fb590: 0x8ea300e4  lw          $v1, 0xE4($s5)
    ctx->pc = 0x3fb590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 228)));
    // 0x3fb594: 0x13303c  dsll32      $a2, $s3, 0
    ctx->pc = 0x3fb594u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 19) << (32 + 0));
    // 0x3fb598: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x3fb598u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x3fb59c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3fb59cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fb5a0: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x3fb5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x3fb5a4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x3fb5a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x3fb5a8: 0xc0bb778  jal         func_2EDDE0
    ctx->pc = 0x3FB5A8u;
    SET_GPR_U32(ctx, 31, 0x3FB5B0u);
    ctx->pc = 0x3FB5ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FB5A8u;
    // 0x3fb5ac: 0x8e850004  lw          $a1, 0x4($s4) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x3FB5A8u, 0x3FB5B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FB5B0u;
label_3fb5b0:
    // 0x3fb5b0: 0xc0bc60c  jal         func_2F1830
    ctx->pc = 0x3FB5B0u;
    SET_GPR_U32(ctx, 31, 0x3FB5B8u);
    ctx->pc = 0x3FB5B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FB5B0u;
    // 0x3fb5b4: 0x8e840008  lw          $a0, 0x8($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1830u, 0x3FB5B0u, 0x3FB5B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FB5B8u;
label_3fb5b8:
    // 0x3fb5b8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3fb5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3fb5bc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3fb5bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fb5c0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3fb5c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3fb5c4: 0x2983e  dsrl32      $s3, $v0, 0
    ctx->pc = 0x3fb5c4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x3fb5c8: 0xc0f8ae2  jal         func_3E2B88
    ctx->pc = 0x3FB5C8u;
    SET_GPR_U32(ctx, 31, 0x3FB5D0u);
    ctx->pc = 0x3FB5CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FB5C8u;
    // 0x3fb5cc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2B88u, 0x3FB5C8u, 0x3FB5D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FB5D0u;
label_3fb5d0:
    // 0x3fb5d0: 0x8ea300e4  lw          $v1, 0xE4($s5)
    ctx->pc = 0x3fb5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 228)));
    // 0x3fb5d4: 0x13303c  dsll32      $a2, $s3, 0
    ctx->pc = 0x3fb5d4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 19) << (32 + 0));
    // 0x3fb5d8: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x3fb5d8u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x3fb5dc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3fb5dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fb5e0: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x3fb5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x3fb5e4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x3fb5e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x3fb5e8: 0xc0bb778  jal         func_2EDDE0
    ctx->pc = 0x3FB5E8u;
    SET_GPR_U32(ctx, 31, 0x3FB5F0u);
    ctx->pc = 0x3FB5ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FB5E8u;
    // 0x3fb5ec: 0x8e850008  lw          $a1, 0x8($s4) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x3FB5E8u, 0x3FB5F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FB5F0u;
label_3fb5f0:
    // 0x3fb5f0: 0xc0bc60c  jal         func_2F1830
    ctx->pc = 0x3FB5F0u;
    SET_GPR_U32(ctx, 31, 0x3FB5F8u);
    ctx->pc = 0x3FB5F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FB5F0u;
    // 0x3fb5f4: 0x8e84000c  lw          $a0, 0xC($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1830u, 0x3FB5F0u, 0x3FB5F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FB5F8u;
label_3fb5f8:
    // 0x3fb5f8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3fb5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3fb5fc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3fb5fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fb600: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3fb600u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3fb604: 0x2983e  dsrl32      $s3, $v0, 0
    ctx->pc = 0x3fb604u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x3fb608: 0xc0f8ae2  jal         func_3E2B88
    ctx->pc = 0x3FB608u;
    SET_GPR_U32(ctx, 31, 0x3FB610u);
    ctx->pc = 0x3FB60Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FB608u;
    // 0x3fb60c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2B88u, 0x3FB608u, 0x3FB610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FB610u;
label_3fb610:
    // 0x3fb610: 0x8ea300e4  lw          $v1, 0xE4($s5)
    ctx->pc = 0x3fb610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 228)));
    // 0x3fb614: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3fb614u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fb618: 0x13303c  dsll32      $a2, $s3, 0
    ctx->pc = 0x3fb618u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 19) << (32 + 0));
    // 0x3fb61c: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x3fb61cu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x3fb620: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x3fb620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x3fb624: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x3fb624u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x3fb628: 0x8e85000c  lw          $a1, 0xC($s4)
    ctx->pc = 0x3fb628u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x3fb62c: 0xc0bb778  jal         func_2EDDE0
    ctx->pc = 0x3FB62Cu;
    SET_GPR_U32(ctx, 31, 0x3FB634u);
    ctx->pc = 0x3FB630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FB62Cu;
    // 0x3fb630: 0x26940010  addiu       $s4, $s4, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x3FB62Cu, 0x3FB634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FB634u;
label_3fb634:
    // 0x3fb634: 0x56e0ffba  bnel        $s7, $zero, . + 4 + (-0x46 << 2)
    ctx->pc = 0x3FB634u;
    {
        const bool branch_taken_0x3fb634 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        if (branch_taken_0x3fb634) {
            ctx->pc = 0x3FB638u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3FB634u;
            // 0x3fb638: 0x8e840000  lw          $a0, 0x0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3FB520u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3fb520;
        }
    }
    ctx->pc = 0x3FB63Cu;
label_3fb63c:
    // 0x3fb63c: 0xdea30010  ld          $v1, 0x10($s5)
    ctx->pc = 0x3fb63cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 21), 16)));
label_3fb640:
    // 0x3fb640: 0x24050400  addiu       $a1, $zero, 0x400
    ctx->pc = 0x3fb640u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x3fb644: 0xdea200f0  ld          $v0, 0xF0($s5)
    ctx->pc = 0x3fb644u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 21), 240)));
    // 0x3fb648: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x3fb648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x3fb64c: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x3fb64cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x3fb650: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x3fb650u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x3fb654: 0xfea30010  sd          $v1, 0x10($s5)
    ctx->pc = 0x3fb654u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 16), GPR_U64(ctx, 3));
    // 0x3fb658: 0xfea200f0  sd          $v0, 0xF0($s5)
    ctx->pc = 0x3fb658u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 240), GPR_U64(ctx, 2));
label_3fb65c:
    // 0x3fb65c: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x3fb65cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3fb660:
    // 0x3fb660: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x3fb660u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3fb664: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x3fb664u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3fb668: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x3fb668u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3fb66c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x3fb66cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3fb670: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x3fb670u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3fb674: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x3fb674u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3fb678: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x3fb678u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3fb67c: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x3fb67cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3fb680: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3fb680u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3fb684: 0x3e00008  jr          $ra
    ctx->pc = 0x3FB684u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3FB688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FB684u;
        // 0x3fb688: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FB684u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3FB68Cu;
    // 0x3fb68c: 0x0  nop
    ctx->pc = 0x3fb68cu;
    // NOP
    ctx->pc = 0x3fb690u;
}
