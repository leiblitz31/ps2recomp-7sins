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

// Function: sub_0026C040
// Address: 0x26c040 - 0x26c0a0
void sub_0026C040_0x26c040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026C040_0x26c040");
#endif

    switch (ctx->pc) {
        case 0x26c064u: goto label_26c064;
        case 0x26c080u: goto label_26c080;
        default: break;
    }

    ctx->pc = 0x26c040u;

    // 0x26c040: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x26c040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x26c044: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x26c044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x26c048: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x26c048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x26c04c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x26c04cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x26c050: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x26c050u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x26c054: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x26c054u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x26c058: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x26c058u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26c05c: 0xc0400e0  jal         func_100380
    ctx->pc = 0x26C05Cu;
    SET_GPR_U32(ctx, 31, 0x26C064u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x26C05Cu, 0x26C064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C064u;
label_26c064:
    // 0x26c064: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26c064u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c068: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x26C068u;
    {
        const bool branch_taken_0x26c068 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c068) {
            ctx->pc = 0x26C084u;
            goto label_26c084;
        }
    }
    ctx->pc = 0x26C070u;
    // 0x26c070: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26c070u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c074: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x26c074u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26c078: 0xc09b028  jal         func_26C0A0
    ctx->pc = 0x26C078u;
    SET_GPR_U32(ctx, 31, 0x26C080u);
    ctx->pc = 0x26C0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26C0A0u, 0x26C078u, 0x26C080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C080u;
label_26c080:
    // 0x26c080: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26c080u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26c084:
    // 0x26c084: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x26c084u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26c088: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26c088u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26c08c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x26c08cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x26c090: 0x3e00008  jr          $ra
    ctx->pc = 0x26C090u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26C090u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26C098u;
    // 0x26c098: 0x0  nop
    ctx->pc = 0x26c098u;
    // NOP
    // 0x26c09c: 0x0  nop
    ctx->pc = 0x26c09cu;
    // NOP
    ctx->pc = 0x26c0a0u;
}
