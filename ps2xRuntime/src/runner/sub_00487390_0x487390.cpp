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

// Function: sub_00487390
// Address: 0x487390 - 0x4873d0
void sub_00487390_0x487390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00487390_0x487390");
#endif

    ctx->pc = 0x487390u;

    // 0x487390: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x487390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x487394: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x487394u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x487398: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x487398u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x48739c: 0xafa60020  sw          $a2, 0x20($sp)
    ctx->pc = 0x48739cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
    // 0x4873a0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x4873a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4873a4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x4873a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4873a8: 0xac640054  sw          $a0, 0x54($v1)
    ctx->pc = 0x4873a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 4));
    // 0x4873ac: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x4873acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4873b0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x4873b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4873b4: 0xac640058  sw          $a0, 0x58($v1)
    ctx->pc = 0x4873b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 88), GPR_U32(ctx, 4));
    // 0x4873b8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x4873b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x4873bc: 0x3e00008  jr          $ra
    ctx->pc = 0x4873BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4873BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4873C4u;
    // 0x4873c4: 0x0  nop
    ctx->pc = 0x4873c4u;
    // NOP
    // 0x4873c8: 0x0  nop
    ctx->pc = 0x4873c8u;
    // NOP
    // 0x4873cc: 0x0  nop
    ctx->pc = 0x4873ccu;
    // NOP
    ctx->pc = 0x4873d0u;
}
