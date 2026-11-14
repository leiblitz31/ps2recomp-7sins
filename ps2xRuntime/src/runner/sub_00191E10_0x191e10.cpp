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

// Function: sub_00191E10
// Address: 0x191e10 - 0x191e70
void sub_00191E10_0x191e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00191E10_0x191e10");
#endif

    switch (ctx->pc) {
        case 0x191e3cu: goto label_191e3c;
        case 0x191e5cu: goto label_191e5c;
        default: break;
    }

    ctx->pc = 0x191e10u;

    // 0x191e10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x191e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x191e14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x191e14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x191e18: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x191e18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x191e1c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x191e1cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x191e20: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x191e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x191e24: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x191E24u;
    {
        const bool branch_taken_0x191e24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x191e24) {
            ctx->pc = 0x191E5Cu;
            goto label_191e5c;
        }
    }
    ctx->pc = 0x191E2Cu;
    // 0x191e2c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x191e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x191e30: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x191e30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x191e34: 0xc0439c4  jal         func_10E710
    ctx->pc = 0x191E34u;
    SET_GPR_U32(ctx, 31, 0x191E3Cu);
    ctx->pc = 0x10E710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E710u, 0x191E34u, 0x191E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191E3Cu;
label_191e3c:
    // 0x191e3c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x191e3cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x191e40: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x191e40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x191e44: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x191e44u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x191e48: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x191E48u;
    {
        const bool branch_taken_0x191e48 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x191e48) {
            ctx->pc = 0x191E5Cu;
            goto label_191e5c;
        }
    }
    ctx->pc = 0x191E50u;
    // 0x191e50: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x191e50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x191e54: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x191E54u;
    SET_GPR_U32(ctx, 31, 0x191E5Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x191E54u, 0x191E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191E5Cu;
label_191e5c:
    // 0x191e5c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x191e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x191e60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x191e60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x191e64: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x191e64u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x191e68: 0x3e00008  jr          $ra
    ctx->pc = 0x191E68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x191E68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x191E70u;
}
