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

// Function: sub_0023B380
// Address: 0x23b380 - 0x23b580
void sub_0023B380_0x23b380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023B380_0x23b380");
#endif

    switch (ctx->pc) {
        case 0x23b380u: goto label_23b380;
        case 0x23b384u: goto label_23b384;
        case 0x23b388u: goto label_23b388;
        case 0x23b38cu: goto label_23b38c;
        case 0x23b390u: goto label_23b390;
        case 0x23b394u: goto label_23b394;
        case 0x23b398u: goto label_23b398;
        case 0x23b39cu: goto label_23b39c;
        case 0x23b3a0u: goto label_23b3a0;
        case 0x23b3a4u: goto label_23b3a4;
        case 0x23b3a8u: goto label_23b3a8;
        case 0x23b3acu: goto label_23b3ac;
        case 0x23b3b0u: goto label_23b3b0;
        case 0x23b3b4u: goto label_23b3b4;
        case 0x23b3b8u: goto label_23b3b8;
        case 0x23b3bcu: goto label_23b3bc;
        case 0x23b3c0u: goto label_23b3c0;
        case 0x23b3c4u: goto label_23b3c4;
        case 0x23b3c8u: goto label_23b3c8;
        case 0x23b3ccu: goto label_23b3cc;
        case 0x23b3d0u: goto label_23b3d0;
        case 0x23b3d4u: goto label_23b3d4;
        case 0x23b3d8u: goto label_23b3d8;
        case 0x23b3dcu: goto label_23b3dc;
        case 0x23b3e0u: goto label_23b3e0;
        case 0x23b3e4u: goto label_23b3e4;
        case 0x23b3e8u: goto label_23b3e8;
        case 0x23b3ecu: goto label_23b3ec;
        case 0x23b3f0u: goto label_23b3f0;
        case 0x23b3f4u: goto label_23b3f4;
        case 0x23b3f8u: goto label_23b3f8;
        case 0x23b3fcu: goto label_23b3fc;
        case 0x23b400u: goto label_23b400;
        case 0x23b404u: goto label_23b404;
        case 0x23b408u: goto label_23b408;
        case 0x23b40cu: goto label_23b40c;
        case 0x23b410u: goto label_23b410;
        case 0x23b414u: goto label_23b414;
        case 0x23b418u: goto label_23b418;
        case 0x23b41cu: goto label_23b41c;
        case 0x23b420u: goto label_23b420;
        case 0x23b424u: goto label_23b424;
        case 0x23b428u: goto label_23b428;
        case 0x23b42cu: goto label_23b42c;
        case 0x23b430u: goto label_23b430;
        case 0x23b434u: goto label_23b434;
        case 0x23b438u: goto label_23b438;
        case 0x23b43cu: goto label_23b43c;
        case 0x23b440u: goto label_23b440;
        case 0x23b444u: goto label_23b444;
        case 0x23b448u: goto label_23b448;
        case 0x23b44cu: goto label_23b44c;
        case 0x23b450u: goto label_23b450;
        case 0x23b454u: goto label_23b454;
        case 0x23b458u: goto label_23b458;
        case 0x23b45cu: goto label_23b45c;
        case 0x23b460u: goto label_23b460;
        case 0x23b464u: goto label_23b464;
        case 0x23b468u: goto label_23b468;
        case 0x23b46cu: goto label_23b46c;
        case 0x23b470u: goto label_23b470;
        case 0x23b474u: goto label_23b474;
        case 0x23b478u: goto label_23b478;
        case 0x23b47cu: goto label_23b47c;
        case 0x23b480u: goto label_23b480;
        case 0x23b484u: goto label_23b484;
        case 0x23b488u: goto label_23b488;
        case 0x23b48cu: goto label_23b48c;
        case 0x23b490u: goto label_23b490;
        case 0x23b494u: goto label_23b494;
        case 0x23b498u: goto label_23b498;
        case 0x23b49cu: goto label_23b49c;
        case 0x23b4a0u: goto label_23b4a0;
        case 0x23b4a4u: goto label_23b4a4;
        case 0x23b4a8u: goto label_23b4a8;
        case 0x23b4acu: goto label_23b4ac;
        case 0x23b4b0u: goto label_23b4b0;
        case 0x23b4b4u: goto label_23b4b4;
        case 0x23b4b8u: goto label_23b4b8;
        case 0x23b4bcu: goto label_23b4bc;
        case 0x23b4c0u: goto label_23b4c0;
        case 0x23b4c4u: goto label_23b4c4;
        case 0x23b4c8u: goto label_23b4c8;
        case 0x23b4ccu: goto label_23b4cc;
        case 0x23b4d0u: goto label_23b4d0;
        case 0x23b4d4u: goto label_23b4d4;
        case 0x23b4d8u: goto label_23b4d8;
        case 0x23b4dcu: goto label_23b4dc;
        case 0x23b4e0u: goto label_23b4e0;
        case 0x23b4e4u: goto label_23b4e4;
        case 0x23b4e8u: goto label_23b4e8;
        case 0x23b4ecu: goto label_23b4ec;
        case 0x23b4f0u: goto label_23b4f0;
        case 0x23b4f4u: goto label_23b4f4;
        case 0x23b4f8u: goto label_23b4f8;
        case 0x23b4fcu: goto label_23b4fc;
        case 0x23b500u: goto label_23b500;
        case 0x23b504u: goto label_23b504;
        case 0x23b508u: goto label_23b508;
        case 0x23b50cu: goto label_23b50c;
        case 0x23b510u: goto label_23b510;
        case 0x23b514u: goto label_23b514;
        case 0x23b518u: goto label_23b518;
        case 0x23b51cu: goto label_23b51c;
        case 0x23b520u: goto label_23b520;
        case 0x23b524u: goto label_23b524;
        case 0x23b528u: goto label_23b528;
        case 0x23b52cu: goto label_23b52c;
        case 0x23b530u: goto label_23b530;
        case 0x23b534u: goto label_23b534;
        case 0x23b538u: goto label_23b538;
        case 0x23b53cu: goto label_23b53c;
        case 0x23b540u: goto label_23b540;
        case 0x23b544u: goto label_23b544;
        case 0x23b548u: goto label_23b548;
        case 0x23b54cu: goto label_23b54c;
        case 0x23b550u: goto label_23b550;
        case 0x23b554u: goto label_23b554;
        case 0x23b558u: goto label_23b558;
        case 0x23b55cu: goto label_23b55c;
        case 0x23b560u: goto label_23b560;
        case 0x23b564u: goto label_23b564;
        case 0x23b568u: goto label_23b568;
        case 0x23b56cu: goto label_23b56c;
        case 0x23b570u: goto label_23b570;
        case 0x23b574u: goto label_23b574;
        case 0x23b578u: goto label_23b578;
        case 0x23b57cu: goto label_23b57c;
        default: break;
    }

    ctx->pc = 0x23b380u;

