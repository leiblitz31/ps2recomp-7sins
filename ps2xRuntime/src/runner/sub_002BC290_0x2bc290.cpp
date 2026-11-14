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

// Function: sub_002BC290
// Address: 0x2bc290 - 0x2bc810
void sub_002BC290_0x2bc290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BC290_0x2bc290");
#endif

    switch (ctx->pc) {
        case 0x2bc2dcu: goto label_2bc2dc;
        case 0x2bc2ecu: goto label_2bc2ec;
        case 0x2bc2f8u: goto label_2bc2f8;
        case 0x2bc308u: goto label_2bc308;
        case 0x2bc320u: goto label_2bc320;
        case 0x2bc338u: goto label_2bc338;
        case 0x2bc37cu: goto label_2bc37c;
        case 0x2bc3a8u: goto label_2bc3a8;
        case 0x2bc3bcu: goto label_2bc3bc;
        case 0x2bc3dcu: goto label_2bc3dc;
        case 0x2bc41cu: goto label_2bc41c;
        case 0x2bc430u: goto label_2bc430;
        case 0x2bc45cu: goto label_2bc45c;
        case 0x2bc49cu: goto label_2bc49c;
        case 0x2bc4bcu: goto label_2bc4bc;
        case 0x2bc4ccu: goto label_2bc4cc;
        case 0x2bc4dcu: goto label_2bc4dc;
        case 0x2bc510u: goto label_2bc510;
        case 0x2bc51cu: goto label_2bc51c;
        case 0x2bc544u: goto label_2bc544;
        case 0x2bc57cu: goto label_2bc57c;
        case 0x2bc590u: goto label_2bc590;
        case 0x2bc5d0u: goto label_2bc5d0;
        case 0x2bc5f0u: goto label_2bc5f0;
        case 0x2bc614u: goto label_2bc614;
        case 0x2bc670u: goto label_2bc670;
        case 0x2bc690u: goto label_2bc690;
        case 0x2bc6a0u: goto label_2bc6a0;
        case 0x2bc6b0u: goto label_2bc6b0;
        case 0x2bc6d8u: goto label_2bc6d8;
        case 0x2bc6f0u: goto label_2bc6f0;
        case 0x2bc700u: goto label_2bc700;
        case 0x2bc718u: goto label_2bc718;
        case 0x2bc740u: goto label_2bc740;
        case 0x2bc78cu: goto label_2bc78c;
        case 0x2bc798u: goto label_2bc798;
        case 0x2bc7a4u: goto label_2bc7a4;
        case 0x2bc7b4u: goto label_2bc7b4;
        case 0x2bc7d0u: goto label_2bc7d0;
        default: break;
    }

    ctx->pc = 0x2bc290u;

    // 0x2bc290: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x2bc290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x2bc294: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2bc294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2bc298: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2bc298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x2bc29c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2bc29cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x2bc2a0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2bc2a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2bc2a4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2bc2a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2bc2a8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2bc2a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2bc2ac: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2bc2acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2bc2b0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2bc2b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2bc2b4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2bc2b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2bc2b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2bc2b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2bc2bc: 0xafa400d0  sw          $a0, 0xD0($sp)
    ctx->pc = 0x2bc2bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 4));
    // 0x2bc2c0: 0xafa500e0  sw          $a1, 0xE0($sp)
    ctx->pc = 0x2bc2c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 5));
    // 0x2bc2c4: 0xa3a600f0  sb          $a2, 0xF0($sp)
    ctx->pc = 0x2bc2c4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 240), (uint8_t)GPR_U32(ctx, 6));
    // 0x2bc2c8: 0xafa70100  sw          $a3, 0x100($sp)
    ctx->pc = 0x2bc2c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 7));
    // 0x2bc2cc: 0xa3a80110  sb          $t0, 0x110($sp)
    ctx->pc = 0x2bc2ccu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 272), (uint8_t)GPR_U32(ctx, 8));
    // 0x2bc2d0: 0xa3a90120  sb          $t1, 0x120($sp)
    ctx->pc = 0x2bc2d0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 288), (uint8_t)GPR_U32(ctx, 9));
    // 0x2bc2d4: 0xc122430  jal         func_4890C0
    ctx->pc = 0x2BC2D4u;
    SET_GPR_U32(ctx, 31, 0x2BC2DCu);
    ctx->pc = 0x4890C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4890C0u, 0x2BC2D4u, 0x2BC2DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC2DCu;
