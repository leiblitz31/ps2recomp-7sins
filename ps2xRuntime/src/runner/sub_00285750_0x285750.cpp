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

// Function: sub_00285750
// Address: 0x285750 - 0x2857c0
void sub_00285750_0x285750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00285750_0x285750");
#endif

    switch (ctx->pc) {
        case 0x285770u: goto label_285770;
        case 0x285784u: goto label_285784;
        case 0x285798u: goto label_285798;
        default: break;
    }

    ctx->pc = 0x285750u;

    // 0x285750: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x285750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x285754: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x285754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x285758: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x285758u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x28575c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x28575cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x285760: 0x27a4001c  addiu       $a0, $sp, 0x1C
    ctx->pc = 0x285760u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x285764: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x285764u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x285768: 0xc0a160c  jal         func_285830
    ctx->pc = 0x285768u;
    SET_GPR_U32(ctx, 31, 0x285770u);
    ctx->pc = 0x285830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285830u, 0x285768u, 0x285770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285770u;
label_285770:
    // 0x285770: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x285770u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x285774: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x285774u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285778: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x285778u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28577c: 0xc0a15f0  jal         func_2857C0
    ctx->pc = 0x28577Cu;
    SET_GPR_U32(ctx, 31, 0x285784u);
    ctx->pc = 0x2857C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2857C0u, 0x28577Cu, 0x285784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285784u;
label_285784:
    // 0x285784: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x285784u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x285788: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x285788u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28578c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x28578cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285790: 0xc0a3804  jal         func_28E010
    ctx->pc = 0x285790u;
    SET_GPR_U32(ctx, 31, 0x285798u);
    ctx->pc = 0x28E010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E010u, 0x285790u, 0x285798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285798u;
label_285798:
    // 0x285798: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x285798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28579c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x28579cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2857a0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2857a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2857a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2857a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2857a8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2857a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2857ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2857ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2857ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2857B4u;
    // 0x2857b4: 0x0  nop
    ctx->pc = 0x2857b4u;
    // NOP
    // 0x2857b8: 0x0  nop
    ctx->pc = 0x2857b8u;
    // NOP
    // 0x2857bc: 0x0  nop
    ctx->pc = 0x2857bcu;
    // NOP
    ctx->pc = 0x2857c0u;
}
