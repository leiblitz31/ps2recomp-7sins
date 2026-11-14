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

// Function: sub_00207B00
// Address: 0x207b00 - 0x207b60
void sub_00207B00_0x207b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00207B00_0x207b00");
#endif

    switch (ctx->pc) {
        case 0x207b2cu: goto label_207b2c;
        case 0x207b4cu: goto label_207b4c;
        default: break;
    }

    ctx->pc = 0x207b00u;

    // 0x207b00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x207b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x207b04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x207b04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x207b08: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x207b08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x207b0c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x207b0cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x207b10: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x207b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x207b14: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x207B14u;
    {
        const bool branch_taken_0x207b14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x207b14) {
            ctx->pc = 0x207B4Cu;
            goto label_207b4c;
        }
    }
    ctx->pc = 0x207B1Cu;
    // 0x207b1c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x207b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x207b20: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x207b20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207b24: 0xc081ed8  jal         func_207B60
    ctx->pc = 0x207B24u;
    SET_GPR_U32(ctx, 31, 0x207B2Cu);
    ctx->pc = 0x207B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207B60u, 0x207B24u, 0x207B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207B2Cu;
label_207b2c:
    // 0x207b2c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x207b2cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x207b30: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x207b30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x207b34: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x207b34u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x207b38: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x207B38u;
    {
        const bool branch_taken_0x207b38 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x207b38) {
            ctx->pc = 0x207B4Cu;
            goto label_207b4c;
        }
    }
    ctx->pc = 0x207B40u;
    // 0x207b40: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x207b40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x207b44: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x207B44u;
    SET_GPR_U32(ctx, 31, 0x207B4Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x207B44u, 0x207B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207B4Cu;
label_207b4c:
    // 0x207b4c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x207b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x207b50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x207b50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x207b54: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x207b54u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x207b58: 0x3e00008  jr          $ra
    ctx->pc = 0x207B58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x207B58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x207B60u;
}