label_2bc2dc:
    // 0x2bc2dc: 0xafa200c4  sw          $v0, 0xC4($sp)
    ctx->pc = 0x2bc2dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 2));
    // 0x2bc2e0: 0x8fa400c4  lw          $a0, 0xC4($sp)
    ctx->pc = 0x2bc2e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x2bc2e4: 0xc12127c  jal         func_4849F0
    ctx->pc = 0x2BC2E4u;
    SET_GPR_U32(ctx, 31, 0x2BC2ECu);
    ctx->pc = 0x4849F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4849F0u, 0x2BC2E4u, 0x2BC2ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC2ECu;
label_2bc2ec:
    // 0x2bc2ec: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x2bc2ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2bc2f0: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x2BC2F0u;
    SET_GPR_U32(ctx, 31, 0x2BC2F8u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x2BC2F0u, 0x2BC2F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC2F8u;
label_2bc2f8:
    // 0x2bc2f8: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x2bc2f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2bc2fc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2bc2fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc300: 0xc0400e0  jal         func_100380
    ctx->pc = 0x2BC300u;
    SET_GPR_U32(ctx, 31, 0x2BC308u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x2BC300u, 0x2BC308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC308u;
label_2bc308:
    // 0x2bc308: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2bc308u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc30c: 0x12800005  beqz        $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BC30Cu;
    {
        const bool branch_taken_0x2bc30c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bc30c) {
            ctx->pc = 0x2BC324u;
            goto label_2bc324;
        }
    }
    ctx->pc = 0x2BC314u;
    // 0x2bc314: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2bc314u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc318: 0xc09d114  jal         func_274450
    ctx->pc = 0x2BC318u;
    SET_GPR_U32(ctx, 31, 0x2BC320u);
    ctx->pc = 0x274450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274450u, 0x2BC318u, 0x2BC320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC320u;
label_2bc320:
    // 0x2bc320: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2bc320u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bc324:
    // 0x2bc324: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x2bc324u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc328: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x2bc328u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2bc32c: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x2bc32cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2bc330: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2BC330u;
    SET_GPR_U32(ctx, 31, 0x2BC338u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2BC330u, 0x2BC338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC338u;
label_2bc338:
    // 0x2bc338: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2bc338u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc33c: 0xa2000007  sb          $zero, 0x7($s0)
    ctx->pc = 0x2bc33cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 7), (uint8_t)GPR_U32(ctx, 0));
    // 0x2bc340: 0x93a200f0  lbu         $v0, 0xF0($sp)
    ctx->pc = 0x2bc340u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2bc344: 0xa2020004  sb          $v0, 0x4($s0)
    ctx->pc = 0x2bc344u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 2));
    // 0x2bc348: 0x93a20120  lbu         $v0, 0x120($sp)
    ctx->pc = 0x2bc348u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x2bc34c: 0xa2020006  sb          $v0, 0x6($s0)
    ctx->pc = 0x2bc34cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6), (uint8_t)GPR_U32(ctx, 2));
    // 0x2bc350: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x2bc350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2bc354: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2bc354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2bc358: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2bc358u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2bc35c: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x2bc35cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2bc360: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x2bc360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2bc364: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2BC364u;
    {
        const bool branch_taken_0x2bc364 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bc364) {
            ctx->pc = 0x2BC39Cu;
            goto label_2bc39c;
        }
    }
    ctx->pc = 0x2BC36Cu;
    // 0x2bc36c: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x2bc36cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2bc370: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x2bc370u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2bc374: 0xc085530  jal         func_2154C0
    ctx->pc = 0x2BC374u;
    SET_GPR_U32(ctx, 31, 0x2BC37Cu);
    ctx->pc = 0x2154C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154C0u, 0x2BC374u, 0x2BC37Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC37Cu;
label_2bc37c:
    // 0x2bc37c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2bc37cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2bc380: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2BC380u;
    {
        const bool branch_taken_0x2bc380 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2bc380) {
            ctx->pc = 0x2BC39Cu;
            goto label_2bc39c;
        }
    }
    ctx->pc = 0x2BC388u;
    // 0x2bc388: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x2bc388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2bc38c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x2bc38cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2bc390: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x2bc390u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x2bc394: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2BC394u;
    {
        const bool branch_taken_0x2bc394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bc394) {
            ctx->pc = 0x2BC3E0u;
            goto label_2bc3e0;
        }
    }
    ctx->pc = 0x2BC39Cu;
label_2bc39c:
    // 0x2bc39c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2bc39cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc3a0: 0xc0968a8  jal         func_25A2A0
    ctx->pc = 0x2BC3A0u;
    SET_GPR_U32(ctx, 31, 0x2BC3A8u);
    ctx->pc = 0x25A2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A2A0u, 0x2BC3A0u, 0x2BC3A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC3A8u;
