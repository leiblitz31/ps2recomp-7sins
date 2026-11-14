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

// Function: sub_00111CF0
// Address: 0x111cf0 - 0x111d50
void sub_00111CF0_0x111cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00111CF0_0x111cf0");
#endif

    switch (ctx->pc) {
        case 0x111d18u: goto label_111d18;
        case 0x111d30u: goto label_111d30;
        default: break;
    }

    ctx->pc = 0x111cf0u;

    // 0x111cf0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x111cf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x111cf4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x111cf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x111cf8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x111cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x111cfc: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x111cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x111d00: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x111d00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x111d04: 0xafa70050  sw          $a3, 0x50($sp)
    ctx->pc = 0x111d04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 7));
    // 0x111d08: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x111d08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x111d0c: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x111d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x111d10: 0xc044764  jal         func_111D90
    ctx->pc = 0x111D10u;
    SET_GPR_U32(ctx, 31, 0x111D18u);
    ctx->pc = 0x111D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111D90u, 0x111D10u, 0x111D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111D18u;
label_111d18:
    // 0x111d18: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x111d18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x111d1c: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x111d1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x111d20: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x111d20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111d24: 0x8fa70050  lw          $a3, 0x50($sp)
    ctx->pc = 0x111d24u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x111d28: 0xc0448c8  jal         func_112320
    ctx->pc = 0x111D28u;
    SET_GPR_U32(ctx, 31, 0x111D30u);
    ctx->pc = 0x112320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112320u, 0x111D28u, 0x111D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111D30u;
label_111d30:
    // 0x111d30: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x111d30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x111d34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x111d34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x111d38: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x111d38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x111d3c: 0x3e00008  jr          $ra
    ctx->pc = 0x111D3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x111D3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x111D44u;
    // 0x111d44: 0x0  nop
    ctx->pc = 0x111d44u;
    // NOP
    // 0x111d48: 0x0  nop
    ctx->pc = 0x111d48u;
    // NOP
    // 0x111d4c: 0x0  nop
    ctx->pc = 0x111d4cu;
    // NOP
    ctx->pc = 0x111d50u;
}
