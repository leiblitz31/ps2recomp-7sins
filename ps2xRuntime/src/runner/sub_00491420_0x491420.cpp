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

// Function: sub_00491420
// Address: 0x491420 - 0x4914a0
void sub_00491420_0x491420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00491420_0x491420");
#endif

    switch (ctx->pc) {
        case 0x491448u: goto label_491448;
        case 0x491458u: goto label_491458;
        default: break;
    }

    ctx->pc = 0x491420u;

    // 0x491420: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x491420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x491424: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x491424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x491428: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x491428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x49142c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x49142cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x491430: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x491430u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x491434: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x491434u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x491438: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x491438u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x49143c: 0x8fb00050  lw          $s0, 0x50($sp)
    ctx->pc = 0x49143cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x491440: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x491440u;
    {
        const bool branch_taken_0x491440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x491440) {
            ctx->pc = 0x49146Cu;
            goto label_49146c;
        }
    }
    ctx->pc = 0x491448u;
label_491448:
    // 0x491448: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x491448u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49144c: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x49144cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x491450: 0xc124538  jal         func_4914E0
    ctx->pc = 0x491450u;
    SET_GPR_U32(ctx, 31, 0x491458u);
    ctx->pc = 0x4914E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4914E0u, 0x491450u, 0x491458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x491458u;
label_491458:
    // 0x491458: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x491458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x49145c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x49145cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x491460: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x491460u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x491464: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x491464u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x491468: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x491468u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_49146c:
    // 0x49146c: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x49146cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x491470: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x491470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x491474: 0x1462fff4  bne         $v1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x491474u;
    {
        const bool branch_taken_0x491474 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x491474) {
            ctx->pc = 0x491448u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_491448;
        }
    }
    ctx->pc = 0x49147Cu;
    // 0x49147c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x49147cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x491480: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x491480u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x491484: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x491484u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x491488: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x491488u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49148c: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x49148cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x491490: 0x3e00008  jr          $ra
    ctx->pc = 0x491490u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x491490u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x491498u;
    // 0x491498: 0x0  nop
    ctx->pc = 0x491498u;
    // NOP
    // 0x49149c: 0x0  nop
    ctx->pc = 0x49149cu;
    // NOP
    ctx->pc = 0x4914a0u;
}
