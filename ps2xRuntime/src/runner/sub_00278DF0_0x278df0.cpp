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

// Function: sub_00278DF0
// Address: 0x278df0 - 0x278ea0
void sub_00278DF0_0x278df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00278DF0_0x278df0");
#endif

    switch (ctx->pc) {
        case 0x278e60u: goto label_278e60;
        case 0x278e80u: goto label_278e80;
        default: break;
    }

    ctx->pc = 0x278df0u;

    // 0x278df0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x278df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x278df4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x278df4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x278df8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x278df8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x278dfc: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x278dfcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x278e00: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x278e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x278e04: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x278E04u;
    {
        const bool branch_taken_0x278e04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x278e04) {
            ctx->pc = 0x278E80u;
            goto label_278e80;
        }
    }
    ctx->pc = 0x278E0Cu;
    // 0x278e0c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x278e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x278e10: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x278e10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x278e14: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x278E14u;
    {
        const bool branch_taken_0x278e14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x278e14) {
            ctx->pc = 0x278E60u;
            goto label_278e60;
        }
    }
    ctx->pc = 0x278E1Cu;
    // 0x278e1c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x278e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x278e20: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x278e20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x278e24: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x278e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x278e28: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x278e28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x278e2c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x278e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x278e30: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x278e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x278e34: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x278e34u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x278e38: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x278e38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x278e3c: 0x33083  sra         $a2, $v1, 2
    ctx->pc = 0x278e3cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 2));
    // 0x278e40: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x278E40u;
    {
        const bool branch_taken_0x278e40 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x278e40) {
            ctx->pc = 0x278E50u;
            goto label_278e50;
        }
    }
    ctx->pc = 0x278E48u;
    // 0x278e48: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x278e48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x278e4c: 0x23083  sra         $a2, $v0, 2
    ctx->pc = 0x278e4cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
label_278e50:
    // 0x278e50: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x278e50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x278e54: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x278e54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x278e58: 0xc0a08c4  jal         func_282310
    ctx->pc = 0x278E58u;
    SET_GPR_U32(ctx, 31, 0x278E60u);
    ctx->pc = 0x282310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282310u, 0x278E58u, 0x278E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278E60u;
label_278e60:
    // 0x278e60: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x278e60u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x278e64: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x278e64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x278e68: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x278e68u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x278e6c: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x278E6Cu;
    {
        const bool branch_taken_0x278e6c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x278e6c) {
            ctx->pc = 0x278E80u;
            goto label_278e80;
        }
    }
    ctx->pc = 0x278E74u;
    // 0x278e74: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x278e74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x278e78: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x278E78u;
    SET_GPR_U32(ctx, 31, 0x278E80u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x278E78u, 0x278E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278E80u;
label_278e80:
    // 0x278e80: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x278e80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x278e84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x278e84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x278e88: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x278e88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x278e8c: 0x3e00008  jr          $ra
    ctx->pc = 0x278E8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x278E8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x278E94u;
    // 0x278e94: 0x0  nop
    ctx->pc = 0x278e94u;
    // NOP
    // 0x278e98: 0x0  nop
    ctx->pc = 0x278e98u;
    // NOP
    // 0x278e9c: 0x0  nop
    ctx->pc = 0x278e9cu;
    // NOP
    ctx->pc = 0x278ea0u;
}
