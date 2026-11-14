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

// Function: sub_0011A870
// Address: 0x11a870 - 0x11a8e0
void sub_0011A870_0x11a870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011A870_0x11a870");
#endif

    switch (ctx->pc) {
        case 0x11a870u: goto label_11a870;
        case 0x11a874u: goto label_11a874;
        case 0x11a878u: goto label_11a878;
        case 0x11a87cu: goto label_11a87c;
        case 0x11a880u: goto label_11a880;
        case 0x11a884u: goto label_11a884;
        case 0x11a888u: goto label_11a888;
        case 0x11a88cu: goto label_11a88c;
        case 0x11a890u: goto label_11a890;
        case 0x11a894u: goto label_11a894;
        case 0x11a898u: goto label_11a898;
        case 0x11a89cu: goto label_11a89c;
        case 0x11a8a0u: goto label_11a8a0;
        case 0x11a8a4u: goto label_11a8a4;
        case 0x11a8a8u: goto label_11a8a8;
        case 0x11a8acu: goto label_11a8ac;
        case 0x11a8b0u: goto label_11a8b0;
        case 0x11a8b4u: goto label_11a8b4;
        case 0x11a8b8u: goto label_11a8b8;
        case 0x11a8bcu: goto label_11a8bc;
        case 0x11a8c0u: goto label_11a8c0;
        case 0x11a8c4u: goto label_11a8c4;
        case 0x11a8c8u: goto label_11a8c8;
        case 0x11a8ccu: goto label_11a8cc;
        case 0x11a8d0u: goto label_11a8d0;
        case 0x11a8d4u: goto label_11a8d4;
        case 0x11a8d8u: goto label_11a8d8;
        case 0x11a8dcu: goto label_11a8dc;
        default: break;
    }

    ctx->pc = 0x11a870u;

label_11a870:
    // 0x11a870: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x11a870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_11a874:
    // 0x11a874: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x11a874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_11a878:
    // 0x11a878: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x11a878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_11a87c:
    // 0x11a87c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x11a87cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
label_11a880:
    // 0x11a880: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x11a880u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_11a884:
    // 0x11a884: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x11a884u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
label_11a888:
    // 0x11a888: 0x27a40028  addiu       $a0, $sp, 0x28
    ctx->pc = 0x11a888u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
label_11a88c:
    // 0x11a88c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11a88cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11a890:
    // 0x11a890: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11a890u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11a894:
    // 0x11a894: 0xc046a48  jal         func_11A920
label_11a898:
    if (ctx->pc == 0x11A898u) {
        ctx->pc = 0x11A89Cu;
        goto label_11a89c;
    }
    ctx->pc = 0x11A894u;
    SET_GPR_U32(ctx, 31, 0x11A89Cu);
    ctx->pc = 0x11A920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11A920u, 0x11A894u, 0x11A89Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A89Cu;
label_11a89c:
    // 0x11a89c: 0x3c100012  lui         $s0, 0x12
    ctx->pc = 0x11a89cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)18 << 16));
label_11a8a0:
    // 0x11a8a0: 0x26109b50  addiu       $s0, $s0, -0x64B0
    ctx->pc = 0x11a8a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941520));
label_11a8a4:
    // 0x11a8a4: 0x27a4002c  addiu       $a0, $sp, 0x2C
    ctx->pc = 0x11a8a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_11a8a8:
    // 0x11a8a8: 0x200f809  jalr        $s0
label_11a8ac:
    if (ctx->pc == 0x11A8ACu) {
        ctx->pc = 0x11A8B0u;
        goto label_11a8b0;
    }
    ctx->pc = 0x11A8A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x11A8B0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11A8A8u, 0x11A8B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11A8B0u;
label_11a8b0:
    // 0x11a8b0: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x11a8b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_11a8b4:
    // 0x11a8b4: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x11a8b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_11a8b8:
    // 0x11a8b8: 0x8fa60050  lw          $a2, 0x50($sp)
    ctx->pc = 0x11a8b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_11a8bc:
    // 0x11a8bc: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x11a8bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_11a8c0:
    // 0x11a8c0: 0xc046a38  jal         func_11A8E0
label_11a8c4:
    if (ctx->pc == 0x11A8C4u) {
        ctx->pc = 0x11A8C8u;
        goto label_11a8c8;
    }
    ctx->pc = 0x11A8C0u;
    SET_GPR_U32(ctx, 31, 0x11A8C8u);
    ctx->pc = 0x11A8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11A8E0u, 0x11A8C0u, 0x11A8C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A8C8u;
label_11a8c8:
    // 0x11a8c8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11a8c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_11a8cc:
    // 0x11a8cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x11a8ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_11a8d0:
    // 0x11a8d0: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x11a8d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_11a8d4:
    // 0x11a8d4: 0x3e00008  jr          $ra
label_11a8d8:
    if (ctx->pc == 0x11A8D8u) {
        ctx->pc = 0x11A8DCu;
        goto label_11a8dc;
    }
    ctx->pc = 0x11A8D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11A8D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11A8DCu;
label_11a8dc:
    // 0x11a8dc: 0x0  nop
    ctx->pc = 0x11a8dcu;
    // NOP
    ctx->pc = 0x11a8e0u;
}
