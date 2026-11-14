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

// Function: sub_001EF2C0
// Address: 0x1ef2c0 - 0x1ef430
void sub_001EF2C0_0x1ef2c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EF2C0_0x1ef2c0");
#endif

    switch (ctx->pc) {
        case 0x1ef2ecu: goto label_1ef2ec;
        case 0x1ef314u: goto label_1ef314;
        case 0x1ef324u: goto label_1ef324;
        case 0x1ef330u: goto label_1ef330;
        case 0x1ef370u: goto label_1ef370;
        case 0x1ef384u: goto label_1ef384;
        case 0x1ef3acu: goto label_1ef3ac;
        case 0x1ef3d4u: goto label_1ef3d4;
        case 0x1ef3e0u: goto label_1ef3e0;
        case 0x1ef3f4u: goto label_1ef3f4;
        case 0x1ef408u: goto label_1ef408;
        default: break;
    }

    ctx->pc = 0x1ef2c0u;

    // 0x1ef2c0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1ef2c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1ef2c4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1ef2c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1ef2c8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1ef2c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1ef2cc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ef2ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ef2d0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ef2d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ef2d4: 0xafa40060  sw          $a0, 0x60($sp)
    ctx->pc = 0x1ef2d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
    // 0x1ef2d8: 0x27a4005c  addiu       $a0, $sp, 0x5C
    ctx->pc = 0x1ef2d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x1ef2dc: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1ef2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ef2e0: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1EF2E0u;
    {
        const bool branch_taken_0x1ef2e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ef2e0) {
            ctx->pc = 0x1EF308u;
            goto label_1ef308;
        }
    }
    ctx->pc = 0x1EF2E8u;
    // 0x1ef2e8: 0x801021  addu        $v0, $a0, $zero
    ctx->pc = 0x1ef2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 0)));
label_1ef2ec:
    // 0x1ef2ec: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x1ef2ecu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ef2f0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1ef2f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1ef2f4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1ef2f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1ef2f8: 0x0  nop
    ctx->pc = 0x1ef2f8u;
    // NOP
    // 0x1ef2fc: 0x0  nop
    ctx->pc = 0x1ef2fcu;
    // NOP
    // 0x1ef300: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1EF300u;
    {
        const bool branch_taken_0x1ef300 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ef300) {
            ctx->pc = 0x1EF2ECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ef2ec;
        }
    }
    ctx->pc = 0x1EF308u;
label_1ef308:
    // 0x1ef308: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x1ef308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x1ef30c: 0xc0447ec  jal         func_111FB0
    ctx->pc = 0x1EF30Cu;
    SET_GPR_U32(ctx, 31, 0x1EF314u);
    ctx->pc = 0x111FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111FB0u, 0x1EF30Cu, 0x1EF314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF314u;
label_1ef314:
    // 0x1ef314: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1ef314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1ef318: 0x244400bc  addiu       $a0, $v0, 0xBC
    ctx->pc = 0x1ef318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 188));
    // 0x1ef31c: 0xc07ac08  jal         func_1EB020
    ctx->pc = 0x1EF31Cu;
    SET_GPR_U32(ctx, 31, 0x1EF324u);
    ctx->pc = 0x1EB020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB020u, 0x1EF31Cu, 0x1EF324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF324u;
label_1ef324:
    // 0x1ef324: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ef324u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef328: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1EF328u;
    {
        const bool branch_taken_0x1ef328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ef328) {
            ctx->pc = 0x1EF360u;
            goto label_1ef360;
        }
    }
    ctx->pc = 0x1EF330u;
label_1ef330:
    // 0x1ef330: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1ef330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ef334: 0x90420004  lbu         $v0, 0x4($v0)
    ctx->pc = 0x1ef334u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1ef338: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1ef338u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1ef33c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ef33cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ef340: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EF340u;
    {
        const bool branch_taken_0x1ef340 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ef340) {
            ctx->pc = 0x1EF35Cu;
            goto label_1ef35c;
        }
    }
    ctx->pc = 0x1EF348u;
    // 0x1ef348: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ef348u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ef34c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1ef34cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ef350: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1ef350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1ef354: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x1ef354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1ef358: 0xa043005c  sb          $v1, 0x5C($v0)
    ctx->pc = 0x1ef358u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 92), (uint8_t)GPR_U32(ctx, 3));
label_1ef35c:
    // 0x1ef35c: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x1ef35cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_1ef360:
    // 0x1ef360: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1ef360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1ef364: 0x244400bc  addiu       $a0, $v0, 0xBC
    ctx->pc = 0x1ef364u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 188));
    // 0x1ef368: 0xc07abf8  jal         func_1EAFE0
    ctx->pc = 0x1EF368u;
    SET_GPR_U32(ctx, 31, 0x1EF370u);
    ctx->pc = 0x1EAFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAFE0u, 0x1EF368u, 0x1EF370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF370u;
