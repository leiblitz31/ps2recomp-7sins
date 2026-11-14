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

// Function: sub_001F85B0
// Address: 0x1f85b0 - 0x1f88d0
void sub_001F85B0_0x1f85b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F85B0_0x1f85b0");
#endif

    switch (ctx->pc) {
        case 0x1f85dcu: goto label_1f85dc;
        case 0x1f85f4u: goto label_1f85f4;
        case 0x1f8608u: goto label_1f8608;
        case 0x1f8614u: goto label_1f8614;
        case 0x1f8624u: goto label_1f8624;
        case 0x1f866cu: goto label_1f866c;
        case 0x1f867cu: goto label_1f867c;
        case 0x1f86a4u: goto label_1f86a4;
        case 0x1f86bcu: goto label_1f86bc;
        case 0x1f86ccu: goto label_1f86cc;
        case 0x1f86e0u: goto label_1f86e0;
        case 0x1f8704u: goto label_1f8704;
        case 0x1f8728u: goto label_1f8728;
        case 0x1f8740u: goto label_1f8740;
        case 0x1f8750u: goto label_1f8750;
        case 0x1f8764u: goto label_1f8764;
        case 0x1f8788u: goto label_1f8788;
        case 0x1f8798u: goto label_1f8798;
        case 0x1f87b8u: goto label_1f87b8;
        case 0x1f87c8u: goto label_1f87c8;
        case 0x1f87dcu: goto label_1f87dc;
        case 0x1f87f0u: goto label_1f87f0;
        case 0x1f883cu: goto label_1f883c;
        case 0x1f8854u: goto label_1f8854;
        case 0x1f886cu: goto label_1f886c;
        case 0x1f8884u: goto label_1f8884;
        case 0x1f88a8u: goto label_1f88a8;
        default: break;
    }

    ctx->pc = 0x1f85b0u;

    // 0x1f85b0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1f85b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1f85b4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1f85b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1f85b8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1f85b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1f85bc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1f85bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1f85c0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1f85c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1f85c4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1f85c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1f85c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1f85c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1f85cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f85ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1f85d0: 0xafa40080  sw          $a0, 0x80($sp)
    ctx->pc = 0x1f85d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 4));
    // 0x1f85d4: 0xc0de0d2  jal         func_378348
    ctx->pc = 0x1F85D4u;
    SET_GPR_U32(ctx, 31, 0x1F85DCu);
    ctx->pc = 0x378348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378348u, 0x1F85D4u, 0x1F85DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F85DCu;
label_1f85dc:
    // 0x1f85dc: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1f85dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f85e0: 0x30540003  andi        $s4, $v0, 0x3
    ctx->pc = 0x1f85e0u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x1f85e4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1f85e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f85e8: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1f85e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1f85ec: 0xc0447ec  jal         func_111FB0
    ctx->pc = 0x1F85ECu;
    SET_GPR_U32(ctx, 31, 0x1F85F4u);
    ctx->pc = 0x111FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111FB0u, 0x1F85ECu, 0x1F85F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F85F4u;
label_1f85f4:
    // 0x1f85f4: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1f85f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1f85f8: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1f85f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1f85fc: 0x8c4500a4  lw          $a1, 0xA4($v0)
    ctx->pc = 0x1f85fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x1f8600: 0xc0647b8  jal         func_191EE0
    ctx->pc = 0x1F8600u;
    SET_GPR_U32(ctx, 31, 0x1F8608u);
    ctx->pc = 0x191EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EE0u, 0x1F8600u, 0x1F8608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8608u;
label_1f8608:
    // 0x1f8608: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1f8608u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f860c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1F860Cu;
    {
        const bool branch_taken_0x1f860c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f860c) {
            ctx->pc = 0x1F862Cu;
            goto label_1f862c;
        }
    }
    ctx->pc = 0x1F8614u;
label_1f8614:
    // 0x1f8614: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1f8614u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1f8618: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1f8618u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f861c: 0xc04a9c0  jal         func_12A700
    ctx->pc = 0x1F861Cu;
    SET_GPR_U32(ctx, 31, 0x1F8624u);
    ctx->pc = 0x12A700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A700u, 0x1F861Cu, 0x1F8624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8624u;
