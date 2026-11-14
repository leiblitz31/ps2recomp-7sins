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

// Function: sub_00281B90
// Address: 0x281b90 - 0x281bf0
void sub_00281B90_0x281b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00281B90_0x281b90");
#endif

    switch (ctx->pc) {
        case 0x281bc4u: goto label_281bc4;
        default: break;
    }

    ctx->pc = 0x281b90u;

    // 0x281b90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x281b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x281b94: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x281b94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x281b98: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x281b98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x281b9c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x281b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x281ba0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x281ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x281ba4: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x281ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x281ba8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x281BA8u;
    {
        const bool branch_taken_0x281ba8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x281ba8) {
            ctx->pc = 0x281BD0u;
            goto label_281bd0;
        }
    }
    ctx->pc = 0x281BB0u;
    // 0x281bb0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x281bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x281bb4: 0x8c440044  lw          $a0, 0x44($v0)
    ctx->pc = 0x281bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x281bb8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x281bb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x281bbc: 0xc0a1248  jal         func_284920
    ctx->pc = 0x281BBCu;
    SET_GPR_U32(ctx, 31, 0x281BC4u);
    ctx->pc = 0x284920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284920u, 0x281BBCu, 0x281BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281BC4u;
label_281bc4:
    // 0x281bc4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x281bc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281bc8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x281BC8u;
    {
        const bool branch_taken_0x281bc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x281bc8) {
            ctx->pc = 0x281BD4u;
            goto label_281bd4;
        }
    }
    ctx->pc = 0x281BD0u;
label_281bd0:
    // 0x281bd0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x281bd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_281bd4:
    // 0x281bd4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x281bd4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281bd8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x281bd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x281bdc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x281bdcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x281be0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x281be0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x281be4: 0x3e00008  jr          $ra
    ctx->pc = 0x281BE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x281BE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x281BECu;
    // 0x281bec: 0x0  nop
    ctx->pc = 0x281becu;
    // NOP
    ctx->pc = 0x281bf0u;
}
