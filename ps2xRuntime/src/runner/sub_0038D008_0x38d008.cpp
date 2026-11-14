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

// Function: sub_0038D008
// Address: 0x38d008 - 0x38d050
void sub_0038D008_0x38d008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038D008_0x38d008");
#endif

    switch (ctx->pc) {
        case 0x38d02cu: goto label_38d02c;
        default: break;
    }

    ctx->pc = 0x38d008u;

    // 0x38d008: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x38d008u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x38d00c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x38d00cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x38d010: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x38d010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x38d014: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x38d014u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38d018: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x38d018u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x38d01c: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x38D01Cu;
    {
        const bool branch_taken_0x38d01c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x38d01c) {
            ctx->pc = 0x38D020u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38D01Cu;
            // 0x38d020: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38D03Cu;
            goto label_38d03c;
        }
    }
    ctx->pc = 0x38D024u;
    // 0x38d024: 0xc0e40c2  jal         func_390308
    ctx->pc = 0x38D024u;
    SET_GPR_U32(ctx, 31, 0x38D02Cu);
    ctx->pc = 0x390308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390308u, 0x38D024u, 0x38D02Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38D02Cu;
label_38d02c:
    // 0x38d02c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x38d02cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38d030: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x38D030u;
    {
        const bool branch_taken_0x38d030 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x38D034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D030u;
        // 0x38d034: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d030) {
            ctx->pc = 0x38D03Cu;
            goto label_38d03c;
        }
    }
    ctx->pc = 0x38D038u;
    // 0x38d038: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x38d038u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38d03c:
    // 0x38d03c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x38d03cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38d040: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x38d040u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38d044: 0x3e00008  jr          $ra
    ctx->pc = 0x38D044u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38D048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D044u;
        // 0x38d048: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38D044u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38D04Cu;
    // 0x38d04c: 0x0  nop
    ctx->pc = 0x38d04cu;
    // NOP
    ctx->pc = 0x38d050u;
}
