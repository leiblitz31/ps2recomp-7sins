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

// Function: sub_00247A20
// Address: 0x247a20 - 0x247a90
void sub_00247A20_0x247a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00247A20_0x247a20");
#endif

    switch (ctx->pc) {
        case 0x247a48u: goto label_247a48;
        case 0x247a58u: goto label_247a58;
        case 0x247a78u: goto label_247a78;
        default: break;
    }

    ctx->pc = 0x247a20u;

    // 0x247a20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x247a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x247a24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x247a24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x247a28: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x247a28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x247a2c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x247a2cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x247a30: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x247a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x247a34: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x247A34u;
    {
        const bool branch_taken_0x247a34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x247a34) {
            ctx->pc = 0x247A78u;
            goto label_247a78;
        }
    }
    ctx->pc = 0x247A3Cu;
    // 0x247a3c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x247a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x247a40: 0xc091ec0  jal         func_247B00
    ctx->pc = 0x247A40u;
    SET_GPR_U32(ctx, 31, 0x247A48u);
    ctx->pc = 0x247B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247B00u, 0x247A40u, 0x247A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247A48u;
label_247a48:
    // 0x247a48: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x247a48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x247a4c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x247a4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247a50: 0xc091ea4  jal         func_247A90
    ctx->pc = 0x247A50u;
    SET_GPR_U32(ctx, 31, 0x247A58u);
    ctx->pc = 0x247A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247A90u, 0x247A50u, 0x247A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247A58u;
label_247a58:
    // 0x247a58: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x247a58u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x247a5c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x247a5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x247a60: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x247a60u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x247a64: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x247A64u;
    {
        const bool branch_taken_0x247a64 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x247a64) {
            ctx->pc = 0x247A78u;
            goto label_247a78;
        }
    }
    ctx->pc = 0x247A6Cu;
    // 0x247a6c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x247a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x247a70: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x247A70u;
    SET_GPR_U32(ctx, 31, 0x247A78u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x247A70u, 0x247A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247A78u;
label_247a78:
    // 0x247a78: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x247a78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x247a7c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x247a7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x247a80: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x247a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x247a84: 0x3e00008  jr          $ra
    ctx->pc = 0x247A84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x247A84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x247A8Cu;
    // 0x247a8c: 0x0  nop
    ctx->pc = 0x247a8cu;
    // NOP
    ctx->pc = 0x247a90u;
}
