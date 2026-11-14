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

// Function: sub_002CF3E0
// Address: 0x2cf3e0 - 0x2cf5e0
void sub_002CF3E0_0x2cf3e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CF3E0_0x2cf3e0");
#endif

    switch (ctx->pc) {
        case 0x2cf3f8u: goto label_2cf3f8;
        case 0x2cf410u: goto label_2cf410;
        case 0x2cf41cu: goto label_2cf41c;
        case 0x2cf42cu: goto label_2cf42c;
        case 0x2cf43cu: goto label_2cf43c;
        case 0x2cf44cu: goto label_2cf44c;
        case 0x2cf45cu: goto label_2cf45c;
        case 0x2cf464u: goto label_2cf464;
        case 0x2cf470u: goto label_2cf470;
        case 0x2cf47cu: goto label_2cf47c;
        case 0x2cf49cu: goto label_2cf49c;
        case 0x2cf4acu: goto label_2cf4ac;
        case 0x2cf4bcu: goto label_2cf4bc;
        case 0x2cf4d4u: goto label_2cf4d4;
        case 0x2cf4e4u: goto label_2cf4e4;
        case 0x2cf4f0u: goto label_2cf4f0;
        case 0x2cf500u: goto label_2cf500;
        case 0x2cf50cu: goto label_2cf50c;
        case 0x2cf51cu: goto label_2cf51c;
        case 0x2cf52cu: goto label_2cf52c;
        case 0x2cf534u: goto label_2cf534;
        case 0x2cf544u: goto label_2cf544;
        case 0x2cf554u: goto label_2cf554;
        case 0x2cf55cu: goto label_2cf55c;
        case 0x2cf56cu: goto label_2cf56c;
        case 0x2cf584u: goto label_2cf584;
        case 0x2cf594u: goto label_2cf594;
        case 0x2cf5a0u: goto label_2cf5a0;
        case 0x2cf5b0u: goto label_2cf5b0;
        case 0x2cf5c0u: goto label_2cf5c0;
        default: break;
    }

    ctx->pc = 0x2cf3e0u;

    // 0x2cf3e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2cf3e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2cf3e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2cf3e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2cf3e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2cf3e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2cf3ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2cf3ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2cf3f0: 0xc0b06cc  jal         func_2C1B30
    ctx->pc = 0x2CF3F0u;
    SET_GPR_U32(ctx, 31, 0x2CF3F8u);
    ctx->pc = 0x2C1B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1B30u, 0x2CF3F0u, 0x2CF3F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF3F8u;
label_2cf3f8:
    // 0x2cf3f8: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x2cf3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x2cf3fc: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x2cf3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x2cf400: 0x10600071  beqz        $v1, . + 4 + (0x71 << 2)
    ctx->pc = 0x2CF400u;
    {
        const bool branch_taken_0x2cf400 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cf400) {
            ctx->pc = 0x2CF5C8u;
            goto label_2cf5c8;
        }
    }
    ctx->pc = 0x2CF408u;
    // 0x2cf408: 0xc090864  jal         func_242190
    ctx->pc = 0x2CF408u;
    SET_GPR_U32(ctx, 31, 0x2CF410u);
    ctx->pc = 0x242190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242190u, 0x2CF408u, 0x2CF410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF410u;
label_2cf410:
    // 0x2cf410: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2cf410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf414: 0xc090590  jal         func_241640
    ctx->pc = 0x2CF414u;
    SET_GPR_U32(ctx, 31, 0x2CF41Cu);
    ctx->pc = 0x241640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241640u, 0x2CF414u, 0x2CF41Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF41Cu;
label_2cf41c:
    // 0x2cf41c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2cf41cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf420: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x2cf420u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2cf424: 0xc09157c  jal         func_2455F0
    ctx->pc = 0x2CF424u;
    SET_GPR_U32(ctx, 31, 0x2CF42Cu);
    ctx->pc = 0x2455F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2455F0u, 0x2CF424u, 0x2CF42Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF42Cu;
