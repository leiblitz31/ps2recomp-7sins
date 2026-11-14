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

// Function: sub_00286000
// Address: 0x286000 - 0x286090
void sub_00286000_0x286000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00286000_0x286000");
#endif

    switch (ctx->pc) {
        case 0x286038u: goto label_286038;
        case 0x286048u: goto label_286048;
        default: break;
    }

    ctx->pc = 0x286000u;

    // 0x286000: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x286000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x286004: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x286004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x286008: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x286008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x28600c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x28600cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x286010: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x286010u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x286014: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x286014u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x286018: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x286018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28601c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x28601cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x286020: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x286020u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x286024: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x286024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x286028: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x286028u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x28602c: 0x8012  mflo        $s0
    ctx->pc = 0x28602cu;
    SET_GPR_U64(ctx, 16, ctx->lo);
    // 0x286030: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x286030u;
    {
        const bool branch_taken_0x286030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x286030) {
            ctx->pc = 0x286064u;
            goto label_286064;
        }
    }
    ctx->pc = 0x286038u;
label_286038:
    // 0x286038: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x286038u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28603c: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x28603cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x286040: 0xc0a1824  jal         func_286090
    ctx->pc = 0x286040u;
    SET_GPR_U32(ctx, 31, 0x286048u);
    ctx->pc = 0x286090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286090u, 0x286040u, 0x286048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286048u;
label_286048:
    // 0x286048: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x286048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28604c: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x28604cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x286050: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x286050u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x286054: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x286054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x286058: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x286058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x28605c: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x28605cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x286060: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x286060u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_286064:
    // 0x286064: 0x1e00fff4  bgtz        $s0, . + 4 + (-0xC << 2)
    ctx->pc = 0x286064u;
    {
        const bool branch_taken_0x286064 = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x286064) {
            ctx->pc = 0x286038u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_286038;
        }
    }
    ctx->pc = 0x28606Cu;
    // 0x28606c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x28606cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x286070: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x286070u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x286074: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x286074u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x286078: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x286078u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x28607c: 0x3e00008  jr          $ra
    ctx->pc = 0x28607Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28607Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x286084u;
    // 0x286084: 0x0  nop
    ctx->pc = 0x286084u;
    // NOP
    // 0x286088: 0x0  nop
    ctx->pc = 0x286088u;
    // NOP
    // 0x28608c: 0x0  nop
    ctx->pc = 0x28608cu;
    // NOP
    ctx->pc = 0x286090u;
}
