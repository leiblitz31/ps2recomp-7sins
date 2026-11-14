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

// Function: sub_00149880
// Address: 0x149880 - 0x1498c0
void sub_00149880_0x149880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00149880_0x149880");
#endif

    ctx->pc = 0x149880u;

    // 0x149880: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x149880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x149884: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x149884u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x149888: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x149888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x14988c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x14988cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x149890: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x149890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x149894: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x149894u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x149898: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x149898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14989c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x14989cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1498a0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1498a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1498a4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1498a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1498a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1498a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1498ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1498acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1498b0: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x1498b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1498b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1498B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1498B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1498BCu;
    // 0x1498bc: 0x0  nop
    ctx->pc = 0x1498bcu;
    // NOP
    ctx->pc = 0x1498c0u;
}
