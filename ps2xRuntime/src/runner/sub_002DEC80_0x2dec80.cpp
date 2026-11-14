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

// Function: sub_002DEC80
// Address: 0x2dec80 - 0x2dece0
void sub_002DEC80_0x2dec80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DEC80_0x2dec80");
#endif

    ctx->pc = 0x2dec80u;

    // 0x2dec80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2dec80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2dec84: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x2dec84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x2dec88: 0xafa60020  sw          $a2, 0x20($sp)
    ctx->pc = 0x2dec88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
    // 0x2dec8c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2dec8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dec90: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2dec90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2dec94: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2dec94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2dec98: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x2dec98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2dec9c: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2DEC9Cu;
    {
        const bool branch_taken_0x2dec9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2dec9c) {
            ctx->pc = 0x2DECB8u;
            goto label_2decb8;
        }
    }
    ctx->pc = 0x2DECA4u;
    // 0x2deca4: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x2deca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2deca8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2deca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2decac: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x2decacu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2decb0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2DECB0u;
    {
        const bool branch_taken_0x2decb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2decb0) {
            ctx->pc = 0x2DECCCu;
            goto label_2deccc;
        }
    }
    ctx->pc = 0x2DECB8u;
label_2decb8:
    // 0x2decb8: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x2decb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2decbc: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2decbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2decc0: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x2decc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2decc4: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x2decc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2decc8: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x2decc8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2deccc:
    // 0x2deccc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2decccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2decd0: 0x3e00008  jr          $ra
    ctx->pc = 0x2DECD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DECD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DECD8u;
    // 0x2decd8: 0x0  nop
    ctx->pc = 0x2decd8u;
    // NOP
    // 0x2decdc: 0x0  nop
    ctx->pc = 0x2decdcu;
    // NOP
    ctx->pc = 0x2dece0u;
}
