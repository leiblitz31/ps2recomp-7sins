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

// Function: sub_0018DF80
// Address: 0x18df80 - 0x18dfc0
void sub_0018DF80_0x18df80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018DF80_0x18df80");
#endif

    switch (ctx->pc) {
        case 0x18df9cu: goto label_18df9c;
        default: break;
    }

    ctx->pc = 0x18df80u;

    // 0x18df80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x18df80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x18df84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18df84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18df88: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x18df88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x18df8c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x18df8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x18df90: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x18df90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18df94: 0xc0634c8  jal         func_18D320
    ctx->pc = 0x18DF94u;
    SET_GPR_U32(ctx, 31, 0x18DF9Cu);
    ctx->pc = 0x18D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18D320u, 0x18DF94u, 0x18DF9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DF9Cu;
label_18df9c:
    // 0x18df9c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x18df9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18dfa0: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x18dfa0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x18dfa4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18dfa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18dfa8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18dfa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18dfac: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x18dfacu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x18dfb0: 0x3e00008  jr          $ra
    ctx->pc = 0x18DFB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18DFB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18DFB8u;
    // 0x18dfb8: 0x0  nop
    ctx->pc = 0x18dfb8u;
    // NOP
    // 0x18dfbc: 0x0  nop
    ctx->pc = 0x18dfbcu;
    // NOP
    ctx->pc = 0x18dfc0u;
}
