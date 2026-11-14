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

// Function: sub_001BF020
// Address: 0x1bf020 - 0x1bf080
void sub_001BF020_0x1bf020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BF020_0x1bf020");
#endif

    switch (ctx->pc) {
        case 0x1bf044u: goto label_1bf044;
        case 0x1bf060u: goto label_1bf060;
        default: break;
    }

    ctx->pc = 0x1bf020u;

    // 0x1bf020: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1bf020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1bf024: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1bf024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1bf028: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1bf028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1bf02c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1bf02cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1bf030: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x1bf030u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x1bf034: 0x240400d0  addiu       $a0, $zero, 0xD0
    ctx->pc = 0x1bf034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
    // 0x1bf038: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1bf038u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bf03c: 0xc0400e0  jal         func_100380
    ctx->pc = 0x1BF03Cu;
    SET_GPR_U32(ctx, 31, 0x1BF044u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x1BF03Cu, 0x1BF044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF044u;
label_1bf044:
    // 0x1bf044: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1bf044u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf048: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BF048u;
    {
        const bool branch_taken_0x1bf048 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bf048) {
            ctx->pc = 0x1BF064u;
            goto label_1bf064;
        }
    }
    ctx->pc = 0x1BF050u;
    // 0x1bf050: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bf050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf054: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x1bf054u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1bf058: 0xc06eea8  jal         func_1BBAA0
    ctx->pc = 0x1BF058u;
    SET_GPR_U32(ctx, 31, 0x1BF060u);
    ctx->pc = 0x1BBAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BBAA0u, 0x1BF058u, 0x1BF060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF060u;
label_1bf060:
    // 0x1bf060: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1bf060u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1bf064:
    // 0x1bf064: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1bf064u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bf068: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1bf068u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bf06c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1bf06cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1bf070: 0x3e00008  jr          $ra
    ctx->pc = 0x1BF070u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BF070u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BF078u;
    // 0x1bf078: 0x0  nop
    ctx->pc = 0x1bf078u;
    // NOP
    // 0x1bf07c: 0x0  nop
    ctx->pc = 0x1bf07cu;
    // NOP
    ctx->pc = 0x1bf080u;
}
