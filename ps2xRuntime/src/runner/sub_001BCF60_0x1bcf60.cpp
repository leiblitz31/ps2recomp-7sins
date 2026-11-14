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

// Function: sub_001BCF60
// Address: 0x1bcf60 - 0x1bd010
void sub_001BCF60_0x1bcf60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BCF60_0x1bcf60");
#endif

    switch (ctx->pc) {
        case 0x1bcfd0u: goto label_1bcfd0;
        case 0x1bcff0u: goto label_1bcff0;
        default: break;
    }

    ctx->pc = 0x1bcf60u;

    // 0x1bcf60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1bcf60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1bcf64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bcf64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1bcf68: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1bcf68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1bcf6c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x1bcf6cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x1bcf70: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1bcf70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bcf74: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1BCF74u;
    {
        const bool branch_taken_0x1bcf74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bcf74) {
            ctx->pc = 0x1BCFF0u;
            goto label_1bcff0;
        }
    }
    ctx->pc = 0x1BCF7Cu;
    // 0x1bcf7c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1bcf7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bcf80: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1bcf80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bcf84: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1BCF84u;
    {
        const bool branch_taken_0x1bcf84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bcf84) {
            ctx->pc = 0x1BCFD0u;
            goto label_1bcfd0;
        }
    }
    ctx->pc = 0x1BCF8Cu;
    // 0x1bcf8c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1bcf8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bcf90: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x1bcf90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bcf94: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1bcf94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bcf98: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1bcf98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1bcf9c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1bcf9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bcfa0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1bcfa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bcfa4: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1bcfa4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1bcfa8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1bcfa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1bcfac: 0x33083  sra         $a2, $v1, 2
    ctx->pc = 0x1bcfacu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 2));
    // 0x1bcfb0: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BCFB0u;
    {
        const bool branch_taken_0x1bcfb0 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1bcfb0) {
            ctx->pc = 0x1BCFC0u;
            goto label_1bcfc0;
        }
    }
    ctx->pc = 0x1BCFB8u;
    // 0x1bcfb8: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x1bcfb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x1bcfbc: 0x23083  sra         $a2, $v0, 2
    ctx->pc = 0x1bcfbcu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
label_1bcfc0:
    // 0x1bcfc0: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x1bcfc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x1bcfc4: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x1bcfc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1bcfc8: 0xc070ddc  jal         func_1C3770
    ctx->pc = 0x1BCFC8u;
    SET_GPR_U32(ctx, 31, 0x1BCFD0u);
    ctx->pc = 0x1C3770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3770u, 0x1BCFC8u, 0x1BCFD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCFD0u;
label_1bcfd0:
    // 0x1bcfd0: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x1bcfd0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bcfd4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1bcfd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1bcfd8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1bcfd8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1bcfdc: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BCFDCu;
    {
        const bool branch_taken_0x1bcfdc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1bcfdc) {
            ctx->pc = 0x1BCFF0u;
            goto label_1bcff0;
        }
    }
    ctx->pc = 0x1BCFE4u;
    // 0x1bcfe4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1bcfe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bcfe8: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x1BCFE8u;
    SET_GPR_U32(ctx, 31, 0x1BCFF0u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x1BCFE8u, 0x1BCFF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCFF0u;
label_1bcff0:
    // 0x1bcff0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1bcff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bcff4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bcff4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bcff8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1bcff8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1bcffc: 0x3e00008  jr          $ra
    ctx->pc = 0x1BCFFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BCFFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BD004u;
    // 0x1bd004: 0x0  nop
    ctx->pc = 0x1bd004u;
    // NOP
    // 0x1bd008: 0x0  nop
    ctx->pc = 0x1bd008u;
    // NOP
    // 0x1bd00c: 0x0  nop
    ctx->pc = 0x1bd00cu;
    // NOP
    ctx->pc = 0x1bd010u;
}
