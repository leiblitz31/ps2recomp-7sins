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

// Function: sub_00181DB0
// Address: 0x181db0 - 0x181e30
void sub_00181DB0_0x181db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00181DB0_0x181db0");
#endif

    switch (ctx->pc) {
        case 0x181de8u: goto label_181de8;
        case 0x181e08u: goto label_181e08;
        default: break;
    }

    ctx->pc = 0x181db0u;

    // 0x181db0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x181db0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x181db4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x181db4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x181db8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x181db8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x181dbc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x181dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x181dc0: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x181dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x181dc4: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x181dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x181dc8: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x181dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x181dcc: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x181dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x181dd0: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x181dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x181dd4: 0x24020090  addiu       $v0, $zero, 0x90
    ctx->pc = 0x181dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x181dd8: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x181dd8u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x181ddc: 0x8012  mflo        $s0
    ctx->pc = 0x181ddcu;
    SET_GPR_U64(ctx, 16, ctx->lo);
    // 0x181de0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x181DE0u;
    {
        const bool branch_taken_0x181de0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x181de0) {
            ctx->pc = 0x181E0Cu;
            goto label_181e0c;
        }
    }
    ctx->pc = 0x181DE8u;
label_181de8:
    // 0x181de8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x181de8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x181dec: 0x2444ff70  addiu       $a0, $v0, -0x90
    ctx->pc = 0x181decu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967152));
    // 0x181df0: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x181df0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x181df4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x181df4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x181df8: 0x2445ff70  addiu       $a1, $v0, -0x90
    ctx->pc = 0x181df8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967152));
    // 0x181dfc: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x181dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x181e00: 0xc05fcfc  jal         func_17F3F0
    ctx->pc = 0x181E00u;
    SET_GPR_U32(ctx, 31, 0x181E08u);
    ctx->pc = 0x17F3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F3F0u, 0x181E00u, 0x181E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181E08u;
label_181e08:
    // 0x181e08: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x181e08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_181e0c:
    // 0x181e0c: 0x1e00fff6  bgtz        $s0, . + 4 + (-0xA << 2)
    ctx->pc = 0x181E0Cu;
    {
        const bool branch_taken_0x181e0c = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x181e0c) {
            ctx->pc = 0x181DE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_181de8;
        }
    }
    ctx->pc = 0x181E14u;
    // 0x181e14: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x181e14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x181e18: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x181e18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x181e1c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x181e1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x181e20: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x181e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x181e24: 0x3e00008  jr          $ra
    ctx->pc = 0x181E24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x181E24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x181E2Cu;
    // 0x181e2c: 0x0  nop
    ctx->pc = 0x181e2cu;
    // NOP
    ctx->pc = 0x181e30u;
}
