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

// Function: sub_00113980
// Address: 0x113980 - 0x113a90
void sub_00113980_0x113980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00113980_0x113980");
#endif

    switch (ctx->pc) {
        case 0x1139b0u: goto label_1139b0;
        case 0x1139bcu: goto label_1139bc;
        case 0x1139c8u: goto label_1139c8;
        case 0x1139e0u: goto label_1139e0;
        case 0x1139f8u: goto label_1139f8;
        case 0x113a14u: goto label_113a14;
        case 0x113a3cu: goto label_113a3c;
        case 0x113a54u: goto label_113a54;
        default: break;
    }

    ctx->pc = 0x113980u;

    // 0x113980: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x113980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x113984: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x113984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x113988: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x113988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x11398c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x11398cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x113990: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x113990u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x113994: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x113994u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x113998: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x113998u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
    // 0x11399c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x11399cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1139a0: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x1139a0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1139a4: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1139a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1139a8: 0xc044cd4  jal         func_113350
    ctx->pc = 0x1139A8u;
    SET_GPR_U32(ctx, 31, 0x1139B0u);
    ctx->pc = 0x113350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113350u, 0x1139A8u, 0x1139B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1139B0u;
label_1139b0:
    // 0x1139b0: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1139b0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1139b4: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1139B4u;
    {
        const bool branch_taken_0x1139b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1139b4) {
            ctx->pc = 0x113A18u;
            goto label_113a18;
        }
    }
    ctx->pc = 0x1139BCu;
label_1139bc:
    // 0x1139bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1139bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1139c0: 0xc044eb4  jal         func_113AD0
    ctx->pc = 0x1139C0u;
    SET_GPR_U32(ctx, 31, 0x1139C8u);
    ctx->pc = 0x113AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113AD0u, 0x1139C0u, 0x1139C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1139C8u;
label_1139c8:
    // 0x1139c8: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1139c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1139cc: 0x24640008  addiu       $a0, $v1, 0x8
    ctx->pc = 0x1139ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x1139d0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1139d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1139d4: 0x8fa60050  lw          $a2, 0x50($sp)
    ctx->pc = 0x1139d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1139d8: 0xc042cdc  jal         func_10B370
    ctx->pc = 0x1139D8u;
    SET_GPR_U32(ctx, 31, 0x1139E0u);
    ctx->pc = 0x10B370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B370u, 0x1139D8u, 0x1139E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1139E0u;
label_1139e0:
    // 0x1139e0: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1139E0u;
    {
        const bool branch_taken_0x1139e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1139e0) {
            ctx->pc = 0x113A08u;
            goto label_113a08;
        }
    }
    ctx->pc = 0x1139E8u;
    // 0x1139e8: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x1139e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1139ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1139ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1139f0: 0xc044eac  jal         func_113AB0
    ctx->pc = 0x1139F0u;
    SET_GPR_U32(ctx, 31, 0x1139F8u);
    ctx->pc = 0x113AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113AB0u, 0x1139F0u, 0x1139F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1139F8u;
label_1139f8:
    // 0x1139f8: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1139f8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1139fc: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1139fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113a00: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x113A00u;
    {
        const bool branch_taken_0x113a00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x113a00) {
            ctx->pc = 0x113A18u;
            goto label_113a18;
        }
    }
    ctx->pc = 0x113A08u;
label_113a08:
    // 0x113a08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x113a08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113a0c: 0xc044ea4  jal         func_113A90
    ctx->pc = 0x113A0Cu;
    SET_GPR_U32(ctx, 31, 0x113A14u);
    ctx->pc = 0x113A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113A90u, 0x113A0Cu, 0x113A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113A14u;
label_113a14:
    // 0x113a14: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x113a14u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_113a18:
    // 0x113a18: 0x1600ffe8  bnez        $s0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x113A18u;
    {
        const bool branch_taken_0x113a18 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x113a18) {
            ctx->pc = 0x1139BCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1139bc;
        }
    }
    ctx->pc = 0x113A20u;
    // 0x113a20: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x113a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x113a24: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x113a24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x113a28: 0x1222000c  beq         $s1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x113A28u;
    {
        const bool branch_taken_0x113a28 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x113a28) {
            ctx->pc = 0x113A5Cu;
            goto label_113a5c;
        }
    }
    ctx->pc = 0x113A30u;
    // 0x113a30: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x113a30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113a34: 0xc044eb4  jal         func_113AD0
    ctx->pc = 0x113A34u;
    SET_GPR_U32(ctx, 31, 0x113A3Cu);
    ctx->pc = 0x113AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113AD0u, 0x113A34u, 0x113A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113A3Cu;
label_113a3c:
    // 0x113a3c: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x113a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x113a40: 0x24640008  addiu       $a0, $v1, 0x8
    ctx->pc = 0x113a40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x113a44: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x113a44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x113a48: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x113a48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113a4c: 0xc042cdc  jal         func_10B370
    ctx->pc = 0x113A4Cu;
    SET_GPR_U32(ctx, 31, 0x113A54u);
    ctx->pc = 0x10B370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B370u, 0x113A4Cu, 0x113A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113A54u;
label_113a54:
    // 0x113a54: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x113A54u;
    {
        const bool branch_taken_0x113a54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x113a54) {
            ctx->pc = 0x113A64u;
            goto label_113a64;
        }
    }
    ctx->pc = 0x113A5Cu;
label_113a5c:
    // 0x113a5c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x113a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x113a60: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x113a60u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_113a64:
    // 0x113a64: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x113a64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113a68: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x113a68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x113a6c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x113a6cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x113a70: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x113a70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x113a74: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x113a74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x113a78: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x113a78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x113a7c: 0x3e00008  jr          $ra
    ctx->pc = 0x113A7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x113A7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x113A84u;
    // 0x113a84: 0x0  nop
    ctx->pc = 0x113a84u;
    // NOP
    // 0x113a88: 0x0  nop
    ctx->pc = 0x113a88u;
    // NOP
    // 0x113a8c: 0x0  nop
    ctx->pc = 0x113a8cu;
    // NOP
    ctx->pc = 0x113a90u;
}