label_1f8624:
    // 0x1f8624: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x1f8624u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x1f8628: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1f8628u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1f862c:
    // 0x1f862c: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1f862cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1f8630: 0x8c4200a4  lw          $v0, 0xA4($v0)
    ctx->pc = 0x1f8630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x1f8634: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x1f8634u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1f8638: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1F8638u;
    {
        const bool branch_taken_0x1f8638 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f8638) {
            ctx->pc = 0x1F8614u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f8614;
        }
    }
    ctx->pc = 0x1F8640u;
    // 0x1f8640: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1f8640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1f8644: 0x8c4200fc  lw          $v0, 0xFC($v0)
    ctx->pc = 0x1f8644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 252)));
    // 0x1f8648: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1F8648u;
    {
        const bool branch_taken_0x1f8648 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f8648) {
            ctx->pc = 0x1F867Cu;
            goto label_1f867c;
        }
    }
    ctx->pc = 0x1F8650u;
    // 0x1f8650: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x1f8650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1f8654: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1f8654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1f8658: 0x8c4200fc  lw          $v0, 0xFC($v0)
    ctx->pc = 0x1f8658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 252)));
    // 0x1f865c: 0x2445ffff  addiu       $a1, $v0, -0x1
    ctx->pc = 0x1f865cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1f8660: 0x24640104  addiu       $a0, $v1, 0x104
    ctx->pc = 0x1f8660u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 260));
    // 0x1f8664: 0xc04a9c0  jal         func_12A700
    ctx->pc = 0x1F8664u;
    SET_GPR_U32(ctx, 31, 0x1F866Cu);
    ctx->pc = 0x12A700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A700u, 0x1F8664u, 0x1F866Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F866Cu;
label_1f866c:
    // 0x1f866c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1f866cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f8670: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x1f8670u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1f8674: 0xc07e0e0  jal         func_1F8380
    ctx->pc = 0x1F8674u;
    SET_GPR_U32(ctx, 31, 0x1F867Cu);
    ctx->pc = 0x1F8380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8380u, 0x1F8674u, 0x1F867Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F867Cu;
label_1f867c:
    // 0x1f867c: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1f867cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1f8680: 0x904200f8  lbu         $v0, 0xF8($v0)
    ctx->pc = 0x1f8680u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 248)));
    // 0x1f8684: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x1F8684u;
    {
        const bool branch_taken_0x1f8684 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f8684) {
            ctx->pc = 0x1F8710u;
            goto label_1f8710;
        }
    }
    ctx->pc = 0x1F868Cu;
    // 0x1f868c: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x1f868cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1f8690: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1f8690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1f8694: 0x24640110  addiu       $a0, $v1, 0x110
    ctx->pc = 0x1f8694u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
    // 0x1f8698: 0x8c4500fc  lw          $a1, 0xFC($v0)
    ctx->pc = 0x1f8698u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 252)));
    // 0x1f869c: 0xc04a9c0  jal         func_12A700
    ctx->pc = 0x1F869Cu;
    SET_GPR_U32(ctx, 31, 0x1F86A4u);
    ctx->pc = 0x12A700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A700u, 0x1F869Cu, 0x1F86A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F86A4u;
label_1f86a4:
    // 0x1f86a4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1f86a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f86a8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1f86a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f86ac: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1F86ACu;
    {
        const bool branch_taken_0x1f86ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f86ac) {
            ctx->pc = 0x1F86ECu;
            goto label_1f86ec;
        }
    }
    ctx->pc = 0x1F86B4u;
    // 0x1f86b4: 0xc0de0d2  jal         func_378348
    ctx->pc = 0x1F86B4u;
    SET_GPR_U32(ctx, 31, 0x1F86BCu);
    ctx->pc = 0x378348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378348u, 0x1F86B4u, 0x1F86BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F86BCu;
label_1f86bc:
    // 0x1f86bc: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1f86bcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f86c0: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1f86c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1f86c4: 0xc044598  jal         func_111660
    ctx->pc = 0x1F86C4u;
    SET_GPR_U32(ctx, 31, 0x1F86CCu);
    ctx->pc = 0x111660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111660u, 0x1F86C4u, 0x1F86CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F86CCu;
