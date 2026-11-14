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

// Function: sub_00111900
// Address: 0x111900 - 0x111a10
void sub_00111900_0x111900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00111900_0x111900");
#endif

    switch (ctx->pc) {
        case 0x111930u: goto label_111930;
        case 0x11193cu: goto label_11193c;
        case 0x111948u: goto label_111948;
        case 0x111960u: goto label_111960;
        case 0x111978u: goto label_111978;
        case 0x111994u: goto label_111994;
        case 0x1119bcu: goto label_1119bc;
        case 0x1119d4u: goto label_1119d4;
        default: break;
    }

    ctx->pc = 0x111900u;

    // 0x111900: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x111900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x111904: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x111904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x111908: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x111908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x11190c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x11190cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x111910: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x111910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x111914: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x111914u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x111918: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x111918u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
    // 0x11191c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x11191cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x111920: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x111920u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x111924: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x111924u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x111928: 0xc04383c  jal         func_10E0F0
    ctx->pc = 0x111928u;
    SET_GPR_U32(ctx, 31, 0x111930u);
    ctx->pc = 0x10E0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E0F0u, 0x111928u, 0x111930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111930u;
label_111930:
    // 0x111930: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x111930u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x111934: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x111934u;
    {
        const bool branch_taken_0x111934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x111934) {
            ctx->pc = 0x111998u;
            goto label_111998;
        }
    }
    ctx->pc = 0x11193Cu;
label_11193c:
    // 0x11193c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11193cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111940: 0xc044694  jal         func_111A50
    ctx->pc = 0x111940u;
    SET_GPR_U32(ctx, 31, 0x111948u);
    ctx->pc = 0x111A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111A50u, 0x111940u, 0x111948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111948u;
label_111948:
    // 0x111948: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x111948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11194c: 0x24640008  addiu       $a0, $v1, 0x8
    ctx->pc = 0x11194cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x111950: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x111950u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111954: 0x8fa60050  lw          $a2, 0x50($sp)
    ctx->pc = 0x111954u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x111958: 0xc042cdc  jal         func_10B370
    ctx->pc = 0x111958u;
    SET_GPR_U32(ctx, 31, 0x111960u);
    ctx->pc = 0x10B370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B370u, 0x111958u, 0x111960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111960u;
label_111960:
    // 0x111960: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x111960u;
    {
        const bool branch_taken_0x111960 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x111960) {
            ctx->pc = 0x111988u;
            goto label_111988;
        }
    }
    ctx->pc = 0x111968u;
    // 0x111968: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x111968u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11196c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11196cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111970: 0xc04468c  jal         func_111A30
    ctx->pc = 0x111970u;
    SET_GPR_U32(ctx, 31, 0x111978u);
    ctx->pc = 0x111A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111A30u, 0x111970u, 0x111978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111978u;
label_111978:
    // 0x111978: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x111978u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11197c: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x11197cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111980: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x111980u;
    {
        const bool branch_taken_0x111980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x111980) {
            ctx->pc = 0x111998u;
            goto label_111998;
        }
    }
    ctx->pc = 0x111988u;
label_111988:
    // 0x111988: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x111988u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11198c: 0xc044684  jal         func_111A10
    ctx->pc = 0x11198Cu;
    SET_GPR_U32(ctx, 31, 0x111994u);
    ctx->pc = 0x111A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111A10u, 0x11198Cu, 0x111994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111994u;
label_111994:
    // 0x111994: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x111994u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_111998:
    // 0x111998: 0x1600ffe8  bnez        $s0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x111998u;
    {
        const bool branch_taken_0x111998 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x111998) {
            ctx->pc = 0x11193Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11193c;
        }
    }
    ctx->pc = 0x1119A0u;
    // 0x1119a0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1119a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1119a4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1119a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1119a8: 0x1222000c  beq         $s1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1119A8u;
    {
        const bool branch_taken_0x1119a8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x1119a8) {
            ctx->pc = 0x1119DCu;
            goto label_1119dc;
        }
    }
    ctx->pc = 0x1119B0u;
    // 0x1119b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1119b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1119b4: 0xc044694  jal         func_111A50
    ctx->pc = 0x1119B4u;
    SET_GPR_U32(ctx, 31, 0x1119BCu);
    ctx->pc = 0x111A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111A50u, 0x1119B4u, 0x1119BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1119BCu;
label_1119bc:
    // 0x1119bc: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x1119bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1119c0: 0x24640008  addiu       $a0, $v1, 0x8
    ctx->pc = 0x1119c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x1119c4: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x1119c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1119c8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1119c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1119cc: 0xc042cdc  jal         func_10B370
    ctx->pc = 0x1119CCu;
    SET_GPR_U32(ctx, 31, 0x1119D4u);
    ctx->pc = 0x10B370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B370u, 0x1119CCu, 0x1119D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1119D4u;
label_1119d4:
    // 0x1119d4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1119D4u;
    {
        const bool branch_taken_0x1119d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1119d4) {
            ctx->pc = 0x1119E4u;
            goto label_1119e4;
        }
    }
    ctx->pc = 0x1119DCu;
label_1119dc:
    // 0x1119dc: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1119dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1119e0: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x1119e0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1119e4:
    // 0x1119e4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1119e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1119e8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1119e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1119ec: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1119ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1119f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1119f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1119f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1119f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1119f8: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x1119f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1119fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1119FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1119FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x111A04u;
    // 0x111a04: 0x0  nop
    ctx->pc = 0x111a04u;
    // NOP
    // 0x111a08: 0x0  nop
    ctx->pc = 0x111a08u;
    // NOP
    // 0x111a0c: 0x0  nop
    ctx->pc = 0x111a0cu;
    // NOP
    ctx->pc = 0x111a10u;
}
