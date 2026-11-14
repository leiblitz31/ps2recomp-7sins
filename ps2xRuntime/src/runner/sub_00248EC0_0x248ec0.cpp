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

// Function: sub_00248EC0
// Address: 0x248ec0 - 0x248f00
void sub_00248EC0_0x248ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00248EC0_0x248ec0");
#endif

    switch (ctx->pc) {
        case 0x248edcu: goto label_248edc;
        default: break;
    }

    ctx->pc = 0x248ec0u;

    // 0x248ec0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x248ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x248ec4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x248ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x248ec8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x248ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x248ecc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x248eccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x248ed0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x248ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x248ed4: 0xc092464  jal         func_249190
    ctx->pc = 0x248ED4u;
    SET_GPR_U32(ctx, 31, 0x248EDCu);
    ctx->pc = 0x249190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249190u, 0x248ED4u, 0x248EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248EDCu;
label_248edc:
    // 0x248edc: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x248edcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x248ee0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x248ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x248ee4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x248ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x248ee8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x248ee8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x248eec: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x248eecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x248ef0: 0x3e00008  jr          $ra
    ctx->pc = 0x248EF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x248EF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x248EF8u;
    // 0x248ef8: 0x0  nop
    ctx->pc = 0x248ef8u;
    // NOP
    // 0x248efc: 0x0  nop
    ctx->pc = 0x248efcu;
    // NOP
    ctx->pc = 0x248f00u;
}