label_1f86cc:
    // 0x1f86cc: 0x2a2001b  divu        $zero, $s5, $v0
    ctx->pc = 0x1f86ccu;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 21) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 21) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,21); } }
    // 0x1f86d0: 0x2810  mfhi        $a1
    ctx->pc = 0x1f86d0u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x1f86d4: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1f86d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1f86d8: 0xc04a9c0  jal         func_12A700
    ctx->pc = 0x1F86D8u;
    SET_GPR_U32(ctx, 31, 0x1F86E0u);
    ctx->pc = 0x12A700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A700u, 0x1F86D8u, 0x1F86E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F86E0u;
label_1f86e0:
    // 0x1f86e0: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x1f86e0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f86e4: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x1F86E4u;
    {
        const bool branch_taken_0x1f86e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f86e4) {
            ctx->pc = 0x1F878Cu;
            goto label_1f878c;
        }
    }
    ctx->pc = 0x1F86ECu;
label_1f86ec:
    // 0x1f86ec: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x1f86ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1f86f0: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1f86f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1f86f4: 0x24640110  addiu       $a0, $v1, 0x110
    ctx->pc = 0x1f86f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
    // 0x1f86f8: 0x8c4500fc  lw          $a1, 0xFC($v0)
    ctx->pc = 0x1f86f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 252)));
    // 0x1f86fc: 0xc04a9c0  jal         func_12A700
    ctx->pc = 0x1F86FCu;
    SET_GPR_U32(ctx, 31, 0x1F8704u);
    ctx->pc = 0x12A700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A700u, 0x1F86FCu, 0x1F8704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8704u;
label_1f8704:
    // 0x1f8704: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x1f8704u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f8708: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1F8708u;
    {
        const bool branch_taken_0x1f8708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f8708) {
            ctx->pc = 0x1F878Cu;
            goto label_1f878c;
        }
    }
    ctx->pc = 0x1F8710u;
label_1f8710:
    // 0x1f8710: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x1f8710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1f8714: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1f8714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1f8718: 0x24640104  addiu       $a0, $v1, 0x104
    ctx->pc = 0x1f8718u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 260));
    // 0x1f871c: 0x8c4500fc  lw          $a1, 0xFC($v0)
    ctx->pc = 0x1f871cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 252)));
    // 0x1f8720: 0xc04a9c0  jal         func_12A700
    ctx->pc = 0x1F8720u;
    SET_GPR_U32(ctx, 31, 0x1F8728u);
    ctx->pc = 0x12A700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A700u, 0x1F8720u, 0x1F8728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8728u;
label_1f8728:
    // 0x1f8728: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1f8728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f872c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1f872cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f8730: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1F8730u;
    {
        const bool branch_taken_0x1f8730 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f8730) {
            ctx->pc = 0x1F8770u;
            goto label_1f8770;
        }
    }
    ctx->pc = 0x1F8738u;
    // 0x1f8738: 0xc0de0d2  jal         func_378348
    ctx->pc = 0x1F8738u;
    SET_GPR_U32(ctx, 31, 0x1F8740u);
    ctx->pc = 0x378348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378348u, 0x1F8738u, 0x1F8740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8740u;
label_1f8740:
    // 0x1f8740: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1f8740u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8744: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1f8744u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1f8748: 0xc044598  jal         func_111660
    ctx->pc = 0x1F8748u;
    SET_GPR_U32(ctx, 31, 0x1F8750u);
    ctx->pc = 0x111660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111660u, 0x1F8748u, 0x1F8750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8750u;
label_1f8750:
    // 0x1f8750: 0x2a2001b  divu        $zero, $s5, $v0
    ctx->pc = 0x1f8750u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 21) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 21) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,21); } }
    // 0x1f8754: 0x2810  mfhi        $a1
    ctx->pc = 0x1f8754u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x1f8758: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1f8758u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1f875c: 0xc04a9c0  jal         func_12A700
    ctx->pc = 0x1F875Cu;
    SET_GPR_U32(ctx, 31, 0x1F8764u);
    ctx->pc = 0x12A700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A700u, 0x1F875Cu, 0x1F8764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8764u;
label_1f8764:
    // 0x1f8764: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x1f8764u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f8768: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1F8768u;
    {
        const bool branch_taken_0x1f8768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f8768) {
            ctx->pc = 0x1F878Cu;
            goto label_1f878c;
        }
    }
    ctx->pc = 0x1F8770u;
