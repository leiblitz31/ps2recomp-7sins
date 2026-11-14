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

// Function: sub_00158870
// Address: 0x158870 - 0x158950
void sub_00158870_0x158870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00158870_0x158870");
#endif

    switch (ctx->pc) {
        case 0x15888cu: goto label_15888c;
        case 0x1588a0u: goto label_1588a0;
        case 0x1588b0u: goto label_1588b0;
        case 0x1588b8u: goto label_1588b8;
        case 0x1588c4u: goto label_1588c4;
        case 0x1588d0u: goto label_1588d0;
        case 0x1588e0u: goto label_1588e0;
        case 0x1588f4u: goto label_1588f4;
        case 0x158910u: goto label_158910;
        case 0x158924u: goto label_158924;
        case 0x158934u: goto label_158934;
        default: break;
    }

    ctx->pc = 0x158870u;

    // 0x158870: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x158870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x158874: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x158874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x158878: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x158878u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x15887c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x15887cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x158880: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x158880u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x158884: 0xc055398  jal         func_154E60
    ctx->pc = 0x158884u;
    SET_GPR_U32(ctx, 31, 0x15888Cu);
    ctx->pc = 0x154E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154E60u, 0x158884u, 0x15888Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15888Cu;
label_15888c:
    // 0x15888c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x15888cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x158890: 0x27a40018  addiu       $a0, $sp, 0x18
    ctx->pc = 0x158890u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x158894: 0x24450038  addiu       $a1, $v0, 0x38
    ctx->pc = 0x158894u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
    // 0x158898: 0xc055370  jal         func_154DC0
    ctx->pc = 0x158898u;
    SET_GPR_U32(ctx, 31, 0x1588A0u);
    ctx->pc = 0x154DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154DC0u, 0x158898u, 0x1588A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1588A0u;
label_1588a0:
    // 0x1588a0: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x1588a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x1588a4: 0x27a50018  addiu       $a1, $sp, 0x18
    ctx->pc = 0x1588a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x1588a8: 0xc055360  jal         func_154D80
    ctx->pc = 0x1588A8u;
    SET_GPR_U32(ctx, 31, 0x1588B0u);
    ctx->pc = 0x154D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154D80u, 0x1588A8u, 0x1588B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1588B0u;
label_1588b0:
    // 0x1588b0: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1588B0u;
    {
        const bool branch_taken_0x1588b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1588b0) {
            ctx->pc = 0x158910u;
            goto label_158910;
        }
    }
    ctx->pc = 0x1588B8u;
label_1588b8:
    // 0x1588b8: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x1588b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x1588bc: 0xc055358  jal         func_154D60
    ctx->pc = 0x1588BCu;
    SET_GPR_U32(ctx, 31, 0x1588C4u);
    ctx->pc = 0x154D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154D60u, 0x1588BCu, 0x1588C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1588C4u;
label_1588c4:
    // 0x1588c4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1588c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1588c8: 0xc041874  jal         func_1061D0
    ctx->pc = 0x1588C8u;
    SET_GPR_U32(ctx, 31, 0x1588D0u);
    ctx->pc = 0x1061D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1061D0u, 0x1588C8u, 0x1588D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1588D0u;
label_1588d0:
    // 0x1588d0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1588d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1588d4: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x1588d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1588d8: 0xc0bc574  jal         func_2F15D0
    ctx->pc = 0x1588D8u;
    SET_GPR_U32(ctx, 31, 0x1588E0u);
    ctx->pc = 0x2F15D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F15D0u, 0x1588D8u, 0x1588E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1588E0u;
label_1588e0:
    // 0x1588e0: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1588E0u;
    {
        const bool branch_taken_0x1588e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1588e0) {
            ctx->pc = 0x158904u;
            goto label_158904;
        }
    }
    ctx->pc = 0x1588E8u;
    // 0x1588e8: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x1588e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x1588ec: 0xc055358  jal         func_154D60
    ctx->pc = 0x1588ECu;
    SET_GPR_U32(ctx, 31, 0x1588F4u);
    ctx->pc = 0x154D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154D60u, 0x1588ECu, 0x1588F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1588F4u;
label_1588f4:
    // 0x1588f4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1588f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1588f8: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x1588f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1588fc: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1588FCu;
    {
        const bool branch_taken_0x1588fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1588fc) {
            ctx->pc = 0x158940u;
            goto label_158940;
        }
    }
    ctx->pc = 0x158904u;
label_158904:
    // 0x158904: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x158904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x158908: 0xc055348  jal         func_154D20
    ctx->pc = 0x158908u;
    SET_GPR_U32(ctx, 31, 0x158910u);
    ctx->pc = 0x154D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154D20u, 0x158908u, 0x158910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158910u;
label_158910:
    // 0x158910: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x158910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x158914: 0x27a40014  addiu       $a0, $sp, 0x14
    ctx->pc = 0x158914u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x158918: 0x24450038  addiu       $a1, $v0, 0x38
    ctx->pc = 0x158918u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
    // 0x15891c: 0xc05531c  jal         func_154C70
    ctx->pc = 0x15891Cu;
    SET_GPR_U32(ctx, 31, 0x158924u);
    ctx->pc = 0x154C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154C70u, 0x15891Cu, 0x158924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158924u;
label_158924:
    // 0x158924: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x158924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x158928: 0x27a50014  addiu       $a1, $sp, 0x14
    ctx->pc = 0x158928u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x15892c: 0xc041998  jal         func_106660
    ctx->pc = 0x15892Cu;
    SET_GPR_U32(ctx, 31, 0x158934u);
    ctx->pc = 0x106660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106660u, 0x15892Cu, 0x158934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158934u;
label_158934:
    // 0x158934: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x158934u;
    {
        const bool branch_taken_0x158934 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x158934) {
            ctx->pc = 0x1588B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1588b8;
        }
    }
    ctx->pc = 0x15893Cu;
    // 0x15893c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x15893cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_158940:
    // 0x158940: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x158940u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x158944: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x158944u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x158948: 0x3e00008  jr          $ra
    ctx->pc = 0x158948u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x158948u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x158950u;
}