label_23b380:
    // 0x23b380: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x23b380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_23b384:
    // 0x23b384: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x23b384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_23b388:
    // 0x23b388: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x23b388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_23b38c:
    // 0x23b38c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x23b38cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_23b390:
    // 0x23b390: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x23b390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_23b394:
    // 0x23b394: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x23b394u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
label_23b398:
    // 0x23b398: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x23b398u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
label_23b39c:
    // 0x23b39c: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x23b39cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_23b3a0:
    // 0x23b3a0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x23b3a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_23b3a4:
    // 0x23b3a4: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x23b3a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_23b3a8:
    // 0x23b3a8: 0x320f809  jalr        $t9
label_23b3ac:
    if (ctx->pc == 0x23B3ACu) {
        ctx->pc = 0x23B3B0u;
        goto label_23b3b0;
    }
    ctx->pc = 0x23B3A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x23B3B0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23B3A8u, 0x23B3B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23B3B0u;
label_23b3b0:
    // 0x23b3b0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23b3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23b3b4:
    // 0x23b3b4: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
label_23b3b8:
    if (ctx->pc == 0x23B3B8u) {
        ctx->pc = 0x23B3BCu;
        goto label_23b3bc;
    }
    ctx->pc = 0x23B3B4u;
    {
        const bool branch_taken_0x23b3b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x23b3b4) {
            ctx->pc = 0x23B3C8u;
            goto label_23b3c8;
        }
    }
    ctx->pc = 0x23B3BCu;
label_23b3bc:
    // 0x23b3bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23b3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23b3c0:
    // 0x23b3c0: 0x10000068  b           . + 4 + (0x68 << 2)
label_23b3c4:
    if (ctx->pc == 0x23B3C4u) {
        ctx->pc = 0x23B3C8u;
        goto label_23b3c8;
    }
    ctx->pc = 0x23B3C0u;
    {
        const bool branch_taken_0x23b3c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23b3c0) {
            ctx->pc = 0x23B564u;
            goto label_23b564;
        }
    }
    ctx->pc = 0x23B3C8u;
