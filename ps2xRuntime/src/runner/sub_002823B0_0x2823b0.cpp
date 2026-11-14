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

// Function: sub_002823B0
// Address: 0x2823b0 - 0x282440
void sub_002823B0_0x2823b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002823B0_0x2823b0");
#endif

    switch (ctx->pc) {
        case 0x2823d0u: goto label_2823d0;
        case 0x2823dcu: goto label_2823dc;
        case 0x2823ecu: goto label_2823ec;
        case 0x282400u: goto label_282400;
        case 0x282424u: goto label_282424;
        default: break;
    }

    ctx->pc = 0x2823b0u;

    // 0x2823b0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2823b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2823b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2823b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2823b8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2823b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2823bc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2823bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2823c0: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x2823c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x2823c4: 0xafa70040  sw          $a3, 0x40($sp)
    ctx->pc = 0x2823c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 7));
    // 0x2823c8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2823C8u;
    {
        const bool branch_taken_0x2823c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2823c8) {
            ctx->pc = 0x2823DCu;
            goto label_2823dc;
        }
    }
    ctx->pc = 0x2823D0u;
label_2823d0:
    // 0x2823d0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2823d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2823d4: 0xc0641cc  jal         func_190730
    ctx->pc = 0x2823D4u;
    SET_GPR_U32(ctx, 31, 0x2823DCu);
    ctx->pc = 0x190730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190730u, 0x2823D4u, 0x2823DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2823DCu;
label_2823dc:
    // 0x2823dc: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2823dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2823e0: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x2823e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2823e4: 0xc041998  jal         func_106660
    ctx->pc = 0x2823E4u;
    SET_GPR_U32(ctx, 31, 0x2823ECu);
    ctx->pc = 0x106660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106660u, 0x2823E4u, 0x2823ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2823ECu;
label_2823ec:
    // 0x2823ec: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2823ECu;
    {
        const bool branch_taken_0x2823ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2823ec) {
            ctx->pc = 0x282414u;
            goto label_282414;
        }
    }
    ctx->pc = 0x2823F4u;
    // 0x2823f4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2823f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2823f8: 0xc0641dc  jal         func_190770
    ctx->pc = 0x2823F8u;
    SET_GPR_U32(ctx, 31, 0x282400u);
    ctx->pc = 0x190770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190770u, 0x2823F8u, 0x282400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282400u;
label_282400:
    // 0x282400: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x282400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x282404: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x282404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x282408: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x282408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28240c: 0x1462fff0  bne         $v1, $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x28240Cu;
    {
        const bool branch_taken_0x28240c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x28240c) {
            ctx->pc = 0x2823D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2823d0;
        }
    }
    ctx->pc = 0x282414u;
label_282414:
    // 0x282414: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x282414u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x282418: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x282418u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x28241c: 0xc06422c  jal         func_1908B0
    ctx->pc = 0x28241Cu;
    SET_GPR_U32(ctx, 31, 0x282424u);
    ctx->pc = 0x1908B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1908B0u, 0x28241Cu, 0x282424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282424u;
label_282424:
    // 0x282424: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x282424u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x282428: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x282428u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x28242c: 0x3e00008  jr          $ra
    ctx->pc = 0x28242Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28242Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x282434u;
    // 0x282434: 0x0  nop
    ctx->pc = 0x282434u;
    // NOP
    // 0x282438: 0x0  nop
    ctx->pc = 0x282438u;
    // NOP
    // 0x28243c: 0x0  nop
    ctx->pc = 0x28243cu;
    // NOP
    ctx->pc = 0x282440u;
}
