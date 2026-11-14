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

// Function: sub_00456D50
// Address: 0x456d50 - 0x456db0
void sub_00456D50_0x456d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00456D50_0x456d50");
#endif

    switch (ctx->pc) {
        case 0x456d7cu: goto label_456d7c;
        case 0x456d88u: goto label_456d88;
        default: break;
    }

    ctx->pc = 0x456d50u;

    // 0x456d50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x456d50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x456d54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x456d54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x456d58: 0x8f82bf2c  lw          $v0, -0x40D4($gp)
    ctx->pc = 0x456d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950700)));
    // 0x456d5c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x456D5Cu;
    {
        const bool branch_taken_0x456d5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x456d5c) {
            ctx->pc = 0x456D8Cu;
            goto label_456d8c;
        }
    }
    ctx->pc = 0x456D64u;
    // 0x456d64: 0x8f82bf2c  lw          $v0, -0x40D4($gp)
    ctx->pc = 0x456d64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950700)));
    // 0x456d68: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x456D68u;
    {
        const bool branch_taken_0x456d68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x456d68) {
            ctx->pc = 0x456D8Cu;
            goto label_456d8c;
        }
    }
    ctx->pc = 0x456D70u;
    // 0x456d70: 0x8f84bf2c  lw          $a0, -0x40D4($gp)
    ctx->pc = 0x456d70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950700)));
    // 0x456d74: 0xc115b6c  jal         func_456DB0
    ctx->pc = 0x456D74u;
    SET_GPR_U32(ctx, 31, 0x456D7Cu);
    ctx->pc = 0x456DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x456DB0u, 0x456D74u, 0x456D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x456D7Cu;
label_456d7c:
    // 0x456d7c: 0x8f84bf2c  lw          $a0, -0x40D4($gp)
    ctx->pc = 0x456d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950700)));
    // 0x456d80: 0xc119c5c  jal         func_467170
    ctx->pc = 0x456D80u;
    SET_GPR_U32(ctx, 31, 0x456D88u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x456D80u, 0x456D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x456D88u;
label_456d88:
    // 0x456d88: 0xaf80bf2c  sw          $zero, -0x40D4($gp)
    ctx->pc = 0x456d88u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950700), GPR_U32(ctx, 0));
label_456d8c:
    // 0x456d8c: 0xa380bf30  sb          $zero, -0x40D0($gp)
    ctx->pc = 0x456d8cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294950704), (uint8_t)GPR_U32(ctx, 0));
    // 0x456d90: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x456d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x456d94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x456d94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x456d98: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x456d98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x456d9c: 0x3e00008  jr          $ra
    ctx->pc = 0x456D9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x456D9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x456DA4u;
    // 0x456da4: 0x0  nop
    ctx->pc = 0x456da4u;
    // NOP
    // 0x456da8: 0x0  nop
    ctx->pc = 0x456da8u;
    // NOP
    // 0x456dac: 0x0  nop
    ctx->pc = 0x456dacu;
    // NOP
    ctx->pc = 0x456db0u;
}
