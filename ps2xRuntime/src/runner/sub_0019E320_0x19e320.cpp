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

// Function: sub_0019E320
// Address: 0x19e320 - 0x19e3a0
void sub_0019E320_0x19e320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019E320_0x19e320");
#endif

    switch (ctx->pc) {
        case 0x19e358u: goto label_19e358;
        case 0x19e378u: goto label_19e378;
        default: break;
    }

    ctx->pc = 0x19e320u;

    // 0x19e320: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x19e320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x19e324: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x19e324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19e328: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19e328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19e32c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x19e32cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x19e330: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x19e330u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x19e334: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x19e334u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x19e338: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x19e338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19e33c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x19e33cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19e340: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x19e340u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x19e344: 0x24020024  addiu       $v0, $zero, 0x24
    ctx->pc = 0x19e344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x19e348: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x19e348u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x19e34c: 0x8012  mflo        $s0
    ctx->pc = 0x19e34cu;
    SET_GPR_U64(ctx, 16, ctx->lo);
    // 0x19e350: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x19E350u;
    {
        const bool branch_taken_0x19e350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e350) {
            ctx->pc = 0x19E37Cu;
            goto label_19e37c;
        }
    }
    ctx->pc = 0x19E358u;
label_19e358:
    // 0x19e358: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x19e358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19e35c: 0x2444ffdc  addiu       $a0, $v0, -0x24
    ctx->pc = 0x19e35cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967260));
    // 0x19e360: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x19e360u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x19e364: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x19e364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19e368: 0x2445ffdc  addiu       $a1, $v0, -0x24
    ctx->pc = 0x19e368u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967260));
    // 0x19e36c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x19e36cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x19e370: 0xc065e00  jal         func_197800
    ctx->pc = 0x19E370u;
    SET_GPR_U32(ctx, 31, 0x19E378u);
    ctx->pc = 0x197800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x197800u, 0x19E370u, 0x19E378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E378u;
label_19e378:
    // 0x19e378: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x19e378u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_19e37c:
    // 0x19e37c: 0x1e00fff6  bgtz        $s0, . + 4 + (-0xA << 2)
    ctx->pc = 0x19E37Cu;
    {
        const bool branch_taken_0x19e37c = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x19e37c) {
            ctx->pc = 0x19E358u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19e358;
        }
    }
    ctx->pc = 0x19E384u;
    // 0x19e384: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x19e384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19e388: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19e388u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19e38c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19e38cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19e390: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x19e390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x19e394: 0x3e00008  jr          $ra
    ctx->pc = 0x19E394u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19E394u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19E39Cu;
    // 0x19e39c: 0x0  nop
    ctx->pc = 0x19e39cu;
    // NOP
    ctx->pc = 0x19e3a0u;
}
