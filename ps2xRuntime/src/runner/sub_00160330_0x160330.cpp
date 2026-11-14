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

// Function: sub_00160330
// Address: 0x160330 - 0x1606f0
void sub_00160330_0x160330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00160330_0x160330");
#endif

    switch (ctx->pc) {
        case 0x160370u: goto label_160370;
        case 0x160380u: goto label_160380;
        case 0x160398u: goto label_160398;
        case 0x1603dcu: goto label_1603dc;
        case 0x1603f8u: goto label_1603f8;
        case 0x160414u: goto label_160414;
        case 0x160430u: goto label_160430;
        case 0x16044cu: goto label_16044c;
        case 0x160468u: goto label_160468;
        case 0x160484u: goto label_160484;
        case 0x1604a0u: goto label_1604a0;
        case 0x1604bcu: goto label_1604bc;
        case 0x1604d8u: goto label_1604d8;
        case 0x1604f4u: goto label_1604f4;
        case 0x160510u: goto label_160510;
        case 0x16051cu: goto label_16051c;
        case 0x160538u: goto label_160538;
        case 0x160550u: goto label_160550;
        case 0x160560u: goto label_160560;
        case 0x160574u: goto label_160574;
        case 0x160590u: goto label_160590;
        case 0x1605d4u: goto label_1605d4;
        case 0x16060cu: goto label_16060c;
        case 0x160624u: goto label_160624;
        case 0x160668u: goto label_160668;
        case 0x1606a4u: goto label_1606a4;
        case 0x1606b8u: goto label_1606b8;
        default: break;
    }

    ctx->pc = 0x160330u;

    // 0x160330: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x160330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x160334: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x160334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x160338: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x160338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x16033c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x16033cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x160340: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x160340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x160344: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x160344u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x160348: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x160348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x16034c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16034cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x160350: 0xafa40080  sw          $a0, 0x80($sp)
    ctx->pc = 0x160350u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 4));
    // 0x160354: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x160354u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160358: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x160358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x16035c: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x16035cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x160360: 0x24640074  addiu       $a0, $v1, 0x74
    ctx->pc = 0x160360u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 116));
    // 0x160364: 0x8c450080  lw          $a1, 0x80($v0)
    ctx->pc = 0x160364u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x160368: 0xc057944  jal         func_15E510
    ctx->pc = 0x160368u;
    SET_GPR_U32(ctx, 31, 0x160370u);
    ctx->pc = 0x15E510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15E510u, 0x160368u, 0x160370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160370u;
label_160370:
    // 0x160370: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x160370u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x160374: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x160374u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160378: 0xc048094  jal         func_120250
    ctx->pc = 0x160378u;
    SET_GPR_U32(ctx, 31, 0x160380u);
    ctx->pc = 0x120250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120250u, 0x160378u, 0x160380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160380u;
label_160380:
    // 0x160380: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x160380u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160384: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x160384u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x160388: 0x24a53358  addiu       $a1, $a1, 0x3358
    ctx->pc = 0x160388u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13144));
    // 0x16038c: 0x24060012  addiu       $a2, $zero, 0x12
    ctx->pc = 0x16038cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x160390: 0xc047970  jal         func_11E5C0
    ctx->pc = 0x160390u;
    SET_GPR_U32(ctx, 31, 0x160398u);
    ctx->pc = 0x11E5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E5C0u, 0x160390u, 0x160398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160398u;
label_160398:
    // 0x160398: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x160398u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16039c: 0x2682fff9  addiu       $v0, $s4, -0x7
    ctx->pc = 0x16039cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967289));
    // 0x1603a0: 0x2c41000c  sltiu       $at, $v0, 0xC
    ctx->pc = 0x1603a0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
    // 0x1603a4: 0x1020005a  beqz        $at, . + 4 + (0x5A << 2)
    ctx->pc = 0x1603A4u;
    {
        const bool branch_taken_0x1603a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1603a4) {
            ctx->pc = 0x160510u;
            goto label_160510;
        }
    }
    ctx->pc = 0x1603ACu;
    // 0x1603ac: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1603acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x1603b0: 0x246383a0  addiu       $v1, $v1, -0x7C60
    ctx->pc = 0x1603b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935456));
    // 0x1603b4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1603b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1603b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1603b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1603bc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1603bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1603c0: 0x400008  jr          $v0
    ctx->pc = 0x1603C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1603C8u: goto label_1603c8;
            case 0x1603E4u: goto label_1603e4;
            case 0x160400u: goto label_160400;
            case 0x16041Cu: goto label_16041c;
            case 0x160438u: goto label_160438;
            case 0x160454u: goto label_160454;
            case 0x160470u: goto label_160470;
            case 0x16048Cu: goto label_16048c;
            case 0x1604A8u: goto label_1604a8;
            case 0x1604C4u: goto label_1604c4;
            case 0x1604E0u: goto label_1604e0;
            case 0x1604FCu: goto label_1604fc;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1603C0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1603C8u;
