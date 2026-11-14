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

// Function: sub_002A7680
// Address: 0x2a7680 - 0x2a76b0
void sub_002A7680_0x2a7680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A7680_0x2a7680");
#endif

    ctx->pc = 0x2a7680u;

    // 0x2a7680: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a7680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a7684: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a7684u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2a7688: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2a7688u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2a768c: 0x8fb00010  lw          $s0, 0x10($sp)
    ctx->pc = 0x2a768cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a7690: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a7690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a7694: 0xa2020054  sb          $v0, 0x54($s0)
    ctx->pc = 0x2a7694u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 84), (uint8_t)GPR_U32(ctx, 2));
    // 0x2a7698: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2a7698u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a769c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a769cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a76a0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2a76a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2a76a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2A76A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A76A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A76ACu;
    // 0x2a76ac: 0x0  nop
    ctx->pc = 0x2a76acu;
    // NOP
    ctx->pc = 0x2a76b0u;
}
