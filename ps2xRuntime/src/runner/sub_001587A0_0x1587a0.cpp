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

// Function: sub_001587A0
// Address: 0x1587a0 - 0x158810
void sub_001587A0_0x1587a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001587A0_0x1587a0");
#endif

    switch (ctx->pc) {
        case 0x1587bcu: goto label_1587bc;
        default: break;
    }

    ctx->pc = 0x1587a0u;

    // 0x1587a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1587a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1587a4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1587a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1587a8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1587a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1587ac: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1587acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1587b0: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x1587b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x1587b4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1587B4u;
    {
        const bool branch_taken_0x1587b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1587b4) {
            ctx->pc = 0x1587E4u;
            goto label_1587e4;
        }
    }
    ctx->pc = 0x1587BCu;
label_1587bc:
    // 0x1587bc: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1587bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1587c0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1587c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1587c4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1587c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1587c8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1587c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1587cc: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1587ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1587d0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1587d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1587d4: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x1587d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x1587d8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1587d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1587dc: 0x24500004  addiu       $s0, $v0, 0x4
    ctx->pc = 0x1587dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1587e0: 0xafb00010  sw          $s0, 0x10($sp)
    ctx->pc = 0x1587e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 16));
label_1587e4:
    // 0x1587e4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1587e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1587e8: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1587E8u;
    {
        const bool branch_taken_0x1587e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1587e8) {
            ctx->pc = 0x1587BCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1587bc;
        }
    }
    ctx->pc = 0x1587F0u;
    // 0x1587f0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1587f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1587f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1587f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1587f8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1587f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1587fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1587FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1587FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x158804u;
    // 0x158804: 0x0  nop
    ctx->pc = 0x158804u;
    // NOP
    // 0x158808: 0x0  nop
    ctx->pc = 0x158808u;
    // NOP
    // 0x15880c: 0x0  nop
    ctx->pc = 0x15880cu;
    // NOP
    ctx->pc = 0x158810u;
}