label_1ef370:
    // 0x1ef370: 0x1602ffef  bne         $s0, $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1EF370u;
    {
        const bool branch_taken_0x1ef370 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ef370) {
            ctx->pc = 0x1EF330u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ef330;
        }
    }
    ctx->pc = 0x1EF378u;
    // 0x1ef378: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x1ef378u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
    // 0x1ef37c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1EF37Cu;
    {
        const bool branch_taken_0x1ef37c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ef37c) {
            ctx->pc = 0x1EF3B8u;
            goto label_1ef3b8;
        }
    }
    ctx->pc = 0x1EF384u;
label_1ef384:
    // 0x1ef384: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1ef384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ef388: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x1ef388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1ef38c: 0x9042005c  lbu         $v0, 0x5C($v0)
    ctx->pc = 0x1ef38cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x1ef390: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1ef390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1ef394: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EF394u;
    {
        const bool branch_taken_0x1ef394 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ef394) {
            ctx->pc = 0x1EF3ACu;
            goto label_1ef3ac;
        }
    }
    ctx->pc = 0x1EF39Cu;
    // 0x1ef39c: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x1ef39cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x1ef3a0: 0x27a50058  addiu       $a1, $sp, 0x58
    ctx->pc = 0x1ef3a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x1ef3a4: 0xc0444e0  jal         func_111380
    ctx->pc = 0x1EF3A4u;
    SET_GPR_U32(ctx, 31, 0x1EF3ACu);
    ctx->pc = 0x111380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111380u, 0x1EF3A4u, 0x1EF3ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF3ACu;
label_1ef3ac:
    // 0x1ef3ac: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1ef3acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ef3b0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1ef3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1ef3b4: 0xafa20058  sw          $v0, 0x58($sp)
    ctx->pc = 0x1ef3b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
label_1ef3b8:
    // 0x1ef3b8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1ef3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ef3bc: 0x2c420004  sltiu       $v0, $v0, 0x4
    ctx->pc = 0x1ef3bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x1ef3c0: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1EF3C0u;
    {
        const bool branch_taken_0x1ef3c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ef3c0) {
            ctx->pc = 0x1EF384u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ef384;
        }
    }
    ctx->pc = 0x1EF3C8u;
    // 0x1ef3c8: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x1ef3c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x1ef3cc: 0xc044598  jal         func_111660
    ctx->pc = 0x1EF3CCu;
    SET_GPR_U32(ctx, 31, 0x1EF3D4u);
    ctx->pc = 0x111660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111660u, 0x1EF3CCu, 0x1EF3D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF3D4u;
label_1ef3d4:
    // 0x1ef3d4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1ef3d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef3d8: 0xc0de0d2  jal         func_378348
    ctx->pc = 0x1EF3D8u;
    SET_GPR_U32(ctx, 31, 0x1EF3E0u);
    ctx->pc = 0x378348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378348u, 0x1EF3D8u, 0x1EF3E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF3E0u;
label_1ef3e0:
    // 0x1ef3e0: 0x52001b  divu        $zero, $v0, $s2
    ctx->pc = 0x1ef3e0u;
    { uint32_t divisor = GPR_U32(ctx, 18); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1ef3e4: 0x2810  mfhi        $a1
    ctx->pc = 0x1ef3e4u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x1ef3e8: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x1ef3e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x1ef3ec: 0xc04a9c0  jal         func_12A700
    ctx->pc = 0x1EF3ECu;
    SET_GPR_U32(ctx, 31, 0x1EF3F4u);
    ctx->pc = 0x12A700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A700u, 0x1EF3ECu, 0x1EF3F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF3F4u;
label_1ef3f4:
    // 0x1ef3f4: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x1ef3f4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ef3f8: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x1ef3f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x1ef3fc: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1ef3fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ef400: 0xc0439c4  jal         func_10E710
    ctx->pc = 0x1EF400u;
    SET_GPR_U32(ctx, 31, 0x1EF408u);
    ctx->pc = 0x10E710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E710u, 0x1EF400u, 0x1EF408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF408u;
label_1ef408:
    // 0x1ef408: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1ef408u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef40c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1ef40cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ef410: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1ef410u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ef414: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ef414u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ef418: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ef418u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ef41c: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x1ef41cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1ef420: 0x3e00008  jr          $ra
    ctx->pc = 0x1EF420u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EF420u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EF428u;
    // 0x1ef428: 0x0  nop
    ctx->pc = 0x1ef428u;
    // NOP
    // 0x1ef42c: 0x0  nop
    ctx->pc = 0x1ef42cu;
    // NOP
    ctx->pc = 0x1ef430u;
}