label_2cf42c:
    // 0x2cf42c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2cf42cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf430: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x2cf430u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x2cf434: 0xc0b3df8  jal         func_2CF7E0
    ctx->pc = 0x2CF434u;
    SET_GPR_U32(ctx, 31, 0x2CF43Cu);
    ctx->pc = 0x2CF7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CF7E0u, 0x2CF434u, 0x2CF43Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF43Cu;
label_2cf43c:
    // 0x2cf43c: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x2cf43cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x2cf440: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2cf440u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf444: 0xc0b3de8  jal         func_2CF7A0
    ctx->pc = 0x2CF444u;
    SET_GPR_U32(ctx, 31, 0x2CF44Cu);
    ctx->pc = 0x2CF7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CF7A0u, 0x2CF444u, 0x2CF44Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF44Cu;
label_2cf44c:
    // 0x2cf44c: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x2cf44cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x2cf450: 0x27a50048  addiu       $a1, $sp, 0x48
    ctx->pc = 0x2cf450u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x2cf454: 0xc0b3dd8  jal         func_2CF760
    ctx->pc = 0x2CF454u;
    SET_GPR_U32(ctx, 31, 0x2CF45Cu);
    ctx->pc = 0x2CF760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CF760u, 0x2CF454u, 0x2CF45Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF45Cu;
label_2cf45c:
    // 0x2cf45c: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x2CF45Cu;
    {
        const bool branch_taken_0x2cf45c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cf45c) {
            ctx->pc = 0x2CF5A0u;
            goto label_2cf5a0;
        }
    }
    ctx->pc = 0x2CF464u;
label_2cf464:
    // 0x2cf464: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x2cf464u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x2cf468: 0xc0b3dcc  jal         func_2CF730
    ctx->pc = 0x2CF468u;
    SET_GPR_U32(ctx, 31, 0x2CF470u);
    ctx->pc = 0x2CF730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CF730u, 0x2CF468u, 0x2CF470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF470u;
label_2cf470:
    // 0x2cf470: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x2cf470u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2cf474: 0xc0b06cc  jal         func_2C1B30
    ctx->pc = 0x2CF474u;
    SET_GPR_U32(ctx, 31, 0x2CF47Cu);
    ctx->pc = 0x2C1B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1B30u, 0x2CF474u, 0x2CF47Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF47Cu;
label_2cf47c:
    // 0x2cf47c: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x2cf47cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x2cf480: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x2cf480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x2cf484: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x2cf484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x2cf488: 0x16220042  bne         $s1, $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x2CF488u;
    {
        const bool branch_taken_0x2cf488 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x2cf488) {
            ctx->pc = 0x2CF594u;
            goto label_2cf594;
        }
    }
    ctx->pc = 0x2CF490u;
    // 0x2cf490: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x2cf490u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x2cf494: 0xc0b3dc0  jal         func_2CF700
    ctx->pc = 0x2CF494u;
    SET_GPR_U32(ctx, 31, 0x2CF49Cu);
    ctx->pc = 0x2CF700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CF700u, 0x2CF494u, 0x2CF49Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF49Cu;
label_2cf49c:
    // 0x2cf49c: 0x27a40044  addiu       $a0, $sp, 0x44
    ctx->pc = 0x2cf49cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x2cf4a0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2cf4a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf4a4: 0xc0b3da4  jal         func_2CF690
    ctx->pc = 0x2CF4A4u;
    SET_GPR_U32(ctx, 31, 0x2CF4ACu);
    ctx->pc = 0x2CF690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CF690u, 0x2CF4A4u, 0x2CF4ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF4ACu;
label_2cf4ac:
    // 0x2cf4ac: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x2cf4acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x2cf4b0: 0x27a50044  addiu       $a1, $sp, 0x44
    ctx->pc = 0x2cf4b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x2cf4b4: 0xc0b3d88  jal         func_2CF620
    ctx->pc = 0x2CF4B4u;
    SET_GPR_U32(ctx, 31, 0x2CF4BCu);
    ctx->pc = 0x2CF620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CF620u, 0x2CF4B4u, 0x2CF4BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF4BCu;
