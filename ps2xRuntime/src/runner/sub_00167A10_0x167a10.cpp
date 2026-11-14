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

// Function: sub_00167A10
// Address: 0x167a10 - 0x167a70
void sub_00167A10_0x167a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00167A10_0x167a10");
#endif

    switch (ctx->pc) {
        case 0x167a2cu: goto label_167a2c;
        case 0x167a3cu: goto label_167a3c;
        default: break;
    }

    ctx->pc = 0x167a10u;

    // 0x167a10: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x167a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x167a14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x167a14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x167a18: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x167a18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x167a1c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x167a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x167a20: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x167a20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x167a24: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x167A24u;
    {
        const bool branch_taken_0x167a24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x167a24) {
            ctx->pc = 0x167A48u;
            goto label_167a48;
        }
    }
    ctx->pc = 0x167A2Cu;
label_167a2c:
    // 0x167a2c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x167a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x167a30: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x167a30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x167a34: 0xc059abc  jal         func_166AF0
    ctx->pc = 0x167A34u;
    SET_GPR_U32(ctx, 31, 0x167A3Cu);
    ctx->pc = 0x166AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166AF0u, 0x167A34u, 0x167A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167A3Cu;
label_167a3c:
    // 0x167a3c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x167a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x167a40: 0x2463000c  addiu       $v1, $v1, 0xC
    ctx->pc = 0x167a40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x167a44: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x167a44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_167a48:
    // 0x167a48: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x167a48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x167a4c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x167a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x167a50: 0x1483fff6  bne         $a0, $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x167A50u;
    {
        const bool branch_taken_0x167a50 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x167a50) {
            ctx->pc = 0x167A2Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_167a2c;
        }
    }
    ctx->pc = 0x167A58u;
    // 0x167a58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x167a58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x167a5c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x167a5cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x167a60: 0x3e00008  jr          $ra
    ctx->pc = 0x167A60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x167A60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x167A68u;
    // 0x167a68: 0x0  nop
    ctx->pc = 0x167a68u;
    // NOP
    // 0x167a6c: 0x0  nop
    ctx->pc = 0x167a6cu;
    // NOP
    ctx->pc = 0x167a70u;
}
