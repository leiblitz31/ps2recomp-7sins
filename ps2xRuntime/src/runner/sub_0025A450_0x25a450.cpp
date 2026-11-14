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

// Function: sub_0025A450
// Address: 0x25a450 - 0x25a540
void sub_0025A450_0x25a450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025A450_0x25a450");
#endif

    switch (ctx->pc) {
        case 0x25a480u: goto label_25a480;
        case 0x25a498u: goto label_25a498;
        case 0x25a4acu: goto label_25a4ac;
        case 0x25a4c4u: goto label_25a4c4;
        case 0x25a4d8u: goto label_25a4d8;
        case 0x25a4f0u: goto label_25a4f0;
        case 0x25a504u: goto label_25a504;
        case 0x25a51cu: goto label_25a51c;
        default: break;
    }

    ctx->pc = 0x25a450u;

    // 0x25a450: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x25a450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x25a454: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x25a454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x25a458: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25a458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25a45c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x25a45cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x25a460: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x25a460u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x25a464: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x25a464u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x25a468: 0xafa70050  sw          $a3, 0x50($sp)
    ctx->pc = 0x25a468u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 7));
    // 0x25a46c: 0xafa80060  sw          $t0, 0x60($sp)
    ctx->pc = 0x25a46cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 8));
    // 0x25a470: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x25a470u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25a474: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x25a474u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25a478: 0xc096f14  jal         func_25BC50
    ctx->pc = 0x25A478u;
    SET_GPR_U32(ctx, 31, 0x25A480u);
    ctx->pc = 0x25BC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BC50u, 0x25A478u, 0x25A480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A480u;
label_25a480:
    // 0x25a480: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x25a480u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a484: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x25a484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25a488: 0x24440168  addiu       $a0, $v0, 0x168
    ctx->pc = 0x25a488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 360));
    // 0x25a48c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x25a48cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a490: 0xc0962b4  jal         func_258AD0
    ctx->pc = 0x25A490u;
    SET_GPR_U32(ctx, 31, 0x25A498u);
    ctx->pc = 0x258AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258AD0u, 0x25A490u, 0x25A498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A498u;
label_25a498:
    // 0x25a498: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x25a498u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x25a49c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x25a49cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25a4a0: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x25a4a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25a4a4: 0xc096f14  jal         func_25BC50
    ctx->pc = 0x25A4A4u;
    SET_GPR_U32(ctx, 31, 0x25A4ACu);
    ctx->pc = 0x25BC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BC50u, 0x25A4A4u, 0x25A4ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A4ACu;
label_25a4ac:
    // 0x25a4ac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x25a4acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a4b0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x25a4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25a4b4: 0x24440168  addiu       $a0, $v0, 0x168
    ctx->pc = 0x25a4b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 360));
    // 0x25a4b8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x25a4b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25a4bc: 0xc0962b4  jal         func_258AD0
    ctx->pc = 0x25A4BCu;
    SET_GPR_U32(ctx, 31, 0x25A4C4u);
    ctx->pc = 0x258AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258AD0u, 0x25A4BCu, 0x25A4C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A4C4u;
label_25a4c4:
    // 0x25a4c4: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x25a4c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x25a4c8: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x25a4c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25a4cc: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x25a4ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25a4d0: 0xc096f14  jal         func_25BC50
    ctx->pc = 0x25A4D0u;
    SET_GPR_U32(ctx, 31, 0x25A4D8u);
    ctx->pc = 0x25BC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BC50u, 0x25A4D0u, 0x25A4D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A4D8u;
label_25a4d8:
    // 0x25a4d8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x25a4d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a4dc: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x25a4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25a4e0: 0x24440168  addiu       $a0, $v0, 0x168
    ctx->pc = 0x25a4e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 360));
    // 0x25a4e4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x25a4e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x25a4e8: 0xc0962b4  jal         func_258AD0
    ctx->pc = 0x25A4E8u;
    SET_GPR_U32(ctx, 31, 0x25A4F0u);
    ctx->pc = 0x258AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258AD0u, 0x25A4E8u, 0x25A4F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A4F0u;
label_25a4f0:
    // 0x25a4f0: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x25a4f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x25a4f4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x25a4f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25a4f8: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x25a4f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x25a4fc: 0xc096f14  jal         func_25BC50
    ctx->pc = 0x25A4FCu;
    SET_GPR_U32(ctx, 31, 0x25A504u);
    ctx->pc = 0x25BC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BC50u, 0x25A4FCu, 0x25A504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A504u;
label_25a504:
    // 0x25a504: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x25a504u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a508: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x25a508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25a50c: 0x24440168  addiu       $a0, $v0, 0x168
    ctx->pc = 0x25a50cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 360));
    // 0x25a510: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x25a510u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x25a514: 0xc0962b4  jal         func_258AD0
    ctx->pc = 0x25A514u;
    SET_GPR_U32(ctx, 31, 0x25A51Cu);
    ctx->pc = 0x258AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258AD0u, 0x25A514u, 0x25A51Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A51Cu;
label_25a51c:
    // 0x25a51c: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x25a51cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x25a520: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x25a520u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25a524: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25a524u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25a528: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x25a528u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x25a52c: 0x3e00008  jr          $ra
    ctx->pc = 0x25A52Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25A52Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25A534u;
    // 0x25a534: 0x0  nop
    ctx->pc = 0x25a534u;
    // NOP
    // 0x25a538: 0x0  nop
    ctx->pc = 0x25a538u;
    // NOP
    // 0x25a53c: 0x0  nop
    ctx->pc = 0x25a53cu;
    // NOP
    ctx->pc = 0x25a540u;
}
