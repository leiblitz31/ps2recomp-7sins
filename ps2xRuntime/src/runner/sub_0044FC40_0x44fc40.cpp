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

// Function: sub_0044FC40
// Address: 0x44fc40 - 0x44fc80
void sub_0044FC40_0x44fc40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0044FC40_0x44fc40");
#endif

    switch (ctx->pc) {
        case 0x44fc5cu: goto label_44fc5c;
        default: break;
    }

    ctx->pc = 0x44fc40u;

    // 0x44fc40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x44fc40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x44fc44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x44fc44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x44fc48: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x44fc48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x44fc4c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x44fc4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x44fc50: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x44fc50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44fc54: 0xc113f20  jal         func_44FC80
    ctx->pc = 0x44FC54u;
    SET_GPR_U32(ctx, 31, 0x44FC5Cu);
    ctx->pc = 0x44FC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44FC80u, 0x44FC54u, 0x44FC5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x44FC5Cu;
label_44fc5c:
    // 0x44fc5c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x44fc5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x44fc60: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x44fc60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x44fc64: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x44fc64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x44fc68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x44fc68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x44fc6c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x44fc6cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x44fc70: 0x3e00008  jr          $ra
    ctx->pc = 0x44FC70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x44FC70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x44FC78u;
    // 0x44fc78: 0x0  nop
    ctx->pc = 0x44fc78u;
    // NOP
    // 0x44fc7c: 0x0  nop
    ctx->pc = 0x44fc7cu;
    // NOP
    ctx->pc = 0x44fc80u;
}
