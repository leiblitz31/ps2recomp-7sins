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

// Function: sub_001508D0
// Address: 0x1508d0 - 0x1509e0
void sub_001508D0_0x1508d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001508D0_0x1508d0");
#endif

    switch (ctx->pc) {
        case 0x150900u: goto label_150900;
        case 0x15090cu: goto label_15090c;
        case 0x150918u: goto label_150918;
        case 0x150930u: goto label_150930;
        case 0x150948u: goto label_150948;
        case 0x150964u: goto label_150964;
        case 0x15098cu: goto label_15098c;
        case 0x1509a4u: goto label_1509a4;
        default: break;
    }

    ctx->pc = 0x1508d0u;

    // 0x1508d0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1508d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1508d4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1508d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1508d8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1508d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1508dc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1508dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1508e0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1508e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1508e4: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x1508e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x1508e8: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x1508e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
    // 0x1508ec: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1508ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1508f0: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x1508f0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1508f4: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1508f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1508f8: 0xc0527a4  jal         func_149E90
    ctx->pc = 0x1508F8u;
    SET_GPR_U32(ctx, 31, 0x150900u);
    ctx->pc = 0x149E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149E90u, 0x1508F8u, 0x150900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150900u;
label_150900:
    // 0x150900: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x150900u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x150904: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x150904u;
    {
        const bool branch_taken_0x150904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x150904) {
            ctx->pc = 0x150968u;
            goto label_150968;
        }
    }
    ctx->pc = 0x15090Cu;
label_15090c:
    // 0x15090c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15090cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150910: 0xc0541f0  jal         func_1507C0
    ctx->pc = 0x150910u;
    SET_GPR_U32(ctx, 31, 0x150918u);
    ctx->pc = 0x1507C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1507C0u, 0x150910u, 0x150918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150918u;
label_150918:
    // 0x150918: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x150918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15091c: 0x24640008  addiu       $a0, $v1, 0x8
    ctx->pc = 0x15091cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x150920: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x150920u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150924: 0x8fa60050  lw          $a2, 0x50($sp)
    ctx->pc = 0x150924u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x150928: 0xc042cdc  jal         func_10B370
    ctx->pc = 0x150928u;
    SET_GPR_U32(ctx, 31, 0x150930u);
    ctx->pc = 0x10B370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B370u, 0x150928u, 0x150930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150930u;
label_150930:
    // 0x150930: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x150930u;
    {
        const bool branch_taken_0x150930 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x150930) {
            ctx->pc = 0x150958u;
            goto label_150958;
        }
    }
    ctx->pc = 0x150938u;
    // 0x150938: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x150938u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15093c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15093cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150940: 0xc0541e8  jal         func_1507A0
    ctx->pc = 0x150940u;
    SET_GPR_U32(ctx, 31, 0x150948u);
    ctx->pc = 0x1507A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1507A0u, 0x150940u, 0x150948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150948u;
label_150948:
    // 0x150948: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x150948u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15094c: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x15094cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150950: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x150950u;
    {
        const bool branch_taken_0x150950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x150950) {
            ctx->pc = 0x150968u;
            goto label_150968;
        }
    }
    ctx->pc = 0x150958u;
label_150958:
    // 0x150958: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x150958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15095c: 0xc0541e0  jal         func_150780
    ctx->pc = 0x15095Cu;
    SET_GPR_U32(ctx, 31, 0x150964u);
    ctx->pc = 0x150780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150780u, 0x15095Cu, 0x150964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150964u;
label_150964:
    // 0x150964: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x150964u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_150968:
    // 0x150968: 0x1600ffe8  bnez        $s0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x150968u;
    {
        const bool branch_taken_0x150968 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x150968) {
            ctx->pc = 0x15090Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15090c;
        }
    }
    ctx->pc = 0x150970u;
    // 0x150970: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x150970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x150974: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x150974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x150978: 0x1222000c  beq         $s1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x150978u;
    {
        const bool branch_taken_0x150978 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x150978) {
            ctx->pc = 0x1509ACu;
            goto label_1509ac;
        }
    }
    ctx->pc = 0x150980u;
    // 0x150980: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x150980u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150984: 0xc0541f0  jal         func_1507C0
    ctx->pc = 0x150984u;
    SET_GPR_U32(ctx, 31, 0x15098Cu);
    ctx->pc = 0x1507C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1507C0u, 0x150984u, 0x15098Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15098Cu;
label_15098c:
    // 0x15098c: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x15098cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x150990: 0x24640008  addiu       $a0, $v1, 0x8
    ctx->pc = 0x150990u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x150994: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x150994u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x150998: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x150998u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15099c: 0xc042cdc  jal         func_10B370
    ctx->pc = 0x15099Cu;
    SET_GPR_U32(ctx, 31, 0x1509A4u);
    ctx->pc = 0x10B370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B370u, 0x15099Cu, 0x1509A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1509A4u;
label_1509a4:
    // 0x1509a4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1509A4u;
    {
        const bool branch_taken_0x1509a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1509a4) {
            ctx->pc = 0x1509B4u;
            goto label_1509b4;
        }
    }
    ctx->pc = 0x1509ACu;
label_1509ac:
    // 0x1509ac: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1509acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1509b0: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x1509b0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1509b4:
    // 0x1509b4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1509b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1509b8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1509b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1509bc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1509bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1509c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1509c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1509c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1509c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1509c8: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x1509c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1509cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1509CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1509CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1509D4u;
    // 0x1509d4: 0x0  nop
    ctx->pc = 0x1509d4u;
    // NOP
    // 0x1509d8: 0x0  nop
    ctx->pc = 0x1509d8u;
    // NOP
    // 0x1509dc: 0x0  nop
    ctx->pc = 0x1509dcu;
    // NOP
    ctx->pc = 0x1509e0u;
}
