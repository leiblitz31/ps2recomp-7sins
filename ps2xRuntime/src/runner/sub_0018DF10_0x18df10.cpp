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

// Function: sub_0018DF10
// Address: 0x18df10 - 0x18df60
void sub_0018DF10_0x18df10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018DF10_0x18df10");
#endif

    switch (ctx->pc) {
        case 0x18df2cu: goto label_18df2c;
        default: break;
    }

    ctx->pc = 0x18df10u;

    // 0x18df10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x18df10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x18df14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18df14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18df18: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x18df18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x18df1c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x18df1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x18df20: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x18df20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18df24: 0xc0637d8  jal         func_18DF60
    ctx->pc = 0x18DF24u;
    SET_GPR_U32(ctx, 31, 0x18DF2Cu);
    ctx->pc = 0x18DF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DF60u, 0x18DF24u, 0x18DF2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DF2Cu;
label_18df2c:
    // 0x18df2c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x18df2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18df30: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x18df30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x18df34: 0x642023  subu        $a0, $v1, $a0
    ctx->pc = 0x18df34u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18df38: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x18df38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x18df3c: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x18df3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18df40: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x18df40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x18df44: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18df44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18df48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18df48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18df4c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x18df4cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x18df50: 0x3e00008  jr          $ra
    ctx->pc = 0x18DF50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18DF50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18DF58u;
    // 0x18df58: 0x0  nop
    ctx->pc = 0x18df58u;
    // NOP
    // 0x18df5c: 0x0  nop
    ctx->pc = 0x18df5cu;
    // NOP
    ctx->pc = 0x18df60u;
}
