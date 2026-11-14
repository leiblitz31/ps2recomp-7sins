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

// Function: sub_00213FF0
// Address: 0x213ff0 - 0x214080
void sub_00213FF0_0x213ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00213FF0_0x213ff0");
#endif

    switch (ctx->pc) {
        case 0x214030u: goto label_214030;
        case 0x214040u: goto label_214040;
        case 0x214060u: goto label_214060;
        default: break;
    }

    ctx->pc = 0x213ff0u;

    // 0x213ff0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x213ff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x213ff4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x213ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x213ff8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x213ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x213ffc: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x213ffcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x214000: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x214000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x214004: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x214004u;
    {
        const bool branch_taken_0x214004 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x214004) {
            ctx->pc = 0x214060u;
            goto label_214060;
        }
    }
    ctx->pc = 0x21400Cu;
    // 0x21400c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x21400cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x214010: 0x246351b0  addiu       $v1, $v1, 0x51B0
    ctx->pc = 0x214010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20912));
    // 0x214014: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x214014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x214018: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x214018u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x21401c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x21401cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x214020: 0x2444002c  addiu       $a0, $v0, 0x2C
    ctx->pc = 0x214020u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 44));
    // 0x214024: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x214024u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x214028: 0xc084f1c  jal         func_213C70
    ctx->pc = 0x214028u;
    SET_GPR_U32(ctx, 31, 0x214030u);
    ctx->pc = 0x213C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x213C70u, 0x214028u, 0x214030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214030u;
label_214030:
    // 0x214030: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x214030u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x214034: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x214034u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214038: 0xc08ec24  jal         func_23B090
    ctx->pc = 0x214038u;
    SET_GPR_U32(ctx, 31, 0x214040u);
    ctx->pc = 0x23B090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B090u, 0x214038u, 0x214040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214040u;
label_214040:
    // 0x214040: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x214040u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x214044: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x214044u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x214048: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x214048u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x21404c: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21404Cu;
    {
        const bool branch_taken_0x21404c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x21404c) {
            ctx->pc = 0x214060u;
            goto label_214060;
        }
    }
    ctx->pc = 0x214054u;
    // 0x214054: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x214054u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x214058: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x214058u;
    SET_GPR_U32(ctx, 31, 0x214060u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x214058u, 0x214060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214060u;
label_214060:
    // 0x214060: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x214060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x214064: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x214064u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x214068: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x214068u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x21406c: 0x3e00008  jr          $ra
    ctx->pc = 0x21406Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21406Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x214074u;
    // 0x214074: 0x0  nop
    ctx->pc = 0x214074u;
    // NOP
    // 0x214078: 0x0  nop
    ctx->pc = 0x214078u;
    // NOP
    // 0x21407c: 0x0  nop
    ctx->pc = 0x21407cu;
    // NOP
    ctx->pc = 0x214080u;
}