label_2bc3a8:
    // 0x2bc3a8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2BC3A8u;
    {
        const bool branch_taken_0x2bc3a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bc3a8) {
            ctx->pc = 0x2BC3E0u;
            goto label_2bc3e0;
        }
    }
    ctx->pc = 0x2BC3B0u;
    // 0x2bc3b0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2bc3b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc3b4: 0xc0968a8  jal         func_25A2A0
    ctx->pc = 0x2BC3B4u;
    SET_GPR_U32(ctx, 31, 0x2BC3BCu);
    ctx->pc = 0x25A2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A2A0u, 0x2BC3B4u, 0x2BC3BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC3BCu;
label_2bc3bc:
    // 0x2bc3bc: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x2bc3bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x2bc3c0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2bc3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2bc3c4: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x2bc3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2bc3c8: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BC3C8u;
    {
        const bool branch_taken_0x2bc3c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2bc3c8) {
            ctx->pc = 0x2BC3E0u;
            goto label_2bc3e0;
        }
    }
    ctx->pc = 0x2BC3D0u;
    // 0x2bc3d0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2bc3d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc3d4: 0xc096ea4  jal         func_25BA90
    ctx->pc = 0x2BC3D4u;
    SET_GPR_U32(ctx, 31, 0x2BC3DCu);
    ctx->pc = 0x25BA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BA90u, 0x2BC3D4u, 0x2BC3DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC3DCu;
label_2bc3dc:
    // 0x2bc3dc: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2bc3dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_2bc3e0:
    // 0x2bc3e0: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x2bc3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2bc3e4: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x2bc3e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x2bc3e8: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x2bc3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2bc3ec: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x2bc3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2bc3f0: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x2bc3f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x2bc3f4: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x2bc3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2bc3f8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BC3F8u;
    {
        const bool branch_taken_0x2bc3f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bc3f8) {
            ctx->pc = 0x2BC410u;
            goto label_2bc410;
        }
    }
    ctx->pc = 0x2BC400u;
    // 0x2bc400: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x2bc400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2bc404: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x2bc404u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x2bc408: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x2BC408u;
    {
        const bool branch_taken_0x2bc408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bc408) {
            ctx->pc = 0x2BC488u;
            goto label_2bc488;
        }
    }
    ctx->pc = 0x2BC410u;
label_2bc410:
    // 0x2bc410: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2bc410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc414: 0xc096880  jal         func_25A200
    ctx->pc = 0x2BC414u;
    SET_GPR_U32(ctx, 31, 0x2BC41Cu);
    ctx->pc = 0x25A200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A200u, 0x2BC414u, 0x2BC41Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC41Cu;
label_2bc41c:
    // 0x2bc41c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2BC41Cu;
    {
        const bool branch_taken_0x2bc41c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bc41c) {
            ctx->pc = 0x2BC43Cu;
            goto label_2bc43c;
        }
    }
    ctx->pc = 0x2BC424u;
    // 0x2bc424: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2bc424u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc428: 0xc096880  jal         func_25A200
    ctx->pc = 0x2BC428u;
    SET_GPR_U32(ctx, 31, 0x2BC430u);
    ctx->pc = 0x25A200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A200u, 0x2BC428u, 0x2BC430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC430u;
label_2bc430:
    // 0x2bc430: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x2bc430u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x2bc434: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2BC434u;
    {
        const bool branch_taken_0x2bc434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bc434) {
            ctx->pc = 0x2BC488u;
            goto label_2bc488;
        }
    }
    ctx->pc = 0x2BC43Cu;
label_2bc43c:
    // 0x2bc43c: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x2bc43cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2bc440: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x2bc440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2bc444: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2BC444u;
    {
        const bool branch_taken_0x2bc444 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bc444) {
            ctx->pc = 0x2BC488u;
            goto label_2bc488;
        }
    }
    ctx->pc = 0x2BC44Cu;
    // 0x2bc44c: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x2bc44cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2bc450: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x2bc450u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2bc454: 0xc085530  jal         func_2154C0
    ctx->pc = 0x2BC454u;
    SET_GPR_U32(ctx, 31, 0x2BC45Cu);
    ctx->pc = 0x2154C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154C0u, 0x2BC454u, 0x2BC45Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC45Cu;
