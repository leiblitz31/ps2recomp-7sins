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

// Function: sub_001E8D40
// Address: 0x1e8d40 - 0x1e8dc0
void sub_001E8D40_0x1e8d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E8D40_0x1e8d40");
#endif

    switch (ctx->pc) {
        case 0x1e8d78u: goto label_1e8d78;
        case 0x1e8d98u: goto label_1e8d98;
        default: break;
    }

    ctx->pc = 0x1e8d40u;

    // 0x1e8d40: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1e8d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1e8d44: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e8d44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e8d48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e8d48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e8d4c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1e8d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1e8d50: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x1e8d50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x1e8d54: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x1e8d54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x1e8d58: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1e8d58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e8d5c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1e8d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e8d60: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1e8d60u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e8d64: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1e8d64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1e8d68: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x1e8d68u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1e8d6c: 0x8012  mflo        $s0
    ctx->pc = 0x1e8d6cu;
    SET_GPR_U64(ctx, 16, ctx->lo);
    // 0x1e8d70: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1E8D70u;
    {
        const bool branch_taken_0x1e8d70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e8d70) {
            ctx->pc = 0x1E8D9Cu;
            goto label_1e8d9c;
        }
    }
    ctx->pc = 0x1E8D78u;
label_1e8d78:
    // 0x1e8d78: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1e8d78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e8d7c: 0x2444fff4  addiu       $a0, $v0, -0xC
    ctx->pc = 0x1e8d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967284));
    // 0x1e8d80: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x1e8d80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x1e8d84: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1e8d84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e8d88: 0x2445fff4  addiu       $a1, $v0, -0xC
    ctx->pc = 0x1e8d88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967284));
    // 0x1e8d8c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x1e8d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x1e8d90: 0xc0787b0  jal         func_1E1EC0
    ctx->pc = 0x1E8D90u;
    SET_GPR_U32(ctx, 31, 0x1E8D98u);
    ctx->pc = 0x1E1EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1EC0u, 0x1E8D90u, 0x1E8D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8D98u;
label_1e8d98:
    // 0x1e8d98: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1e8d98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_1e8d9c:
    // 0x1e8d9c: 0x1e00fff6  bgtz        $s0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1E8D9Cu;
    {
        const bool branch_taken_0x1e8d9c = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x1e8d9c) {
            ctx->pc = 0x1E8D78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e8d78;
        }
    }
    ctx->pc = 0x1E8DA4u;
    // 0x1e8da4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1e8da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e8da8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e8da8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e8dac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e8dacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e8db0: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x1e8db0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1e8db4: 0x3e00008  jr          $ra
    ctx->pc = 0x1E8DB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E8DB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E8DBCu;
    // 0x1e8dbc: 0x0  nop
    ctx->pc = 0x1e8dbcu;
    // NOP
    ctx->pc = 0x1e8dc0u;
}