label_1603c8:
    // 0x1603c8: 0x3c04004e  lui         $a0, 0x4E
    ctx->pc = 0x1603c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)78 << 16));
    // 0x1603cc: 0x248433a0  addiu       $a0, $a0, 0x33A0
    ctx->pc = 0x1603ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13216));
    // 0x1603d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1603d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1603d4: 0xc115ae4  jal         func_456B90
    ctx->pc = 0x1603D4u;
    SET_GPR_U32(ctx, 31, 0x1603DCu);
    ctx->pc = 0x456B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x456B90u, 0x1603D4u, 0x1603DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1603DCu;
label_1603dc:
    // 0x1603dc: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x1603DCu;
    {
        const bool branch_taken_0x1603dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1603dc) {
            ctx->pc = 0x160510u;
            goto label_160510;
        }
    }
    ctx->pc = 0x1603E4u;
label_1603e4:
    // 0x1603e4: 0x3c04004e  lui         $a0, 0x4E
    ctx->pc = 0x1603e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)78 << 16));
    // 0x1603e8: 0x248433c0  addiu       $a0, $a0, 0x33C0
    ctx->pc = 0x1603e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13248));
    // 0x1603ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1603ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1603f0: 0xc115ae4  jal         func_456B90
    ctx->pc = 0x1603F0u;
    SET_GPR_U32(ctx, 31, 0x1603F8u);
    ctx->pc = 0x456B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x456B90u, 0x1603F0u, 0x1603F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1603F8u;
label_1603f8:
    // 0x1603f8: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x1603F8u;
    {
        const bool branch_taken_0x1603f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1603f8) {
            ctx->pc = 0x160510u;
            goto label_160510;
        }
    }
    ctx->pc = 0x160400u;
label_160400:
    // 0x160400: 0x3c04004e  lui         $a0, 0x4E
    ctx->pc = 0x160400u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)78 << 16));
    // 0x160404: 0x248433e0  addiu       $a0, $a0, 0x33E0
    ctx->pc = 0x160404u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13280));
    // 0x160408: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x160408u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16040c: 0xc115ae4  jal         func_456B90
    ctx->pc = 0x16040Cu;
    SET_GPR_U32(ctx, 31, 0x160414u);
    ctx->pc = 0x456B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x456B90u, 0x16040Cu, 0x160414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160414u;
label_160414:
    // 0x160414: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x160414u;
    {
        const bool branch_taken_0x160414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x160414) {
            ctx->pc = 0x160510u;
            goto label_160510;
        }
    }
    ctx->pc = 0x16041Cu;
label_16041c:
    // 0x16041c: 0x3c04004e  lui         $a0, 0x4E
    ctx->pc = 0x16041cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)78 << 16));
    // 0x160420: 0x24843400  addiu       $a0, $a0, 0x3400
    ctx->pc = 0x160420u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13312));
    // 0x160424: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x160424u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160428: 0xc115ae4  jal         func_456B90
    ctx->pc = 0x160428u;
    SET_GPR_U32(ctx, 31, 0x160430u);
    ctx->pc = 0x456B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x456B90u, 0x160428u, 0x160430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160430u;
label_160430:
    // 0x160430: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x160430u;
    {
        const bool branch_taken_0x160430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x160430) {
            ctx->pc = 0x160510u;
            goto label_160510;
        }
    }
    ctx->pc = 0x160438u;
label_160438:
    // 0x160438: 0x3c04004e  lui         $a0, 0x4E
    ctx->pc = 0x160438u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)78 << 16));
    // 0x16043c: 0x24843420  addiu       $a0, $a0, 0x3420
    ctx->pc = 0x16043cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13344));
    // 0x160440: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x160440u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160444: 0xc115ae4  jal         func_456B90
    ctx->pc = 0x160444u;
    SET_GPR_U32(ctx, 31, 0x16044Cu);
    ctx->pc = 0x456B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x456B90u, 0x160444u, 0x16044Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16044Cu;
label_16044c:
    // 0x16044c: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x16044Cu;
    {
        const bool branch_taken_0x16044c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16044c) {
            ctx->pc = 0x160510u;
            goto label_160510;
        }
    }
    ctx->pc = 0x160454u;