label_2bc45c:
    // 0x2bc45c: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2bc45cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2bc460: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2BC460u;
    {
        const bool branch_taken_0x2bc460 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2bc460) {
            ctx->pc = 0x2BC488u;
            goto label_2bc488;
        }
    }
    ctx->pc = 0x2BC468u;
    // 0x2bc468: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x2bc468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2bc46c: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x2bc46cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2bc470: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x2bc470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2bc474: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BC474u;
    {
        const bool branch_taken_0x2bc474 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2bc474) {
            ctx->pc = 0x2BC488u;
            goto label_2bc488;
        }
    }
    ctx->pc = 0x2BC47Cu;
    // 0x2bc47c: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x2bc47cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2bc480: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x2bc480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2bc484: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x2bc484u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_2bc488:
    // 0x2bc488: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x2bc488u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc48c: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x2bc48cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2bc490: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x2bc490u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x2bc494: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2BC494u;
    SET_GPR_U32(ctx, 31, 0x2BC49Cu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2BC494u, 0x2BC49Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC49Cu;
label_2bc49c:
    // 0x2bc49c: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x2bc49cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x2bc4a0: 0x93a20110  lbu         $v0, 0x110($sp)
    ctx->pc = 0x2bc4a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2bc4a4: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2BC4A4u;
    {
        const bool branch_taken_0x2bc4a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bc4a4) {
            ctx->pc = 0x2BC4E8u;
            goto label_2bc4e8;
        }
    }
    ctx->pc = 0x2BC4ACu;
    // 0x2bc4ac: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x2bc4acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2bc4b0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2bc4b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bc4b4: 0xc0ae044  jal         func_2B8110
    ctx->pc = 0x2BC4B4u;
    SET_GPR_U32(ctx, 31, 0x2BC4BCu);
    ctx->pc = 0x2B8110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8110u, 0x2BC4B4u, 0x2BC4BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC4BCu;
label_2bc4bc:
    // 0x2bc4bc: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x2bc4bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2bc4c0: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x2bc4c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2bc4c4: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2BC4C4u;
    SET_GPR_U32(ctx, 31, 0x2BC4CCu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2BC4C4u, 0x2BC4CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC4CCu;
label_2bc4cc:
    // 0x2bc4cc: 0xafa200bc  sw          $v0, 0xBC($sp)
    ctx->pc = 0x2bc4ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
    // 0x2bc4d0: 0x8fa400bc  lw          $a0, 0xBC($sp)
    ctx->pc = 0x2bc4d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x2bc4d4: 0xc09c408  jal         func_271020
    ctx->pc = 0x2BC4D4u;
    SET_GPR_U32(ctx, 31, 0x2BC4DCu);
    ctx->pc = 0x271020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x271020u, 0x2BC4D4u, 0x2BC4DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC4DCu;
label_2bc4dc:
    // 0x2bc4dc: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2BC4DCu;
    {
        const bool branch_taken_0x2bc4dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bc4dc) {
            ctx->pc = 0x2BC4E8u;
            goto label_2bc4e8;
        }
    }
    ctx->pc = 0x2BC4E4u;
    // 0x2bc4e4: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x2bc4e4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_2bc4e8:
    // 0x2bc4e8: 0xa3a000ce  sb          $zero, 0xCE($sp)
    ctx->pc = 0x2bc4e8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 206), (uint8_t)GPR_U32(ctx, 0));
    // 0x2bc4ec: 0xa3a000cd  sb          $zero, 0xCD($sp)
    ctx->pc = 0x2bc4ecu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 205), (uint8_t)GPR_U32(ctx, 0));
    // 0x2bc4f0: 0xa3a000cc  sb          $zero, 0xCC($sp)
    ctx->pc = 0x2bc4f0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 204), (uint8_t)GPR_U32(ctx, 0));
    // 0x2bc4f4: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2bc4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2bc4f8: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2BC4F8u;
    {
        const bool branch_taken_0x2bc4f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bc4f8) {
            ctx->pc = 0x2BC564u;
            goto label_2bc564;
        }
    }
    ctx->pc = 0x2BC500u;
    // 0x2bc500: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2bc500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bc504: 0xa3a200cb  sb          $v0, 0xCB($sp)
    ctx->pc = 0x2bc504u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 203), (uint8_t)GPR_U32(ctx, 2));
    // 0x2bc508: 0xc08ef50  jal         func_23BD40
    ctx->pc = 0x2BC508u;
    SET_GPR_U32(ctx, 31, 0x2BC510u);
    ctx->pc = 0x23BD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BD40u, 0x2BC508u, 0x2BC510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC510u;
label_2bc510:
    // 0x2bc510: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2bc510u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc514: 0xc0406f0  jal         func_101BC0
    ctx->pc = 0x2BC514u;
    SET_GPR_U32(ctx, 31, 0x2BC51Cu);
    ctx->pc = 0x101BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101BC0u, 0x2BC514u, 0x2BC51Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC51Cu;
