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

// Function: sub_001A1ED0
// Address: 0x1a1ed0 - 0x1a1f80
void sub_001A1ED0_0x1a1ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A1ED0_0x1a1ed0");
#endif

    switch (ctx->pc) {
        case 0x1a1f40u: goto label_1a1f40;
        case 0x1a1f60u: goto label_1a1f60;
        default: break;
    }

    ctx->pc = 0x1a1ed0u;

    // 0x1a1ed0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a1ed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a1ed4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a1ed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a1ed8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1a1ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1a1edc: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x1a1edcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x1a1ee0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1a1ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a1ee4: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1A1EE4u;
    {
        const bool branch_taken_0x1a1ee4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1ee4) {
            ctx->pc = 0x1A1F60u;
            goto label_1a1f60;
        }
    }
    ctx->pc = 0x1A1EECu;
    // 0x1a1eec: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1a1eecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a1ef0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1a1ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a1ef4: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1A1EF4u;
    {
        const bool branch_taken_0x1a1ef4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1ef4) {
            ctx->pc = 0x1A1F40u;
            goto label_1a1f40;
        }
    }
    ctx->pc = 0x1A1EFCu;
    // 0x1a1efc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1a1efcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a1f00: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x1a1f00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a1f04: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1a1f04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a1f08: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1a1f08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1a1f0c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1a1f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a1f10: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1a1f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a1f14: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1a1f14u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a1f18: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1a1f18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1a1f1c: 0x33083  sra         $a2, $v1, 2
    ctx->pc = 0x1a1f1cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 2));
    // 0x1a1f20: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A1F20u;
    {
        const bool branch_taken_0x1a1f20 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1a1f20) {
            ctx->pc = 0x1A1F30u;
            goto label_1a1f30;
        }
    }
    ctx->pc = 0x1A1F28u;
    // 0x1a1f28: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x1a1f28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x1a1f2c: 0x23083  sra         $a2, $v0, 2
    ctx->pc = 0x1a1f2cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
label_1a1f30:
    // 0x1a1f30: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x1a1f30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x1a1f34: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x1a1f34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1a1f38: 0xc06a014  jal         func_1A8050
    ctx->pc = 0x1A1F38u;
    SET_GPR_U32(ctx, 31, 0x1A1F40u);
    ctx->pc = 0x1A8050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8050u, 0x1A1F38u, 0x1A1F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1F40u;
label_1a1f40:
    // 0x1a1f40: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x1a1f40u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a1f44: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1a1f44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1a1f48: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1a1f48u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1a1f4c: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A1F4Cu;
    {
        const bool branch_taken_0x1a1f4c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1a1f4c) {
            ctx->pc = 0x1A1F60u;
            goto label_1a1f60;
        }
    }
    ctx->pc = 0x1A1F54u;
    // 0x1a1f54: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1a1f54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a1f58: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x1A1F58u;
    SET_GPR_U32(ctx, 31, 0x1A1F60u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x1A1F58u, 0x1A1F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1F60u;
label_1a1f60:
    // 0x1a1f60: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1a1f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a1f64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a1f64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a1f68: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1a1f68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1a1f6c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A1F6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A1F6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A1F74u;
    // 0x1a1f74: 0x0  nop
    ctx->pc = 0x1a1f74u;
    // NOP
    // 0x1a1f78: 0x0  nop
    ctx->pc = 0x1a1f78u;
    // NOP
    // 0x1a1f7c: 0x0  nop
    ctx->pc = 0x1a1f7cu;
    // NOP
    ctx->pc = 0x1a1f80u;
}
