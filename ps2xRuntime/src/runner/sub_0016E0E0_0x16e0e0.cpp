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

// Function: sub_0016E0E0
// Address: 0x16e0e0 - 0x16e190
void sub_0016E0E0_0x16e0e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016E0E0_0x16e0e0");
#endif

    switch (ctx->pc) {
        case 0x16e150u: goto label_16e150;
        case 0x16e170u: goto label_16e170;
        default: break;
    }

    ctx->pc = 0x16e0e0u;

    // 0x16e0e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x16e0e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x16e0e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16e0e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16e0e8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x16e0e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x16e0ec: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x16e0ecu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x16e0f0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x16e0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16e0f4: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x16E0F4u;
    {
        const bool branch_taken_0x16e0f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16e0f4) {
            ctx->pc = 0x16E170u;
            goto label_16e170;
        }
    }
    ctx->pc = 0x16E0FCu;
    // 0x16e0fc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x16e0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16e100: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x16e100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16e104: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x16E104u;
    {
        const bool branch_taken_0x16e104 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16e104) {
            ctx->pc = 0x16E150u;
            goto label_16e150;
        }
    }
    ctx->pc = 0x16E10Cu;
    // 0x16e10c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x16e10cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16e110: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x16e110u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16e114: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x16e114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16e118: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x16e118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x16e11c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x16e11cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16e120: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x16e120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16e124: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x16e124u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16e128: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x16e128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x16e12c: 0x33083  sra         $a2, $v1, 2
    ctx->pc = 0x16e12cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 2));
    // 0x16e130: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x16E130u;
    {
        const bool branch_taken_0x16e130 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x16e130) {
            ctx->pc = 0x16E140u;
            goto label_16e140;
        }
    }
    ctx->pc = 0x16E138u;
    // 0x16e138: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x16e138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x16e13c: 0x23083  sra         $a2, $v0, 2
    ctx->pc = 0x16e13cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
label_16e140:
    // 0x16e140: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x16e140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x16e144: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x16e144u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x16e148: 0xc05c604  jal         func_171810
    ctx->pc = 0x16E148u;
    SET_GPR_U32(ctx, 31, 0x16E150u);
    ctx->pc = 0x171810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171810u, 0x16E148u, 0x16E150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E150u;
label_16e150:
    // 0x16e150: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x16e150u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16e154: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x16e154u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x16e158: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x16e158u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x16e15c: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x16E15Cu;
    {
        const bool branch_taken_0x16e15c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x16e15c) {
            ctx->pc = 0x16E170u;
            goto label_16e170;
        }
    }
    ctx->pc = 0x16E164u;
    // 0x16e164: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x16e164u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16e168: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x16E168u;
    SET_GPR_U32(ctx, 31, 0x16E170u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x16E168u, 0x16E170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E170u;
label_16e170:
    // 0x16e170: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x16e170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16e174: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16e174u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16e178: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x16e178u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x16e17c: 0x3e00008  jr          $ra
    ctx->pc = 0x16E17Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16E17Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16E184u;
    // 0x16e184: 0x0  nop
    ctx->pc = 0x16e184u;
    // NOP
    // 0x16e188: 0x0  nop
    ctx->pc = 0x16e188u;
    // NOP
    // 0x16e18c: 0x0  nop
    ctx->pc = 0x16e18cu;
    // NOP
    ctx->pc = 0x16e190u;
}
