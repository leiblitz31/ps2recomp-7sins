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

// Function: sub_00267060
// Address: 0x267060 - 0x2670d0
void sub_00267060_0x267060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00267060_0x267060");
#endif

    switch (ctx->pc) {
        case 0x26707cu: goto label_26707c;
        default: break;
    }

    ctx->pc = 0x267060u;

    // 0x267060: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x267060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x267064: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x267064u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x267068: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x267068u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x26706c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x26706cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x267070: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x267070u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x267074: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x267074u;
    {
        const bool branch_taken_0x267074 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x267074) {
            ctx->pc = 0x2670A4u;
            goto label_2670a4;
        }
    }
    ctx->pc = 0x26707Cu;
label_26707c:
    // 0x26707c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x26707cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x267080: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x267080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x267084: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x267084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x267088: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x267088u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x26708c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x26708cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x267090: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x267090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x267094: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x267094u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x267098: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x267098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26709c: 0x24500004  addiu       $s0, $v0, 0x4
    ctx->pc = 0x26709cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2670a0: 0xafb00010  sw          $s0, 0x10($sp)
    ctx->pc = 0x2670a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 16));
label_2670a4:
    // 0x2670a4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2670a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2670a8: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2670A8u;
    {
        const bool branch_taken_0x2670a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2670a8) {
            ctx->pc = 0x26707Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26707c;
        }
    }
    ctx->pc = 0x2670B0u;
    // 0x2670b0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2670b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2670b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2670b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2670b8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2670b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2670bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2670BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2670BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2670C4u;
    // 0x2670c4: 0x0  nop
    ctx->pc = 0x2670c4u;
    // NOP
    // 0x2670c8: 0x0  nop
    ctx->pc = 0x2670c8u;
    // NOP
    // 0x2670cc: 0x0  nop
    ctx->pc = 0x2670ccu;
    // NOP
    ctx->pc = 0x2670d0u;
}
