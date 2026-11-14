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

// Function: sub_00202390
// Address: 0x202390 - 0x202490
void sub_00202390_0x202390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00202390_0x202390");
#endif

    switch (ctx->pc) {
        case 0x2023bcu: goto label_2023bc;
        case 0x2023c4u: goto label_2023c4;
        case 0x2023e0u: goto label_2023e0;
        case 0x2023f0u: goto label_2023f0;
        case 0x2023f4u: goto label_2023f4;
        case 0x2023fcu: goto label_2023fc;
        case 0x202418u: goto label_202418;
        case 0x202440u: goto label_202440;
        case 0x202458u: goto label_202458;
        default: break;
    }

    ctx->pc = 0x202390u;

    // 0x202390: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x202390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x202394: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x202394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x202398: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x202398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x20239c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x20239cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2023a0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2023a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2023a4: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x2023a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x2023a8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2023a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2023ac: 0x244400f4  addiu       $a0, $v0, 0xF4
    ctx->pc = 0x2023acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 244));
    // 0x2023b0: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x2023b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2023b4: 0xc056708  jal         func_159C20
    ctx->pc = 0x2023B4u;
    SET_GPR_U32(ctx, 31, 0x2023BCu);
    ctx->pc = 0x159C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159C20u, 0x2023B4u, 0x2023BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2023BCu;
label_2023bc:
    // 0x2023bc: 0xc0de0d2  jal         func_378348
    ctx->pc = 0x2023BCu;
    SET_GPR_U32(ctx, 31, 0x2023C4u);
    ctx->pc = 0x378348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378348u, 0x2023BCu, 0x2023C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2023C4u;
label_2023c4:
    // 0x2023c4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2023c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2023c8: 0x30520003  andi        $s2, $v0, 0x3
    ctx->pc = 0x2023c8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x2023cc: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2023ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2023d0: 0x244400f4  addiu       $a0, $v0, 0xF4
    ctx->pc = 0x2023d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 244));
    // 0x2023d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2023d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2023d8: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x2023D8u;
    SET_GPR_U32(ctx, 31, 0x2023E0u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x2023D8u, 0x2023E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2023E0u;
label_2023e0:
    // 0x2023e0: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x2023e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x2023e4: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2023e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2023e8: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x2023E8u;
    {
        const bool branch_taken_0x2023e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2023e8) {
            ctx->pc = 0x202468u;
            goto label_202468;
        }
    }
    ctx->pc = 0x2023F0u;
label_2023f0:
    // 0x2023f0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2023f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2023f4:
    // 0x2023f4: 0xc0de0d2  jal         func_378348
    ctx->pc = 0x2023F4u;
    SET_GPR_U32(ctx, 31, 0x2023FCu);
    ctx->pc = 0x378348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378348u, 0x2023F4u, 0x2023FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2023FCu;
label_2023fc:
    // 0x2023fc: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2023fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x202400: 0x30520003  andi        $s2, $v0, 0x3
    ctx->pc = 0x202400u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x202404: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x202404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x202408: 0x244400f4  addiu       $a0, $v0, 0xF4
    ctx->pc = 0x202408u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 244));
    // 0x20240c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x20240cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202410: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x202410u;
    SET_GPR_U32(ctx, 31, 0x202418u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x202410u, 0x202418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202418u;
label_202418:
    // 0x202418: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x202418u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x20241c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x20241cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x202420: 0x2a21000a  slti        $at, $s1, 0xA
    ctx->pc = 0x202420u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x202424: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
    ctx->pc = 0x202424u;
    {
        const bool branch_taken_0x202424 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x202424) {
            ctx->pc = 0x202464u;
            goto label_202464;
        }
    }
    ctx->pc = 0x20242Cu;
    // 0x20242c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x20242cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x202430: 0x244400f4  addiu       $a0, $v0, 0xF4
    ctx->pc = 0x202430u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 244));
    // 0x202434: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x202434u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202438: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x202438u;
    SET_GPR_U32(ctx, 31, 0x202440u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x202438u, 0x202440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202440u;
label_202440:
    // 0x202440: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x202440u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x202444: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x202444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x202448: 0x2605ffff  addiu       $a1, $s0, -0x1
    ctx->pc = 0x202448u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x20244c: 0x244400f4  addiu       $a0, $v0, 0xF4
    ctx->pc = 0x20244cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 244));
    // 0x202450: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x202450u;
    SET_GPR_U32(ctx, 31, 0x202458u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x202450u, 0x202458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202458u;
label_202458:
    // 0x202458: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x202458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20245c: 0x1243ffe5  beq         $s2, $v1, . + 4 + (-0x1B << 2)
    ctx->pc = 0x20245Cu;
    {
        const bool branch_taken_0x20245c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        if (branch_taken_0x20245c) {
            ctx->pc = 0x2023F4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2023f4;
        }
    }
    ctx->pc = 0x202464u;
label_202464:
    // 0x202464: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x202464u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_202468:
    // 0x202468: 0x2a030006  slti        $v1, $s0, 0x6
    ctx->pc = 0x202468u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x20246c: 0x1460ffe0  bnez        $v1, . + 4 + (-0x20 << 2)
    ctx->pc = 0x20246Cu;
    {
        const bool branch_taken_0x20246c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x20246c) {
            ctx->pc = 0x2023F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2023f0;
        }
    }
    ctx->pc = 0x202474u;
    // 0x202474: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x202474u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x202478: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x202478u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20247c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x20247cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x202480: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x202480u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x202484: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x202484u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x202488: 0x3e00008  jr          $ra
    ctx->pc = 0x202488u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x202488u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x202490u;
}
