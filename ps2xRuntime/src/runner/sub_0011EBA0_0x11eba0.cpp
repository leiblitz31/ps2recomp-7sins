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

// Function: sub_0011EBA0
// Address: 0x11eba0 - 0x11ec00
void sub_0011EBA0_0x11eba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011EBA0_0x11eba0");
#endif

    switch (ctx->pc) {
        case 0x11ebc0u: goto label_11ebc0;
        case 0x11ebe4u: goto label_11ebe4;
        default: break;
    }

    ctx->pc = 0x11eba0u;

    // 0x11eba0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x11eba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x11eba4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11eba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11eba8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x11eba8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x11ebac: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x11ebacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x11ebb0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x11ebb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11ebb4: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x11ebb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11ebb8: 0xc047074  jal         func_11C1D0
    ctx->pc = 0x11EBB8u;
    SET_GPR_U32(ctx, 31, 0x11EBC0u);
    ctx->pc = 0x11C1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11C1D0u, 0x11EBB8u, 0x11EBC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11EBC0u;
label_11ebc0:
    // 0x11ebc0: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x11ebc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x11ebc4: 0x24633560  addiu       $v1, $v1, 0x3560
    ctx->pc = 0x11ebc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13664));
    // 0x11ebc8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x11ebc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11ebcc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x11ebccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x11ebd0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x11ebd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11ebd4: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x11ebd4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x11ebd8: 0x24a51e48  addiu       $a1, $a1, 0x1E48
    ctx->pc = 0x11ebd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7752));
    // 0x11ebdc: 0xc04322c  jal         func_10C8B0
    ctx->pc = 0x11EBDCu;
    SET_GPR_U32(ctx, 31, 0x11EBE4u);
    ctx->pc = 0x10C8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C8B0u, 0x11EBDCu, 0x11EBE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11EBE4u;
label_11ebe4:
    // 0x11ebe4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x11ebe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11ebe8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11ebe8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11ebec: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x11ebecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x11ebf0: 0x3e00008  jr          $ra
    ctx->pc = 0x11EBF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11EBF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11EBF8u;
    // 0x11ebf8: 0x0  nop
    ctx->pc = 0x11ebf8u;
    // NOP
    // 0x11ebfc: 0x0  nop
    ctx->pc = 0x11ebfcu;
    // NOP
    ctx->pc = 0x11ec00u;
}