label_2bc51c:
    // 0x2bc51c: 0x3842000c  xori        $v0, $v0, 0xC
    ctx->pc = 0x2bc51cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)12);
    // 0x2bc520: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2bc520u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2bc524: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2bc524u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2bc528: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2BC528u;
    {
        const bool branch_taken_0x2bc528 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bc528) {
            ctx->pc = 0x2BC550u;
            goto label_2bc550;
        }
    }
    ctx->pc = 0x2BC530u;
    // 0x2bc530: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x2bc530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2bc534: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2bc534u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2bc538: 0x93a500f0  lbu         $a1, 0xF0($sp)
    ctx->pc = 0x2bc538u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2bc53c: 0xc09a02c  jal         func_2680B0
    ctx->pc = 0x2BC53Cu;
    SET_GPR_U32(ctx, 31, 0x2BC544u);
    ctx->pc = 0x2680B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2680B0u, 0x2BC53Cu, 0x2BC544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC544u;
label_2bc544:
    // 0x2bc544: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2BC544u;
    {
        const bool branch_taken_0x2bc544 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bc544) {
            ctx->pc = 0x2BC550u;
            goto label_2bc550;
        }
    }
    ctx->pc = 0x2BC54Cu;
    // 0x2bc54c: 0xa3a000cb  sb          $zero, 0xCB($sp)
    ctx->pc = 0x2bc54cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 203), (uint8_t)GPR_U32(ctx, 0));
label_2bc550:
    // 0x2bc550: 0x93a200cb  lbu         $v0, 0xCB($sp)
    ctx->pc = 0x2bc550u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 203)));
    // 0x2bc554: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BC554u;
    {
        const bool branch_taken_0x2bc554 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bc554) {
            ctx->pc = 0x2BC564u;
            goto label_2bc564;
        }
    }
    ctx->pc = 0x2BC55Cu;
    // 0x2bc55c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2bc55cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bc560: 0xa3a200cc  sb          $v0, 0xCC($sp)
    ctx->pc = 0x2bc560u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 204), (uint8_t)GPR_U32(ctx, 2));
label_2bc564:
    // 0x2bc564: 0x93a200cc  lbu         $v0, 0xCC($sp)
    ctx->pc = 0x2bc564u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x2bc568: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2BC568u;
    {
        const bool branch_taken_0x2bc568 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bc568) {
            ctx->pc = 0x2BC5A8u;
            goto label_2bc5a8;
        }
    }
    ctx->pc = 0x2BC570u;
    // 0x2bc570: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x2bc570u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2bc574: 0xc048094  jal         func_120250
    ctx->pc = 0x2BC574u;
    SET_GPR_U32(ctx, 31, 0x2BC57Cu);
    ctx->pc = 0x120250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120250u, 0x2BC574u, 0x2BC57Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC57Cu;
label_2bc57c:
    // 0x2bc57c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2bc57cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc580: 0x2785a4c0  addiu       $a1, $gp, -0x5B40
    ctx->pc = 0x2bc580u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943936));
    // 0x2bc584: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2bc584u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc588: 0xc047328  jal         func_11CCA0
    ctx->pc = 0x2BC588u;
    SET_GPR_U32(ctx, 31, 0x2BC590u);
    ctx->pc = 0x11CCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11CCA0u, 0x2BC588u, 0x2BC590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC590u;
label_2bc590:
    // 0x2bc590: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2bc590u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2bc594: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2bc594u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2bc598: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BC598u;
    {
        const bool branch_taken_0x2bc598 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bc598) {
            ctx->pc = 0x2BC5A8u;
            goto label_2bc5a8;
        }
    }
    ctx->pc = 0x2BC5A0u;
    // 0x2bc5a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2bc5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bc5a4: 0xa3a200cd  sb          $v0, 0xCD($sp)
    ctx->pc = 0x2bc5a4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 205), (uint8_t)GPR_U32(ctx, 2));
label_2bc5a8:
    // 0x2bc5a8: 0x93a200cd  lbu         $v0, 0xCD($sp)
    ctx->pc = 0x2bc5a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 205)));
    // 0x2bc5ac: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x2BC5ACu;
    {
        const bool branch_taken_0x2bc5ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bc5ac) {
            ctx->pc = 0x2BC648u;
            goto label_2bc648;
        }
    }
    ctx->pc = 0x2BC5B4u;
    // 0x2bc5b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2bc5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bc5b8: 0x305e00ff  andi        $fp, $v0, 0xFF
    ctx->pc = 0x2bc5b8u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2bc5bc: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x2bc5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2bc5c0: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2bc5c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2bc5c4: 0x93a500f0  lbu         $a1, 0xF0($sp)
    ctx->pc = 0x2bc5c4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2bc5c8: 0xc09a02c  jal         func_2680B0
    ctx->pc = 0x2BC5C8u;
    SET_GPR_U32(ctx, 31, 0x2BC5D0u);
    ctx->pc = 0x2680B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2680B0u, 0x2BC5C8u, 0x2BC5D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC5D0u;