label_160454:
    // 0x160454: 0x3c04004e  lui         $a0, 0x4E
    ctx->pc = 0x160454u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)78 << 16));
    // 0x160458: 0x24843440  addiu       $a0, $a0, 0x3440
    ctx->pc = 0x160458u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13376));
    // 0x16045c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16045cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160460: 0xc115ae4  jal         func_456B90
    ctx->pc = 0x160460u;
    SET_GPR_U32(ctx, 31, 0x160468u);
    ctx->pc = 0x456B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x456B90u, 0x160460u, 0x160468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160468u;
label_160468:
    // 0x160468: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x160468u;
    {
        const bool branch_taken_0x160468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x160468) {
            ctx->pc = 0x160510u;
            goto label_160510;
        }
    }
    ctx->pc = 0x160470u;
label_160470:
    // 0x160470: 0x3c04004e  lui         $a0, 0x4E
    ctx->pc = 0x160470u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)78 << 16));
    // 0x160474: 0x24843460  addiu       $a0, $a0, 0x3460
    ctx->pc = 0x160474u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13408));
    // 0x160478: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x160478u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16047c: 0xc115ae4  jal         func_456B90
    ctx->pc = 0x16047Cu;
    SET_GPR_U32(ctx, 31, 0x160484u);
    ctx->pc = 0x456B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x456B90u, 0x16047Cu, 0x160484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160484u;
label_160484:
    // 0x160484: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x160484u;
    {
        const bool branch_taken_0x160484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x160484) {
            ctx->pc = 0x160510u;
            goto label_160510;
        }
    }
    ctx->pc = 0x16048Cu;
label_16048c:
    // 0x16048c: 0x3c04004e  lui         $a0, 0x4E
    ctx->pc = 0x16048cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)78 << 16));
    // 0x160490: 0x24843480  addiu       $a0, $a0, 0x3480
    ctx->pc = 0x160490u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13440));
    // 0x160494: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x160494u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160498: 0xc115ae4  jal         func_456B90
    ctx->pc = 0x160498u;
    SET_GPR_U32(ctx, 31, 0x1604A0u);
    ctx->pc = 0x456B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x456B90u, 0x160498u, 0x1604A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1604A0u;
label_1604a0:
    // 0x1604a0: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1604A0u;
    {
        const bool branch_taken_0x1604a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1604a0) {
            ctx->pc = 0x160510u;
            goto label_160510;
        }
    }
    ctx->pc = 0x1604A8u;
label_1604a8:
    // 0x1604a8: 0x3c04004e  lui         $a0, 0x4E
    ctx->pc = 0x1604a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)78 << 16));
    // 0x1604ac: 0x248434a0  addiu       $a0, $a0, 0x34A0
    ctx->pc = 0x1604acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13472));
    // 0x1604b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1604b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1604b4: 0xc115ae4  jal         func_456B90
    ctx->pc = 0x1604B4u;
    SET_GPR_U32(ctx, 31, 0x1604BCu);
    ctx->pc = 0x456B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x456B90u, 0x1604B4u, 0x1604BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1604BCu;
label_1604bc:
    // 0x1604bc: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1604BCu;
    {
        const bool branch_taken_0x1604bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1604bc) {
            ctx->pc = 0x160510u;
            goto label_160510;
        }
    }
    ctx->pc = 0x1604C4u;
label_1604c4:
    // 0x1604c4: 0x3c04004e  lui         $a0, 0x4E
    ctx->pc = 0x1604c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)78 << 16));
    // 0x1604c8: 0x248434c0  addiu       $a0, $a0, 0x34C0
    ctx->pc = 0x1604c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13504));
    // 0x1604cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1604ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1604d0: 0xc115ae4  jal         func_456B90
    ctx->pc = 0x1604D0u;
    SET_GPR_U32(ctx, 31, 0x1604D8u);
    ctx->pc = 0x456B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x456B90u, 0x1604D0u, 0x1604D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1604D8u;
label_1604d8:
    // 0x1604d8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1604D8u;
    {
        const bool branch_taken_0x1604d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1604d8) {
            ctx->pc = 0x160510u;
            goto label_160510;
        }
    }
    ctx->pc = 0x1604E0u;
