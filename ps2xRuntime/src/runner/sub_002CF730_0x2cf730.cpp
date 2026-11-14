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

// Function: sub_002CF730
// Address: 0x2cf730 - 0x2cf760
void sub_002CF730_0x2cf730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CF730_0x2cf730");
#endif

    ctx->pc = 0x2cf730u;

    // 0x2cf730: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2cf730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2cf734: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2cf734u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2cf738: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2cf738u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2cf73c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2cf73cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cf740: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x2cf740u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2cf744: 0x2610fffc  addiu       $s0, $s0, -0x4
    ctx->pc = 0x2cf744u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
    // 0x2cf748: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2cf748u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf74c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2cf74cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cf750: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2cf750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2cf754: 0x3e00008  jr          $ra
    ctx->pc = 0x2CF754u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CF754u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CF75Cu;
    // 0x2cf75c: 0x0  nop
    ctx->pc = 0x2cf75cu;
    // NOP
    ctx->pc = 0x2cf760u;
}
