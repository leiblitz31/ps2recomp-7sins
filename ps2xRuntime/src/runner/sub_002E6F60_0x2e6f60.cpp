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

// Function: sub_002E6F60
// Address: 0x2e6f60 - 0x2e6ff0
void sub_002E6F60_0x2e6f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E6F60_0x2e6f60");
#endif

    switch (ctx->pc) {
        case 0x2e6f9cu: goto label_2e6f9c;
        case 0x2e6fdcu: goto label_2e6fdc;
        default: break;
    }

    ctx->pc = 0x2e6f60u;

    // 0x2e6f60: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2e6f60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2e6f64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e6f64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e6f68: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2e6f68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2e6f6c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x2e6f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x2e6f70: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2e6f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e6f74: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2e6f74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2e6f78: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2e6f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e6f7c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x2e6f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2e6f80: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2E6F80u;
    {
        const bool branch_taken_0x2e6f80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e6f80) {
            ctx->pc = 0x2E6FB4u;
            goto label_2e6fb4;
        }
    }
    ctx->pc = 0x2E6F88u;
    // 0x2e6f88: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2e6f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e6f8c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2e6f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2e6f90: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x2e6f90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e6f94: 0xc0b9c90  jal         func_2E7240
    ctx->pc = 0x2E6F94u;
    SET_GPR_U32(ctx, 31, 0x2E6F9Cu);
    ctx->pc = 0x2E7240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E7240u, 0x2E6F94u, 0x2E6F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6F9Cu;
label_2e6f9c:
    // 0x2e6f9c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2e6f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e6fa0: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2e6fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2e6fa4: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x2e6fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x2e6fa8: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x2e6fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x2e6fac: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2E6FACu;
    {
        const bool branch_taken_0x2e6fac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e6fac) {
            ctx->pc = 0x2E6FDCu;
            goto label_2e6fdc;
        }
    }
    ctx->pc = 0x2E6FB4u;
label_2e6fb4:
    // 0x2e6fb4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2e6fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e6fb8: 0xa3a0001c  sb          $zero, 0x1C($sp)
    ctx->pc = 0x2e6fb8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e6fbc: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2e6fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e6fc0: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2e6fc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2e6fc4: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x2e6fc4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e6fc8: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x2e6fc8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x2e6fcc: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2e6fccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e6fd0: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x2e6fd0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e6fd4: 0xc0b9bfc  jal         func_2E6FF0
    ctx->pc = 0x2E6FD4u;
    SET_GPR_U32(ctx, 31, 0x2E6FDCu);
    ctx->pc = 0x2E6FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E6FF0u, 0x2E6FD4u, 0x2E6FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6FDCu;
label_2e6fdc:
    // 0x2e6fdc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e6fdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e6fe0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2e6fe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2e6fe4: 0x3e00008  jr          $ra
    ctx->pc = 0x2E6FE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E6FE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E6FECu;
    // 0x2e6fec: 0x0  nop
    ctx->pc = 0x2e6fecu;
    // NOP
    ctx->pc = 0x2e6ff0u;
}