label_1604e0:
    // 0x1604e0: 0x3c04004e  lui         $a0, 0x4E
    ctx->pc = 0x1604e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)78 << 16));
    // 0x1604e4: 0x248434e0  addiu       $a0, $a0, 0x34E0
    ctx->pc = 0x1604e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13536));
    // 0x1604e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1604e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1604ec: 0xc115ae4  jal         func_456B90
    ctx->pc = 0x1604ECu;
    SET_GPR_U32(ctx, 31, 0x1604F4u);
    ctx->pc = 0x456B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x456B90u, 0x1604ECu, 0x1604F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1604F4u;
label_1604f4:
    // 0x1604f4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1604F4u;
    {
        const bool branch_taken_0x1604f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1604f4) {
            ctx->pc = 0x160510u;
            goto label_160510;
        }
    }
    ctx->pc = 0x1604FCu;
label_1604fc:
    // 0x1604fc: 0x3c04004e  lui         $a0, 0x4E
    ctx->pc = 0x1604fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)78 << 16));
    // 0x160500: 0x24843500  addiu       $a0, $a0, 0x3500
    ctx->pc = 0x160500u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13568));
    // 0x160504: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x160504u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160508: 0xc115ae4  jal         func_456B90
    ctx->pc = 0x160508u;
    SET_GPR_U32(ctx, 31, 0x160510u);
    ctx->pc = 0x456B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x456B90u, 0x160508u, 0x160510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160510u;
label_160510:
    // 0x160510: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x160510u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160514: 0xc099948  jal         func_266520
    ctx->pc = 0x160514u;
    SET_GPR_U32(ctx, 31, 0x16051Cu);
    ctx->pc = 0x266520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266520u, 0x160514u, 0x16051Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16051Cu;
label_16051c:
    // 0x16051c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x16051cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160520: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x160520u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160524: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x160524u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x160528: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x160528u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16052c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x16052cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x160530: 0xc09a060  jal         func_268180
    ctx->pc = 0x160530u;
    SET_GPR_U32(ctx, 31, 0x160538u);
    ctx->pc = 0x268180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x268180u, 0x160530u, 0x160538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160538u;
label_160538:
    // 0x160538: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x160538u;
    {
        const bool branch_taken_0x160538 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x160538) {
            ctx->pc = 0x160544u;
            goto label_160544;
        }
    }
    ctx->pc = 0x160540u;
    // 0x160540: 0x241303e7  addiu       $s3, $zero, 0x3E7
    ctx->pc = 0x160540u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
label_160544:
    // 0x160544: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x160544u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160548: 0xc0999bc  jal         func_2666F0
    ctx->pc = 0x160548u;
    SET_GPR_U32(ctx, 31, 0x160550u);
    ctx->pc = 0x2666F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2666F0u, 0x160548u, 0x160550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160550u;
label_160550:
    // 0x160550: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x160550u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160554: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x160554u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160558: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x160558u;
    {
        const bool branch_taken_0x160558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x160558) {
            ctx->pc = 0x1606A8u;
            goto label_1606a8;
        }
    }
    ctx->pc = 0x160560u;
label_160560:
    // 0x160560: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x160560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x160564: 0x2444005c  addiu       $a0, $v0, 0x5C
    ctx->pc = 0x160564u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 92));
    // 0x160568: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x160568u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16056c: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x16056Cu;
    SET_GPR_U32(ctx, 31, 0x160574u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x16056Cu, 0x160574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160574u;
label_160574:
    // 0x160574: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x160574u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x160578: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x160578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x16057c: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x16057cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x160580: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x160580u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160584: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x160584u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x160588: 0xc08c744  jal         func_231D10
    ctx->pc = 0x160588u;
    SET_GPR_U32(ctx, 31, 0x160590u);
    ctx->pc = 0x231D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231D10u, 0x160588u, 0x160590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160590u;
label_160590:
    // 0x160590: 0xc7a10070  lwc1        $f1, 0x70($sp)
    ctx->pc = 0x160590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x160594: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x160594u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x160598: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x160598u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16059c: 0x0  nop
    ctx->pc = 0x16059cu;
    // NOP
    // 0x1605a0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1605a0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1605a4: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x1605a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x1605a8: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1605a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1605ac: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1605acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1605b0: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x1605b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x1605b4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1605b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1605b8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1605b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1605bc: 0x27a70070  addiu       $a3, $sp, 0x70
    ctx->pc = 0x1605bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1605c0: 0xc78d8168  lwc1        $f13, -0x7E98($gp)
    ctx->pc = 0x1605c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934888)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1605c4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1605c4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1605c8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1605c8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1605cc: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x1605CCu;
    SET_GPR_U32(ctx, 31, 0x1605D4u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x1605CCu, 0x1605D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1605D4u;
label_1605d4:
    // 0x1605d4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1605d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1605d8: 0x0  nop
    ctx->pc = 0x1605d8u;
    // NOP
    // 0x1605dc: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x1605dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x1605e0: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1605e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1605e4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1605e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1605e8: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x1605e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x1605ec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1605ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1605f0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1605f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1605f4: 0x27a7007c  addiu       $a3, $sp, 0x7C
    ctx->pc = 0x1605f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x1605f8: 0xc78d8168  lwc1        $f13, -0x7E98($gp)
    ctx->pc = 0x1605f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934888)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1605fc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1605fcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160600: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x160600u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160604: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x160604u;
    SET_GPR_U32(ctx, 31, 0x16060Cu);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x160604u, 0x16060Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16060Cu;
