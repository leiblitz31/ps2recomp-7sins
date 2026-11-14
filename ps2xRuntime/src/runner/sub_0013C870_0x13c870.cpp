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

// Function: sub_0013C870
// Address: 0x13c870 - 0x13c8e0
void sub_0013C870_0x13c870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013C870_0x13c870");
#endif

    switch (ctx->pc) {
        case 0x13c870u: goto label_13c870;
        case 0x13c874u: goto label_13c874;
        case 0x13c878u: goto label_13c878;
        case 0x13c87cu: goto label_13c87c;
        case 0x13c880u: goto label_13c880;
        case 0x13c884u: goto label_13c884;
        case 0x13c888u: goto label_13c888;
        case 0x13c88cu: goto label_13c88c;
        case 0x13c890u: goto label_13c890;
        case 0x13c894u: goto label_13c894;
        case 0x13c898u: goto label_13c898;
        case 0x13c89cu: goto label_13c89c;
        case 0x13c8a0u: goto label_13c8a0;
        case 0x13c8a4u: goto label_13c8a4;
        case 0x13c8a8u: goto label_13c8a8;
        case 0x13c8acu: goto label_13c8ac;
        case 0x13c8b0u: goto label_13c8b0;
        case 0x13c8b4u: goto label_13c8b4;
        case 0x13c8b8u: goto label_13c8b8;
        case 0x13c8bcu: goto label_13c8bc;
        case 0x13c8c0u: goto label_13c8c0;
        case 0x13c8c4u: goto label_13c8c4;
        case 0x13c8c8u: goto label_13c8c8;
        case 0x13c8ccu: goto label_13c8cc;
        case 0x13c8d0u: goto label_13c8d0;
        case 0x13c8d4u: goto label_13c8d4;
        case 0x13c8d8u: goto label_13c8d8;
        case 0x13c8dcu: goto label_13c8dc;
        default: break;
    }

    ctx->pc = 0x13c870u;

label_13c870:
    // 0x13c870: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x13c870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_13c874:
    // 0x13c874: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x13c874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_13c878:
    // 0x13c878: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13c878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_13c87c:
    // 0x13c87c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x13c87cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
label_13c880:
    // 0x13c880: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x13c880u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_13c884:
    // 0x13c884: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x13c884u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
label_13c888:
    // 0x13c888: 0x27a40028  addiu       $a0, $sp, 0x28
    ctx->pc = 0x13c888u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
label_13c88c:
    // 0x13c88c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x13c88cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13c890:
    // 0x13c890: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x13c890u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13c894:
    // 0x13c894: 0xc04f248  jal         func_13C920
label_13c898:
    if (ctx->pc == 0x13C898u) {
        ctx->pc = 0x13C89Cu;
        goto label_13c89c;
    }
    ctx->pc = 0x13C894u;
    SET_GPR_U32(ctx, 31, 0x13C89Cu);
    ctx->pc = 0x13C920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C920u, 0x13C894u, 0x13C89Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C89Cu;
label_13c89c:
    // 0x13c89c: 0x3c100014  lui         $s0, 0x14
    ctx->pc = 0x13c89cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)20 << 16));
label_13c8a0:
    // 0x13c8a0: 0x2610c030  addiu       $s0, $s0, -0x3FD0
    ctx->pc = 0x13c8a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294950960));
label_13c8a4:
    // 0x13c8a4: 0x27a4002c  addiu       $a0, $sp, 0x2C
    ctx->pc = 0x13c8a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_13c8a8:
    // 0x13c8a8: 0x200f809  jalr        $s0
label_13c8ac:
    if (ctx->pc == 0x13C8ACu) {
        ctx->pc = 0x13C8B0u;
        goto label_13c8b0;
    }
    ctx->pc = 0x13C8A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x13C8B0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13C8A8u, 0x13C8B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13C8B0u;
label_13c8b0:
    // 0x13c8b0: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x13c8b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_13c8b4:
    // 0x13c8b4: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x13c8b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_13c8b8:
    // 0x13c8b8: 0x8fa60050  lw          $a2, 0x50($sp)
    ctx->pc = 0x13c8b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_13c8bc:
    // 0x13c8bc: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x13c8bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_13c8c0:
    // 0x13c8c0: 0xc04f238  jal         func_13C8E0
label_13c8c4:
    if (ctx->pc == 0x13C8C4u) {
        ctx->pc = 0x13C8C8u;
        goto label_13c8c8;
    }
    ctx->pc = 0x13C8C0u;
    SET_GPR_U32(ctx, 31, 0x13C8C8u);
    ctx->pc = 0x13C8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C8E0u, 0x13C8C0u, 0x13C8C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C8C8u;
label_13c8c8:
    // 0x13c8c8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13c8c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_13c8cc:
    // 0x13c8cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13c8ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_13c8d0:
    // 0x13c8d0: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x13c8d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_13c8d4:
    // 0x13c8d4: 0x3e00008  jr          $ra
label_13c8d8:
    if (ctx->pc == 0x13C8D8u) {
        ctx->pc = 0x13C8DCu;
        goto label_13c8dc;
    }
    ctx->pc = 0x13C8D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13C8D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13C8DCu;
label_13c8dc:
    // 0x13c8dc: 0x0  nop
    ctx->pc = 0x13c8dcu;
    // NOP
    ctx->pc = 0x13c8e0u;
}
