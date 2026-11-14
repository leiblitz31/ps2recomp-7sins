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

// Function: sub_0026F280
// Address: 0x26f280 - 0x26f450
void sub_0026F280_0x26f280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026F280_0x26f280");
#endif

    switch (ctx->pc) {
        case 0x26f2c4u: goto label_26f2c4;
        case 0x26f2d4u: goto label_26f2d4;
        case 0x26f2e8u: goto label_26f2e8;
        case 0x26f2f4u: goto label_26f2f4;
        case 0x26f304u: goto label_26f304;
        case 0x26f314u: goto label_26f314;
        case 0x26f324u: goto label_26f324;
        case 0x26f330u: goto label_26f330;
        case 0x26f34cu: goto label_26f34c;
        case 0x26f364u: goto label_26f364;
        case 0x26f3b4u: goto label_26f3b4;
        case 0x26f3d0u: goto label_26f3d0;
        case 0x26f3ecu: goto label_26f3ec;
        default: break;
    }

    ctx->pc = 0x26f280u;

    // 0x26f280: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x26f280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x26f284: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x26f284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x26f288: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x26f288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x26f28c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x26f28cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x26f290: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x26f290u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x26f294: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x26f294u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x26f298: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x26f298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x26f29c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x26f29cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x26f2a0: 0xafa40080  sw          $a0, 0x80($sp)
    ctx->pc = 0x26f2a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 4));
    // 0x26f2a4: 0xafa50090  sw          $a1, 0x90($sp)
    ctx->pc = 0x26f2a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 5));
    // 0x26f2a8: 0xafa600a0  sw          $a2, 0xA0($sp)
    ctx->pc = 0x26f2a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 6));
    // 0x26f2ac: 0xa3a700b0  sb          $a3, 0xB0($sp)
    ctx->pc = 0x26f2acu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 176), (uint8_t)GPR_U32(ctx, 7));
    // 0x26f2b0: 0xa3a800c0  sb          $t0, 0xC0($sp)
    ctx->pc = 0x26f2b0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 192), (uint8_t)GPR_U32(ctx, 8));
    // 0x26f2b4: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x26f2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x26f2b8: 0x24440094  addiu       $a0, $v0, 0x94
    ctx->pc = 0x26f2b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 148));
    // 0x26f2bc: 0xc0683d8  jal         func_1A0F60
    ctx->pc = 0x26F2BCu;
    SET_GPR_U32(ctx, 31, 0x26F2C4u);
    ctx->pc = 0x1A0F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0F60u, 0x26F2BCu, 0x26F2C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F2C4u;
label_26f2c4:
    // 0x26f2c4: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x26f2c4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f2c8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x26f2c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f2cc: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x26F2CCu;
    {
        const bool branch_taken_0x26f2cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26f2cc) {
            ctx->pc = 0x26F40Cu;
            goto label_26f40c;
        }
    }
    ctx->pc = 0x26F2D4u;
label_26f2d4:
    // 0x26f2d4: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x26f2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x26f2d8: 0x24440094  addiu       $a0, $v0, 0x94
    ctx->pc = 0x26f2d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 148));
    // 0x26f2dc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x26f2dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f2e0: 0xc068170  jal         func_1A05C0
    ctx->pc = 0x26F2E0u;
    SET_GPR_U32(ctx, 31, 0x26F2E8u);
    ctx->pc = 0x1A05C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A05C0u, 0x26F2E0u, 0x26F2E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F2E8u;
label_26f2e8:
    // 0x26f2e8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x26f2e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26f2ec: 0xc041a70  jal         func_1069C0
    ctx->pc = 0x26F2ECu;
    SET_GPR_U32(ctx, 31, 0x26F2F4u);
    ctx->pc = 0x1069C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1069C0u, 0x26F2ECu, 0x26F2F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F2F4u;
