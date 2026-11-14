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

// Function: sub_00293F60
// Address: 0x293f60 - 0x293ff0
void sub_00293F60_0x293f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00293F60_0x293f60");
#endif

    switch (ctx->pc) {
        case 0x293fa4u: goto label_293fa4;
        case 0x293fc4u: goto label_293fc4;
        default: break;
    }

    ctx->pc = 0x293f60u;

    // 0x293f60: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x293f60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x293f64: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x293f64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x293f68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x293f68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x293f6c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x293f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x293f70: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x293f70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x293f74: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x293f74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x293f78: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x293f78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x293f7c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x293f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x293f80: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x293f80u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x293f84: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x293f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x293f88: 0x38083  sra         $s0, $v1, 2
    ctx->pc = 0x293f88u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 3), 2));
    // 0x293f8c: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x293F8Cu;
    {
        const bool branch_taken_0x293f8c = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x293f8c) {
            ctx->pc = 0x293F9Cu;
            goto label_293f9c;
        }
    }
    ctx->pc = 0x293F94u;
    // 0x293f94: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x293f94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x293f98: 0x28083  sra         $s0, $v0, 2
    ctx->pc = 0x293f98u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 2));
label_293f9c:
    // 0x293f9c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x293F9Cu;
    {
        const bool branch_taken_0x293f9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x293f9c) {
            ctx->pc = 0x293FC8u;
            goto label_293fc8;
        }
    }
    ctx->pc = 0x293FA4u;
label_293fa4:
    // 0x293fa4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x293fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x293fa8: 0x2444fffc  addiu       $a0, $v0, -0x4
    ctx->pc = 0x293fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x293fac: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x293facu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x293fb0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x293fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x293fb4: 0x2445fffc  addiu       $a1, $v0, -0x4
    ctx->pc = 0x293fb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x293fb8: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x293fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x293fbc: 0xc0a4b64  jal         func_292D90
    ctx->pc = 0x293FBCu;
    SET_GPR_U32(ctx, 31, 0x293FC4u);
    ctx->pc = 0x292D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292D90u, 0x293FBCu, 0x293FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293FC4u;
label_293fc4:
    // 0x293fc4: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x293fc4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_293fc8:
    // 0x293fc8: 0x1e00fff6  bgtz        $s0, . + 4 + (-0xA << 2)
    ctx->pc = 0x293FC8u;
    {
        const bool branch_taken_0x293fc8 = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x293fc8) {
            ctx->pc = 0x293FA4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_293fa4;
        }
    }
    ctx->pc = 0x293FD0u;
    // 0x293fd0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x293fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x293fd4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x293fd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x293fd8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x293fd8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x293fdc: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x293fdcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x293fe0: 0x3e00008  jr          $ra
    ctx->pc = 0x293FE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x293FE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x293FE8u;
    // 0x293fe8: 0x0  nop
    ctx->pc = 0x293fe8u;
    // NOP
    // 0x293fec: 0x0  nop
    ctx->pc = 0x293fecu;
    // NOP
    ctx->pc = 0x293ff0u;
}
