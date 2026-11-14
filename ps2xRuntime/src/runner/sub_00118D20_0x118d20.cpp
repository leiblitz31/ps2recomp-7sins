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

// Function: sub_00118D20
// Address: 0x118d20 - 0x118dc0
void sub_00118D20_0x118d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00118D20_0x118d20");
#endif

    switch (ctx->pc) {
        case 0x118d50u: goto label_118d50;
        case 0x118d64u: goto label_118d64;
        case 0x118d9cu: goto label_118d9c;
        default: break;
    }

    ctx->pc = 0x118d20u;

    // 0x118d20: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x118d20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x118d24: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x118d24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x118d28: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x118d28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x118d2c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x118d2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x118d30: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x118d30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x118d34: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x118d34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x118d38: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x118d38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
    // 0x118d3c: 0x8fb20050  lw          $s2, 0x50($sp)
    ctx->pc = 0x118d3cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x118d40: 0x8fb00040  lw          $s0, 0x40($sp)
    ctx->pc = 0x118d40u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x118d44: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x118d44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118d48: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x118D48u;
    {
        const bool branch_taken_0x118d48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x118d48) {
            ctx->pc = 0x118D58u;
            goto label_118d58;
        }
    }
    ctx->pc = 0x118D50u;
label_118d50:
    // 0x118d50: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x118d50u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x118d54: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x118d54u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_118d58:
    // 0x118d58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x118d58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118d5c: 0xc106782  jal         func_419E08
    ctx->pc = 0x118D5Cu;
    SET_GPR_U32(ctx, 31, 0x118D64u);
    ctx->pc = 0x419E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419E08u, 0x118D5Cu, 0x118D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118D64u;
label_118d64:
    // 0x118d64: 0x0  nop
    ctx->pc = 0x118d64u;
    // NOP
    // 0x118d68: 0x1602fff9  bne         $s0, $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x118D68u;
    {
        const bool branch_taken_0x118d68 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x118d68) {
            ctx->pc = 0x118D50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_118d50;
        }
    }
    ctx->pc = 0x118D70u;
    // 0x118d70: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x118d70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x118d74: 0x51082b  sltu        $at, $v0, $s1
    ctx->pc = 0x118d74u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x118d78: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x118D78u;
    {
        const bool branch_taken_0x118d78 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x118d78) {
            ctx->pc = 0x118D84u;
            goto label_118d84;
        }
    }
    ctx->pc = 0x118D80u;
    // 0x118d80: 0xae510000  sw          $s1, 0x0($s2)
    ctx->pc = 0x118d80u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
label_118d84:
    // 0x118d84: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x118d84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x118d88: 0x3c050012  lui         $a1, 0x12
    ctx->pc = 0x118d88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)18 << 16));
    // 0x118d8c: 0x24a58d20  addiu       $a1, $a1, -0x72E0
    ctx->pc = 0x118d8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937888));
    // 0x118d90: 0x8fa60050  lw          $a2, 0x50($sp)
    ctx->pc = 0x118d90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x118d94: 0xc1066c2  jal         func_419B08
    ctx->pc = 0x118D94u;
    SET_GPR_U32(ctx, 31, 0x118D9Cu);
    ctx->pc = 0x419B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419B08u, 0x118D94u, 0x118D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118D9Cu;
label_118d9c:
    // 0x118d9c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x118d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x118da0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x118da0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x118da4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x118da4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x118da8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x118da8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x118dac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x118dacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x118db0: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x118db0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x118db4: 0x3e00008  jr          $ra
    ctx->pc = 0x118DB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x118DB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x118DBCu;
    // 0x118dbc: 0x0  nop
    ctx->pc = 0x118dbcu;
    // NOP
    ctx->pc = 0x118dc0u;
}
