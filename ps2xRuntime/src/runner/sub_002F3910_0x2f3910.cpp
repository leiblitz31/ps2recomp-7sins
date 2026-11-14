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

// Function: sub_002F3910
// Address: 0x2f3910 - 0x2f3958
void sub_002F3910_0x2f3910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F3910_0x2f3910");
#endif

    switch (ctx->pc) {
        case 0x2f3940u: goto label_2f3940;
        default: break;
    }

    ctx->pc = 0x2f3910u;

    // 0x2f3910: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2f3910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2f3914: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f3914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f3918: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2f3918u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f391c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2f391cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2f3920: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2f3920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2f3924: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F3924u;
    {
        const bool branch_taken_0x2f3924 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F3928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3924u;
        // 0x2f3928: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3924) {
            ctx->pc = 0x2F3938u;
            goto label_2f3938;
        }
    }
    ctx->pc = 0x2F392Cu;
    // 0x2f392c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2F392Cu;
    {
        const bool branch_taken_0x2f392c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F392Cu;
        // 0x2f3930: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f392c) {
            ctx->pc = 0x2F3948u;
            goto label_2f3948;
        }
    }
    ctx->pc = 0x2F3934u;
    // 0x2f3934: 0x0  nop
    ctx->pc = 0x2f3934u;
    // NOP
label_2f3938:
    // 0x2f3938: 0xc0bb2be  jal         func_2ECAF8
    ctx->pc = 0x2F3938u;
    SET_GPR_U32(ctx, 31, 0x2F3940u);
    ctx->pc = 0x2ECAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ECAF8u, 0x2F3938u, 0x2F3940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3940u;
label_2f3940:
    // 0x2f3940: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2f3940u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x2f3944: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x2f3944u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_2f3948:
    // 0x2f3948: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f3948u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f394c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2f394cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2f3950: 0x3e00008  jr          $ra
    ctx->pc = 0x2F3950u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F3954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3950u;
        // 0x2f3954: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F3950u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F3958u;
}
