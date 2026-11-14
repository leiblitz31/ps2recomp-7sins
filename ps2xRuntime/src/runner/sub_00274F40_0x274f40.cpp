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

// Function: sub_00274F40
// Address: 0x274f40 - 0x274fa0
void sub_00274F40_0x274f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00274F40_0x274f40");
#endif

    switch (ctx->pc) {
        case 0x274f5cu: goto label_274f5c;
        case 0x274f6cu: goto label_274f6c;
        case 0x274f80u: goto label_274f80;
        default: break;
    }

    ctx->pc = 0x274f40u;

    // 0x274f40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x274f40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x274f44: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x274f44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x274f48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x274f48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x274f4c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x274f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x274f50: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x274f50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x274f54: 0xc0525e4  jal         func_149790
    ctx->pc = 0x274F54u;
    SET_GPR_U32(ctx, 31, 0x274F5Cu);
    ctx->pc = 0x149790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149790u, 0x274F54u, 0x274F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274F5Cu;
label_274f5c:
    // 0x274f5c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x274f5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274f60: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x274f60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x274f64: 0xc0525dc  jal         func_149770
    ctx->pc = 0x274F64u;
    SET_GPR_U32(ctx, 31, 0x274F6Cu);
    ctx->pc = 0x149770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149770u, 0x274F64u, 0x274F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274F6Cu;
label_274f6c:
    // 0x274f6c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x274f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x274f70: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x274f70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274f74: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x274f74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274f78: 0xc09d3e8  jal         func_274FA0
    ctx->pc = 0x274F78u;
    SET_GPR_U32(ctx, 31, 0x274F80u);
    ctx->pc = 0x274FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274FA0u, 0x274F78u, 0x274F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274F80u;
label_274f80:
    // 0x274f80: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x274f80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x274f84: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x274f84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x274f88: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x274f88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x274f8c: 0x3e00008  jr          $ra
    ctx->pc = 0x274F8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x274F8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x274F94u;
    // 0x274f94: 0x0  nop
    ctx->pc = 0x274f94u;
    // NOP
    // 0x274f98: 0x0  nop
    ctx->pc = 0x274f98u;
    // NOP
    // 0x274f9c: 0x0  nop
    ctx->pc = 0x274f9cu;
    // NOP
    ctx->pc = 0x274fa0u;
}
