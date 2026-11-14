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

// Function: sub_0047F790
// Address: 0x47f790 - 0x47f7e0
void sub_0047F790_0x47f790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047F790_0x47f790");
#endif

    switch (ctx->pc) {
        case 0x47f7c4u: goto label_47f7c4;
        default: break;
    }

    ctx->pc = 0x47f790u;

    // 0x47f790: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x47f790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x47f794: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x47f794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x47f798: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x47f798u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x47f79c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x47f79cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x47f7a0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x47f7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x47f7a4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x47F7A4u;
    {
        const bool branch_taken_0x47f7a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47f7a4) {
            ctx->pc = 0x47F7C4u;
            goto label_47f7c4;
        }
    }
    ctx->pc = 0x47F7ACu;
    // 0x47f7ac: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x47f7acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x47f7b0: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x47f7b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x47f7b4: 0x24a5f7e0  addiu       $a1, $a1, -0x820
    ctx->pc = 0x47f7b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965216));
    // 0x47f7b8: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x47f7b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x47f7bc: 0xc0e2628  jal         func_3898A0
    ctx->pc = 0x47F7BCu;
    SET_GPR_U32(ctx, 31, 0x47F7C4u);
    ctx->pc = 0x3898A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3898A0u, 0x47F7BCu, 0x47F7C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47F7C4u;
label_47f7c4:
    // 0x47f7c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x47f7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x47f7c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x47f7c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x47f7cc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x47f7ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x47f7d0: 0x3e00008  jr          $ra
    ctx->pc = 0x47F7D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47F7D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x47F7D8u;
    // 0x47f7d8: 0x0  nop
    ctx->pc = 0x47f7d8u;
    // NOP
    // 0x47f7dc: 0x0  nop
    ctx->pc = 0x47f7dcu;
    // NOP
    ctx->pc = 0x47f7e0u;
}
