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

// Function: sub_0010DB00
// Address: 0x10db00 - 0x10db80
void sub_0010DB00_0x10db00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010DB00_0x10db00");
#endif

    switch (ctx->pc) {
        case 0x10db38u: goto label_10db38;
        case 0x10db58u: goto label_10db58;
        default: break;
    }

    ctx->pc = 0x10db00u;

    // 0x10db00: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x10db00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x10db04: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10db04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10db08: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x10db08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x10db0c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x10db0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x10db10: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x10db10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x10db14: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x10db14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x10db18: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x10db18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10db1c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x10db1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10db20: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x10db20u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x10db24: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x10db24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x10db28: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x10db28u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x10db2c: 0x8012  mflo        $s0
    ctx->pc = 0x10db2cu;
    SET_GPR_U64(ctx, 16, ctx->lo);
    // 0x10db30: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x10DB30u;
    {
        const bool branch_taken_0x10db30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10db30) {
            ctx->pc = 0x10DB5Cu;
            goto label_10db5c;
        }
    }
    ctx->pc = 0x10DB38u;
label_10db38:
    // 0x10db38: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x10db38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10db3c: 0x2444fff4  addiu       $a0, $v0, -0xC
    ctx->pc = 0x10db3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967284));
    // 0x10db40: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x10db40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x10db44: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x10db44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10db48: 0x2445fff4  addiu       $a1, $v0, -0xC
    ctx->pc = 0x10db48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967284));
    // 0x10db4c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x10db4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x10db50: 0xc0430e4  jal         func_10C390
    ctx->pc = 0x10DB50u;
    SET_GPR_U32(ctx, 31, 0x10DB58u);
    ctx->pc = 0x10C390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C390u, 0x10DB50u, 0x10DB58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DB58u;
label_10db58:
    // 0x10db58: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x10db58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_10db5c:
    // 0x10db5c: 0x1e00fff6  bgtz        $s0, . + 4 + (-0xA << 2)
    ctx->pc = 0x10DB5Cu;
    {
        const bool branch_taken_0x10db5c = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x10db5c) {
            ctx->pc = 0x10DB38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10db38;
        }
    }
    ctx->pc = 0x10DB64u;
    // 0x10db64: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x10db64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10db68: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10db68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10db6c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x10db6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10db70: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x10db70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x10db74: 0x3e00008  jr          $ra
    ctx->pc = 0x10DB74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10DB74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10DB7Cu;
    // 0x10db7c: 0x0  nop
    ctx->pc = 0x10db7cu;
    // NOP
    ctx->pc = 0x10db80u;
}