label_23b3c8:
    // 0x23b3c8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x23b3c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23b3cc:
    // 0x23b3cc: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x23b3ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_23b3d0:
    // 0x23b3d0: 0xc08ecc8  jal         func_23B320
label_23b3d4:
    if (ctx->pc == 0x23B3D4u) {
        ctx->pc = 0x23B3D8u;
        goto label_23b3d8;
    }
    ctx->pc = 0x23B3D0u;
    SET_GPR_U32(ctx, 31, 0x23B3D8u);
    ctx->pc = 0x23B320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B320u, 0x23B3D0u, 0x23B3D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B3D8u;
label_23b3d8:
    // 0x23b3d8: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x23b3d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
label_23b3dc:
    // 0x23b3dc: 0x27b10048  addiu       $s1, $sp, 0x48
    ctx->pc = 0x23b3dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
label_23b3e0:
    // 0x23b3e0: 0x1000005b  b           . + 4 + (0x5B << 2)
label_23b3e4:
    if (ctx->pc == 0x23B3E4u) {
        ctx->pc = 0x23B3E8u;
        goto label_23b3e8;
    }
    ctx->pc = 0x23B3E0u;
    {
        const bool branch_taken_0x23b3e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23b3e0) {
            ctx->pc = 0x23B550u;
            goto label_23b550;
        }
    }
    ctx->pc = 0x23B3E8u;
label_23b3e8:
    // 0x23b3e8: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x23b3e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_23b3ec:
    // 0x23b3ec: 0x27a5004f  addiu       $a1, $sp, 0x4F
    ctx->pc = 0x23b3ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 79));
label_23b3f0:
    // 0x23b3f0: 0xc08ed60  jal         func_23B580
label_23b3f4:
    if (ctx->pc == 0x23B3F4u) {
        ctx->pc = 0x23B3F8u;
        goto label_23b3f8;
    }
    ctx->pc = 0x23B3F0u;
    SET_GPR_U32(ctx, 31, 0x23B3F8u);
    ctx->pc = 0x23B580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B580u, 0x23B3F0u, 0x23B3F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23B3F8u;
label_23b3f8:
    // 0x23b3f8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x23b3f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23b3fc:
    // 0x23b3fc: 0x12400057  beqz        $s2, . + 4 + (0x57 << 2)
label_23b400:
    if (ctx->pc == 0x23B400u) {
        ctx->pc = 0x23B404u;
        goto label_23b404;
    }
    ctx->pc = 0x23B3FCu;
    {
        const bool branch_taken_0x23b3fc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x23b3fc) {
            ctx->pc = 0x23B55Cu;
            goto label_23b55c;
        }
    }
    ctx->pc = 0x23B404u;
label_23b404:
    // 0x23b404: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x23b404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_23b408:
    // 0x23b408: 0x1202003e  beq         $s0, $v0, . + 4 + (0x3E << 2)
label_23b40c:
    if (ctx->pc == 0x23B40Cu) {
        ctx->pc = 0x23B410u;
        goto label_23b410;
    }
    ctx->pc = 0x23B408u;
    {
        const bool branch_taken_0x23b408 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x23b408) {
            ctx->pc = 0x23B504u;
            goto label_23b504;
        }
    }
    ctx->pc = 0x23B410u;
label_23b410:
    // 0x23b410: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x23b410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_23b414:
    // 0x23b414: 0x12020026  beq         $s0, $v0, . + 4 + (0x26 << 2)
label_23b418:
    if (ctx->pc == 0x23B418u) {
        ctx->pc = 0x23B41Cu;
        goto label_23b41c;
    }
    ctx->pc = 0x23B414u;
    {
        const bool branch_taken_0x23b414 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x23b414) {
            ctx->pc = 0x23B4B0u;
            goto label_23b4b0;
        }
    }
    ctx->pc = 0x23B41Cu;
label_23b41c:
    // 0x23b41c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23b41cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23b420:
    // 0x23b420: 0x1202000e  beq         $s0, $v0, . + 4 + (0xE << 2)
label_23b424:
    if (ctx->pc == 0x23B424u) {
        ctx->pc = 0x23B428u;
        goto label_23b428;
    }
    ctx->pc = 0x23B420u;
    {
        const bool branch_taken_0x23b420 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x23b420) {
            ctx->pc = 0x23B45Cu;
            goto label_23b45c;
        }
    }
    ctx->pc = 0x23B428u;
