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

// Function: sub_002230B0
// Address: 0x2230b0 - 0x223160
void sub_002230B0_0x2230b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002230B0_0x2230b0");
#endif

    switch (ctx->pc) {
        case 0x223120u: goto label_223120;
        case 0x223140u: goto label_223140;
        default: break;
    }

    ctx->pc = 0x2230b0u;

    // 0x2230b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2230b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2230b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2230b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2230b8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2230b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2230bc: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x2230bcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x2230c0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2230c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2230c4: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2230C4u;
    {
        const bool branch_taken_0x2230c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2230c4) {
            ctx->pc = 0x223140u;
            goto label_223140;
        }
    }
    ctx->pc = 0x2230CCu;
    // 0x2230cc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2230ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2230d0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2230d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2230d4: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2230D4u;
    {
        const bool branch_taken_0x2230d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2230d4) {
            ctx->pc = 0x223120u;
            goto label_223120;
        }
    }
    ctx->pc = 0x2230DCu;
    // 0x2230dc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2230dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2230e0: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x2230e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2230e4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2230e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2230e8: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x2230e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2230ec: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2230ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2230f0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2230f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2230f4: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x2230f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2230f8: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x2230f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2230fc: 0x33103  sra         $a2, $v1, 4
    ctx->pc = 0x2230fcu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 4));
    // 0x223100: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x223100u;
    {
        const bool branch_taken_0x223100 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x223100) {
            ctx->pc = 0x223110u;
            goto label_223110;
        }
    }
    ctx->pc = 0x223108u;
    // 0x223108: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x223108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x22310c: 0x23103  sra         $a2, $v0, 4
    ctx->pc = 0x22310cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 4));
label_223110:
    // 0x223110: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x223110u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x223114: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x223114u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x223118: 0xc0894e8  jal         func_2253A0
    ctx->pc = 0x223118u;
    SET_GPR_U32(ctx, 31, 0x223120u);
    ctx->pc = 0x2253A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2253A0u, 0x223118u, 0x223120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223120u;
label_223120:
    // 0x223120: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x223120u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x223124: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x223124u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x223128: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x223128u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x22312c: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22312Cu;
    {
        const bool branch_taken_0x22312c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x22312c) {
            ctx->pc = 0x223140u;
            goto label_223140;
        }
    }
    ctx->pc = 0x223134u;
    // 0x223134: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x223134u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x223138: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x223138u;
    SET_GPR_U32(ctx, 31, 0x223140u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x223138u, 0x223140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223140u;
label_223140:
    // 0x223140: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x223140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x223144: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x223144u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x223148: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x223148u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x22314c: 0x3e00008  jr          $ra
    ctx->pc = 0x22314Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22314Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x223154u;
    // 0x223154: 0x0  nop
    ctx->pc = 0x223154u;
    // NOP
    // 0x223158: 0x0  nop
    ctx->pc = 0x223158u;
    // NOP
    // 0x22315c: 0x0  nop
    ctx->pc = 0x22315cu;
    // NOP
    ctx->pc = 0x223160u;
}
