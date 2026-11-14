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

// Function: sub_002CB0C0
// Address: 0x2cb0c0 - 0x2cb170
void sub_002CB0C0_0x2cb0c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CB0C0_0x2cb0c0");
#endif

    switch (ctx->pc) {
        case 0x2cb130u: goto label_2cb130;
        case 0x2cb150u: goto label_2cb150;
        default: break;
    }

    ctx->pc = 0x2cb0c0u;

    // 0x2cb0c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2cb0c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2cb0c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2cb0c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2cb0c8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2cb0c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2cb0cc: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x2cb0ccu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x2cb0d0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2cb0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cb0d4: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2CB0D4u;
    {
        const bool branch_taken_0x2cb0d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cb0d4) {
            ctx->pc = 0x2CB150u;
            goto label_2cb150;
        }
    }
    ctx->pc = 0x2CB0DCu;
    // 0x2cb0dc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2cb0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cb0e0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2cb0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2cb0e4: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2CB0E4u;
    {
        const bool branch_taken_0x2cb0e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cb0e4) {
            ctx->pc = 0x2CB130u;
            goto label_2cb130;
        }
    }
    ctx->pc = 0x2CB0ECu;
    // 0x2cb0ec: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2cb0ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cb0f0: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x2cb0f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cb0f4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2cb0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cb0f8: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x2cb0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2cb0fc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2cb0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cb100: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2cb100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2cb104: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x2cb104u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2cb108: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2cb108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2cb10c: 0x33083  sra         $a2, $v1, 2
    ctx->pc = 0x2cb10cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 2));
    // 0x2cb110: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CB110u;
    {
        const bool branch_taken_0x2cb110 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x2cb110) {
            ctx->pc = 0x2CB120u;
            goto label_2cb120;
        }
    }
    ctx->pc = 0x2CB118u;
    // 0x2cb118: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x2cb118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x2cb11c: 0x23083  sra         $a2, $v0, 2
    ctx->pc = 0x2cb11cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
label_2cb120:
    // 0x2cb120: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x2cb120u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2cb124: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x2cb124u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2cb128: 0xc0b3f14  jal         func_2CFC50
    ctx->pc = 0x2CB128u;
    SET_GPR_U32(ctx, 31, 0x2CB130u);
    ctx->pc = 0x2CFC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFC50u, 0x2CB128u, 0x2CB130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB130u;
label_2cb130:
    // 0x2cb130: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x2cb130u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cb134: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2cb134u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2cb138: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2cb138u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2cb13c: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CB13Cu;
    {
        const bool branch_taken_0x2cb13c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2cb13c) {
            ctx->pc = 0x2CB150u;
            goto label_2cb150;
        }
    }
    ctx->pc = 0x2CB144u;
    // 0x2cb144: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2cb144u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cb148: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x2CB148u;
    SET_GPR_U32(ctx, 31, 0x2CB150u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x2CB148u, 0x2CB150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB150u;
label_2cb150:
    // 0x2cb150: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2cb150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cb154: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cb154u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cb158: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2cb158u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2cb15c: 0x3e00008  jr          $ra
    ctx->pc = 0x2CB15Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CB15Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CB164u;
    // 0x2cb164: 0x0  nop
    ctx->pc = 0x2cb164u;
    // NOP
    // 0x2cb168: 0x0  nop
    ctx->pc = 0x2cb168u;
    // NOP
    // 0x2cb16c: 0x0  nop
    ctx->pc = 0x2cb16cu;
    // NOP
    ctx->pc = 0x2cb170u;
}
