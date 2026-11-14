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

// Function: sub_00291C00
// Address: 0x291c00 - 0x291cb0
void sub_00291C00_0x291c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00291C00_0x291c00");
#endif

    switch (ctx->pc) {
        case 0x291c70u: goto label_291c70;
        case 0x291c90u: goto label_291c90;
        default: break;
    }

    ctx->pc = 0x291c00u;

    // 0x291c00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x291c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x291c04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x291c04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x291c08: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x291c08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x291c0c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x291c0cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x291c10: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x291c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x291c14: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x291C14u;
    {
        const bool branch_taken_0x291c14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x291c14) {
            ctx->pc = 0x291C90u;
            goto label_291c90;
        }
    }
    ctx->pc = 0x291C1Cu;
    // 0x291c1c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x291c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x291c20: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x291c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x291c24: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x291C24u;
    {
        const bool branch_taken_0x291c24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x291c24) {
            ctx->pc = 0x291C70u;
            goto label_291c70;
        }
    }
    ctx->pc = 0x291C2Cu;
    // 0x291c2c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x291c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x291c30: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x291c30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x291c34: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x291c34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x291c38: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x291c38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x291c3c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x291c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x291c40: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x291c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x291c44: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x291c44u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x291c48: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x291c48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x291c4c: 0x33083  sra         $a2, $v1, 2
    ctx->pc = 0x291c4cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 2));
    // 0x291c50: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x291C50u;
    {
        const bool branch_taken_0x291c50 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x291c50) {
            ctx->pc = 0x291C60u;
            goto label_291c60;
        }
    }
    ctx->pc = 0x291C58u;
    // 0x291c58: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x291c58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x291c5c: 0x23083  sra         $a2, $v0, 2
    ctx->pc = 0x291c5cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
label_291c60:
    // 0x291c60: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x291c60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x291c64: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x291c64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x291c68: 0xc0a4e38  jal         func_2938E0
    ctx->pc = 0x291C68u;
    SET_GPR_U32(ctx, 31, 0x291C70u);
    ctx->pc = 0x2938E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2938E0u, 0x291C68u, 0x291C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291C70u;
label_291c70:
    // 0x291c70: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x291c70u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x291c74: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x291c74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x291c78: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x291c78u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x291c7c: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x291C7Cu;
    {
        const bool branch_taken_0x291c7c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x291c7c) {
            ctx->pc = 0x291C90u;
            goto label_291c90;
        }
    }
    ctx->pc = 0x291C84u;
    // 0x291c84: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x291c84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x291c88: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x291C88u;
    SET_GPR_U32(ctx, 31, 0x291C90u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x291C88u, 0x291C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291C90u;
label_291c90:
    // 0x291c90: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x291c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x291c94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x291c94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x291c98: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x291c98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x291c9c: 0x3e00008  jr          $ra
    ctx->pc = 0x291C9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x291C9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x291CA4u;
    // 0x291ca4: 0x0  nop
    ctx->pc = 0x291ca4u;
    // NOP
    // 0x291ca8: 0x0  nop
    ctx->pc = 0x291ca8u;
    // NOP
    // 0x291cac: 0x0  nop
    ctx->pc = 0x291cacu;
    // NOP
    ctx->pc = 0x291cb0u;
}
