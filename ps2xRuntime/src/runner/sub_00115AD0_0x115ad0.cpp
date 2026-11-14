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

// Function: sub_00115AD0
// Address: 0x115ad0 - 0x115b40
void sub_00115AD0_0x115ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00115AD0_0x115ad0");
#endif

    switch (ctx->pc) {
        case 0x115af0u: goto label_115af0;
        case 0x115b04u: goto label_115b04;
        case 0x115b18u: goto label_115b18;
        default: break;
    }

    ctx->pc = 0x115ad0u;

    // 0x115ad0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x115ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x115ad4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x115ad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x115ad8: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x115ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x115adc: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x115adcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x115ae0: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x115ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x115ae4: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x115ae4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x115ae8: 0xc0456ec  jal         func_115BB0
    ctx->pc = 0x115AE8u;
    SET_GPR_U32(ctx, 31, 0x115AF0u);
    ctx->pc = 0x115BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115BB0u, 0x115AE8u, 0x115AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115AF0u;
label_115af0:
    // 0x115af0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x115af0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x115af4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x115af4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115af8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x115af8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115afc: 0xc0456d0  jal         func_115B40
    ctx->pc = 0x115AFCu;
    SET_GPR_U32(ctx, 31, 0x115B04u);
    ctx->pc = 0x115B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115B40u, 0x115AFCu, 0x115B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115B04u;
label_115b04:
    // 0x115b04: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x115b04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x115b08: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x115b08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x115b0c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x115b0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115b10: 0xc0459b4  jal         func_1166D0
    ctx->pc = 0x115B10u;
    SET_GPR_U32(ctx, 31, 0x115B18u);
    ctx->pc = 0x1166D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1166D0u, 0x115B10u, 0x115B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115B18u;
label_115b18:
    // 0x115b18: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x115b18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x115b1c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x115b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x115b20: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x115b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x115b24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x115b24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x115b28: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x115b28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x115b2c: 0x3e00008  jr          $ra
    ctx->pc = 0x115B2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115B2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x115B34u;
    // 0x115b34: 0x0  nop
    ctx->pc = 0x115b34u;
    // NOP
    // 0x115b38: 0x0  nop
    ctx->pc = 0x115b38u;
    // NOP
    // 0x115b3c: 0x0  nop
    ctx->pc = 0x115b3cu;
    // NOP
    ctx->pc = 0x115b40u;
}
