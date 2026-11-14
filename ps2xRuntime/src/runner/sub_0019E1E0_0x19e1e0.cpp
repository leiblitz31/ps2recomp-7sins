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

// Function: sub_0019E1E0
// Address: 0x19e1e0 - 0x19e240
void sub_0019E1E0_0x19e1e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019E1E0_0x19e1e0");
#endif

    switch (ctx->pc) {
        case 0x19e204u: goto label_19e204;
        case 0x19e220u: goto label_19e220;
        default: break;
    }

    ctx->pc = 0x19e1e0u;

    // 0x19e1e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x19e1e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x19e1e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x19e1e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19e1e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19e1e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19e1ec: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x19e1ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x19e1f0: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x19e1f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x19e1f4: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x19e1f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x19e1f8: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x19e1f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19e1fc: 0xc0400e0  jal         func_100380
    ctx->pc = 0x19E1FCu;
    SET_GPR_U32(ctx, 31, 0x19E204u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x19E1FCu, 0x19E204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E204u;
label_19e204:
    // 0x19e204: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x19e204u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e208: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x19E208u;
    {
        const bool branch_taken_0x19e208 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e208) {
            ctx->pc = 0x19E224u;
            goto label_19e224;
        }
    }
    ctx->pc = 0x19E210u;
    // 0x19e210: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19e210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e214: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x19e214u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19e218: 0xc067908  jal         func_19E420
    ctx->pc = 0x19E218u;
    SET_GPR_U32(ctx, 31, 0x19E220u);
    ctx->pc = 0x19E420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E420u, 0x19E218u, 0x19E220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E220u;
label_19e220:
    // 0x19e220: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x19e220u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19e224:
    // 0x19e224: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19e224u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19e228: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19e228u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19e22c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x19e22cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x19e230: 0x3e00008  jr          $ra
    ctx->pc = 0x19E230u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19E230u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19E238u;
    // 0x19e238: 0x0  nop
    ctx->pc = 0x19e238u;
    // NOP
    // 0x19e23c: 0x0  nop
    ctx->pc = 0x19e23cu;
    // NOP
    ctx->pc = 0x19e240u;
}
