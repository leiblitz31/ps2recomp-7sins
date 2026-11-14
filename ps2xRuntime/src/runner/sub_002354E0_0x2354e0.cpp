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

// Function: sub_002354E0
// Address: 0x2354e0 - 0x235580
void sub_002354E0_0x2354e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002354E0_0x2354e0");
#endif

    switch (ctx->pc) {
        case 0x235508u: goto label_235508;
        case 0x235518u: goto label_235518;
        default: break;
    }

    ctx->pc = 0x2354e0u;

    // 0x2354e0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2354e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2354e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2354e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2354e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2354e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2354ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2354ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2354f0: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x2354f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x2354f4: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x2354f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x2354f8: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x2354f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x2354fc: 0x8fb00030  lw          $s0, 0x30($sp)
    ctx->pc = 0x2354fcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x235500: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x235500u;
    {
        const bool branch_taken_0x235500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x235500) {
            ctx->pc = 0x23552Cu;
            goto label_23552c;
        }
    }
    ctx->pc = 0x235508u;
label_235508:
    // 0x235508: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x235508u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23550c: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x23550cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x235510: 0xc051934  jal         func_1464D0
    ctx->pc = 0x235510u;
    SET_GPR_U32(ctx, 31, 0x235518u);
    ctx->pc = 0x1464D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1464D0u, 0x235510u, 0x235518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235518u;
label_235518:
    // 0x235518: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x235518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x23551c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x23551cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x235520: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x235520u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x235524: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x235524u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x235528: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x235528u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23552c:
    // 0x23552c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x23552cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x235530: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x235530u;
    {
        const bool branch_taken_0x235530 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x235530) {
            ctx->pc = 0x235508u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_235508;
        }
    }
    ctx->pc = 0x235538u;
    // 0x235538: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x235538u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23553c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x23553cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x235540: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x235540u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x235544: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x235544u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x235548: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x235548u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x23554c: 0x3e00008  jr          $ra
    ctx->pc = 0x23554Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23554Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x235554u;
    // 0x235554: 0x0  nop
    ctx->pc = 0x235554u;
    // NOP
    // 0x235558: 0x0  nop
    ctx->pc = 0x235558u;
    // NOP
    // 0x23555c: 0x0  nop
    ctx->pc = 0x23555cu;
    // NOP
    // 0x235560: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x235560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x235564: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x235564u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235568: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x235568u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x23556c: 0x3e00008  jr          $ra
    ctx->pc = 0x23556Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23556Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x235574u;
    // 0x235574: 0x0  nop
    ctx->pc = 0x235574u;
    // NOP
    // 0x235578: 0x0  nop
    ctx->pc = 0x235578u;
    // NOP
    // 0x23557c: 0x0  nop
    ctx->pc = 0x23557cu;
    // NOP
    ctx->pc = 0x235580u;
}
