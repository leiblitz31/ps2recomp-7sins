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

// Function: sub_001C6ED0
// Address: 0x1c6ed0 - 0x1c6f80
void sub_001C6ED0_0x1c6ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C6ED0_0x1c6ed0");
#endif

    switch (ctx->pc) {
        case 0x1c6f40u: goto label_1c6f40;
        case 0x1c6f60u: goto label_1c6f60;
        default: break;
    }

    ctx->pc = 0x1c6ed0u;

    // 0x1c6ed0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c6ed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c6ed4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c6ed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c6ed8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1c6ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1c6edc: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x1c6edcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x1c6ee0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1c6ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c6ee4: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1C6EE4u;
    {
        const bool branch_taken_0x1c6ee4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6ee4) {
            ctx->pc = 0x1C6F60u;
            goto label_1c6f60;
        }
    }
    ctx->pc = 0x1C6EECu;
    // 0x1c6eec: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1c6eecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c6ef0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1c6ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c6ef4: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1C6EF4u;
    {
        const bool branch_taken_0x1c6ef4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6ef4) {
            ctx->pc = 0x1C6F40u;
            goto label_1c6f40;
        }
    }
    ctx->pc = 0x1C6EFCu;
    // 0x1c6efc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1c6efcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c6f00: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x1c6f00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c6f04: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1c6f04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c6f08: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1c6f08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1c6f0c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1c6f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c6f10: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1c6f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c6f14: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1c6f14u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1c6f18: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1c6f18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1c6f1c: 0x33103  sra         $a2, $v1, 4
    ctx->pc = 0x1c6f1cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 4));
    // 0x1c6f20: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C6F20u;
    {
        const bool branch_taken_0x1c6f20 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1c6f20) {
            ctx->pc = 0x1C6F30u;
            goto label_1c6f30;
        }
    }
    ctx->pc = 0x1C6F28u;
    // 0x1c6f28: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x1c6f28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x1c6f2c: 0x23103  sra         $a2, $v0, 4
    ctx->pc = 0x1c6f2cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 4));
label_1c6f30:
    // 0x1c6f30: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x1c6f30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x1c6f34: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x1c6f34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1c6f38: 0xc0725a4  jal         func_1C9690
    ctx->pc = 0x1C6F38u;
    SET_GPR_U32(ctx, 31, 0x1C6F40u);
    ctx->pc = 0x1C9690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9690u, 0x1C6F38u, 0x1C6F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6F40u;
label_1c6f40:
    // 0x1c6f40: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x1c6f40u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c6f44: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1c6f44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1c6f48: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1c6f48u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1c6f4c: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C6F4Cu;
    {
        const bool branch_taken_0x1c6f4c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1c6f4c) {
            ctx->pc = 0x1C6F60u;
            goto label_1c6f60;
        }
    }
    ctx->pc = 0x1C6F54u;
    // 0x1c6f54: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1c6f54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c6f58: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x1C6F58u;
    SET_GPR_U32(ctx, 31, 0x1C6F60u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x1C6F58u, 0x1C6F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6F60u;
label_1c6f60:
    // 0x1c6f60: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1c6f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c6f64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c6f64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c6f68: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1c6f68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1c6f6c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C6F6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C6F6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C6F74u;
    // 0x1c6f74: 0x0  nop
    ctx->pc = 0x1c6f74u;
    // NOP
    // 0x1c6f78: 0x0  nop
    ctx->pc = 0x1c6f78u;
    // NOP
    // 0x1c6f7c: 0x0  nop
    ctx->pc = 0x1c6f7cu;
    // NOP
    ctx->pc = 0x1c6f80u;
}
