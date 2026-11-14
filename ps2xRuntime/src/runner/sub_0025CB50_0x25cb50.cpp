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

// Function: sub_0025CB50
// Address: 0x25cb50 - 0x25cbd0
void sub_0025CB50_0x25cb50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025CB50_0x25cb50");
#endif

    switch (ctx->pc) {
        case 0x25cb74u: goto label_25cb74;
        case 0x25cbb8u: goto label_25cbb8;
        default: break;
    }

    ctx->pc = 0x25cb50u;

    // 0x25cb50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x25cb50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25cb54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25cb54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25cb58: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x25cb58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x25cb5c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x25cb5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25cb60: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x25cb60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25cb64: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x25cb64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25cb68: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x25cb68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x25cb6c: 0xc0961c4  jal         func_258710
    ctx->pc = 0x25CB6Cu;
    SET_GPR_U32(ctx, 31, 0x25CB74u);
    ctx->pc = 0x258710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258710u, 0x25CB6Cu, 0x25CB74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CB74u;
label_25cb74:
    // 0x25cb74: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x25cb74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25cb78: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x25cb78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25cb7c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x25cb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25cb80: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x25cb80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x25cb84: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x25cb84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25cb88: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x25cb88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25cb8c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x25cb8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25cb90: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x25cb90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x25cb94: 0x33083  sra         $a2, $v1, 2
    ctx->pc = 0x25cb94u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 2));
    // 0x25cb98: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x25CB98u;
    {
        const bool branch_taken_0x25cb98 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x25cb98) {
            ctx->pc = 0x25CBA8u;
            goto label_25cba8;
        }
    }
    ctx->pc = 0x25CBA0u;
    // 0x25cba0: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x25cba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x25cba4: 0x23083  sra         $a2, $v0, 2
    ctx->pc = 0x25cba4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
label_25cba8:
    // 0x25cba8: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x25cba8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x25cbac: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x25cbacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x25cbb0: 0xc0971bc  jal         func_25C6F0
    ctx->pc = 0x25CBB0u;
    SET_GPR_U32(ctx, 31, 0x25CBB8u);
    ctx->pc = 0x25C6F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C6F0u, 0x25CBB0u, 0x25CBB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CBB8u;
label_25cbb8:
    // 0x25cbb8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25cbb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25cbbc: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x25cbbcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x25cbc0: 0x3e00008  jr          $ra
    ctx->pc = 0x25CBC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25CBC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25CBC8u;
    // 0x25cbc8: 0x0  nop
    ctx->pc = 0x25cbc8u;
    // NOP
    // 0x25cbcc: 0x0  nop
    ctx->pc = 0x25cbccu;
    // NOP
    ctx->pc = 0x25cbd0u;
}
