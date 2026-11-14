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

// Function: sub_00258AD0
// Address: 0x258ad0 - 0x258b10
void sub_00258AD0_0x258ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00258AD0_0x258ad0");
#endif

    switch (ctx->pc) {
        case 0x258aecu: goto label_258aec;
        default: break;
    }

    ctx->pc = 0x258ad0u;

    // 0x258ad0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x258ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x258ad4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x258ad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x258ad8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x258ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x258adc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x258adcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x258ae0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x258ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x258ae4: 0xc0962c4  jal         func_258B10
    ctx->pc = 0x258AE4u;
    SET_GPR_U32(ctx, 31, 0x258AECu);
    ctx->pc = 0x258B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258B10u, 0x258AE4u, 0x258AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258AECu;
label_258aec:
    // 0x258aec: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x258aecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x258af0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x258af0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x258af4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x258af4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x258af8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x258af8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x258afc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x258afcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x258b00: 0x3e00008  jr          $ra
    ctx->pc = 0x258B00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x258B00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x258B08u;
    // 0x258b08: 0x0  nop
    ctx->pc = 0x258b08u;
    // NOP
    // 0x258b0c: 0x0  nop
    ctx->pc = 0x258b0cu;
    // NOP
    ctx->pc = 0x258b10u;
}
