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

// Function: sub_002CFD90
// Address: 0x2cfd90 - 0x2cfe10
void sub_002CFD90_0x2cfd90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CFD90_0x2cfd90");
#endif

    switch (ctx->pc) {
        case 0x2cfdf0u: goto label_2cfdf0;
        default: break;
    }

    ctx->pc = 0x2cfd90u;

    // 0x2cfd90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2cfd90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2cfd94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2cfd94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2cfd98: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2cfd98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2cfd9c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2cfd9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2cfda0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2cfda0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cfda4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2cfda4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2cfda8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CFDA8u;
    {
        const bool branch_taken_0x2cfda8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cfda8) {
            ctx->pc = 0x2CFDBCu;
            goto label_2cfdbc;
        }
    }
    ctx->pc = 0x2CFDB0u;
    // 0x2cfdb0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2cfdb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cfdb4: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2CFDB4u;
    {
        const bool branch_taken_0x2cfdb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cfdb4) {
            ctx->pc = 0x2CFDDCu;
            goto label_2cfddc;
        }
    }
    ctx->pc = 0x2CFDBCu;
label_2cfdbc:
    // 0x2cfdbc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2cfdbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cfdc0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2cfdc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2cfdc4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2cfdc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cfdc8: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x2cfdc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x2cfdcc: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2cfdccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2cfdd0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2cfdd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2cfdd4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2CFDD4u;
    {
        const bool branch_taken_0x2cfdd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cfdd4) {
            ctx->pc = 0x2CFDF8u;
            goto label_2cfdf8;
        }
    }
    ctx->pc = 0x2CFDDCu;
label_2cfddc:
    // 0x2cfddc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2cfddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cfde0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2cfde0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2cfde4: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x2cfde4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cfde8: 0xc119204  jal         func_464810
    ctx->pc = 0x2CFDE8u;
    SET_GPR_U32(ctx, 31, 0x2CFDF0u);
    ctx->pc = 0x464810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x464810u, 0x2CFDE8u, 0x2CFDF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CFDF0u;
label_2cfdf0:
    // 0x2cfdf0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2cfdf0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2cfdf4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2cfdf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2cfdf8:
    // 0x2cfdf8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cfdf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cfdfc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2cfdfcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2cfe00: 0x3e00008  jr          $ra
    ctx->pc = 0x2CFE00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CFE00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CFE08u;
    // 0x2cfe08: 0x0  nop
    ctx->pc = 0x2cfe08u;
    // NOP
    // 0x2cfe0c: 0x0  nop
    ctx->pc = 0x2cfe0cu;
    // NOP
    ctx->pc = 0x2cfe10u;
}
