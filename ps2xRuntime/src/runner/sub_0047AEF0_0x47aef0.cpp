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

// Function: sub_0047AEF0
// Address: 0x47aef0 - 0x47af30
void sub_0047AEF0_0x47aef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047AEF0_0x47aef0");
#endif

    switch (ctx->pc) {
        case 0x47af0cu: goto label_47af0c;
        default: break;
    }

    ctx->pc = 0x47aef0u;

    // 0x47aef0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x47aef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x47aef4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x47aef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x47aef8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x47aef8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x47aefc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x47aefcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x47af00: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x47af00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x47af04: 0xc11ebcc  jal         func_47AF30
    ctx->pc = 0x47AF04u;
    SET_GPR_U32(ctx, 31, 0x47AF0Cu);
    ctx->pc = 0x47AF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47AF30u, 0x47AF04u, 0x47AF0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47AF0Cu;
label_47af0c:
    // 0x47af0c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x47af0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x47af10: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x47af10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x47af14: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x47af14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x47af18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x47af18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x47af1c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x47af1cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x47af20: 0x3e00008  jr          $ra
    ctx->pc = 0x47AF20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47AF20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x47AF28u;
    // 0x47af28: 0x0  nop
    ctx->pc = 0x47af28u;
    // NOP
    // 0x47af2c: 0x0  nop
    ctx->pc = 0x47af2cu;
    // NOP
    ctx->pc = 0x47af30u;
}
