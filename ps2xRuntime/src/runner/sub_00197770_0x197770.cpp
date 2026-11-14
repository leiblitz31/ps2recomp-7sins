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

// Function: sub_00197770
// Address: 0x197770 - 0x197800
void sub_00197770_0x197770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00197770_0x197770");
#endif

    switch (ctx->pc) {
        case 0x1977a8u: goto label_1977a8;
        case 0x1977b8u: goto label_1977b8;
        default: break;
    }

    ctx->pc = 0x197770u;

    // 0x197770: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x197770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x197774: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x197774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x197778: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x197778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19777c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x19777cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x197780: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x197780u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x197784: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x197784u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x197788: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x197788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19778c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x19778cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x197790: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x197790u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x197794: 0x24020024  addiu       $v0, $zero, 0x24
    ctx->pc = 0x197794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x197798: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x197798u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x19779c: 0x8012  mflo        $s0
    ctx->pc = 0x19779cu;
    SET_GPR_U64(ctx, 16, ctx->lo);
    // 0x1977a0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1977A0u;
    {
        const bool branch_taken_0x1977a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1977a0) {
            ctx->pc = 0x1977D4u;
            goto label_1977d4;
        }
    }
    ctx->pc = 0x1977A8u;
label_1977a8:
    // 0x1977a8: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1977a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1977ac: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1977acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1977b0: 0xc065e00  jal         func_197800
    ctx->pc = 0x1977B0u;
    SET_GPR_U32(ctx, 31, 0x1977B8u);
    ctx->pc = 0x197800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x197800u, 0x1977B0u, 0x1977B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1977B8u;
label_1977b8:
    // 0x1977b8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1977b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1977bc: 0x24420024  addiu       $v0, $v0, 0x24
    ctx->pc = 0x1977bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
    // 0x1977c0: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x1977c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x1977c4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1977c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1977c8: 0x24420024  addiu       $v0, $v0, 0x24
    ctx->pc = 0x1977c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
    // 0x1977cc: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x1977ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x1977d0: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1977d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_1977d4:
    // 0x1977d4: 0x1e00fff4  bgtz        $s0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1977D4u;
    {
        const bool branch_taken_0x1977d4 = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x1977d4) {
            ctx->pc = 0x1977A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1977a8;
        }
    }
    ctx->pc = 0x1977DCu;
    // 0x1977dc: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1977dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1977e0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1977e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1977e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1977e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1977e8: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x1977e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1977ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1977ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1977ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1977F4u;
    // 0x1977f4: 0x0  nop
    ctx->pc = 0x1977f4u;
    // NOP
    // 0x1977f8: 0x0  nop
    ctx->pc = 0x1977f8u;
    // NOP
    // 0x1977fc: 0x0  nop
    ctx->pc = 0x1977fcu;
    // NOP
    ctx->pc = 0x197800u;
}