label_23b428:
    // 0x23b428: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
label_23b42c:
    if (ctx->pc == 0x23B42Cu) {
        ctx->pc = 0x23B430u;
        goto label_23b430;
    }
    ctx->pc = 0x23B428u;
    {
        const bool branch_taken_0x23b428 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x23b428) {
            ctx->pc = 0x23B438u;
            goto label_23b438;
        }
    }
    ctx->pc = 0x23B430u;
label_23b430:
    // 0x23b430: 0x10000047  b           . + 4 + (0x47 << 2)
label_23b434:
    if (ctx->pc == 0x23B434u) {
        ctx->pc = 0x23B438u;
        goto label_23b438;
    }
    ctx->pc = 0x23B430u;
    {
        const bool branch_taken_0x23b430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23b430) {
            ctx->pc = 0x23B550u;
            goto label_23b550;
        }
    }
    ctx->pc = 0x23B438u;
label_23b438:
    // 0x23b438: 0x93a2004f  lbu         $v0, 0x4F($sp)
    ctx->pc = 0x23b438u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 79)));
label_23b43c:
    // 0x23b43c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x23b43cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_23b440:
    // 0x23b440: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x23b440u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_23b444:
    // 0x23b444: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x23b444u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_23b448:
    // 0x23b448: 0x14620041  bne         $v1, $v0, . + 4 + (0x41 << 2)
label_23b44c:
    if (ctx->pc == 0x23B44Cu) {
        ctx->pc = 0x23B450u;
        goto label_23b450;
    }
    ctx->pc = 0x23B448u;
    {
        const bool branch_taken_0x23b448 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x23b448) {
            ctx->pc = 0x23B550u;
            goto label_23b550;
        }
    }
    ctx->pc = 0x23B450u;
label_23b450:
    // 0x23b450: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x23b450u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_23b454:
    // 0x23b454: 0x1000003e  b           . + 4 + (0x3E << 2)
label_23b458:
    if (ctx->pc == 0x23B458u) {
        ctx->pc = 0x23B45Cu;
        goto label_23b45c;
    }
    ctx->pc = 0x23B454u;
    {
        const bool branch_taken_0x23b454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23b454) {
            ctx->pc = 0x23B550u;
            goto label_23b550;
        }
    }
    ctx->pc = 0x23B45Cu;
label_23b45c:
    // 0x23b45c: 0x93a2004f  lbu         $v0, 0x4F($sp)
    ctx->pc = 0x23b45cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 79)));
label_23b460:
    // 0x23b460: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x23b460u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_23b464:
    // 0x23b464: 0x92220001  lbu         $v0, 0x1($s1)
    ctx->pc = 0x23b464u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
label_23b468:
    // 0x23b468: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x23b468u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_23b46c:
    // 0x23b46c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_23b470:
    if (ctx->pc == 0x23B470u) {
        ctx->pc = 0x23B474u;
        goto label_23b474;
    }
    ctx->pc = 0x23B46Cu;
    {
        const bool branch_taken_0x23b46c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x23b46c) {
            ctx->pc = 0x23B480u;
            goto label_23b480;
        }
    }
    ctx->pc = 0x23B474u;
label_23b474:
    // 0x23b474: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x23b474u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_23b478:
    // 0x23b478: 0x10000035  b           . + 4 + (0x35 << 2)
label_23b47c:
    if (ctx->pc == 0x23B47Cu) {
        ctx->pc = 0x23B480u;
        goto label_23b480;
    }
    ctx->pc = 0x23B478u;
    {
        const bool branch_taken_0x23b478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23b478) {
            ctx->pc = 0x23B550u;
            goto label_23b550;
        }
    }
    ctx->pc = 0x23B480u;
label_23b480:
    // 0x23b480: 0x93a2004f  lbu         $v0, 0x4F($sp)
    ctx->pc = 0x23b480u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 79)));
label_23b484:
    // 0x23b484: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x23b484u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_23b488:
    // 0x23b488: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x23b488u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_23b48c:
    // 0x23b48c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x23b48cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_23b490:
    // 0x23b490: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_23b494:
    if (ctx->pc == 0x23B494u) {
        ctx->pc = 0x23B498u;
        goto label_23b498;
    }
    ctx->pc = 0x23B490u;
    {
        const bool branch_taken_0x23b490 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x23b490) {
            ctx->pc = 0x23B4A4u;
            goto label_23b4a4;
        }
    }
    ctx->pc = 0x23B498u;
