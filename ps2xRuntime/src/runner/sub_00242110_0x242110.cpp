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

// Function: sub_00242110
// Address: 0x242110 - 0x242150
void sub_00242110_0x242110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00242110_0x242110");
#endif

    ctx->pc = 0x242110u;

    // 0x242110: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x242110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x242114: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x242114u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x242118: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x242118u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x24211c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x24211cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x242120: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x242120u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x242124: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x242124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x242128: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x242128u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x24212c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x24212cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x242130: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x242130u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x242134: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x242134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x242138: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x242138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x24213c: 0x24420038  addiu       $v0, $v0, 0x38
    ctx->pc = 0x24213cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
    // 0x242140: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x242140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x242144: 0x3e00008  jr          $ra
    ctx->pc = 0x242144u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x242144u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24214Cu;
    // 0x24214c: 0x0  nop
    ctx->pc = 0x24214cu;
    // NOP
    ctx->pc = 0x242150u;
}
