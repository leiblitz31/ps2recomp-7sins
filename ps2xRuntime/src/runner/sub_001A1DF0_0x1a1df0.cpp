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

// Function: sub_001A1DF0
// Address: 0x1a1df0 - 0x1a1e50
void sub_001A1DF0_0x1a1df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A1DF0_0x1a1df0");
#endif

    switch (ctx->pc) {
        case 0x1a1e1cu: goto label_1a1e1c;
        case 0x1a1e3cu: goto label_1a1e3c;
        default: break;
    }

    ctx->pc = 0x1a1df0u;

    // 0x1a1df0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a1df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a1df4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a1df4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a1df8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1a1df8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1a1dfc: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x1a1dfcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x1a1e00: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1a1e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a1e04: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1A1E04u;
    {
        const bool branch_taken_0x1a1e04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1e04) {
            ctx->pc = 0x1A1E3Cu;
            goto label_1a1e3c;
        }
    }
    ctx->pc = 0x1A1E0Cu;
    // 0x1a1e0c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1a1e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a1e10: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a1e10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1e14: 0xc068794  jal         func_1A1E50
    ctx->pc = 0x1A1E14u;
    SET_GPR_U32(ctx, 31, 0x1A1E1Cu);
    ctx->pc = 0x1A1E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1E50u, 0x1A1E14u, 0x1A1E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1E1Cu;
label_1a1e1c:
    // 0x1a1e1c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x1a1e1cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a1e20: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1a1e20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1a1e24: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1a1e24u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1a1e28: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A1E28u;
    {
        const bool branch_taken_0x1a1e28 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1a1e28) {
            ctx->pc = 0x1A1E3Cu;
            goto label_1a1e3c;
        }
    }
    ctx->pc = 0x1A1E30u;
    // 0x1a1e30: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1a1e30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a1e34: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x1A1E34u;
    SET_GPR_U32(ctx, 31, 0x1A1E3Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x1A1E34u, 0x1A1E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1E3Cu;
label_1a1e3c:
    // 0x1a1e3c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1a1e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a1e40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a1e40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a1e44: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1a1e44u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1a1e48: 0x3e00008  jr          $ra
    ctx->pc = 0x1A1E48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A1E48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A1E50u;
}
