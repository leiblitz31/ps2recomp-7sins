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

// Function: sub_00185F50
// Address: 0x185f50 - 0x185fe0
void sub_00185F50_0x185f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00185F50_0x185f50");
#endif

    switch (ctx->pc) {
        case 0x185f8cu: goto label_185f8c;
        case 0x185fccu: goto label_185fcc;
        default: break;
    }

    ctx->pc = 0x185f50u;

    // 0x185f50: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x185f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x185f54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x185f54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x185f58: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x185f58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x185f5c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x185f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x185f60: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x185f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x185f64: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x185f64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x185f68: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x185f68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x185f6c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x185f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x185f70: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x185F70u;
    {
        const bool branch_taken_0x185f70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x185f70) {
            ctx->pc = 0x185FA4u;
            goto label_185fa4;
        }
    }
    ctx->pc = 0x185F78u;
    // 0x185f78: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x185f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x185f7c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x185f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x185f80: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x185f80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x185f84: 0xc0618c4  jal         func_186310
    ctx->pc = 0x185F84u;
    SET_GPR_U32(ctx, 31, 0x185F8Cu);
    ctx->pc = 0x186310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186310u, 0x185F84u, 0x185F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185F8Cu;
label_185f8c:
    // 0x185f8c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x185f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x185f90: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x185f90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x185f94: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x185f94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x185f98: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x185f98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x185f9c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x185F9Cu;
    {
        const bool branch_taken_0x185f9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x185f9c) {
            ctx->pc = 0x185FCCu;
            goto label_185fcc;
        }
    }
    ctx->pc = 0x185FA4u;
label_185fa4:
    // 0x185fa4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x185fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x185fa8: 0xa3a0001c  sb          $zero, 0x1C($sp)
    ctx->pc = 0x185fa8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x185fac: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x185facu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x185fb0: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x185fb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x185fb4: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x185fb4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x185fb8: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x185fb8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x185fbc: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x185fbcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x185fc0: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x185fc0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x185fc4: 0xc0617f8  jal         func_185FE0
    ctx->pc = 0x185FC4u;
    SET_GPR_U32(ctx, 31, 0x185FCCu);
    ctx->pc = 0x185FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185FE0u, 0x185FC4u, 0x185FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185FCCu;
label_185fcc:
    // 0x185fcc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x185fccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x185fd0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x185fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x185fd4: 0x3e00008  jr          $ra
    ctx->pc = 0x185FD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x185FD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x185FDCu;
    // 0x185fdc: 0x0  nop
    ctx->pc = 0x185fdcu;
    // NOP
    ctx->pc = 0x185fe0u;
}