label_23b498:
    // 0x23b498: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x23b498u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23b49c:
    // 0x23b49c: 0x1000002c  b           . + 4 + (0x2C << 2)
label_23b4a0:
    if (ctx->pc == 0x23B4A0u) {
        ctx->pc = 0x23B4A4u;
        goto label_23b4a4;
    }
    ctx->pc = 0x23B49Cu;
    {
        const bool branch_taken_0x23b49c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23b49c) {
            ctx->pc = 0x23B550u;
            goto label_23b550;
        }
    }
    ctx->pc = 0x23B4A4u;
label_23b4a4:
    // 0x23b4a4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x23b4a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23b4a8:
    // 0x23b4a8: 0x10000029  b           . + 4 + (0x29 << 2)
label_23b4ac:
    if (ctx->pc == 0x23B4ACu) {
        ctx->pc = 0x23B4B0u;
        goto label_23b4b0;
    }
    ctx->pc = 0x23B4A8u;
    {
        const bool branch_taken_0x23b4a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23b4a8) {
            ctx->pc = 0x23B550u;
            goto label_23b550;
        }
    }
    ctx->pc = 0x23B4B0u;
label_23b4b0:
    // 0x23b4b0: 0x93a2004f  lbu         $v0, 0x4F($sp)
    ctx->pc = 0x23b4b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 79)));
label_23b4b4:
    // 0x23b4b4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x23b4b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_23b4b8:
    // 0x23b4b8: 0x92220002  lbu         $v0, 0x2($s1)
    ctx->pc = 0x23b4b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
label_23b4bc:
    // 0x23b4bc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x23b4bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_23b4c0:
    // 0x23b4c0: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_23b4c4:
    if (ctx->pc == 0x23B4C4u) {
        ctx->pc = 0x23B4C8u;
        goto label_23b4c8;
    }
    ctx->pc = 0x23B4C0u;
    {
        const bool branch_taken_0x23b4c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x23b4c0) {
            ctx->pc = 0x23B4D4u;
            goto label_23b4d4;
        }
    }
    ctx->pc = 0x23B4C8u;
label_23b4c8:
    // 0x23b4c8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x23b4c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_23b4cc:
    // 0x23b4cc: 0x10000020  b           . + 4 + (0x20 << 2)
label_23b4d0:
    if (ctx->pc == 0x23B4D0u) {
        ctx->pc = 0x23B4D4u;
        goto label_23b4d4;
    }
    ctx->pc = 0x23B4CCu;
    {
        const bool branch_taken_0x23b4cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23b4cc) {
            ctx->pc = 0x23B550u;
            goto label_23b550;
        }
    }
    ctx->pc = 0x23B4D4u;
label_23b4d4:
    // 0x23b4d4: 0x93a2004f  lbu         $v0, 0x4F($sp)
    ctx->pc = 0x23b4d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 79)));
label_23b4d8:
    // 0x23b4d8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x23b4d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_23b4dc:
    // 0x23b4dc: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x23b4dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_23b4e0:
    // 0x23b4e0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x23b4e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_23b4e4:
    // 0x23b4e4: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_23b4e8:
    if (ctx->pc == 0x23B4E8u) {
        ctx->pc = 0x23B4ECu;
        goto label_23b4ec;
    }
    ctx->pc = 0x23B4E4u;
    {
        const bool branch_taken_0x23b4e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x23b4e4) {
            ctx->pc = 0x23B4F8u;
            goto label_23b4f8;
        }
    }
    ctx->pc = 0x23B4ECu;
label_23b4ec:
    // 0x23b4ec: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x23b4ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23b4f0:
    // 0x23b4f0: 0x10000017  b           . + 4 + (0x17 << 2)
label_23b4f4:
    if (ctx->pc == 0x23B4F4u) {
        ctx->pc = 0x23B4F8u;
        goto label_23b4f8;
    }
    ctx->pc = 0x23B4F0u;
    {
        const bool branch_taken_0x23b4f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23b4f0) {
            ctx->pc = 0x23B550u;
            goto label_23b550;
        }
    }
    ctx->pc = 0x23B4F8u;
label_23b4f8:
    // 0x23b4f8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x23b4f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23b4fc:
    // 0x23b4fc: 0x10000014  b           . + 4 + (0x14 << 2)
