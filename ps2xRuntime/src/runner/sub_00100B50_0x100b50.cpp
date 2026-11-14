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

// Function: sub_00100B50
// Address: 0x100b50 - 0x100bb0
void sub_00100B50_0x100b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00100B50_0x100b50");
#endif

    switch (ctx->pc) {
        case 0x100b78u: goto label_100b78;
        case 0x100b98u: goto label_100b98;
        default: break;
    }

    ctx->pc = 0x100b50u;

    // 0x100b50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x100b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x100b54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x100b54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x100b58: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x100b58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x100b5c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x100b5cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x100b60: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x100b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x100b64: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x100B64u;
    {
        const bool branch_taken_0x100b64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x100b64) {
            ctx->pc = 0x100B98u;
            goto label_100b98;
        }
    }
    ctx->pc = 0x100B6Cu;
    // 0x100b6c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x100b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x100b70: 0xc0402ec  jal         func_100BB0
    ctx->pc = 0x100B70u;
    SET_GPR_U32(ctx, 31, 0x100B78u);
    ctx->pc = 0x100BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100BB0u, 0x100B70u, 0x100B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100B78u;
label_100b78:
    // 0x100b78: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x100b78u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x100b7c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x100b7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x100b80: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x100b80u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x100b84: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x100B84u;
    {
        const bool branch_taken_0x100b84 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x100b84) {
            ctx->pc = 0x100B98u;
            goto label_100b98;
        }
    }
    ctx->pc = 0x100B8Cu;
    // 0x100b8c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x100b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x100b90: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x100B90u;
    SET_GPR_U32(ctx, 31, 0x100B98u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x100B90u, 0x100B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100B98u;
label_100b98:
    // 0x100b98: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x100b98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x100b9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x100b9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x100ba0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x100ba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x100ba4: 0x3e00008  jr          $ra
    ctx->pc = 0x100BA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x100BA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x100BACu;
    // 0x100bac: 0x0  nop
    ctx->pc = 0x100bacu;
    // NOP
    ctx->pc = 0x100bb0u;
}
