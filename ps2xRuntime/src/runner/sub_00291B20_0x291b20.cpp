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

// Function: sub_00291B20
// Address: 0x291b20 - 0x291b80
void sub_00291B20_0x291b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00291B20_0x291b20");
#endif

    switch (ctx->pc) {
        case 0x291b4cu: goto label_291b4c;
        case 0x291b6cu: goto label_291b6c;
        default: break;
    }

    ctx->pc = 0x291b20u;

    // 0x291b20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x291b20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x291b24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x291b24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x291b28: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x291b28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x291b2c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x291b2cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x291b30: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x291b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x291b34: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x291B34u;
    {
        const bool branch_taken_0x291b34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x291b34) {
            ctx->pc = 0x291B6Cu;
            goto label_291b6c;
        }
    }
    ctx->pc = 0x291B3Cu;
    // 0x291b3c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x291b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x291b40: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x291b40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291b44: 0xc0a46e0  jal         func_291B80
    ctx->pc = 0x291B44u;
    SET_GPR_U32(ctx, 31, 0x291B4Cu);
    ctx->pc = 0x291B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291B80u, 0x291B44u, 0x291B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291B4Cu;
label_291b4c:
    // 0x291b4c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x291b4cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x291b50: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x291b50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x291b54: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x291b54u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x291b58: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x291B58u;
    {
        const bool branch_taken_0x291b58 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x291b58) {
            ctx->pc = 0x291B6Cu;
            goto label_291b6c;
        }
    }
    ctx->pc = 0x291B60u;
    // 0x291b60: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x291b60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x291b64: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x291B64u;
    SET_GPR_U32(ctx, 31, 0x291B6Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x291B64u, 0x291B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291B6Cu;
label_291b6c:
    // 0x291b6c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x291b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x291b70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x291b70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x291b74: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x291b74u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x291b78: 0x3e00008  jr          $ra
    ctx->pc = 0x291B78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x291B78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x291B80u;
}
