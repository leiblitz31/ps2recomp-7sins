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

// Function: sub_00207E00
// Address: 0x207e00 - 0x207eb0
void sub_00207E00_0x207e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00207E00_0x207e00");
#endif

    switch (ctx->pc) {
        case 0x207e70u: goto label_207e70;
        case 0x207e90u: goto label_207e90;
        default: break;
    }

    ctx->pc = 0x207e00u;

    // 0x207e00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x207e00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x207e04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x207e04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x207e08: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x207e08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x207e0c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x207e0cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x207e10: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x207e10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x207e14: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x207E14u;
    {
        const bool branch_taken_0x207e14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x207e14) {
            ctx->pc = 0x207E90u;
            goto label_207e90;
        }
    }
    ctx->pc = 0x207E1Cu;
    // 0x207e1c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x207e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x207e20: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x207e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x207e24: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x207E24u;
    {
        const bool branch_taken_0x207e24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x207e24) {
            ctx->pc = 0x207E70u;
            goto label_207e70;
        }
    }
    ctx->pc = 0x207E2Cu;
    // 0x207e2c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x207e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x207e30: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x207e30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x207e34: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x207e34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x207e38: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x207e38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x207e3c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x207e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x207e40: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x207e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x207e44: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x207e44u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x207e48: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x207e48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x207e4c: 0x33083  sra         $a2, $v1, 2
    ctx->pc = 0x207e4cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 2));
    // 0x207e50: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x207E50u;
    {
        const bool branch_taken_0x207e50 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x207e50) {
            ctx->pc = 0x207E60u;
            goto label_207e60;
        }
    }
    ctx->pc = 0x207E58u;
    // 0x207e58: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x207e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x207e5c: 0x23083  sra         $a2, $v0, 2
    ctx->pc = 0x207e5cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
label_207e60:
    // 0x207e60: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x207e60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x207e64: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x207e64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x207e68: 0xc08402c  jal         func_2100B0
    ctx->pc = 0x207E68u;
    SET_GPR_U32(ctx, 31, 0x207E70u);
    ctx->pc = 0x2100B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2100B0u, 0x207E68u, 0x207E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207E70u;
label_207e70:
    // 0x207e70: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x207e70u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x207e74: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x207e74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x207e78: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x207e78u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x207e7c: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x207E7Cu;
    {
        const bool branch_taken_0x207e7c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x207e7c) {
            ctx->pc = 0x207E90u;
            goto label_207e90;
        }
    }
    ctx->pc = 0x207E84u;
    // 0x207e84: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x207e84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x207e88: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x207E88u;
    SET_GPR_U32(ctx, 31, 0x207E90u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x207E88u, 0x207E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207E90u;
label_207e90:
    // 0x207e90: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x207e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x207e94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x207e94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x207e98: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x207e98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x207e9c: 0x3e00008  jr          $ra
    ctx->pc = 0x207E9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x207E9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x207EA4u;
    // 0x207ea4: 0x0  nop
    ctx->pc = 0x207ea4u;
    // NOP
    // 0x207ea8: 0x0  nop
    ctx->pc = 0x207ea8u;
    // NOP
    // 0x207eac: 0x0  nop
    ctx->pc = 0x207eacu;
    // NOP
    ctx->pc = 0x207eb0u;
}
