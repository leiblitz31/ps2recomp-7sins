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

// Function: sub_0011AE30
// Address: 0x11ae30 - 0x11aea0
void sub_0011AE30_0x11ae30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011AE30_0x11ae30");
#endif

    switch (ctx->pc) {
        case 0x11ae50u: goto label_11ae50;
        case 0x11ae68u: goto label_11ae68;
        case 0x11ae7cu: goto label_11ae7c;
        default: break;
    }

    ctx->pc = 0x11ae30u;

    // 0x11ae30: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x11ae30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x11ae34: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x11ae34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x11ae38: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x11ae38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x11ae3c: 0x8f82b9d0  lw          $v0, -0x4630($gp)
    ctx->pc = 0x11ae3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949328)));
    // 0x11ae40: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x11ae40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x11ae44: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x11ae44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x11ae48: 0xc0553d4  jal         func_154F50
    ctx->pc = 0x11AE48u;
    SET_GPR_U32(ctx, 31, 0x11AE50u);
    ctx->pc = 0x154F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154F50u, 0x11AE48u, 0x11AE50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AE50u;
label_11ae50:
    // 0x11ae50: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x11ae50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ae54: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x11AE54u;
    {
        const bool branch_taken_0x11ae54 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x11ae54) {
            ctx->pc = 0x11AE7Cu;
            goto label_11ae7c;
        }
    }
    ctx->pc = 0x11AE5Cu;
    // 0x11ae5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11ae5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ae60: 0xc0413bc  jal         func_104EF0
    ctx->pc = 0x11AE60u;
    SET_GPR_U32(ctx, 31, 0x11AE68u);
    ctx->pc = 0x104EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104EF0u, 0x11AE60u, 0x11AE68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AE68u;
label_11ae68:
    // 0x11ae68: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11AE68u;
    {
        const bool branch_taken_0x11ae68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11ae68) {
            ctx->pc = 0x11AE7Cu;
            goto label_11ae7c;
        }
    }
    ctx->pc = 0x11AE70u;
    // 0x11ae70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11ae70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ae74: 0xc057d30  jal         func_15F4C0
    ctx->pc = 0x11AE74u;
    SET_GPR_U32(ctx, 31, 0x11AE7Cu);
    ctx->pc = 0x15F4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15F4C0u, 0x11AE74u, 0x11AE7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AE7Cu;
label_11ae7c:
    // 0x11ae7c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11ae7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11ae80: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11ae80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11ae84: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x11ae84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11ae88: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x11ae88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x11ae8c: 0x3e00008  jr          $ra
    ctx->pc = 0x11AE8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11AE8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11AE94u;
    // 0x11ae94: 0x0  nop
    ctx->pc = 0x11ae94u;
    // NOP
    // 0x11ae98: 0x0  nop
    ctx->pc = 0x11ae98u;
    // NOP
    // 0x11ae9c: 0x0  nop
    ctx->pc = 0x11ae9cu;
    // NOP
    ctx->pc = 0x11aea0u;
}