label_26f2f4:
    // 0x26f2f4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x26f2f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f2f8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x26f2f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f2fc: 0xc048bb4  jal         func_122ED0
    ctx->pc = 0x26F2FCu;
    SET_GPR_U32(ctx, 31, 0x26F304u);
    ctx->pc = 0x122ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122ED0u, 0x26F2FCu, 0x26F304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F304u;
label_26f304:
    // 0x26f304: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x26f304u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f308: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x26f308u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f30c: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x26F30Cu;
    {
        const bool branch_taken_0x26f30c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26f30c) {
            ctx->pc = 0x26F3FCu;
            goto label_26f3fc;
        }
    }
    ctx->pc = 0x26F314u;
label_26f314:
    // 0x26f314: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x26f314u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f318: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x26f318u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f31c: 0xc068c94  jal         func_1A3250
    ctx->pc = 0x26F31Cu;
    SET_GPR_U32(ctx, 31, 0x26F324u);
    ctx->pc = 0x1A3250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3250u, 0x26F31Cu, 0x26F324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F324u;
label_26f324:
    // 0x26f324: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x26f324u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26f328: 0xc09d0b8  jal         func_2742E0
    ctx->pc = 0x26F328u;
    SET_GPR_U32(ctx, 31, 0x26F330u);
    ctx->pc = 0x2742E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2742E0u, 0x26F328u, 0x26F330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F330u;
label_26f330:
    // 0x26f330: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x26f330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x26f334: 0x14430030  bne         $v0, $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x26F334u;
    {
        const bool branch_taken_0x26f334 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x26f334) {
            ctx->pc = 0x26F3F8u;
            goto label_26f3f8;
        }
    }
    ctx->pc = 0x26F33Cu;
    // 0x26f33c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x26f33cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f340: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x26f340u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f344: 0xc068c94  jal         func_1A3250
    ctx->pc = 0x26F344u;
    SET_GPR_U32(ctx, 31, 0x26F34Cu);
    ctx->pc = 0x1A3250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3250u, 0x26F344u, 0x26F34Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F34Cu;
label_26f34c:
    // 0x26f34c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x26f34cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26f350: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x26f350u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x26f354: 0x24a5cfa0  addiu       $a1, $a1, -0x3060
    ctx->pc = 0x26f354u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954912));
    // 0x26f358: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x26f358u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f35c: 0xc047970  jal         func_11E5C0
    ctx->pc = 0x26F35Cu;
    SET_GPR_U32(ctx, 31, 0x26F364u);
    ctx->pc = 0x11E5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E5C0u, 0x26F35Cu, 0x26F364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F364u;
label_26f364:
    // 0x26f364: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x26f364u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f368: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x26f368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x26f36c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x26f36cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x26f370: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x26F370u;
    {
        const bool branch_taken_0x26f370 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x26f370) {
            ctx->pc = 0x26F3A0u;
            goto label_26f3a0;
        }
    }
    ctx->pc = 0x26F378u;
    // 0x26f378: 0x93a200b0  lbu         $v0, 0xB0($sp)
    ctx->pc = 0x26f378u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x26f37c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x26f37cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x26f380: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x26f380u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x26f384: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x26f384u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x26f388: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x26f388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x26f38c: 0x2621026  xor         $v0, $s3, $v0
    ctx->pc = 0x26f38cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) ^ GPR_U64(ctx, 2));
    // 0x26f390: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x26f390u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x26f394: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x26f394u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x26f398: 0x14620017  bne         $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x26F398u;
    {
        const bool branch_taken_0x26f398 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x26f398) {
            ctx->pc = 0x26F3F8u;
            goto label_26f3f8;
        }
    }
    ctx->pc = 0x26F3A0u;
label_26f3a0:
    // 0x26f3a0: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x26f3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x26f3a4: 0x24440094  addiu       $a0, $v0, 0x94
    ctx->pc = 0x26f3a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 148));
    // 0x26f3a8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x26f3a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f3ac: 0xc068170  jal         func_1A05C0
    ctx->pc = 0x26F3ACu;
    SET_GPR_U32(ctx, 31, 0x26F3B4u);
    ctx->pc = 0x1A05C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A05C0u, 0x26F3ACu, 0x26F3B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F3B4u;
