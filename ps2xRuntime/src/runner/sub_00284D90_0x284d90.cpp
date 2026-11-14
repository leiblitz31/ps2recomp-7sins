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

// Function: sub_00284D90
// Address: 0x284d90 - 0x284e00
void sub_00284D90_0x284d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00284D90_0x284d90");
#endif

    switch (ctx->pc) {
        case 0x284db8u: goto label_284db8;
        case 0x284dc8u: goto label_284dc8;
        case 0x284de8u: goto label_284de8;
        default: break;
    }

    ctx->pc = 0x284d90u;

    // 0x284d90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x284d90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x284d94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x284d94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x284d98: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x284d98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x284d9c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x284d9cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x284da0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x284da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x284da4: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x284DA4u;
    {
        const bool branch_taken_0x284da4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x284da4) {
            ctx->pc = 0x284DE8u;
            goto label_284de8;
        }
    }
    ctx->pc = 0x284DACu;
    // 0x284dac: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x284dacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x284db0: 0xc0a139c  jal         func_284E70
    ctx->pc = 0x284DB0u;
    SET_GPR_U32(ctx, 31, 0x284DB8u);
    ctx->pc = 0x284E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284E70u, 0x284DB0u, 0x284DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284DB8u;
label_284db8:
    // 0x284db8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x284db8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x284dbc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x284dbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284dc0: 0xc0a1380  jal         func_284E00
    ctx->pc = 0x284DC0u;
    SET_GPR_U32(ctx, 31, 0x284DC8u);
    ctx->pc = 0x284E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284E00u, 0x284DC0u, 0x284DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284DC8u;
label_284dc8:
    // 0x284dc8: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x284dc8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x284dcc: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x284dccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x284dd0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x284dd0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x284dd4: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x284DD4u;
    {
        const bool branch_taken_0x284dd4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x284dd4) {
            ctx->pc = 0x284DE8u;
            goto label_284de8;
        }
    }
    ctx->pc = 0x284DDCu;
    // 0x284ddc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x284ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x284de0: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x284DE0u;
    SET_GPR_U32(ctx, 31, 0x284DE8u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x284DE0u, 0x284DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284DE8u;
label_284de8:
    // 0x284de8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x284de8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x284dec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x284decu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x284df0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x284df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x284df4: 0x3e00008  jr          $ra
    ctx->pc = 0x284DF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x284DF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x284DFCu;
    // 0x284dfc: 0x0  nop
    ctx->pc = 0x284dfcu;
    // NOP
    ctx->pc = 0x284e00u;
}
