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

// Function: sub_001506C0
// Address: 0x1506c0 - 0x150780
void sub_001506C0_0x1506c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001506C0_0x1506c0");
#endif

    switch (ctx->pc) {
        case 0x1506f0u: goto label_1506f0;
        case 0x1506fcu: goto label_1506fc;
        case 0x150708u: goto label_150708;
        case 0x150720u: goto label_150720;
        case 0x150738u: goto label_150738;
        case 0x150754u: goto label_150754;
        default: break;
    }

    ctx->pc = 0x1506c0u;

    // 0x1506c0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1506c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1506c4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1506c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1506c8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1506c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1506cc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1506ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1506d0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1506d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1506d4: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x1506d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x1506d8: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x1506d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
    // 0x1506dc: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1506dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1506e0: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x1506e0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1506e4: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1506e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1506e8: 0xc0527a4  jal         func_149E90
    ctx->pc = 0x1506E8u;
    SET_GPR_U32(ctx, 31, 0x1506F0u);
    ctx->pc = 0x149E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149E90u, 0x1506E8u, 0x1506F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1506F0u;
label_1506f0:
    // 0x1506f0: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1506f0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1506f4: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1506F4u;
    {
        const bool branch_taken_0x1506f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1506f4) {
            ctx->pc = 0x150758u;
            goto label_150758;
        }
    }
    ctx->pc = 0x1506FCu;
label_1506fc:
    // 0x1506fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1506fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150700: 0xc0541f0  jal         func_1507C0
    ctx->pc = 0x150700u;
    SET_GPR_U32(ctx, 31, 0x150708u);
    ctx->pc = 0x1507C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1507C0u, 0x150700u, 0x150708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150708u;
label_150708:
    // 0x150708: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x150708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15070c: 0x24640008  addiu       $a0, $v1, 0x8
    ctx->pc = 0x15070cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x150710: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x150710u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150714: 0x8fa60050  lw          $a2, 0x50($sp)
    ctx->pc = 0x150714u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x150718: 0xc042cdc  jal         func_10B370
    ctx->pc = 0x150718u;
    SET_GPR_U32(ctx, 31, 0x150720u);
    ctx->pc = 0x10B370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B370u, 0x150718u, 0x150720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150720u;
label_150720:
    // 0x150720: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x150720u;
    {
        const bool branch_taken_0x150720 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x150720) {
            ctx->pc = 0x150748u;
            goto label_150748;
        }
    }
    ctx->pc = 0x150728u;
    // 0x150728: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x150728u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15072c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15072cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150730: 0xc0541e8  jal         func_1507A0
    ctx->pc = 0x150730u;
    SET_GPR_U32(ctx, 31, 0x150738u);
    ctx->pc = 0x1507A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1507A0u, 0x150730u, 0x150738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150738u;
label_150738:
    // 0x150738: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x150738u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15073c: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x15073cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150740: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x150740u;
    {
        const bool branch_taken_0x150740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x150740) {
            ctx->pc = 0x150758u;
            goto label_150758;
        }
    }
    ctx->pc = 0x150748u;
label_150748:
    // 0x150748: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x150748u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15074c: 0xc0541e0  jal         func_150780
    ctx->pc = 0x15074Cu;
    SET_GPR_U32(ctx, 31, 0x150754u);
    ctx->pc = 0x150780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150780u, 0x15074Cu, 0x150754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150754u;
label_150754:
    // 0x150754: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x150754u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_150758:
    // 0x150758: 0x1600ffe8  bnez        $s0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x150758u;
    {
        const bool branch_taken_0x150758 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x150758) {
            ctx->pc = 0x1506FCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1506fc;
        }
    }
    ctx->pc = 0x150760u;
    // 0x150760: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x150760u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150764: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x150764u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x150768: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x150768u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15076c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15076cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x150770: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x150770u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x150774: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x150774u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x150778: 0x3e00008  jr          $ra
    ctx->pc = 0x150778u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x150778u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x150780u;
}
