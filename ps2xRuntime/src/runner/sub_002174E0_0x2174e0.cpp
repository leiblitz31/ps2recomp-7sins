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

// Function: sub_002174E0
// Address: 0x2174e0 - 0x217570
void sub_002174E0_0x2174e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002174E0_0x2174e0");
#endif

    switch (ctx->pc) {
        case 0x217524u: goto label_217524;
        case 0x217544u: goto label_217544;
        default: break;
    }

    ctx->pc = 0x2174e0u;

    // 0x2174e0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2174e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2174e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2174e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2174e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2174e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2174ec: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2174ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2174f0: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x2174f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x2174f4: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x2174f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x2174f8: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x2174f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2174fc: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2174fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x217500: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x217500u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x217504: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x217504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x217508: 0x380c3  sra         $s0, $v1, 3
    ctx->pc = 0x217508u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 3), 3));
    // 0x21750c: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x21750Cu;
    {
        const bool branch_taken_0x21750c = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x21750c) {
            ctx->pc = 0x21751Cu;
            goto label_21751c;
        }
    }
    ctx->pc = 0x217514u;
    // 0x217514: 0x24620007  addiu       $v0, $v1, 0x7
    ctx->pc = 0x217514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 7));
    // 0x217518: 0x280c3  sra         $s0, $v0, 3
    ctx->pc = 0x217518u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 3));
label_21751c:
    // 0x21751c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x21751Cu;
    {
        const bool branch_taken_0x21751c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21751c) {
            ctx->pc = 0x217548u;
            goto label_217548;
        }
    }
    ctx->pc = 0x217524u;
label_217524:
    // 0x217524: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x217524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x217528: 0x2444fff8  addiu       $a0, $v0, -0x8
    ctx->pc = 0x217528u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
    // 0x21752c: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x21752cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x217530: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x217530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x217534: 0x2445fff8  addiu       $a1, $v0, -0x8
    ctx->pc = 0x217534u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
    // 0x217538: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x217538u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x21753c: 0xc085b78  jal         func_216DE0
    ctx->pc = 0x21753Cu;
    SET_GPR_U32(ctx, 31, 0x217544u);
    ctx->pc = 0x216DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x216DE0u, 0x21753Cu, 0x217544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217544u;
label_217544:
    // 0x217544: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x217544u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_217548:
    // 0x217548: 0x1e00fff6  bgtz        $s0, . + 4 + (-0xA << 2)
    ctx->pc = 0x217548u;
    {
        const bool branch_taken_0x217548 = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x217548) {
            ctx->pc = 0x217524u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_217524;
        }
    }
    ctx->pc = 0x217550u;
    // 0x217550: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x217550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x217554: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x217554u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x217558: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x217558u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21755c: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x21755cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x217560: 0x3e00008  jr          $ra
    ctx->pc = 0x217560u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x217560u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x217568u;
    // 0x217568: 0x0  nop
    ctx->pc = 0x217568u;
    // NOP
    // 0x21756c: 0x0  nop
    ctx->pc = 0x21756cu;
    // NOP
    ctx->pc = 0x217570u;
}