label_2bc5d0:
    // 0x2bc5d0: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2BC5D0u;
    {
        const bool branch_taken_0x2bc5d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bc5d0) {
            ctx->pc = 0x2BC638u;
            goto label_2bc638;
        }
    }
    ctx->pc = 0x2BC5D8u;
    // 0x2bc5d8: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x2bc5d8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc5dc: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x2bc5dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2bc5e0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2bc5e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bc5e4: 0x93a600f0  lbu         $a2, 0xF0($sp)
    ctx->pc = 0x2bc5e4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2bc5e8: 0xc099f94  jal         func_267E50
    ctx->pc = 0x2BC5E8u;
    SET_GPR_U32(ctx, 31, 0x2BC5F0u);
    ctx->pc = 0x267E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267E50u, 0x2BC5E8u, 0x2BC5F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC5F0u;
label_2bc5f0:
    // 0x2bc5f0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2bc5f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2bc5f4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2bc5f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2bc5f8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2BC5F8u;
    {
        const bool branch_taken_0x2bc5f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bc5f8) {
            ctx->pc = 0x2BC62Cu;
            goto label_2bc62c;
        }
    }
    ctx->pc = 0x2BC600u;
    // 0x2bc600: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x2bc600u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2bc604: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2bc604u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc608: 0x93a600f0  lbu         $a2, 0xF0($sp)
    ctx->pc = 0x2bc608u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2bc60c: 0xc099f94  jal         func_267E50
    ctx->pc = 0x2BC60Cu;
    SET_GPR_U32(ctx, 31, 0x2BC614u);
    ctx->pc = 0x267E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267E50u, 0x2BC60Cu, 0x2BC614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC614u;
label_2bc614:
    // 0x2bc614: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2bc614u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2bc618: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2bc618u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2bc61c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BC61Cu;
    {
        const bool branch_taken_0x2bc61c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bc61c) {
            ctx->pc = 0x2BC62Cu;
            goto label_2bc62c;
        }
    }
    ctx->pc = 0x2BC624u;
    // 0x2bc624: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2bc624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bc628: 0x305700ff  andi        $s7, $v0, 0xFF
    ctx->pc = 0x2bc628u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2bc62c:
    // 0x2bc62c: 0x16e00002  bnez        $s7, . + 4 + (0x2 << 2)
    ctx->pc = 0x2BC62Cu;
    {
        const bool branch_taken_0x2bc62c = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bc62c) {
            ctx->pc = 0x2BC638u;
            goto label_2bc638;
        }
    }
    ctx->pc = 0x2BC634u;
    // 0x2bc634: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x2bc634u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bc638:
    // 0x2bc638: 0x13c00003  beqz        $fp, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BC638u;
    {
        const bool branch_taken_0x2bc638 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bc638) {
            ctx->pc = 0x2BC648u;
            goto label_2bc648;
        }
    }
    ctx->pc = 0x2BC640u;
    // 0x2bc640: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2bc640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bc644: 0xa3a200ce  sb          $v0, 0xCE($sp)
    ctx->pc = 0x2bc644u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 206), (uint8_t)GPR_U32(ctx, 2));
label_2bc648:
    // 0x2bc648: 0x93a200ce  lbu         $v0, 0xCE($sp)
    ctx->pc = 0x2bc648u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 206)));
    // 0x2bc64c: 0xa3a200cf  sb          $v0, 0xCF($sp)
    ctx->pc = 0x2bc64cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 207), (uint8_t)GPR_U32(ctx, 2));
    // 0x2bc650: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2bc650u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc654: 0x93a200cf  lbu         $v0, 0xCF($sp)
    ctx->pc = 0x2bc654u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 207)));
    // 0x2bc658: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2BC658u;
    {
        const bool branch_taken_0x2bc658 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bc658) {
            ctx->pc = 0x2BC6BCu;
            goto label_2bc6bc;
        }
    }
    ctx->pc = 0x2BC660u;
    // 0x2bc660: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x2bc660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2bc664: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x2bc664u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x2bc668: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2BC668u;
    SET_GPR_U32(ctx, 31, 0x2BC670u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2BC668u, 0x2BC670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC670u;
label_2bc670:
    // 0x2bc670: 0xafa200b8  sw          $v0, 0xB8($sp)
    ctx->pc = 0x2bc670u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 2));
    // 0x2bc674: 0x93a20110  lbu         $v0, 0x110($sp)
    ctx->pc = 0x2bc674u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2bc678: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2BC678u;
    {
        const bool branch_taken_0x2bc678 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bc678) {
            ctx->pc = 0x2BC6BCu;
            goto label_2bc6bc;
        }
    }
    ctx->pc = 0x2BC680u;
    // 0x2bc680: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x2bc680u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2bc684: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2bc684u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bc688: 0xc0ae044  jal         func_2B8110
    ctx->pc = 0x2BC688u;
    SET_GPR_U32(ctx, 31, 0x2BC690u);
    ctx->pc = 0x2B8110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8110u, 0x2BC688u, 0x2BC690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC690u;