label_16060c:
    // 0x16060c: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x16060cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x160610: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x160610u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160614: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x160614u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160618: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x160618u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16061c: 0xc057bf8  jal         func_15EFE0
    ctx->pc = 0x16061Cu;
    SET_GPR_U32(ctx, 31, 0x160624u);
    ctx->pc = 0x15EFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EFE0u, 0x16061Cu, 0x160624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160624u;
label_160624:
    // 0x160624: 0xc7a10070  lwc1        $f1, 0x70($sp)
    ctx->pc = 0x160624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x160628: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x160628u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x16062c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16062cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x160630: 0x0  nop
    ctx->pc = 0x160630u;
    // NOP
    // 0x160634: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x160634u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x160638: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x160638u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x16063c: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x16063cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x160640: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x160640u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x160644: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x160644u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160648: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x160648u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16064c: 0x27a70070  addiu       $a3, $sp, 0x70
    ctx->pc = 0x16064cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x160650: 0xc78c8168  lwc1        $f12, -0x7E98($gp)
    ctx->pc = 0x160650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934888)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x160654: 0xc78d8168  lwc1        $f13, -0x7E98($gp)
    ctx->pc = 0x160654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934888)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x160658: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x160658u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16065c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x16065cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160660: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x160660u;
    SET_GPR_U32(ctx, 31, 0x160668u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x160660u, 0x160668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160668u;
label_160668:
    // 0x160668: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x160668u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x16066c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16066cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x160670: 0x0  nop
    ctx->pc = 0x160670u;
    // NOP
    // 0x160674: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x160674u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x160678: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x160678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x16067c: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x16067cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x160680: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x160680u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160684: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x160684u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x160688: 0x27a7007c  addiu       $a3, $sp, 0x7C
    ctx->pc = 0x160688u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x16068c: 0xc78c8168  lwc1        $f12, -0x7E98($gp)
    ctx->pc = 0x16068cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934888)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x160690: 0xc78d8168  lwc1        $f13, -0x7E98($gp)
    ctx->pc = 0x160690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934888)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x160694: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x160694u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160698: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x160698u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16069c: 0xc08b9fc  jal         func_22E7F0
    ctx->pc = 0x16069Cu;
    SET_GPR_U32(ctx, 31, 0x1606A4u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x16069Cu, 0x1606A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1606A4u;
label_1606a4:
    // 0x1606a4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1606a4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1606a8:
    // 0x1606a8: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1606a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1606ac: 0x2444005c  addiu       $a0, $v0, 0x5C
    ctx->pc = 0x1606acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 92));
    // 0x1606b0: 0xc05611c  jal         func_158470
    ctx->pc = 0x1606B0u;
    SET_GPR_U32(ctx, 31, 0x1606B8u);
    ctx->pc = 0x158470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158470u, 0x1606B0u, 0x1606B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1606B8u;
label_1606b8:
    // 0x1606b8: 0x242182b  sltu        $v1, $s2, $v0
    ctx->pc = 0x1606b8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1606bc: 0x1460ffa8  bnez        $v1, . + 4 + (-0x58 << 2)
    ctx->pc = 0x1606BCu;
    {
        const bool branch_taken_0x1606bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1606bc) {
            ctx->pc = 0x160560u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_160560;
        }
    }
    ctx->pc = 0x1606C4u;
    // 0x1606c4: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1606c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1606c8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1606c8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1606cc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1606ccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1606d0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1606d0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1606d4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1606d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1606d8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1606d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1606dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1606dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1606e0: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x1606e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1606e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1606E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1606E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1606ECu;
    // 0x1606ec: 0x0  nop
    ctx->pc = 0x1606ecu;
    // NOP
    ctx->pc = 0x1606f0u;
}
