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

// Function: sub_001BA000
// Address: 0x1ba000 - 0x1ba050
void sub_001BA000_0x1ba000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BA000_0x1ba000");
#endif

    switch (ctx->pc) {
        case 0x1ba01cu: goto label_1ba01c;
        case 0x1ba030u: goto label_1ba030;
        case 0x1ba040u: goto label_1ba040;
        default: break;
    }

    ctx->pc = 0x1ba000u;

    // 0x1ba000: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1ba000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1ba004: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ba004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ba008: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1ba008u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1ba00c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x1ba00cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x1ba010: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1ba010u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1ba014: 0xc0447ec  jal         func_111FB0
    ctx->pc = 0x1BA014u;
    SET_GPR_U32(ctx, 31, 0x1BA01Cu);
    ctx->pc = 0x111FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111FB0u, 0x1BA014u, 0x1BA01Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA01Cu;
label_1ba01c:
    // 0x1ba01c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1ba01cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ba020: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x1ba020u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ba024: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x1ba024u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1ba028: 0xc06e814  jal         func_1BA050
    ctx->pc = 0x1BA028u;
    SET_GPR_U32(ctx, 31, 0x1BA030u);
    ctx->pc = 0x1BA050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BA050u, 0x1BA028u, 0x1BA030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA030u;
label_1ba030:
    // 0x1ba030: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1ba030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1ba034: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1ba034u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ba038: 0xc0439c4  jal         func_10E710
    ctx->pc = 0x1BA038u;
    SET_GPR_U32(ctx, 31, 0x1BA040u);
    ctx->pc = 0x10E710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E710u, 0x1BA038u, 0x1BA040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BA040u;
label_1ba040:
    // 0x1ba040: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ba040u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ba044: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1ba044u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1ba048: 0x3e00008  jr          $ra
    ctx->pc = 0x1BA048u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BA048u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BA050u;
}