label_2bc690:
    // 0x2bc690: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x2bc690u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2bc694: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x2bc694u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2bc698: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2BC698u;
    SET_GPR_U32(ctx, 31, 0x2BC6A0u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2BC698u, 0x2BC6A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC6A0u;
label_2bc6a0:
    // 0x2bc6a0: 0xafa200b4  sw          $v0, 0xB4($sp)
    ctx->pc = 0x2bc6a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 2));
    // 0x2bc6a4: 0x8fa400b4  lw          $a0, 0xB4($sp)
    ctx->pc = 0x2bc6a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x2bc6a8: 0xc09c408  jal         func_271020
    ctx->pc = 0x2BC6A8u;
    SET_GPR_U32(ctx, 31, 0x2BC6B0u);
    ctx->pc = 0x271020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x271020u, 0x2BC6A8u, 0x2BC6B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC6B0u;
label_2bc6b0:
    // 0x2bc6b0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2BC6B0u;
    {
        const bool branch_taken_0x2bc6b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bc6b0) {
            ctx->pc = 0x2BC6BCu;
            goto label_2bc6bc;
        }
    }
    ctx->pc = 0x2BC6B8u;
    // 0x2bc6b8: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x2bc6b8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_2bc6bc:
    // 0x2bc6bc: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x2bc6bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2bc6c0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2bc6c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc6c4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2bc6c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc6c8: 0x93a700f0  lbu         $a3, 0xF0($sp)
    ctx->pc = 0x2bc6c8u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2bc6cc: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x2bc6ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc6d0: 0xc0adf0c  jal         func_2B7C30
    ctx->pc = 0x2BC6D0u;
    SET_GPR_U32(ctx, 31, 0x2BC6D8u);
    ctx->pc = 0x2B7C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7C30u, 0x2BC6D0u, 0x2BC6D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC6D8u;
