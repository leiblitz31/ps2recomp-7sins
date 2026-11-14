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

// Function: sub_001E9F20
// Address: 0x1e9f20 - 0x1e9fd0
void sub_001E9F20_0x1e9f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E9F20_0x1e9f20");
#endif

    switch (ctx->pc) {
        case 0x1e9f90u: goto label_1e9f90;
        case 0x1e9fb0u: goto label_1e9fb0;
        default: break;
    }

    ctx->pc = 0x1e9f20u;

    // 0x1e9f20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e9f20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e9f24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e9f24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e9f28: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1e9f28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1e9f2c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x1e9f2cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x1e9f30: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1e9f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e9f34: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1E9F34u;
    {
        const bool branch_taken_0x1e9f34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9f34) {
            ctx->pc = 0x1E9FB0u;
            goto label_1e9fb0;
        }
    }
    ctx->pc = 0x1E9F3Cu;
    // 0x1e9f3c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1e9f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e9f40: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e9f40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e9f44: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1E9F44u;
    {
        const bool branch_taken_0x1e9f44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e9f44) {
            ctx->pc = 0x1E9F90u;
            goto label_1e9f90;
        }
    }
    ctx->pc = 0x1E9F4Cu;
    // 0x1e9f4c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1e9f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e9f50: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x1e9f50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e9f54: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1e9f54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e9f58: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1e9f58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1e9f5c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1e9f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e9f60: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e9f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e9f64: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1e9f64u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e9f68: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1e9f68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1e9f6c: 0x33083  sra         $a2, $v1, 2
    ctx->pc = 0x1e9f6cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 2));
    // 0x1e9f70: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E9F70u;
    {
        const bool branch_taken_0x1e9f70 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1e9f70) {
            ctx->pc = 0x1E9F80u;
            goto label_1e9f80;
        }
    }
    ctx->pc = 0x1E9F78u;
    // 0x1e9f78: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x1e9f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x1e9f7c: 0x23083  sra         $a2, $v0, 2
    ctx->pc = 0x1e9f7cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
label_1e9f80:
    // 0x1e9f80: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x1e9f80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x1e9f84: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x1e9f84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1e9f88: 0xc07c2e4  jal         func_1F0B90
    ctx->pc = 0x1E9F88u;
    SET_GPR_U32(ctx, 31, 0x1E9F90u);
    ctx->pc = 0x1F0B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F0B90u, 0x1E9F88u, 0x1E9F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9F90u;
label_1e9f90:
    // 0x1e9f90: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x1e9f90u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e9f94: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1e9f94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1e9f98: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1e9f98u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1e9f9c: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E9F9Cu;
    {
        const bool branch_taken_0x1e9f9c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1e9f9c) {
            ctx->pc = 0x1E9FB0u;
            goto label_1e9fb0;
        }
    }
    ctx->pc = 0x1E9FA4u;
    // 0x1e9fa4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1e9fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e9fa8: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x1E9FA8u;
    SET_GPR_U32(ctx, 31, 0x1E9FB0u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x1E9FA8u, 0x1E9FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E9FB0u;
label_1e9fb0:
    // 0x1e9fb0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1e9fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e9fb4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e9fb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e9fb8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1e9fb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1e9fbc: 0x3e00008  jr          $ra
    ctx->pc = 0x1E9FBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E9FBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E9FC4u;
    // 0x1e9fc4: 0x0  nop
    ctx->pc = 0x1e9fc4u;
    // NOP
    // 0x1e9fc8: 0x0  nop
    ctx->pc = 0x1e9fc8u;
    // NOP
    // 0x1e9fcc: 0x0  nop
    ctx->pc = 0x1e9fccu;
    // NOP
    ctx->pc = 0x1e9fd0u;
}
