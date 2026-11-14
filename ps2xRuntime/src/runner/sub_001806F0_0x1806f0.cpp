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

// Function: sub_001806F0
// Address: 0x1806f0 - 0x180780
void sub_001806F0_0x1806f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001806F0_0x1806f0");
#endif

    switch (ctx->pc) {
        case 0x180728u: goto label_180728;
        case 0x180738u: goto label_180738;
        default: break;
    }

    ctx->pc = 0x1806f0u;

    // 0x1806f0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1806f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1806f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1806f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1806f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1806f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1806fc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1806fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x180700: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x180700u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x180704: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x180704u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x180708: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x180708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18070c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x18070cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x180710: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x180710u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x180714: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x180714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x180718: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x180718u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x18071c: 0x8012  mflo        $s0
    ctx->pc = 0x18071cu;
    SET_GPR_U64(ctx, 16, ctx->lo);
    // 0x180720: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x180720u;
    {
        const bool branch_taken_0x180720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x180720) {
            ctx->pc = 0x180754u;
            goto label_180754;
        }
    }
    ctx->pc = 0x180728u;
label_180728:
    // 0x180728: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x180728u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18072c: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x18072cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x180730: 0xc0601e0  jal         func_180780
    ctx->pc = 0x180730u;
    SET_GPR_U32(ctx, 31, 0x180738u);
    ctx->pc = 0x180780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180780u, 0x180730u, 0x180738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180738u;
label_180738:
    // 0x180738: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x180738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18073c: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x18073cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x180740: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x180740u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x180744: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x180744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x180748: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x180748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x18074c: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x18074cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x180750: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x180750u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_180754:
    // 0x180754: 0x1e00fff4  bgtz        $s0, . + 4 + (-0xC << 2)
    ctx->pc = 0x180754u;
    {
        const bool branch_taken_0x180754 = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x180754) {
            ctx->pc = 0x180728u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_180728;
        }
    }
    ctx->pc = 0x18075Cu;
    // 0x18075c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x18075cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x180760: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x180760u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x180764: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x180764u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x180768: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x180768u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x18076c: 0x3e00008  jr          $ra
    ctx->pc = 0x18076Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18076Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x180774u;
    // 0x180774: 0x0  nop
    ctx->pc = 0x180774u;
    // NOP
    // 0x180778: 0x0  nop
    ctx->pc = 0x180778u;
    // NOP
    // 0x18077c: 0x0  nop
    ctx->pc = 0x18077cu;
    // NOP
    ctx->pc = 0x180780u;
}
