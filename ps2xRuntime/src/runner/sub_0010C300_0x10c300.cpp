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

// Function: sub_0010C300
// Address: 0x10c300 - 0x10c390
void sub_0010C300_0x10c300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010C300_0x10c300");
#endif

    switch (ctx->pc) {
        case 0x10c338u: goto label_10c338;
        case 0x10c348u: goto label_10c348;
        default: break;
    }

    ctx->pc = 0x10c300u;

    // 0x10c300: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x10c300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x10c304: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10c304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10c308: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x10c308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x10c30c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x10c30cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x10c310: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x10c310u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x10c314: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x10c314u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x10c318: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x10c318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10c31c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x10c31cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10c320: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x10c320u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x10c324: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x10c324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x10c328: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x10c328u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x10c32c: 0x8012  mflo        $s0
    ctx->pc = 0x10c32cu;
    SET_GPR_U64(ctx, 16, ctx->lo);
    // 0x10c330: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x10C330u;
    {
        const bool branch_taken_0x10c330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10c330) {
            ctx->pc = 0x10C364u;
            goto label_10c364;
        }
    }
    ctx->pc = 0x10C338u;
label_10c338:
    // 0x10c338: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x10c338u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10c33c: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x10c33cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10c340: 0xc0430e4  jal         func_10C390
    ctx->pc = 0x10C340u;
    SET_GPR_U32(ctx, 31, 0x10C348u);
    ctx->pc = 0x10C390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C390u, 0x10C340u, 0x10C348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C348u;
label_10c348:
    // 0x10c348: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x10c348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10c34c: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x10c34cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x10c350: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x10c350u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x10c354: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x10c354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10c358: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x10c358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x10c35c: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x10c35cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x10c360: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x10c360u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_10c364:
    // 0x10c364: 0x1e00fff4  bgtz        $s0, . + 4 + (-0xC << 2)
    ctx->pc = 0x10C364u;
    {
        const bool branch_taken_0x10c364 = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x10c364) {
            ctx->pc = 0x10C338u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10c338;
        }
    }
    ctx->pc = 0x10C36Cu;
    // 0x10c36c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x10c36cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10c370: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10c370u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10c374: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x10c374u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10c378: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x10c378u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x10c37c: 0x3e00008  jr          $ra
    ctx->pc = 0x10C37Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10C37Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10C384u;
    // 0x10c384: 0x0  nop
    ctx->pc = 0x10c384u;
    // NOP
    // 0x10c388: 0x0  nop
    ctx->pc = 0x10c388u;
    // NOP
    // 0x10c38c: 0x0  nop
    ctx->pc = 0x10c38cu;
    // NOP
    ctx->pc = 0x10c390u;
}
