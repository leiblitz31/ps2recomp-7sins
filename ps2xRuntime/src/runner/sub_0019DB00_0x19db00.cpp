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

// Function: sub_0019DB00
// Address: 0x19db00 - 0x19db80
void sub_0019DB00_0x19db00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019DB00_0x19db00");
#endif

    switch (ctx->pc) {
        case 0x19db38u: goto label_19db38;
        case 0x19db58u: goto label_19db58;
        default: break;
    }

    ctx->pc = 0x19db00u;

    // 0x19db00: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x19db00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x19db04: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x19db04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19db08: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19db08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19db0c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x19db0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x19db10: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x19db10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x19db14: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x19db14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x19db18: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x19db18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19db1c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x19db1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19db20: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x19db20u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x19db24: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x19db24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x19db28: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x19db28u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x19db2c: 0x8012  mflo        $s0
    ctx->pc = 0x19db2cu;
    SET_GPR_U64(ctx, 16, ctx->lo);
    // 0x19db30: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x19DB30u;
    {
        const bool branch_taken_0x19db30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19db30) {
            ctx->pc = 0x19DB5Cu;
            goto label_19db5c;
        }
    }
    ctx->pc = 0x19DB38u;
label_19db38:
    // 0x19db38: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x19db38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19db3c: 0x2444ffc8  addiu       $a0, $v0, -0x38
    ctx->pc = 0x19db3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967240));
    // 0x19db40: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x19db40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x19db44: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x19db44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19db48: 0x2445ffc8  addiu       $a1, $v0, -0x38
    ctx->pc = 0x19db48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967240));
    // 0x19db4c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x19db4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x19db50: 0xc0660c4  jal         func_198310
    ctx->pc = 0x19DB50u;
    SET_GPR_U32(ctx, 31, 0x19DB58u);
    ctx->pc = 0x198310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198310u, 0x19DB50u, 0x19DB58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DB58u;
label_19db58:
    // 0x19db58: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x19db58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_19db5c:
    // 0x19db5c: 0x1e00fff6  bgtz        $s0, . + 4 + (-0xA << 2)
    ctx->pc = 0x19DB5Cu;
    {
        const bool branch_taken_0x19db5c = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x19db5c) {
            ctx->pc = 0x19DB38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19db38;
        }
    }
    ctx->pc = 0x19DB64u;
    // 0x19db64: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x19db64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19db68: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19db68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19db6c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19db6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19db70: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x19db70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x19db74: 0x3e00008  jr          $ra
    ctx->pc = 0x19DB74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19DB74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19DB7Cu;
    // 0x19db7c: 0x0  nop
    ctx->pc = 0x19db7cu;
    // NOP
    ctx->pc = 0x19db80u;
}
