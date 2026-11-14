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

// Function: sub_001E3940
// Address: 0x1e3940 - 0x1e3a50
void sub_001E3940_0x1e3940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E3940_0x1e3940");
#endif

    switch (ctx->pc) {
        case 0x1e3968u: goto label_1e3968;
        case 0x1e3980u: goto label_1e3980;
        case 0x1e3990u: goto label_1e3990;
        case 0x1e39a8u: goto label_1e39a8;
        case 0x1e39b8u: goto label_1e39b8;
        case 0x1e39d0u: goto label_1e39d0;
        case 0x1e39dcu: goto label_1e39dc;
        case 0x1e39ecu: goto label_1e39ec;
        case 0x1e3a04u: goto label_1e3a04;
        case 0x1e3a18u: goto label_1e3a18;
        case 0x1e3a2cu: goto label_1e3a2c;
        default: break;
    }

    ctx->pc = 0x1e3940u;

    // 0x1e3940: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1e3940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1e3944: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e3944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1e3948: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e3948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e394c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e394cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e3950: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x1e3950u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x1e3954: 0xa3a50040  sb          $a1, 0x40($sp)
    ctx->pc = 0x1e3954u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 5));
    // 0x1e3958: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1e3958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e395c: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x1e395cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1e3960: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1E3960u;
    SET_GPR_U32(ctx, 31, 0x1E3968u);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1E3960u, 0x1E3968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3968u;
label_1e3968:
    // 0x1e3968: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1e3968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e396c: 0x8c650068  lw          $a1, 0x68($v1)
    ctx->pc = 0x1e396cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 104)));
    // 0x1e3970: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e3970u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3974: 0x93a60040  lbu         $a2, 0x40($sp)
    ctx->pc = 0x1e3974u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e3978: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1E3978u;
    SET_GPR_U32(ctx, 31, 0x1E3980u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1E3978u, 0x1E3980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3980u;
label_1e3980:
    // 0x1e3980: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1e3980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e3984: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x1e3984u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1e3988: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1E3988u;
    SET_GPR_U32(ctx, 31, 0x1E3990u);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1E3988u, 0x1E3990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3990u;
label_1e3990:
    // 0x1e3990: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1e3990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e3994: 0x8c650070  lw          $a1, 0x70($v1)
    ctx->pc = 0x1e3994u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 112)));
    // 0x1e3998: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e3998u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e399c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e399cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e39a0: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1E39A0u;
    SET_GPR_U32(ctx, 31, 0x1E39A8u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1E39A0u, 0x1E39A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E39A8u;
label_1e39a8:
    // 0x1e39a8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1e39a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e39ac: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x1e39acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1e39b0: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1E39B0u;
    SET_GPR_U32(ctx, 31, 0x1E39B8u);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1E39B0u, 0x1E39B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E39B8u;
label_1e39b8:
    // 0x1e39b8: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x1e39b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e39bc: 0x8c65006c  lw          $a1, 0x6C($v1)
    ctx->pc = 0x1e39bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
    // 0x1e39c0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1e39c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e39c4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e39c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e39c8: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1E39C8u;
    SET_GPR_U32(ctx, 31, 0x1E39D0u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1E39C8u, 0x1E39D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E39D0u;
label_1e39d0:
    // 0x1e39d0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1e39d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e39d4: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1E39D4u;
    {
        const bool branch_taken_0x1e39d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e39d4) {
            ctx->pc = 0x1E3A1Cu;
            goto label_1e3a1c;
        }
    }
    ctx->pc = 0x1E39DCu;
label_1e39dc:
    // 0x1e39dc: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1e39dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e39e0: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x1e39e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1e39e4: 0xc0647a8  jal         func_191EA0
    ctx->pc = 0x1E39E4u;
    SET_GPR_U32(ctx, 31, 0x1E39ECu);
    ctx->pc = 0x191EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191EA0u, 0x1E39E4u, 0x1E39ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E39ECu;
label_1e39ec:
    // 0x1e39ec: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1e39ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e39f0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1e39f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e39f4: 0x244400f0  addiu       $a0, $v0, 0xF0
    ctx->pc = 0x1e39f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 240));
    // 0x1e39f8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e39f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e39fc: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x1E39FCu;
    SET_GPR_U32(ctx, 31, 0x1E3A04u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x1E39FCu, 0x1E3A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3A04u;
label_1e3a04:
    // 0x1e3a04: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1e3a04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e3a08: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e3a08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3a0c: 0x93a60040  lbu         $a2, 0x40($sp)
    ctx->pc = 0x1e3a0cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e3a10: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x1E3A10u;
    SET_GPR_U32(ctx, 31, 0x1E3A18u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x1E3A10u, 0x1E3A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3A18u;
label_1e3a18:
    // 0x1e3a18: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1e3a18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1e3a1c:
    // 0x1e3a1c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1e3a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e3a20: 0x244400f0  addiu       $a0, $v0, 0xF0
    ctx->pc = 0x1e3a20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 240));
    // 0x1e3a24: 0xc05611c  jal         func_158470
    ctx->pc = 0x1E3A24u;
    SET_GPR_U32(ctx, 31, 0x1E3A2Cu);
    ctx->pc = 0x158470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158470u, 0x1E3A24u, 0x1E3A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3A2Cu;
label_1e3a2c:
    // 0x1e3a2c: 0x202182b  sltu        $v1, $s0, $v0
    ctx->pc = 0x1e3a2cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1e3a30: 0x1460ffea  bnez        $v1, . + 4 + (-0x16 << 2)
    ctx->pc = 0x1E3A30u;
    {
        const bool branch_taken_0x1e3a30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e3a30) {
            ctx->pc = 0x1E39DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e39dc;
        }
    }
    ctx->pc = 0x1E3A38u;
    // 0x1e3a38: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e3a38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e3a3c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e3a3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e3a40: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e3a40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e3a44: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1e3a44u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1e3a48: 0x3e00008  jr          $ra
    ctx->pc = 0x1E3A48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E3A48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E3A50u;
}
