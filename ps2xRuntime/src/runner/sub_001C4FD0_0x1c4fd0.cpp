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

// Function: sub_001C4FD0
// Address: 0x1c4fd0 - 0x1c5030
void sub_001C4FD0_0x1c4fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C4FD0_0x1c4fd0");
#endif

    switch (ctx->pc) {
        case 0x1c4ffcu: goto label_1c4ffc;
        default: break;
    }

    ctx->pc = 0x1c4fd0u;

    // 0x1c4fd0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1c4fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1c4fd4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c4fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c4fd8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c4fd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c4fdc: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x1c4fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x1c4fe0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1c4fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c4fe4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C4FE4u;
    {
        const bool branch_taken_0x1c4fe4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c4fe4) {
            ctx->pc = 0x1C5008u;
            goto label_1c5008;
        }
    }
    ctx->pc = 0x1C4FECu;
    // 0x1c4fec: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1c4fecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c4ff0: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x1c4ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1c4ff4: 0xc07140c  jal         func_1C5030
    ctx->pc = 0x1C4FF4u;
    SET_GPR_U32(ctx, 31, 0x1C4FFCu);
    ctx->pc = 0x1C5030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5030u, 0x1C4FF4u, 0x1C4FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4FFCu;
label_1c4ffc:
    // 0x1c4ffc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c4ffcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5000: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1C5000u;
    {
        const bool branch_taken_0x1c5000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c5000) {
            ctx->pc = 0x1C500Cu;
            goto label_1c500c;
        }
    }
    ctx->pc = 0x1C5008u;
label_1c5008:
    // 0x1c5008: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1c5008u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c500c:
    // 0x1c500c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1c500cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5010: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c5010u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c5014: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c5014u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c5018: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1c5018u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1c501c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C501Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C501Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C5024u;
    // 0x1c5024: 0x0  nop
    ctx->pc = 0x1c5024u;
    // NOP
    // 0x1c5028: 0x0  nop
    ctx->pc = 0x1c5028u;
    // NOP
    // 0x1c502c: 0x0  nop
    ctx->pc = 0x1c502cu;
    // NOP
    ctx->pc = 0x1c5030u;
}
