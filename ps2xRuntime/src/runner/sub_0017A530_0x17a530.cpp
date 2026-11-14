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

// Function: sub_0017A530
// Address: 0x17a530 - 0x17a5b0
void sub_0017A530_0x17a530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017A530_0x17a530");
#endif

    switch (ctx->pc) {
        case 0x17a558u: goto label_17a558;
        case 0x17a568u: goto label_17a568;
        default: break;
    }

    ctx->pc = 0x17a530u;

    // 0x17a530: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x17a530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x17a534: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x17a534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x17a538: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17a538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17a53c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17a53cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17a540: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x17a540u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x17a544: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x17a544u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x17a548: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x17a548u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x17a54c: 0x8fb00050  lw          $s0, 0x50($sp)
    ctx->pc = 0x17a54cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17a550: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x17A550u;
    {
        const bool branch_taken_0x17a550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17a550) {
            ctx->pc = 0x17A57Cu;
            goto label_17a57c;
        }
    }
    ctx->pc = 0x17A558u;
label_17a558:
    // 0x17a558: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17a558u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a55c: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x17a55cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17a560: 0xc05e8dc  jal         func_17A370
    ctx->pc = 0x17A560u;
    SET_GPR_U32(ctx, 31, 0x17A568u);
    ctx->pc = 0x17A370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A370u, 0x17A560u, 0x17A568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A568u;
label_17a568:
    // 0x17a568: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x17a568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17a56c: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x17a56cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x17a570: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x17a570u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x17a574: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x17a574u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x17a578: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x17a578u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17a57c:
    // 0x17a57c: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x17a57cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17a580: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x17a580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17a584: 0x1462fff4  bne         $v1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x17A584u;
    {
        const bool branch_taken_0x17a584 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x17a584) {
            ctx->pc = 0x17A558u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17a558;
        }
    }
    ctx->pc = 0x17A58Cu;
    // 0x17a58c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x17a58cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a590: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x17a590u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17a594: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17a594u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17a598: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17a598u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17a59c: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x17a59cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x17a5a0: 0x3e00008  jr          $ra
    ctx->pc = 0x17A5A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17A5A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17A5A8u;
    // 0x17a5a8: 0x0  nop
    ctx->pc = 0x17a5a8u;
    // NOP
    // 0x17a5ac: 0x0  nop
    ctx->pc = 0x17a5acu;
    // NOP
    ctx->pc = 0x17a5b0u;
}