label_2cf4bc:
    // 0x2cf4bc: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2CF4BCu;
    {
        const bool branch_taken_0x2cf4bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cf4bc) {
            ctx->pc = 0x2CF4E4u;
            goto label_2cf4e4;
        }
    }
    ctx->pc = 0x2CF4C4u;
    // 0x2cf4c4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2cf4c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2cf4c8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2cf4c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf4cc: 0xc0b3de8  jal         func_2CF7A0
    ctx->pc = 0x2CF4CCu;
    SET_GPR_U32(ctx, 31, 0x2CF4D4u);
    ctx->pc = 0x2CF7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CF7A0u, 0x2CF4CCu, 0x2CF4D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF4D4u;
label_2cf4d4:
    // 0x2cf4d4: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x2cf4d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x2cf4d8: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x2cf4d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2cf4dc: 0xc0b3dd8  jal         func_2CF760
    ctx->pc = 0x2CF4DCu;
    SET_GPR_U32(ctx, 31, 0x2CF4E4u);
    ctx->pc = 0x2CF760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CF760u, 0x2CF4DCu, 0x2CF4E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF4E4u;
label_2cf4e4:
    // 0x2cf4e4: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x2cf4e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x2cf4e8: 0xc0b3dcc  jal         func_2CF730
    ctx->pc = 0x2CF4E8u;
    SET_GPR_U32(ctx, 31, 0x2CF4F0u);
    ctx->pc = 0x2CF730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CF730u, 0x2CF4E8u, 0x2CF4F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF4F0u;
label_2cf4f0:
    // 0x2cf4f0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2cf4f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2cf4f4: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x2cf4f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2cf4f8: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2CF4F8u;
    SET_GPR_U32(ctx, 31, 0x2CF500u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2CF4F8u, 0x2CF500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF500u;
label_2cf500:
    // 0x2cf500: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2cf500u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf504: 0xc0b06cc  jal         func_2C1B30
    ctx->pc = 0x2CF504u;
    SET_GPR_U32(ctx, 31, 0x2CF50Cu);
    ctx->pc = 0x2C1B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1B30u, 0x2CF504u, 0x2CF50Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF50Cu;
label_2cf50c:
    // 0x2cf50c: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x2cf50cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x2cf510: 0xac510034  sw          $s1, 0x34($v0)
    ctx->pc = 0x2cf510u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 17));
    // 0x2cf514: 0xc0b06cc  jal         func_2C1B30
    ctx->pc = 0x2CF514u;
    SET_GPR_U32(ctx, 31, 0x2CF51Cu);
    ctx->pc = 0x2C1B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1B30u, 0x2CF514u, 0x2CF51Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF51Cu;
label_2cf51c:
    // 0x2cf51c: 0x8c440044  lw          $a0, 0x44($v0)
    ctx->pc = 0x2cf51cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x2cf520: 0x2785a4f4  addiu       $a1, $gp, -0x5B0C
    ctx->pc = 0x2cf520u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943988));
    // 0x2cf524: 0xc0b3c88  jal         func_2CF220
    ctx->pc = 0x2CF524u;
    SET_GPR_U32(ctx, 31, 0x2CF52Cu);
    ctx->pc = 0x2CF220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CF220u, 0x2CF524u, 0x2CF52Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF52Cu;
label_2cf52c:
    // 0x2cf52c: 0xc0b06cc  jal         func_2C1B30
    ctx->pc = 0x2CF52Cu;
    SET_GPR_U32(ctx, 31, 0x2CF534u);
    ctx->pc = 0x2C1B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1B30u, 0x2CF52Cu, 0x2CF534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF534u;
label_2cf534:
    // 0x2cf534: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x2cf534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x2cf538: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x2cf538u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x2cf53c: 0xc096958  jal         func_25A560
    ctx->pc = 0x2CF53Cu;
    SET_GPR_U32(ctx, 31, 0x2CF544u);
    ctx->pc = 0x25A560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A560u, 0x2CF53Cu, 0x2CF544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF544u;
