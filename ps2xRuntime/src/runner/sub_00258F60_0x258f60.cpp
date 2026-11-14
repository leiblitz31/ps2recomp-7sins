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

// Function: sub_00258F60
// Address: 0x258f60 - 0x258ff0
void sub_00258F60_0x258f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00258F60_0x258f60");
#endif

    switch (ctx->pc) {
        case 0x258f9cu: goto label_258f9c;
        case 0x258fdcu: goto label_258fdc;
        default: break;
    }

    ctx->pc = 0x258f60u;

    // 0x258f60: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x258f60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x258f64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x258f64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x258f68: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x258f68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x258f6c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x258f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x258f70: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x258f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x258f74: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x258f74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x258f78: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x258f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x258f7c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x258f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x258f80: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x258F80u;
    {
        const bool branch_taken_0x258f80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x258f80) {
            ctx->pc = 0x258FB4u;
            goto label_258fb4;
        }
    }
    ctx->pc = 0x258F88u;
    // 0x258f88: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x258f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x258f8c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x258f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x258f90: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x258f90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x258f94: 0xc0964d8  jal         func_259360
    ctx->pc = 0x258F94u;
    SET_GPR_U32(ctx, 31, 0x258F9Cu);
    ctx->pc = 0x259360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259360u, 0x258F94u, 0x258F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258F9Cu;
label_258f9c:
    // 0x258f9c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x258f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x258fa0: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x258fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x258fa4: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x258fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x258fa8: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x258fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x258fac: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x258FACu;
    {
        const bool branch_taken_0x258fac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x258fac) {
            ctx->pc = 0x258FDCu;
            goto label_258fdc;
        }
    }
    ctx->pc = 0x258FB4u;
label_258fb4:
    // 0x258fb4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x258fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x258fb8: 0xa3a0001c  sb          $zero, 0x1C($sp)
    ctx->pc = 0x258fb8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x258fbc: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x258fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x258fc0: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x258fc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x258fc4: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x258fc4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x258fc8: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x258fc8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x258fcc: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x258fccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x258fd0: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x258fd0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x258fd4: 0xc0963fc  jal         func_258FF0
    ctx->pc = 0x258FD4u;
    SET_GPR_U32(ctx, 31, 0x258FDCu);
    ctx->pc = 0x258FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258FF0u, 0x258FD4u, 0x258FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x258FDCu;
label_258fdc:
    // 0x258fdc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x258fdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x258fe0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x258fe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x258fe4: 0x3e00008  jr          $ra
    ctx->pc = 0x258FE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x258FE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x258FECu;
    // 0x258fec: 0x0  nop
    ctx->pc = 0x258fecu;
    // NOP
    ctx->pc = 0x258ff0u;
}
