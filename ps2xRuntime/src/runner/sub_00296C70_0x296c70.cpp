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

// Function: sub_00296C70
// Address: 0x296c70 - 0x296cb0
void sub_00296C70_0x296c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00296C70_0x296c70");
#endif

    switch (ctx->pc) {
        case 0x296c8cu: goto label_296c8c;
        default: break;
    }

    ctx->pc = 0x296c70u;

    // 0x296c70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x296c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x296c74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x296c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x296c78: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x296c78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x296c7c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x296c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x296c80: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x296c80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x296c84: 0xc0a58e0  jal         func_296380
    ctx->pc = 0x296C84u;
    SET_GPR_U32(ctx, 31, 0x296C8Cu);
    ctx->pc = 0x296380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296380u, 0x296C84u, 0x296C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296C8Cu;
label_296c8c:
    // 0x296c8c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x296c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x296c90: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x296c90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x296c94: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x296c94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x296c98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x296c98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x296c9c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x296c9cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x296ca0: 0x3e00008  jr          $ra
    ctx->pc = 0x296CA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x296CA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x296CA8u;
    // 0x296ca8: 0x0  nop
    ctx->pc = 0x296ca8u;
    // NOP
    // 0x296cac: 0x0  nop
    ctx->pc = 0x296cacu;
    // NOP
    ctx->pc = 0x296cb0u;
}
