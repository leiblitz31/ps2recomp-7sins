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

// Function: sub_0027AB20
// Address: 0x27ab20 - 0x27aba0
void sub_0027AB20_0x27ab20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027AB20_0x27ab20");
#endif

    switch (ctx->pc) {
        case 0x27ab44u: goto label_27ab44;
        case 0x27ab88u: goto label_27ab88;
        default: break;
    }

    ctx->pc = 0x27ab20u;

    // 0x27ab20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x27ab20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x27ab24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x27ab24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x27ab28: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x27ab28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x27ab2c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x27ab2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27ab30: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x27ab30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27ab34: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x27ab34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x27ab38: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x27ab38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x27ab3c: 0xc09e3a8  jal         func_278EA0
    ctx->pc = 0x27AB3Cu;
    SET_GPR_U32(ctx, 31, 0x27AB44u);
    ctx->pc = 0x278EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278EA0u, 0x27AB3Cu, 0x27AB44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AB44u;
label_27ab44:
    // 0x27ab44: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x27ab44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27ab48: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x27ab48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27ab4c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x27ab4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27ab50: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x27ab50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x27ab54: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x27ab54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27ab58: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x27ab58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27ab5c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x27ab5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x27ab60: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x27ab60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x27ab64: 0x33083  sra         $a2, $v1, 2
    ctx->pc = 0x27ab64u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 2));
    // 0x27ab68: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x27AB68u;
    {
        const bool branch_taken_0x27ab68 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x27ab68) {
            ctx->pc = 0x27AB78u;
            goto label_27ab78;
        }
    }
    ctx->pc = 0x27AB70u;
    // 0x27ab70: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x27ab70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x27ab74: 0x23083  sra         $a2, $v0, 2
    ctx->pc = 0x27ab74u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
label_27ab78:
    // 0x27ab78: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x27ab78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x27ab7c: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x27ab7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x27ab80: 0xc0a08c4  jal         func_282310
    ctx->pc = 0x27AB80u;
    SET_GPR_U32(ctx, 31, 0x27AB88u);
    ctx->pc = 0x282310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282310u, 0x27AB80u, 0x27AB88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AB88u;
label_27ab88:
    // 0x27ab88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27ab88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27ab8c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x27ab8cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x27ab90: 0x3e00008  jr          $ra
    ctx->pc = 0x27AB90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27AB90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27AB98u;
    // 0x27ab98: 0x0  nop
    ctx->pc = 0x27ab98u;
    // NOP
    // 0x27ab9c: 0x0  nop
    ctx->pc = 0x27ab9cu;
    // NOP
    ctx->pc = 0x27aba0u;
}
