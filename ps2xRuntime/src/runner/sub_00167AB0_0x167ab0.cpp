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

// Function: sub_00167AB0
// Address: 0x167ab0 - 0x167b30
void sub_00167AB0_0x167ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00167AB0_0x167ab0");
#endif

    switch (ctx->pc) {
        case 0x167ae8u: goto label_167ae8;
        case 0x167b08u: goto label_167b08;
        default: break;
    }

    ctx->pc = 0x167ab0u;

    // 0x167ab0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x167ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x167ab4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x167ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x167ab8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x167ab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x167abc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x167abcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x167ac0: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x167ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x167ac4: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x167ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x167ac8: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x167ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x167acc: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x167accu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x167ad0: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x167ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x167ad4: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x167ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x167ad8: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x167ad8u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x167adc: 0x8012  mflo        $s0
    ctx->pc = 0x167adcu;
    SET_GPR_U64(ctx, 16, ctx->lo);
    // 0x167ae0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x167AE0u;
    {
        const bool branch_taken_0x167ae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x167ae0) {
            ctx->pc = 0x167B0Cu;
            goto label_167b0c;
        }
    }
    ctx->pc = 0x167AE8u;
label_167ae8:
    // 0x167ae8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x167ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x167aec: 0x2444fff4  addiu       $a0, $v0, -0xC
    ctx->pc = 0x167aecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967284));
    // 0x167af0: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x167af0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x167af4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x167af4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x167af8: 0x2445fff4  addiu       $a1, $v0, -0xC
    ctx->pc = 0x167af8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967284));
    // 0x167afc: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x167afcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x167b00: 0xc059abc  jal         func_166AF0
    ctx->pc = 0x167B00u;
    SET_GPR_U32(ctx, 31, 0x167B08u);
    ctx->pc = 0x166AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166AF0u, 0x167B00u, 0x167B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167B08u;
label_167b08:
    // 0x167b08: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x167b08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_167b0c:
    // 0x167b0c: 0x1e00fff6  bgtz        $s0, . + 4 + (-0xA << 2)
    ctx->pc = 0x167B0Cu;
    {
        const bool branch_taken_0x167b0c = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x167b0c) {
            ctx->pc = 0x167AE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_167ae8;
        }
    }
    ctx->pc = 0x167B14u;
    // 0x167b14: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x167b14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x167b18: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x167b18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x167b1c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x167b1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x167b20: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x167b20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x167b24: 0x3e00008  jr          $ra
    ctx->pc = 0x167B24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x167B24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x167B2Cu;
    // 0x167b2c: 0x0  nop
    ctx->pc = 0x167b2cu;
    // NOP
    ctx->pc = 0x167b30u;
}
