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

// Function: sub_00450BA0
// Address: 0x450ba0 - 0x450bf0
void sub_00450BA0_0x450ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00450BA0_0x450ba0");
#endif

    ctx->pc = 0x450ba0u;

    // 0x450ba0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x450ba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x450ba4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x450ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x450ba8: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x450ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x450bac: 0xafa60020  sw          $a2, 0x20($sp)
    ctx->pc = 0x450bacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
    // 0x450bb0: 0xafa70030  sw          $a3, 0x30($sp)
    ctx->pc = 0x450bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 7));
    // 0x450bb4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x450bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x450bb8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x450bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x450bbc: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x450bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x450bc0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x450bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x450bc4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x450bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x450bc8: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x450bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x450bcc: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x450bccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x450bd0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x450bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x450bd4: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x450bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
    // 0x450bd8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x450bd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x450bdc: 0x3e00008  jr          $ra
    ctx->pc = 0x450BDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x450BDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x450BE4u;
    // 0x450be4: 0x0  nop
    ctx->pc = 0x450be4u;
    // NOP
    // 0x450be8: 0x0  nop
    ctx->pc = 0x450be8u;
    // NOP
    // 0x450bec: 0x0  nop
    ctx->pc = 0x450becu;
    // NOP
    ctx->pc = 0x450bf0u;
}
