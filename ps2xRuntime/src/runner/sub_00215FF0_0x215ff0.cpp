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

// Function: sub_00215FF0
// Address: 0x215ff0 - 0x216070
void sub_00215FF0_0x215ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00215FF0_0x215ff0");
#endif

    switch (ctx->pc) {
        case 0x216020u: goto label_216020;
        case 0x216034u: goto label_216034;
        case 0x216054u: goto label_216054;
        default: break;
    }

    ctx->pc = 0x215ff0u;

    // 0x215ff0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x215ff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x215ff4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x215ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x215ff8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x215ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x215ffc: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x215ffcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x216000: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x216000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x216004: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x216004u;
    {
        const bool branch_taken_0x216004 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x216004) {
            ctx->pc = 0x216054u;
            goto label_216054;
        }
    }
    ctx->pc = 0x21600Cu;
    // 0x21600c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x21600cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x216010: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x216010u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x216014: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x216014u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x216018: 0xc0857bc  jal         func_215EF0
    ctx->pc = 0x216018u;
    SET_GPR_U32(ctx, 31, 0x216020u);
    ctx->pc = 0x215EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215EF0u, 0x216018u, 0x216020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216020u;
label_216020:
    // 0x216020: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x216020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x216024: 0x24440040  addiu       $a0, $v0, 0x40
    ctx->pc = 0x216024u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x216028: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x216028u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x21602c: 0xc0857e0  jal         func_215F80
    ctx->pc = 0x21602Cu;
    SET_GPR_U32(ctx, 31, 0x216034u);
    ctx->pc = 0x215F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215F80u, 0x21602Cu, 0x216034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216034u;
label_216034:
    // 0x216034: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x216034u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x216038: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x216038u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x21603c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x21603cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x216040: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x216040u;
    {
        const bool branch_taken_0x216040 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x216040) {
            ctx->pc = 0x216054u;
            goto label_216054;
        }
    }
    ctx->pc = 0x216048u;
    // 0x216048: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x216048u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21604c: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x21604Cu;
    SET_GPR_U32(ctx, 31, 0x216054u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x21604Cu, 0x216054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216054u;
label_216054:
    // 0x216054: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x216054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x216058: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x216058u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21605c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x21605cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x216060: 0x3e00008  jr          $ra
    ctx->pc = 0x216060u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x216060u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x216068u;
    // 0x216068: 0x0  nop
    ctx->pc = 0x216068u;
    // NOP
    // 0x21606c: 0x0  nop
    ctx->pc = 0x21606cu;
    // NOP
    ctx->pc = 0x216070u;
}
