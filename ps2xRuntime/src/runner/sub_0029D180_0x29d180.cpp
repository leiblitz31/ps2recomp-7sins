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

// Function: sub_0029D180
// Address: 0x29d180 - 0x29d210
void sub_0029D180_0x29d180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029D180_0x29d180");
#endif

    switch (ctx->pc) {
        case 0x29d1b8u: goto label_29d1b8;
        case 0x29d1c8u: goto label_29d1c8;
        default: break;
    }

    ctx->pc = 0x29d180u;

    // 0x29d180: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x29d180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x29d184: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x29d184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x29d188: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29d188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x29d18c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x29d18cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x29d190: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x29d190u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x29d194: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x29d194u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x29d198: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x29d198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29d19c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x29d19cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29d1a0: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x29d1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x29d1a4: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x29d1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x29d1a8: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x29d1a8u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x29d1ac: 0x8012  mflo        $s0
    ctx->pc = 0x29d1acu;
    SET_GPR_U64(ctx, 16, ctx->lo);
    // 0x29d1b0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x29D1B0u;
    {
        const bool branch_taken_0x29d1b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29d1b0) {
            ctx->pc = 0x29D1E4u;
            goto label_29d1e4;
        }
    }
    ctx->pc = 0x29D1B8u;
label_29d1b8:
    // 0x29d1b8: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x29d1b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29d1bc: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x29d1bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29d1c0: 0xc0a7484  jal         func_29D210
    ctx->pc = 0x29D1C0u;
    SET_GPR_U32(ctx, 31, 0x29D1C8u);
    ctx->pc = 0x29D210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D210u, 0x29D1C0u, 0x29D1C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D1C8u;
label_29d1c8:
    // 0x29d1c8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x29d1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29d1cc: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x29d1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x29d1d0: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x29d1d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x29d1d4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x29d1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29d1d8: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x29d1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x29d1dc: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x29d1dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x29d1e0: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x29d1e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_29d1e4:
    // 0x29d1e4: 0x1e00fff4  bgtz        $s0, . + 4 + (-0xC << 2)
    ctx->pc = 0x29D1E4u;
    {
        const bool branch_taken_0x29d1e4 = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x29d1e4) {
            ctx->pc = 0x29D1B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29d1b8;
        }
    }
    ctx->pc = 0x29D1ECu;
    // 0x29d1ec: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x29d1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29d1f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x29d1f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29d1f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29d1f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29d1f8: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x29d1f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x29d1fc: 0x3e00008  jr          $ra
    ctx->pc = 0x29D1FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29D1FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29D204u;
    // 0x29d204: 0x0  nop
    ctx->pc = 0x29d204u;
    // NOP
    // 0x29d208: 0x0  nop
    ctx->pc = 0x29d208u;
    // NOP
    // 0x29d20c: 0x0  nop
    ctx->pc = 0x29d20cu;
    // NOP
    ctx->pc = 0x29d210u;
}
