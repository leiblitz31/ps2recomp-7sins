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

// Function: sub_0025BA60
// Address: 0x25ba60 - 0x25ba90
void sub_0025BA60_0x25ba60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025BA60_0x25ba60");
#endif

    ctx->pc = 0x25ba60u;

    // 0x25ba60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x25ba60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25ba64: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x25ba64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x25ba68: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x25ba68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x25ba6c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x25ba6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25ba70: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x25ba70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25ba74: 0xac640088  sw          $a0, 0x88($v1)
    ctx->pc = 0x25ba74u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 136), GPR_U32(ctx, 4));
    // 0x25ba78: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x25ba78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x25ba7c: 0x3e00008  jr          $ra
    ctx->pc = 0x25BA7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25BA7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25BA84u;
    // 0x25ba84: 0x0  nop
    ctx->pc = 0x25ba84u;
    // NOP
    // 0x25ba88: 0x0  nop
    ctx->pc = 0x25ba88u;
    // NOP
    // 0x25ba8c: 0x0  nop
    ctx->pc = 0x25ba8cu;
    // NOP
    ctx->pc = 0x25ba90u;
}