label_1f8770:
    // 0x1f8770: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x1f8770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1f8774: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1f8774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1f8778: 0x24640104  addiu       $a0, $v1, 0x104
    ctx->pc = 0x1f8778u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 260));
    // 0x1f877c: 0x8c4500fc  lw          $a1, 0xFC($v0)
    ctx->pc = 0x1f877cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 252)));
    // 0x1f8780: 0xc04a9c0  jal         func_12A700
    ctx->pc = 0x1F8780u;
    SET_GPR_U32(ctx, 31, 0x1F8788u);
    ctx->pc = 0x12A700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A700u, 0x1F8780u, 0x1F8788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8788u;
label_1f8788:
    // 0x1f8788: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x1f8788u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f878c:
    // 0x1f878c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1f878cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8790: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x1F8790u;
    {
        const bool branch_taken_0x1f8790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f8790) {
            ctx->pc = 0x1F888Cu;
            goto label_1f888c;
        }
    }
    ctx->pc = 0x1F8798u;
label_1f8798:
    // 0x1f8798: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1f8798u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f879c: 0x16600004  bnez        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F879Cu;
    {
        const bool branch_taken_0x1f879c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f879c) {
            ctx->pc = 0x1F87B0u;
            goto label_1f87b0;
        }
    }
    ctx->pc = 0x1F87A4u;
    // 0x1f87a4: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x1f87a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f87a8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1F87A8u;
    {
        const bool branch_taken_0x1f87a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f87a8) {
            ctx->pc = 0x1F87E0u;
            goto label_1f87e0;
        }
    }
    ctx->pc = 0x1F87B0u;
label_1f87b0:
    // 0x1f87b0: 0xc0de0d2  jal         func_378348
    ctx->pc = 0x1F87B0u;
    SET_GPR_U32(ctx, 31, 0x1F87B8u);
    ctx->pc = 0x378348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378348u, 0x1F87B0u, 0x1F87B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F87B8u;
label_1f87b8:
    // 0x1f87b8: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1f87b8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f87bc: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1f87bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1f87c0: 0xc044598  jal         func_111660
    ctx->pc = 0x1F87C0u;
    SET_GPR_U32(ctx, 31, 0x1F87C8u);
    ctx->pc = 0x111660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111660u, 0x1F87C0u, 0x1F87C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F87C8u;
label_1f87c8:
    // 0x1f87c8: 0x2a2001b  divu        $zero, $s5, $v0
    ctx->pc = 0x1f87c8u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 21) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 21) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,21); } }
    // 0x1f87cc: 0x2810  mfhi        $a1
    ctx->pc = 0x1f87ccu;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x1f87d0: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1f87d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1f87d4: 0xc04a9c0  jal         func_12A700
    ctx->pc = 0x1F87D4u;
    SET_GPR_U32(ctx, 31, 0x1F87DCu);
    ctx->pc = 0x12A700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A700u, 0x1F87D4u, 0x1F87DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F87DCu;
label_1f87dc:
    // 0x1f87dc: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1f87dcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f87e0:
    // 0x1f87e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f87e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f87e4: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x1f87e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1f87e8: 0xc07e0e0  jal         func_1F8380
    ctx->pc = 0x1F87E8u;
    SET_GPR_U32(ctx, 31, 0x1F87F0u);
    ctx->pc = 0x1F8380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8380u, 0x1F87E8u, 0x1F87F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F87F0u;
label_1f87f0:
    // 0x1f87f0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1f87f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f87f4: 0x32830003  andi        $v1, $s4, 0x3
    ctx->pc = 0x1f87f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)3);
    // 0x1f87f8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1f87f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1f87fc: 0x1062001d  beq         $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1F87FCu;
    {
        const bool branch_taken_0x1f87fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1f87fc) {
            ctx->pc = 0x1F8874u;
            goto label_1f8874;
        }
    }
    ctx->pc = 0x1F8804u;
    // 0x1f8804: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1f8804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f8808: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1F8808u;
    {
        const bool branch_taken_0x1f8808 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1f8808) {
            ctx->pc = 0x1F885Cu;
            goto label_1f885c;
        }
    }
    ctx->pc = 0x1F8810u;
    // 0x1f8810: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f8810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f8814: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1F8814u;
    {
        const bool branch_taken_0x1f8814 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1f8814) {
            ctx->pc = 0x1F8844u;
            goto label_1f8844;
        }
    }
    ctx->pc = 0x1F881Cu;
    // 0x1f881c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F881Cu;
    {
        const bool branch_taken_0x1f881c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f881c) {
            ctx->pc = 0x1F882Cu;
            goto label_1f882c;
        }
    }
    ctx->pc = 0x1F8824u;
    // 0x1f8824: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1F8824u;
    {
        const bool branch_taken_0x1f8824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f8824) {
            ctx->pc = 0x1F8884u;
            goto label_1f8884;
        }
    }
    ctx->pc = 0x1F882Cu;
