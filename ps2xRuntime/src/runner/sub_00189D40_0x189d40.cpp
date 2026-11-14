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

// Function: sub_00189D40
// Address: 0x189d40 - 0x189dd0
void sub_00189D40_0x189d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00189D40_0x189d40");
#endif

    switch (ctx->pc) {
        case 0x189d7cu: goto label_189d7c;
        case 0x189dbcu: goto label_189dbc;
        default: break;
    }

    ctx->pc = 0x189d40u;

    // 0x189d40: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x189d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x189d44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x189d44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x189d48: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x189d48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x189d4c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x189d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x189d50: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x189d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x189d54: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x189d54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x189d58: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x189d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x189d5c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x189d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x189d60: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x189D60u;
    {
        const bool branch_taken_0x189d60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x189d60) {
            ctx->pc = 0x189D94u;
            goto label_189d94;
        }
    }
    ctx->pc = 0x189D68u;
    // 0x189d68: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x189d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x189d6c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x189d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x189d70: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x189d70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x189d74: 0xc06284c  jal         func_18A130
    ctx->pc = 0x189D74u;
    SET_GPR_U32(ctx, 31, 0x189D7Cu);
    ctx->pc = 0x18A130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A130u, 0x189D74u, 0x189D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189D7Cu;
label_189d7c:
    // 0x189d7c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x189d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x189d80: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x189d80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x189d84: 0x24630014  addiu       $v1, $v1, 0x14
    ctx->pc = 0x189d84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x189d88: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x189d88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x189d8c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x189D8Cu;
    {
        const bool branch_taken_0x189d8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x189d8c) {
            ctx->pc = 0x189DBCu;
            goto label_189dbc;
        }
    }
    ctx->pc = 0x189D94u;
label_189d94:
    // 0x189d94: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x189d94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x189d98: 0xa3a0001c  sb          $zero, 0x1C($sp)
    ctx->pc = 0x189d98u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x189d9c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x189d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x189da0: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x189da0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x189da4: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x189da4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x189da8: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x189da8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x189dac: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x189dacu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x189db0: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x189db0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x189db4: 0xc062774  jal         func_189DD0
    ctx->pc = 0x189DB4u;
    SET_GPR_U32(ctx, 31, 0x189DBCu);
    ctx->pc = 0x189DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x189DD0u, 0x189DB4u, 0x189DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x189DBCu;
label_189dbc:
    // 0x189dbc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x189dbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x189dc0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x189dc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x189dc4: 0x3e00008  jr          $ra
    ctx->pc = 0x189DC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x189DC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x189DCCu;
    // 0x189dcc: 0x0  nop
    ctx->pc = 0x189dccu;
    // NOP
    ctx->pc = 0x189dd0u;
}
