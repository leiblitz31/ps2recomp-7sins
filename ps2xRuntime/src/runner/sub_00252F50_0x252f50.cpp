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

// Function: sub_00252F50
// Address: 0x252f50 - 0x252fe0
void sub_00252F50_0x252f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00252F50_0x252f50");
#endif

    switch (ctx->pc) {
        case 0x252f78u: goto label_252f78;
        case 0x252fa4u: goto label_252fa4;
        case 0x252fc4u: goto label_252fc4;
        default: break;
    }

    ctx->pc = 0x252f50u;

    // 0x252f50: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x252f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x252f54: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x252f54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x252f58: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x252f58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x252f5c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x252f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x252f60: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x252f60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x252f64: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x252f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x252f68: 0x24500004  addiu       $s0, $v0, 0x4
    ctx->pc = 0x252f68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x252f6c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x252f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x252f70: 0xc09245c  jal         func_249170
    ctx->pc = 0x252F70u;
    SET_GPR_U32(ctx, 31, 0x252F78u);
    ctx->pc = 0x249170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249170u, 0x252F70u, 0x252F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252F78u;
label_252f78:
    // 0x252f78: 0x1202000a  beq         $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x252F78u;
    {
        const bool branch_taken_0x252f78 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x252f78) {
            ctx->pc = 0x252FA4u;
            goto label_252fa4;
        }
    }
    ctx->pc = 0x252F80u;
    // 0x252f80: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x252f80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x252f84: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x252f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x252f88: 0xa3a0002c  sb          $zero, 0x2C($sp)
    ctx->pc = 0x252f88u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 44), (uint8_t)GPR_U32(ctx, 0));
    // 0x252f8c: 0x24640004  addiu       $a0, $v1, 0x4
    ctx->pc = 0x252f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x252f90: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x252f90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x252f94: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x252f94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x252f98: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x252f98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x252f9c: 0xc094c00  jal         func_253000
    ctx->pc = 0x252F9Cu;
    SET_GPR_U32(ctx, 31, 0x252FA4u);
    ctx->pc = 0x253000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253000u, 0x252F9Cu, 0x252FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252FA4u;
label_252fa4:
    // 0x252fa4: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x252fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x252fa8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x252fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x252fac: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x252facu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x252fb0: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x252fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x252fb4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x252fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x252fb8: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x252fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x252fbc: 0xc094bf8  jal         func_252FE0
    ctx->pc = 0x252FBCu;
    SET_GPR_U32(ctx, 31, 0x252FC4u);
    ctx->pc = 0x252FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x252FE0u, 0x252FBCu, 0x252FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x252FC4u;
label_252fc4:
    // 0x252fc4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x252fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x252fc8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x252fc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x252fcc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x252fccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x252fd0: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x252fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x252fd4: 0x3e00008  jr          $ra
    ctx->pc = 0x252FD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x252FD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x252FDCu;
    // 0x252fdc: 0x0  nop
    ctx->pc = 0x252fdcu;
    // NOP
    ctx->pc = 0x252fe0u;
}
