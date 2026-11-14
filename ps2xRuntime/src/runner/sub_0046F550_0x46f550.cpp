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

// Function: sub_0046F550
// Address: 0x46f550 - 0x46f620
void sub_0046F550_0x46f550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046F550_0x46f550");
#endif

    switch (ctx->pc) {
        case 0x46f57cu: goto label_46f57c;
        case 0x46f5a0u: goto label_46f5a0;
        case 0x46f5b0u: goto label_46f5b0;
        case 0x46f5c0u: goto label_46f5c0;
        case 0x46f5ccu: goto label_46f5cc;
        case 0x46f5dcu: goto label_46f5dc;
        case 0x46f5ecu: goto label_46f5ec;
        case 0x46f5f8u: goto label_46f5f8;
        case 0x46f608u: goto label_46f608;
        default: break;
    }

    ctx->pc = 0x46f550u;

    // 0x46f550: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x46f550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x46f554: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x46f554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x46f558: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x46f558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x46f55c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x46f55cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x46f560: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x46f560u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x46f564: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x46f564u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x46f568: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x46f568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x46f56c: 0x8c440014  lw          $a0, 0x14($v0)
    ctx->pc = 0x46f56cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x46f570: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x46f570u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x46f574: 0xc11b3c4  jal         func_46CF10
    ctx->pc = 0x46F574u;
    SET_GPR_U32(ctx, 31, 0x46F57Cu);
    ctx->pc = 0x46CF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46CF10u, 0x46F574u, 0x46F57Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46F57Cu;
label_46f57c:
    // 0x46f57c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x46f57cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46f580: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x46F580u;
    {
        const bool branch_taken_0x46f580 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x46f580) {
            ctx->pc = 0x46F594u;
            goto label_46f594;
        }
    }
    ctx->pc = 0x46F588u;
    // 0x46f588: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x46f588u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46f58c: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x46F58Cu;
    {
        const bool branch_taken_0x46f58c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x46f58c) {
            ctx->pc = 0x46F60Cu;
            goto label_46f60c;
        }
    }
    ctx->pc = 0x46F594u;
label_46f594:
    // 0x46f594: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x46f594u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46f598: 0xc11a438  jal         func_4690E0
    ctx->pc = 0x46F598u;
    SET_GPR_U32(ctx, 31, 0x46F5A0u);
    ctx->pc = 0x4690E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4690E0u, 0x46F598u, 0x46F5A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46F5A0u;
label_46f5a0:
    // 0x46f5a0: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x46f5a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x46f5a4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x46f5a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46f5a8: 0xc0430e4  jal         func_10C390
    ctx->pc = 0x46F5A8u;
    SET_GPR_U32(ctx, 31, 0x46F5B0u);
    ctx->pc = 0x10C390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C390u, 0x46F5A8u, 0x46F5B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46F5B0u;
label_46f5b0:
    // 0x46f5b0: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x46f5b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x46f5b4: 0x2785b318  addiu       $a1, $gp, -0x4CE8
    ctx->pc = 0x46f5b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294947608));
    // 0x46f5b8: 0xc0424e8  jal         func_1093A0
    ctx->pc = 0x46F5B8u;
    SET_GPR_U32(ctx, 31, 0x46F5C0u);
    ctx->pc = 0x1093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1093A0u, 0x46F5B8u, 0x46F5C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46F5C0u;
label_46f5c0:
    // 0x46f5c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x46f5c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46f5c4: 0xc11a430  jal         func_4690C0
    ctx->pc = 0x46F5C4u;
    SET_GPR_U32(ctx, 31, 0x46F5CCu);
    ctx->pc = 0x4690C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4690C0u, 0x46F5C4u, 0x46F5CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46F5CCu;
label_46f5cc:
    // 0x46f5cc: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x46f5ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x46f5d0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x46f5d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46f5d4: 0xc048c50  jal         func_123140
    ctx->pc = 0x46F5D4u;
    SET_GPR_U32(ctx, 31, 0x46F5DCu);
    ctx->pc = 0x123140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123140u, 0x46F5D4u, 0x46F5DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46F5DCu;
label_46f5dc:
    // 0x46f5dc: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x46f5dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x46f5e0: 0x2785b31c  addiu       $a1, $gp, -0x4CE4
    ctx->pc = 0x46f5e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294947612));
    // 0x46f5e4: 0xc0424e8  jal         func_1093A0
    ctx->pc = 0x46F5E4u;
    SET_GPR_U32(ctx, 31, 0x46F5ECu);
    ctx->pc = 0x1093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1093A0u, 0x46F5E4u, 0x46F5ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46F5ECu;
label_46f5ec:
    // 0x46f5ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x46f5ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46f5f0: 0xc11a428  jal         func_4690A0
    ctx->pc = 0x46F5F0u;
    SET_GPR_U32(ctx, 31, 0x46F5F8u);
    ctx->pc = 0x4690A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4690A0u, 0x46F5F0u, 0x46F5F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46F5F8u;
label_46f5f8:
    // 0x46f5f8: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x46f5f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x46f5fc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x46f5fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46f600: 0xc048c50  jal         func_123140
    ctx->pc = 0x46F600u;
    SET_GPR_U32(ctx, 31, 0x46F608u);
    ctx->pc = 0x123140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123140u, 0x46F600u, 0x46F608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46F608u;
label_46f608:
    // 0x46f608: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x46f608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_46f60c:
    // 0x46f60c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x46f60cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46f610: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x46f610u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x46f614: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x46f614u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x46f618: 0x3e00008  jr          $ra
    ctx->pc = 0x46F618u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46F618u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46F620u;
}
