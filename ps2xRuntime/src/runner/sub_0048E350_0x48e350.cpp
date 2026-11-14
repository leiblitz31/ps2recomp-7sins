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

// Function: sub_0048E350
// Address: 0x48e350 - 0x48e380
void sub_0048E350_0x48e350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048E350_0x48e350");
#endif

    ctx->pc = 0x48e350u;

    // 0x48e350: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x48e350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x48e354: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x48e354u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x48e358: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x48e358u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x48e35c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x48e35cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48e360: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x48e360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48e364: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x48e364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x48e368: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x48e368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x48e36c: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x48e36cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x48e370: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x48e370u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x48e374: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x48e374u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x48e378: 0x3e00008  jr          $ra
    ctx->pc = 0x48E378u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48E378u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48E380u;
}
