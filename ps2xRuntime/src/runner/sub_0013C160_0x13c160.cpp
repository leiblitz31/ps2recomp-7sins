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

// Function: sub_0013C160
// Address: 0x13c160 - 0x13c1a0
void sub_0013C160_0x13c160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013C160_0x13c160");
#endif

    ctx->pc = 0x13c160u;

    // 0x13c160: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13c160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x13c164: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x13c164u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x13c168: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x13c168u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x13c16c: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x13c16cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13c170: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x13c170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13c174: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x13c174u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x13c178: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x13c178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x13c17c: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x13c17cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13c180: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x13c180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13c184: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x13c184u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x13c188: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x13c188u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x13c18c: 0x3e00008  jr          $ra
    ctx->pc = 0x13C18Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13C18Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13C194u;
    // 0x13c194: 0x0  nop
    ctx->pc = 0x13c194u;
    // NOP
    // 0x13c198: 0x0  nop
    ctx->pc = 0x13c198u;
    // NOP
    // 0x13c19c: 0x0  nop
    ctx->pc = 0x13c19cu;
    // NOP
    ctx->pc = 0x13c1a0u;
}