label_1f882c:
    // 0x1f882c: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x1f882cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1f8830: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f8830u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8834: 0xc07e4b0  jal         func_1F92C0
    ctx->pc = 0x1F8834u;
    SET_GPR_U32(ctx, 31, 0x1F883Cu);
    ctx->pc = 0x1F92C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F92C0u, 0x1F8834u, 0x1F883Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F883Cu;
label_1f883c:
    // 0x1f883c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1F883Cu;
    {
        const bool branch_taken_0x1f883c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f883c) {
            ctx->pc = 0x1F8884u;
            goto label_1f8884;
        }
    }
    ctx->pc = 0x1F8844u;
label_1f8844:
    // 0x1f8844: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x1f8844u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1f8848: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f8848u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f884c: 0xc07e4ec  jal         func_1F93B0
    ctx->pc = 0x1F884Cu;
    SET_GPR_U32(ctx, 31, 0x1F8854u);
    ctx->pc = 0x1F93B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F93B0u, 0x1F884Cu, 0x1F8854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8854u;
label_1f8854:
    // 0x1f8854: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1F8854u;
    {
        const bool branch_taken_0x1f8854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f8854) {
            ctx->pc = 0x1F8884u;
            goto label_1f8884;
        }
    }
    ctx->pc = 0x1F885Cu;
label_1f885c:
    // 0x1f885c: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x1f885cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1f8860: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f8860u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8864: 0xc07e528  jal         func_1F94A0
    ctx->pc = 0x1F8864u;
    SET_GPR_U32(ctx, 31, 0x1F886Cu);
    ctx->pc = 0x1F94A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F94A0u, 0x1F8864u, 0x1F886Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F886Cu;
label_1f886c:
    // 0x1f886c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1F886Cu;
    {
        const bool branch_taken_0x1f886c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f886c) {
            ctx->pc = 0x1F8884u;
            goto label_1f8884;
        }
    }
    ctx->pc = 0x1F8874u;
label_1f8874:
    // 0x1f8874: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x1f8874u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1f8878: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f8878u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f887c: 0xc07e564  jal         func_1F9590
    ctx->pc = 0x1F887Cu;
    SET_GPR_U32(ctx, 31, 0x1F8884u);
    ctx->pc = 0x1F9590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9590u, 0x1F887Cu, 0x1F8884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8884u;
label_1f8884:
    // 0x1f8884: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1f8884u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1f8888: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1f8888u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1f888c:
    // 0x1f888c: 0x2e620004  sltiu       $v0, $s3, 0x4
    ctx->pc = 0x1f888cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x1f8890: 0x1440ffc1  bnez        $v0, . + 4 + (-0x3F << 2)
    ctx->pc = 0x1F8890u;
    {
        const bool branch_taken_0x1f8890 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f8890) {
            ctx->pc = 0x1F8798u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f8798;
        }
    }
    ctx->pc = 0x1F8898u;
    // 0x1f8898: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1f8898u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1f889c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1f889cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f88a0: 0xc0439c4  jal         func_10E710
    ctx->pc = 0x1F88A0u;
    SET_GPR_U32(ctx, 31, 0x1F88A8u);
    ctx->pc = 0x10E710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E710u, 0x1F88A0u, 0x1F88A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F88A8u;
label_1f88a8:
    // 0x1f88a8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1f88a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1f88ac: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1f88acu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f88b0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1f88b0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f88b4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1f88b4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f88b8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1f88b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f88bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1f88bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f88c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f88c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f88c4: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x1f88c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1f88c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1F88C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F88C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F88D0u;
}
