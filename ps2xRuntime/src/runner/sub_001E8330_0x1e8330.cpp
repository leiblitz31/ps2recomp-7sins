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

// Function: sub_001E8330
// Address: 0x1e8330 - 0x1e8390
void sub_001E8330_0x1e8330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E8330_0x1e8330");
#endif

    switch (ctx->pc) {
        case 0x1e8354u: goto label_1e8354;
        case 0x1e8370u: goto label_1e8370;
        default: break;
    }

    ctx->pc = 0x1e8330u;

    // 0x1e8330: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1e8330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1e8334: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e8334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e8338: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e8338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e833c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1e833cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1e8340: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x1e8340u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x1e8344: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x1e8344u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1e8348: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1e8348u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e834c: 0xc0400e0  jal         func_100380
    ctx->pc = 0x1E834Cu;
    SET_GPR_U32(ctx, 31, 0x1E8354u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x1E834Cu, 0x1E8354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8354u;
label_1e8354:
    // 0x1e8354: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e8354u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8358: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E8358u;
    {
        const bool branch_taken_0x1e8358 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e8358) {
            ctx->pc = 0x1E8374u;
            goto label_1e8374;
        }
    }
    ctx->pc = 0x1E8360u;
    // 0x1e8360: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e8360u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8364: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x1e8364u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e8368: 0xc07a15c  jal         func_1E8570
    ctx->pc = 0x1E8368u;
    SET_GPR_U32(ctx, 31, 0x1E8370u);
    ctx->pc = 0x1E8570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8570u, 0x1E8368u, 0x1E8370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E8370u;
label_1e8370:
    // 0x1e8370: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e8370u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e8374:
    // 0x1e8374: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e8374u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e8378: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e8378u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e837c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1e837cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1e8380: 0x3e00008  jr          $ra
    ctx->pc = 0x1E8380u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E8380u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E8388u;
    // 0x1e8388: 0x0  nop
    ctx->pc = 0x1e8388u;
    // NOP
    // 0x1e838c: 0x0  nop
    ctx->pc = 0x1e838cu;
    // NOP
    ctx->pc = 0x1e8390u;
}