label_26f3b4:
    // 0x26f3b4: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x26f3b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x26f3b8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x26f3b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26f3bc: 0x8fa60090  lw          $a2, 0x90($sp)
    ctx->pc = 0x26f3bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x26f3c0: 0x27a7007c  addiu       $a3, $sp, 0x7C
    ctx->pc = 0x26f3c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x26f3c4: 0x93a800c0  lbu         $t0, 0xC0($sp)
    ctx->pc = 0x26f3c4u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x26f3c8: 0xc09b3f4  jal         func_26CFD0
    ctx->pc = 0x26F3C8u;
    SET_GPR_U32(ctx, 31, 0x26F3D0u);
    ctx->pc = 0x26CFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26CFD0u, 0x26F3C8u, 0x26F3D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F3D0u;
label_26f3d0:
    // 0x26f3d0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x26F3D0u;
    {
        const bool branch_taken_0x26f3d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26f3d0) {
            ctx->pc = 0x26F3F8u;
            goto label_26f3f8;
        }
    }
    ctx->pc = 0x26F3D8u;
    // 0x26f3d8: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x26f3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x26f3dc: 0x24440094  addiu       $a0, $v0, 0x94
    ctx->pc = 0x26f3dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 148));
    // 0x26f3e0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x26f3e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f3e4: 0xc068170  jal         func_1A05C0
    ctx->pc = 0x26F3E4u;
    SET_GPR_U32(ctx, 31, 0x26F3ECu);
    ctx->pc = 0x1A05C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A05C0u, 0x26F3E4u, 0x26F3ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F3ECu;
label_26f3ec:
    // 0x26f3ec: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x26f3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26f3f0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x26F3F0u;
    {
        const bool branch_taken_0x26f3f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26f3f0) {
            ctx->pc = 0x26F41Cu;
            goto label_26f41c;
        }
    }
    ctx->pc = 0x26F3F8u;
label_26f3f8:
    // 0x26f3f8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x26f3f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_26f3fc:
    // 0x26f3fc: 0x234102b  sltu        $v0, $s1, $s4
    ctx->pc = 0x26f3fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x26f400: 0x1440ffc4  bnez        $v0, . + 4 + (-0x3C << 2)
    ctx->pc = 0x26F400u;
    {
        const bool branch_taken_0x26f400 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26f400) {
            ctx->pc = 0x26F314u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26f314;
        }
    }
    ctx->pc = 0x26F408u;
    // 0x26f408: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x26f408u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_26f40c:
    // 0x26f40c: 0x215102b  sltu        $v0, $s0, $s5
    ctx->pc = 0x26f40cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
    // 0x26f410: 0x1440ffb0  bnez        $v0, . + 4 + (-0x50 << 2)
    ctx->pc = 0x26F410u;
    {
        const bool branch_taken_0x26f410 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26f410) {
            ctx->pc = 0x26F2D4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26f2d4;
        }
    }
    ctx->pc = 0x26F418u;
    // 0x26f418: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x26f418u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26f41c:
    // 0x26f41c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x26f41cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x26f420: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x26f420u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x26f424: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x26f424u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26f428: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x26f428u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26f42c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x26f42cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26f430: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x26f430u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26f434: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26f434u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26f438: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x26f438u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x26f43c: 0x3e00008  jr          $ra
    ctx->pc = 0x26F43Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26F43Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26F444u;
    // 0x26f444: 0x0  nop
    ctx->pc = 0x26f444u;
    // NOP
    // 0x26f448: 0x0  nop
    ctx->pc = 0x26f448u;
    // NOP
    // 0x26f44c: 0x0  nop
    ctx->pc = 0x26f44cu;
    // NOP
    ctx->pc = 0x26f450u;
}
