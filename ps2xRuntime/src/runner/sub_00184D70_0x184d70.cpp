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

// Function: sub_00184D70
// Address: 0x184d70 - 0x184e00
void sub_00184D70_0x184d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00184D70_0x184d70");
#endif

    switch (ctx->pc) {
        case 0x184dacu: goto label_184dac;
        case 0x184decu: goto label_184dec;
        default: break;
    }

    ctx->pc = 0x184d70u;

    // 0x184d70: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x184d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x184d74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x184d74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x184d78: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x184d78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x184d7c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x184d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x184d80: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x184d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x184d84: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x184d84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x184d88: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x184d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x184d8c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x184d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x184d90: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x184D90u;
    {
        const bool branch_taken_0x184d90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x184d90) {
            ctx->pc = 0x184DC4u;
            goto label_184dc4;
        }
    }
    ctx->pc = 0x184D98u;
    // 0x184d98: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x184d98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x184d9c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x184d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x184da0: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x184da0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x184da4: 0xc05e8dc  jal         func_17A370
    ctx->pc = 0x184DA4u;
    SET_GPR_U32(ctx, 31, 0x184DACu);
    ctx->pc = 0x17A370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A370u, 0x184DA4u, 0x184DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184DACu;
label_184dac:
    // 0x184dac: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x184dacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x184db0: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x184db0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x184db4: 0x2463000c  addiu       $v1, $v1, 0xC
    ctx->pc = 0x184db4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x184db8: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x184db8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x184dbc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x184DBCu;
    {
        const bool branch_taken_0x184dbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x184dbc) {
            ctx->pc = 0x184DECu;
            goto label_184dec;
        }
    }
    ctx->pc = 0x184DC4u;
label_184dc4:
    // 0x184dc4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x184dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x184dc8: 0xa3a0001c  sb          $zero, 0x1C($sp)
    ctx->pc = 0x184dc8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x184dcc: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x184dccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x184dd0: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x184dd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x184dd4: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x184dd4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x184dd8: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x184dd8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x184ddc: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x184ddcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x184de0: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x184de0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x184de4: 0xc061380  jal         func_184E00
    ctx->pc = 0x184DE4u;
    SET_GPR_U32(ctx, 31, 0x184DECu);
    ctx->pc = 0x184E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184E00u, 0x184DE4u, 0x184DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x184DECu;
label_184dec:
    // 0x184dec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x184decu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x184df0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x184df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x184df4: 0x3e00008  jr          $ra
    ctx->pc = 0x184DF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x184DF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x184DFCu;
    // 0x184dfc: 0x0  nop
    ctx->pc = 0x184dfcu;
    // NOP
    ctx->pc = 0x184e00u;
}
