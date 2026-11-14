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

// Function: sub_00299E10
// Address: 0x299e10 - 0x299ec0
void sub_00299E10_0x299e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00299E10_0x299e10");
#endif

    switch (ctx->pc) {
        case 0x299e80u: goto label_299e80;
        case 0x299ea0u: goto label_299ea0;
        default: break;
    }

    ctx->pc = 0x299e10u;

    // 0x299e10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x299e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x299e14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x299e14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x299e18: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x299e18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x299e1c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x299e1cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x299e20: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x299e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x299e24: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x299E24u;
    {
        const bool branch_taken_0x299e24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x299e24) {
            ctx->pc = 0x299EA0u;
            goto label_299ea0;
        }
    }
    ctx->pc = 0x299E2Cu;
    // 0x299e2c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x299e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x299e30: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x299e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x299e34: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x299E34u;
    {
        const bool branch_taken_0x299e34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x299e34) {
            ctx->pc = 0x299E80u;
            goto label_299e80;
        }
    }
    ctx->pc = 0x299E3Cu;
    // 0x299e3c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x299e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x299e40: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x299e40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x299e44: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x299e44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x299e48: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x299e48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x299e4c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x299e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x299e50: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x299e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x299e54: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x299e54u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x299e58: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x299e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x299e5c: 0x33083  sra         $a2, $v1, 2
    ctx->pc = 0x299e5cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 2));
    // 0x299e60: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x299E60u;
    {
        const bool branch_taken_0x299e60 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x299e60) {
            ctx->pc = 0x299E70u;
            goto label_299e70;
        }
    }
    ctx->pc = 0x299E68u;
    // 0x299e68: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x299e68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x299e6c: 0x23083  sra         $a2, $v0, 2
    ctx->pc = 0x299e6cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
label_299e70:
    // 0x299e70: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x299e70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x299e74: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x299e74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x299e78: 0xc0a6d3c  jal         func_29B4F0
    ctx->pc = 0x299E78u;
    SET_GPR_U32(ctx, 31, 0x299E80u);
    ctx->pc = 0x29B4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29B4F0u, 0x299E78u, 0x299E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299E80u;
label_299e80:
    // 0x299e80: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x299e80u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x299e84: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x299e84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x299e88: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x299e88u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x299e8c: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x299E8Cu;
    {
        const bool branch_taken_0x299e8c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x299e8c) {
            ctx->pc = 0x299EA0u;
            goto label_299ea0;
        }
    }
    ctx->pc = 0x299E94u;
    // 0x299e94: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x299e94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x299e98: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x299E98u;
    SET_GPR_U32(ctx, 31, 0x299EA0u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x299E98u, 0x299EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299EA0u;
label_299ea0:
    // 0x299ea0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x299ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x299ea4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x299ea4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x299ea8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x299ea8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x299eac: 0x3e00008  jr          $ra
    ctx->pc = 0x299EACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x299EACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x299EB4u;
    // 0x299eb4: 0x0  nop
    ctx->pc = 0x299eb4u;
    // NOP
    // 0x299eb8: 0x0  nop
    ctx->pc = 0x299eb8u;
    // NOP
    // 0x299ebc: 0x0  nop
    ctx->pc = 0x299ebcu;
    // NOP
    ctx->pc = 0x299ec0u;
}
