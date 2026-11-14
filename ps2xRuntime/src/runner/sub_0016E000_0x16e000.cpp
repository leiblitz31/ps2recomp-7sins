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

// Function: sub_0016E000
// Address: 0x16e000 - 0x16e060
void sub_0016E000_0x16e000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016E000_0x16e000");
#endif

    switch (ctx->pc) {
        case 0x16e02cu: goto label_16e02c;
        case 0x16e04cu: goto label_16e04c;
        default: break;
    }

    ctx->pc = 0x16e000u;

    // 0x16e000: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x16e000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x16e004: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16e004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16e008: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x16e008u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x16e00c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x16e00cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x16e010: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x16e010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16e014: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x16E014u;
    {
        const bool branch_taken_0x16e014 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16e014) {
            ctx->pc = 0x16E04Cu;
            goto label_16e04c;
        }
    }
    ctx->pc = 0x16E01Cu;
    // 0x16e01c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x16e01cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16e020: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16e020u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e024: 0xc05b818  jal         func_16E060
    ctx->pc = 0x16E024u;
    SET_GPR_U32(ctx, 31, 0x16E02Cu);
    ctx->pc = 0x16E060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16E060u, 0x16E024u, 0x16E02Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E02Cu;
label_16e02c:
    // 0x16e02c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x16e02cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16e030: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x16e030u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16e034: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x16e034u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x16e038: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x16E038u;
    {
        const bool branch_taken_0x16e038 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x16e038) {
            ctx->pc = 0x16E04Cu;
            goto label_16e04c;
        }
    }
    ctx->pc = 0x16E040u;
    // 0x16e040: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x16e040u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16e044: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x16E044u;
    SET_GPR_U32(ctx, 31, 0x16E04Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x16E044u, 0x16E04Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E04Cu;
label_16e04c:
    // 0x16e04c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x16e04cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16e050: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16e050u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16e054: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x16e054u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x16e058: 0x3e00008  jr          $ra
    ctx->pc = 0x16E058u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16E058u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16E060u;
}