label_2cf544:
    // 0x2cf544: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2cf544u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2cf548: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2cf548u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf54c: 0xc1194c4  jal         func_465310
    ctx->pc = 0x2CF54Cu;
    SET_GPR_U32(ctx, 31, 0x2CF554u);
    ctx->pc = 0x465310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x465310u, 0x2CF54Cu, 0x2CF554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF554u;
label_2cf554:
    // 0x2cf554: 0xc0b06cc  jal         func_2C1B30
    ctx->pc = 0x2CF554u;
    SET_GPR_U32(ctx, 31, 0x2CF55Cu);
    ctx->pc = 0x2C1B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1B30u, 0x2CF554u, 0x2CF55Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF55Cu;
label_2cf55c:
    // 0x2cf55c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2cf55cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf560: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2cf560u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2cf564: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x2CF564u;
    SET_GPR_U32(ctx, 31, 0x2CF56Cu);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x2CF564u, 0x2CF56Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF56Cu;
label_2cf56c:
    // 0x2cf56c: 0x8e240044  lw          $a0, 0x44($s1)
    ctx->pc = 0x2cf56cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x2cf570: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2cf570u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x2cf574: 0x24a5e360  addiu       $a1, $a1, -0x1CA0
    ctx->pc = 0x2cf574u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959968));
    // 0x2cf578: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2cf578u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf57c: 0xc0b3c88  jal         func_2CF220
    ctx->pc = 0x2CF57Cu;
    SET_GPR_U32(ctx, 31, 0x2CF584u);
    ctx->pc = 0x2CF220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CF220u, 0x2CF57Cu, 0x2CF584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF584u;
label_2cf584:
    // 0x2cf584: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2cf584u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2cf588: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2cf588u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2cf58c: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x2CF58Cu;
    SET_GPR_U32(ctx, 31, 0x2CF594u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x2CF58Cu, 0x2CF594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF594u;
label_2cf594:
    // 0x2cf594: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x2cf594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x2cf598: 0xc0b3dc0  jal         func_2CF700
    ctx->pc = 0x2CF598u;
    SET_GPR_U32(ctx, 31, 0x2CF5A0u);
    ctx->pc = 0x2CF700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CF700u, 0x2CF598u, 0x2CF5A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF5A0u;
label_2cf5a0:
    // 0x2cf5a0: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x2cf5a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x2cf5a4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2cf5a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf5a8: 0xc0b3da4  jal         func_2CF690
    ctx->pc = 0x2CF5A8u;
    SET_GPR_U32(ctx, 31, 0x2CF5B0u);
    ctx->pc = 0x2CF690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CF690u, 0x2CF5A8u, 0x2CF5B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF5B0u;
label_2cf5b0:
    // 0x2cf5b0: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x2cf5b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x2cf5b4: 0x27a5003c  addiu       $a1, $sp, 0x3C
    ctx->pc = 0x2cf5b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x2cf5b8: 0xc0b3d78  jal         func_2CF5E0
    ctx->pc = 0x2CF5B8u;
    SET_GPR_U32(ctx, 31, 0x2CF5C0u);
    ctx->pc = 0x2CF5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CF5E0u, 0x2CF5B8u, 0x2CF5C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF5C0u;
label_2cf5c0:
    // 0x2cf5c0: 0x1440ffa8  bnez        $v0, . + 4 + (-0x58 << 2)
    ctx->pc = 0x2CF5C0u;
    {
        const bool branch_taken_0x2cf5c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cf5c0) {
            ctx->pc = 0x2CF464u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cf464;
        }
    }
    ctx->pc = 0x2CF5C8u;
label_2cf5c8:
    // 0x2cf5c8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2cf5c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cf5cc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2cf5ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cf5d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2cf5d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cf5d4: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2cf5d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2cf5d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2CF5D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CF5D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CF5E0u;
}
