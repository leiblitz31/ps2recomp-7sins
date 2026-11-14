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

// Function: sub_002677C0
// Address: 0x2677c0 - 0x267840
void sub_002677C0_0x2677c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002677C0_0x2677c0");
#endif

    switch (ctx->pc) {
        case 0x2677e8u: goto label_2677e8;
        case 0x2677f8u: goto label_2677f8;
        default: break;
    }

    ctx->pc = 0x2677c0u;

    // 0x2677c0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2677c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2677c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2677c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2677c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2677c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2677cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2677ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2677d0: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x2677d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x2677d4: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x2677d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x2677d8: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x2677d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x2677dc: 0x8fb00030  lw          $s0, 0x30($sp)
    ctx->pc = 0x2677dcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2677e0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2677E0u;
    {
        const bool branch_taken_0x2677e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2677e0) {
            ctx->pc = 0x26780Cu;
            goto label_26780c;
        }
    }
    ctx->pc = 0x2677E8u;
label_2677e8:
    // 0x2677e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2677e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2677ec: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x2677ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2677f0: 0xc099e40  jal         func_267900
    ctx->pc = 0x2677F0u;
    SET_GPR_U32(ctx, 31, 0x2677F8u);
    ctx->pc = 0x267900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267900u, 0x2677F0u, 0x2677F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2677F8u;
label_2677f8:
    // 0x2677f8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2677f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2677fc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2677fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x267800: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x267800u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x267804: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x267804u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x267808: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x267808u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26780c:
    // 0x26780c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x26780cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x267810: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x267810u;
    {
        const bool branch_taken_0x267810 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x267810) {
            ctx->pc = 0x2677E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2677e8;
        }
    }
    ctx->pc = 0x267818u;
    // 0x267818: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x267818u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26781c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x26781cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x267820: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x267820u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x267824: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x267824u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x267828: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x267828u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x26782c: 0x3e00008  jr          $ra
    ctx->pc = 0x26782Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26782Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x267834u;
    // 0x267834: 0x0  nop
    ctx->pc = 0x267834u;
    // NOP
    // 0x267838: 0x0  nop
    ctx->pc = 0x267838u;
    // NOP
    // 0x26783c: 0x0  nop
    ctx->pc = 0x26783cu;
    // NOP
    ctx->pc = 0x267840u;
}