label_2bc6d8:
    // 0x2bc6d8: 0x93a300cf  lbu         $v1, 0xCF($sp)
    ctx->pc = 0x2bc6d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 207)));
    // 0x2bc6dc: 0x1060003c  beqz        $v1, . + 4 + (0x3C << 2)
    ctx->pc = 0x2BC6DCu;
    {
        const bool branch_taken_0x2bc6dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bc6dc) {
            ctx->pc = 0x2BC7D0u;
            goto label_2bc7d0;
        }
    }
    ctx->pc = 0x2BC6E4u;
    // 0x2bc6e4: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x2bc6e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2bc6e8: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x2BC6E8u;
    SET_GPR_U32(ctx, 31, 0x2BC6F0u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x2BC6E8u, 0x2BC6F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC6F0u;
label_2bc6f0:
    // 0x2bc6f0: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x2bc6f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2bc6f4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2bc6f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc6f8: 0xc0400e0  jal         func_100380
    ctx->pc = 0x2BC6F8u;
    SET_GPR_U32(ctx, 31, 0x2BC700u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x2BC6F8u, 0x2BC700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC700u;
label_2bc700:
    // 0x2bc700: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2bc700u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc704: 0x12600005  beqz        $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BC704u;
    {
        const bool branch_taken_0x2bc704 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bc704) {
            ctx->pc = 0x2BC71Cu;
            goto label_2bc71c;
        }
    }
    ctx->pc = 0x2BC70Cu;
    // 0x2bc70c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2bc70cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc710: 0xc09d114  jal         func_274450
    ctx->pc = 0x2BC710u;
    SET_GPR_U32(ctx, 31, 0x2BC718u);
    ctx->pc = 0x274450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274450u, 0x2BC710u, 0x2BC718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC718u;
label_2bc718:
    // 0x2bc718: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2bc718u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bc71c:
    // 0x2bc71c: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x2bc71cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc720: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2bc720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bc724: 0xa2220007  sb          $v0, 0x7($s1)
    ctx->pc = 0x2bc724u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 7), (uint8_t)GPR_U32(ctx, 2));
    // 0x2bc728: 0x93a200f0  lbu         $v0, 0xF0($sp)
    ctx->pc = 0x2bc728u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2bc72c: 0xa2220004  sb          $v0, 0x4($s1)
    ctx->pc = 0x2bc72cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4), (uint8_t)GPR_U32(ctx, 2));
    // 0x2bc730: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x2bc730u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2bc734: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x2bc734u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2bc738: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2BC738u;
    SET_GPR_U32(ctx, 31, 0x2BC740u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2BC738u, 0x2BC740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC740u;
label_2bc740:
    // 0x2bc740: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x2bc740u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x2bc744: 0x93a20120  lbu         $v0, 0x120($sp)
    ctx->pc = 0x2bc744u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x2bc748: 0xa2220006  sb          $v0, 0x6($s1)
    ctx->pc = 0x2bc748u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 6), (uint8_t)GPR_U32(ctx, 2));
    // 0x2bc74c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x2bc74cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2bc750: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x2bc750u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x2bc754: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2bc754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2bc758: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x2bc758u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x2bc75c: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x2bc75cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2bc760: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x2bc760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2bc764: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x2bc764u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
    // 0x2bc768: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2bc768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2bc76c: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x2bc76cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x2bc770: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x2bc770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2bc774: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2bc774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2bc778: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2bc778u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x2bc77c: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x2bc77cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2bc780: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x2bc780u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x2bc784: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2BC784u;
    SET_GPR_U32(ctx, 31, 0x2BC78Cu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2BC784u, 0x2BC78Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC78Cu;
label_2bc78c:
    // 0x2bc78c: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x2bc78cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
    // 0x2bc790: 0xc0b06cc  jal         func_2C1B30
    ctx->pc = 0x2BC790u;
    SET_GPR_U32(ctx, 31, 0x2BC798u);
    ctx->pc = 0x2C1B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1B30u, 0x2BC790u, 0x2BC798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC798u;
label_2bc798:
    // 0x2bc798: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2bc798u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc79c: 0xc0b06c4  jal         func_2C1B10
    ctx->pc = 0x2BC79Cu;
    SET_GPR_U32(ctx, 31, 0x2BC7A4u);
    ctx->pc = 0x2C1B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1B10u, 0x2BC79Cu, 0x2BC7A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC7A4u;
label_2bc7a4:
    // 0x2bc7a4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2bc7a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc7a8: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x2bc7a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2bc7ac: 0xc0b5ad0  jal         func_2D6B40
    ctx->pc = 0x2BC7ACu;
    SET_GPR_U32(ctx, 31, 0x2BC7B4u);
    ctx->pc = 0x2D6B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6B40u, 0x2BC7ACu, 0x2BC7B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC7B4u;
label_2bc7b4:
    // 0x2bc7b4: 0x8fa400ac  lw          $a0, 0xAC($sp)
    ctx->pc = 0x2bc7b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x2bc7b8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2bc7b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc7bc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2bc7bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2bc7c0: 0x93a700f0  lbu         $a3, 0xF0($sp)
    ctx->pc = 0x2bc7c0u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2bc7c4: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x2bc7c4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc7c8: 0xc0adf0c  jal         func_2B7C30
    ctx->pc = 0x2BC7C8u;
    SET_GPR_U32(ctx, 31, 0x2BC7D0u);
    ctx->pc = 0x2B7C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7C30u, 0x2BC7C8u, 0x2BC7D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC7D0u;
label_2bc7d0:
    // 0x2bc7d0: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2bc7d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2bc7d4: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2bc7d4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2bc7d8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2bc7d8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2bc7dc: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2bc7dcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2bc7e0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2bc7e0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2bc7e4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2bc7e4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2bc7e8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2bc7e8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2bc7ec: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2bc7ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bc7f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2bc7f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bc7f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2bc7f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bc7f8: 0x27bd0130  addiu       $sp, $sp, 0x130
    ctx->pc = 0x2bc7f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x2bc7fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2BC7FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BC7FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BC804u;
    // 0x2bc804: 0x0  nop
    ctx->pc = 0x2bc804u;
    // NOP
    // 0x2bc808: 0x0  nop
    ctx->pc = 0x2bc808u;
    // NOP
    // 0x2bc80c: 0x0  nop
    ctx->pc = 0x2bc80cu;
    // NOP
    ctx->pc = 0x2bc810u;
}
