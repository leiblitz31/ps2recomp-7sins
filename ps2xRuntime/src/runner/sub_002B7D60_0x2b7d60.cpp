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

// Function: sub_002B7D60
// Address: 0x2b7d60 - 0x2b7df0
void sub_002B7D60_0x2b7d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B7D60_0x2b7d60");
#endif

    switch (ctx->pc) {
        case 0x2b7d9cu: goto label_2b7d9c;
        case 0x2b7ddcu: goto label_2b7ddc;
        default: break;
    }

    ctx->pc = 0x2b7d60u;

    // 0x2b7d60: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2b7d60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2b7d64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b7d64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b7d68: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2b7d68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2b7d6c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x2b7d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x2b7d70: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2b7d70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b7d74: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2b7d74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2b7d78: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2b7d78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b7d7c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x2b7d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2b7d80: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2B7D80u;
    {
        const bool branch_taken_0x2b7d80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2b7d80) {
            ctx->pc = 0x2B7DB4u;
            goto label_2b7db4;
        }
    }
    ctx->pc = 0x2B7D88u;
    // 0x2b7d88: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2b7d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b7d8c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2b7d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2b7d90: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x2b7d90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b7d94: 0xc0ae020  jal         func_2B8080
    ctx->pc = 0x2B7D94u;
    SET_GPR_U32(ctx, 31, 0x2B7D9Cu);
    ctx->pc = 0x2B8080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8080u, 0x2B7D94u, 0x2B7D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7D9Cu;
label_2b7d9c:
    // 0x2b7d9c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2b7d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b7da0: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2b7da0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2b7da4: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x2b7da4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x2b7da8: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x2b7da8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x2b7dac: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2B7DACu;
    {
        const bool branch_taken_0x2b7dac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b7dac) {
            ctx->pc = 0x2B7DDCu;
            goto label_2b7ddc;
        }
    }
    ctx->pc = 0x2B7DB4u;
label_2b7db4:
    // 0x2b7db4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2b7db4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b7db8: 0xa3a0001c  sb          $zero, 0x1C($sp)
    ctx->pc = 0x2b7db8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b7dbc: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2b7dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b7dc0: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2b7dc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2b7dc4: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x2b7dc4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b7dc8: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x2b7dc8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x2b7dcc: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2b7dccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b7dd0: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x2b7dd0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b7dd4: 0xc0adf7c  jal         func_2B7DF0
    ctx->pc = 0x2B7DD4u;
    SET_GPR_U32(ctx, 31, 0x2B7DDCu);
    ctx->pc = 0x2B7DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7DF0u, 0x2B7DD4u, 0x2B7DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7DDCu;
label_2b7ddc:
    // 0x2b7ddc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b7ddcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b7de0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2b7de0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2b7de4: 0x3e00008  jr          $ra
    ctx->pc = 0x2B7DE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B7DE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B7DECu;
    // 0x2b7dec: 0x0  nop
    ctx->pc = 0x2b7decu;
    // NOP
    ctx->pc = 0x2b7df0u;
}
