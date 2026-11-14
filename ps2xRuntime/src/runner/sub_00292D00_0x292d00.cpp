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

// Function: sub_00292D00
// Address: 0x292d00 - 0x292d90
void sub_00292D00_0x292d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00292D00_0x292d00");
#endif

    switch (ctx->pc) {
        case 0x292d44u: goto label_292d44;
        case 0x292d54u: goto label_292d54;
        default: break;
    }

    ctx->pc = 0x292d00u;

    // 0x292d00: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x292d00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x292d04: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x292d04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x292d08: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x292d08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x292d0c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x292d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x292d10: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x292d10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x292d14: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x292d14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x292d18: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x292d18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x292d1c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x292d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x292d20: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x292d20u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x292d24: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x292d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x292d28: 0x38083  sra         $s0, $v1, 2
    ctx->pc = 0x292d28u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 3), 2));
    // 0x292d2c: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x292D2Cu;
    {
        const bool branch_taken_0x292d2c = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x292d2c) {
            ctx->pc = 0x292D3Cu;
            goto label_292d3c;
        }
    }
    ctx->pc = 0x292D34u;
    // 0x292d34: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x292d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x292d38: 0x28083  sra         $s0, $v0, 2
    ctx->pc = 0x292d38u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 2));
label_292d3c:
    // 0x292d3c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x292D3Cu;
    {
        const bool branch_taken_0x292d3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x292d3c) {
            ctx->pc = 0x292D70u;
            goto label_292d70;
        }
    }
    ctx->pc = 0x292D44u;
label_292d44:
    // 0x292d44: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x292d44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x292d48: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x292d48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x292d4c: 0xc0a4b64  jal         func_292D90
    ctx->pc = 0x292D4Cu;
    SET_GPR_U32(ctx, 31, 0x292D54u);
    ctx->pc = 0x292D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292D90u, 0x292D4Cu, 0x292D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292D54u;
label_292d54:
    // 0x292d54: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x292d54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x292d58: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x292d58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x292d5c: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x292d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x292d60: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x292d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x292d64: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x292d64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x292d68: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x292d68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x292d6c: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x292d6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_292d70:
    // 0x292d70: 0x1e00fff4  bgtz        $s0, . + 4 + (-0xC << 2)
    ctx->pc = 0x292D70u;
    {
        const bool branch_taken_0x292d70 = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x292d70) {
            ctx->pc = 0x292D44u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_292d44;
        }
    }
    ctx->pc = 0x292D78u;
    // 0x292d78: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x292d78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x292d7c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x292d7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x292d80: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x292d80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x292d84: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x292d84u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x292d88: 0x3e00008  jr          $ra
    ctx->pc = 0x292D88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x292D88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x292D90u;
}
