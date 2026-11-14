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

// Function: sub_00250C10
// Address: 0x250c10 - 0x250c80
void sub_00250C10_0x250c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00250C10_0x250c10");
#endif

    switch (ctx->pc) {
        case 0x250c38u: goto label_250c38;
        case 0x250c4cu: goto label_250c4c;
        case 0x250c6cu: goto label_250c6c;
        default: break;
    }

    ctx->pc = 0x250c10u;

    // 0x250c10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x250c10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x250c14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x250c14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x250c18: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x250c18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x250c1c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x250c1cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x250c20: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x250c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x250c24: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x250C24u;
    {
        const bool branch_taken_0x250c24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x250c24) {
            ctx->pc = 0x250C6Cu;
            goto label_250c6c;
        }
    }
    ctx->pc = 0x250C2Cu;
    // 0x250c2c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x250c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x250c30: 0xc0948f4  jal         func_2523D0
    ctx->pc = 0x250C30u;
    SET_GPR_U32(ctx, 31, 0x250C38u);
    ctx->pc = 0x2523D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2523D0u, 0x250C30u, 0x250C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250C38u;
label_250c38:
    // 0x250c38: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x250c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x250c3c: 0x2444000c  addiu       $a0, $v0, 0xC
    ctx->pc = 0x250c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x250c40: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x250c40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x250c44: 0xc09420c  jal         func_250830
    ctx->pc = 0x250C44u;
    SET_GPR_U32(ctx, 31, 0x250C4Cu);
    ctx->pc = 0x250830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x250830u, 0x250C44u, 0x250C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250C4Cu;
label_250c4c:
    // 0x250c4c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x250c4cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x250c50: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x250c50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x250c54: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x250c54u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x250c58: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x250C58u;
    {
        const bool branch_taken_0x250c58 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x250c58) {
            ctx->pc = 0x250C6Cu;
            goto label_250c6c;
        }
    }
    ctx->pc = 0x250C60u;
    // 0x250c60: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x250c60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x250c64: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x250C64u;
    SET_GPR_U32(ctx, 31, 0x250C6Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x250C64u, 0x250C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250C6Cu;
label_250c6c:
    // 0x250c6c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x250c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x250c70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x250c70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x250c74: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x250c74u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x250c78: 0x3e00008  jr          $ra
    ctx->pc = 0x250C78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x250C78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x250C80u;
}