label_23b500:
    if (ctx->pc == 0x23B500u) {
        ctx->pc = 0x23B504u;
        goto label_23b504;
    }
    ctx->pc = 0x23B4FCu;
    {
        const bool branch_taken_0x23b4fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23b4fc) {
            ctx->pc = 0x23B550u;
            goto label_23b550;
        }
    }
    ctx->pc = 0x23B504u;
label_23b504:
    // 0x23b504: 0x93a2004f  lbu         $v0, 0x4F($sp)
    ctx->pc = 0x23b504u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 79)));
label_23b508:
    // 0x23b508: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x23b508u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_23b50c:
    // 0x23b50c: 0x92220003  lbu         $v0, 0x3($s1)
    ctx->pc = 0x23b50cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
label_23b510:
    // 0x23b510: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x23b510u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_23b514:
    // 0x23b514: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_23b518:
    if (ctx->pc == 0x23B518u) {
        ctx->pc = 0x23B51Cu;
        goto label_23b51c;
    }
    ctx->pc = 0x23B514u;
    {
        const bool branch_taken_0x23b514 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x23b514) {
            ctx->pc = 0x23B528u;
            goto label_23b528;
        }
    }
    ctx->pc = 0x23B51Cu;
label_23b51c:
    // 0x23b51c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x23b51cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_23b520:
    // 0x23b520: 0x1000000b  b           . + 4 + (0xB << 2)
label_23b524:
    if (ctx->pc == 0x23B524u) {
        ctx->pc = 0x23B528u;
        goto label_23b528;
    }
    ctx->pc = 0x23B520u;
    {
        const bool branch_taken_0x23b520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23b520) {
            ctx->pc = 0x23B550u;
            goto label_23b550;
        }
    }
    ctx->pc = 0x23B528u;
label_23b528:
    // 0x23b528: 0x93a2004f  lbu         $v0, 0x4F($sp)
    ctx->pc = 0x23b528u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 79)));
label_23b52c:
    // 0x23b52c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x23b52cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_23b530:
    // 0x23b530: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x23b530u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_23b534:
    // 0x23b534: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x23b534u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_23b538:
    // 0x23b538: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_23b53c:
    if (ctx->pc == 0x23B53Cu) {
        ctx->pc = 0x23B540u;
        goto label_23b540;
    }
    ctx->pc = 0x23B538u;
    {
        const bool branch_taken_0x23b538 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x23b538) {
            ctx->pc = 0x23B54Cu;
            goto label_23b54c;
        }
    }
    ctx->pc = 0x23B540u;
label_23b540:
    // 0x23b540: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x23b540u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23b544:
    // 0x23b544: 0x10000002  b           . + 4 + (0x2 << 2)
label_23b548:
    if (ctx->pc == 0x23B548u) {
        ctx->pc = 0x23B54Cu;
        goto label_23b54c;
    }
    ctx->pc = 0x23B544u;
    {
        const bool branch_taken_0x23b544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23b544) {
            ctx->pc = 0x23B550u;
            goto label_23b550;
        }
    }
    ctx->pc = 0x23B54Cu;
label_23b54c:
    // 0x23b54c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x23b54cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23b550:
    // 0x23b550: 0x2e020004  sltiu       $v0, $s0, 0x4
    ctx->pc = 0x23b550u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_23b554:
    // 0x23b554: 0x1440ffa4  bnez        $v0, . + 4 + (-0x5C << 2)
label_23b558:
    if (ctx->pc == 0x23B558u) {
        ctx->pc = 0x23B55Cu;
        goto label_23b55c;
    }
    ctx->pc = 0x23B554u;
    {
        const bool branch_taken_0x23b554 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23b554) {
            ctx->pc = 0x23B3E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23b3e8;
        }
    }
    ctx->pc = 0x23B55Cu;
label_23b55c:
    // 0x23b55c: 0x3a020004  xori        $v0, $s0, 0x4
    ctx->pc = 0x23b55cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)4);
label_23b560:
    // 0x23b560: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x23b560u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_23b564:
    // 0x23b564: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x23b564u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_23b568:
    // 0x23b568: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x23b568u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_23b56c:
    // 0x23b56c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x23b56cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_23b570:
    // 0x23b570: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x23b570u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_23b574:
    // 0x23b574: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x23b574u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_23b578:
    // 0x23b578: 0x3e00008  jr          $ra
label_23b57c:
    if (ctx->pc == 0x23B57Cu) {
        ctx->pc = 0x23B580u;
        goto label_fallthrough_0x23b578;
    }
    ctx->pc = 0x23B578u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23B578u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x23b578:
    ctx->pc = 0x23B580u;
}
