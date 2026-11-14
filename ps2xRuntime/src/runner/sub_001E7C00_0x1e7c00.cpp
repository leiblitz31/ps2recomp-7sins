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

// Function: sub_001E7C00
// Address: 0x1e7c00 - 0x1e7c80
void sub_001E7C00_0x1e7c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E7C00_0x1e7c00");
#endif

    switch (ctx->pc) {
        case 0x1e7c38u: goto label_1e7c38;
        case 0x1e7c58u: goto label_1e7c58;
        default: break;
    }

    ctx->pc = 0x1e7c00u;

    // 0x1e7c00: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1e7c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1e7c04: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e7c04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e7c08: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e7c08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e7c0c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1e7c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1e7c10: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x1e7c10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x1e7c14: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x1e7c14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x1e7c18: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1e7c18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e7c1c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1e7c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e7c20: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1e7c20u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e7c24: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x1e7c24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1e7c28: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1e7c28u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1e7c2c: 0x8012  mflo        $s0
    ctx->pc = 0x1e7c2cu;
    SET_GPR_U64(ctx, 16, ctx->lo);
    // 0x1e7c30: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1E7C30u;
    {
        const bool branch_taken_0x1e7c30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e7c30) {
            ctx->pc = 0x1E7C5Cu;
            goto label_1e7c5c;
        }
    }
    ctx->pc = 0x1E7C38u;
label_1e7c38:
    // 0x1e7c38: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1e7c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e7c3c: 0x2444ffec  addiu       $a0, $v0, -0x14
    ctx->pc = 0x1e7c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967276));
    // 0x1e7c40: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x1e7c40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x1e7c44: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1e7c44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e7c48: 0x2445ffec  addiu       $a1, $v0, -0x14
    ctx->pc = 0x1e7c48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967276));
    // 0x1e7c4c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x1e7c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x1e7c50: 0xc078cc8  jal         func_1E3320
    ctx->pc = 0x1E7C50u;
    SET_GPR_U32(ctx, 31, 0x1E7C58u);
    ctx->pc = 0x1E3320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3320u, 0x1E7C50u, 0x1E7C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7C58u;
label_1e7c58:
    // 0x1e7c58: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1e7c58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_1e7c5c:
    // 0x1e7c5c: 0x1e00fff6  bgtz        $s0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1E7C5Cu;
    {
        const bool branch_taken_0x1e7c5c = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x1e7c5c) {
            ctx->pc = 0x1E7C38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e7c38;
        }
    }
    ctx->pc = 0x1E7C64u;
    // 0x1e7c64: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1e7c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e7c68: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e7c68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e7c6c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e7c6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e7c70: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x1e7c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1e7c74: 0x3e00008  jr          $ra
    ctx->pc = 0x1E7C74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E7C74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E7C7Cu;
    // 0x1e7c7c: 0x0  nop
    ctx->pc = 0x1e7c7cu;
    // NOP
    ctx->pc = 0x1e7c80u;
}
