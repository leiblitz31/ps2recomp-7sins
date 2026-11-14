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

// Function: sub_00228550
// Address: 0x228550 - 0x2285e0
void sub_00228550_0x228550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00228550_0x228550");
#endif

    switch (ctx->pc) {
        case 0x228588u: goto label_228588;
        case 0x228598u: goto label_228598;
        default: break;
    }

    ctx->pc = 0x228550u;

    // 0x228550: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x228550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x228554: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x228554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x228558: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x228558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x22855c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x22855cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x228560: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x228560u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x228564: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x228564u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x228568: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x228568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22856c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x22856cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x228570: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x228570u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x228574: 0x2402002c  addiu       $v0, $zero, 0x2C
    ctx->pc = 0x228574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x228578: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x228578u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x22857c: 0x8012  mflo        $s0
    ctx->pc = 0x22857cu;
    SET_GPR_U64(ctx, 16, ctx->lo);
    // 0x228580: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x228580u;
    {
        const bool branch_taken_0x228580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x228580) {
            ctx->pc = 0x2285B4u;
            goto label_2285b4;
        }
    }
    ctx->pc = 0x228588u;
label_228588:
    // 0x228588: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x228588u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22858c: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x22858cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x228590: 0xc08a178  jal         func_2285E0
    ctx->pc = 0x228590u;
    SET_GPR_U32(ctx, 31, 0x228598u);
    ctx->pc = 0x2285E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2285E0u, 0x228590u, 0x228598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228598u;
label_228598:
    // 0x228598: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x228598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22859c: 0x2442002c  addiu       $v0, $v0, 0x2C
    ctx->pc = 0x22859cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 44));
    // 0x2285a0: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x2285a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x2285a4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2285a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2285a8: 0x2442002c  addiu       $v0, $v0, 0x2C
    ctx->pc = 0x2285a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 44));
    // 0x2285ac: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x2285acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x2285b0: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x2285b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_2285b4:
    // 0x2285b4: 0x1e00fff4  bgtz        $s0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2285B4u;
    {
        const bool branch_taken_0x2285b4 = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x2285b4) {
            ctx->pc = 0x228588u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_228588;
        }
    }
    ctx->pc = 0x2285BCu;
    // 0x2285bc: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2285bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2285c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2285c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2285c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2285c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2285c8: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x2285c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2285cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2285CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2285CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2285D4u;
    // 0x2285d4: 0x0  nop
    ctx->pc = 0x2285d4u;
    // NOP
    // 0x2285d8: 0x0  nop
    ctx->pc = 0x2285d8u;
    // NOP
    // 0x2285dc: 0x0  nop
    ctx->pc = 0x2285dcu;
    // NOP
    ctx->pc = 0x2285e0u;
}
