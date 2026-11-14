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

// Function: sub_00469C00
// Address: 0x469c00 - 0x469cb0
void sub_00469C00_0x469c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00469C00_0x469c00");
#endif

    switch (ctx->pc) {
        case 0x469c70u: goto label_469c70;
        case 0x469c90u: goto label_469c90;
        default: break;
    }

    ctx->pc = 0x469c00u;

    // 0x469c00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x469c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x469c04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x469c04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x469c08: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x469c08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x469c0c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x469c0cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x469c10: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x469c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x469c14: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x469C14u;
    {
        const bool branch_taken_0x469c14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x469c14) {
            ctx->pc = 0x469C90u;
            goto label_469c90;
        }
    }
    ctx->pc = 0x469C1Cu;
    // 0x469c1c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x469c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x469c20: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x469c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x469c24: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x469C24u;
    {
        const bool branch_taken_0x469c24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x469c24) {
            ctx->pc = 0x469C70u;
            goto label_469c70;
        }
    }
    ctx->pc = 0x469C2Cu;
    // 0x469c2c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x469c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x469c30: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x469c30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x469c34: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x469c34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x469c38: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x469c38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x469c3c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x469c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x469c40: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x469c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x469c44: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x469c44u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x469c48: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x469c48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x469c4c: 0x33083  sra         $a2, $v1, 2
    ctx->pc = 0x469c4cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 2));
    // 0x469c50: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x469C50u;
    {
        const bool branch_taken_0x469c50 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x469c50) {
            ctx->pc = 0x469C60u;
            goto label_469c60;
        }
    }
    ctx->pc = 0x469C58u;
    // 0x469c58: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x469c58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x469c5c: 0x23083  sra         $a2, $v0, 2
    ctx->pc = 0x469c5cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
label_469c60:
    // 0x469c60: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x469c60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x469c64: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x469c64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x469c68: 0xc11aa80  jal         func_46AA00
    ctx->pc = 0x469C68u;
    SET_GPR_U32(ctx, 31, 0x469C70u);
    ctx->pc = 0x46AA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46AA00u, 0x469C68u, 0x469C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x469C70u;
label_469c70:
    // 0x469c70: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x469c70u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x469c74: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x469c74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x469c78: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x469c78u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x469c7c: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x469C7Cu;
    {
        const bool branch_taken_0x469c7c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x469c7c) {
            ctx->pc = 0x469C90u;
            goto label_469c90;
        }
    }
    ctx->pc = 0x469C84u;
    // 0x469c84: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x469c84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x469c88: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x469C88u;
    SET_GPR_U32(ctx, 31, 0x469C90u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x469C88u, 0x469C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x469C90u;
label_469c90:
    // 0x469c90: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x469c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x469c94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x469c94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x469c98: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x469c98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x469c9c: 0x3e00008  jr          $ra
    ctx->pc = 0x469C9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x469C9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x469CA4u;
    // 0x469ca4: 0x0  nop
    ctx->pc = 0x469ca4u;
    // NOP
    // 0x469ca8: 0x0  nop
    ctx->pc = 0x469ca8u;
    // NOP
    // 0x469cac: 0x0  nop
    ctx->pc = 0x469cacu;
    // NOP
    ctx->pc = 0x469cb0u;
}
