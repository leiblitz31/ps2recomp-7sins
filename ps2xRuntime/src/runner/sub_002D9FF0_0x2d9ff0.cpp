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

// Function: sub_002D9FF0
// Address: 0x2d9ff0 - 0x2da120
void sub_002D9FF0_0x2d9ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D9FF0_0x2d9ff0");
#endif

    switch (ctx->pc) {
        case 0x2da028u: goto label_2da028;
        case 0x2da040u: goto label_2da040;
        case 0x2da054u: goto label_2da054;
        case 0x2da080u: goto label_2da080;
        case 0x2da090u: goto label_2da090;
        case 0x2da09cu: goto label_2da09c;
        case 0x2da0acu: goto label_2da0ac;
        case 0x2da0bcu: goto label_2da0bc;
        case 0x2da0c8u: goto label_2da0c8;
        case 0x2da0d8u: goto label_2da0d8;
        case 0x2da0e8u: goto label_2da0e8;
        case 0x2da0fcu: goto label_2da0fc;
        case 0x2da108u: goto label_2da108;
        default: break;
    }

    ctx->pc = 0x2d9ff0u;

    // 0x2d9ff0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2d9ff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2d9ff4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2d9ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2d9ff8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d9ff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2d9ffc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d9ffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2da000: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x2da000u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x2da004: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x2da004u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x2da008: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x2da008u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x2da00c: 0xa3a70060  sb          $a3, 0x60($sp)
    ctx->pc = 0x2da00cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 96), (uint8_t)GPR_U32(ctx, 7));
    // 0x2da010: 0xe7ac0070  swc1        $f12, 0x70($sp)
    ctx->pc = 0x2da010u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x2da014: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x2da014u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2da018: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x2da018u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2da01c: 0xc7ac0070  lwc1        $f12, 0x70($sp)
    ctx->pc = 0x2da01cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2da020: 0xc0b6870  jal         func_2DA1C0
    ctx->pc = 0x2DA020u;
    SET_GPR_U32(ctx, 31, 0x2DA028u);
    ctx->pc = 0x2DA1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA1C0u, 0x2DA020u, 0x2DA028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA028u;
label_2da028:
    // 0x2da028: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x2DA028u;
    {
        const bool branch_taken_0x2da028 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2da028) {
            ctx->pc = 0x2DA108u;
            goto label_2da108;
        }
    }
    ctx->pc = 0x2DA030u;
    // 0x2da030: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2da030u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2da034: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x2da034u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2da038: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2DA038u;
    SET_GPR_U32(ctx, 31, 0x2DA040u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2DA038u, 0x2DA040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA040u;
label_2da040:
    // 0x2da040: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2da040u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da044: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2da044u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da048: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x2da048u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2da04c: 0xc0969b0  jal         func_25A6C0
    ctx->pc = 0x2DA04Cu;
    SET_GPR_U32(ctx, 31, 0x2DA054u);
    ctx->pc = 0x25A6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A6C0u, 0x2DA04Cu, 0x2DA054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA054u;
label_2da054:
    // 0x2da054: 0x93a30060  lbu         $v1, 0x60($sp)
    ctx->pc = 0x2da054u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2da058: 0x1060002b  beqz        $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x2DA058u;
    {
        const bool branch_taken_0x2da058 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2da058) {
            ctx->pc = 0x2DA108u;
            goto label_2da108;
        }
    }
    ctx->pc = 0x2DA060u;
    // 0x2da060: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x2da060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2da064: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x2da064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2da068: 0x8c42003c  lw          $v0, 0x3C($v0)
    ctx->pc = 0x2da068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x2da06c: 0x10620023  beq         $v1, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x2DA06Cu;
    {
        const bool branch_taken_0x2da06c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2da06c) {
            ctx->pc = 0x2DA0FCu;
            goto label_2da0fc;
        }
    }
    ctx->pc = 0x2DA074u;
    // 0x2da074: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2da074u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da078: 0xc096880  jal         func_25A200
    ctx->pc = 0x2DA078u;
    SET_GPR_U32(ctx, 31, 0x2DA080u);
    ctx->pc = 0x25A200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A200u, 0x2DA078u, 0x2DA080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA080u;
label_2da080:
    // 0x2da080: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2DA080u;
    {
        const bool branch_taken_0x2da080 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2da080) {
            ctx->pc = 0x2DA0FCu;
            goto label_2da0fc;
        }
    }
    ctx->pc = 0x2DA088u;
    // 0x2da088: 0xc0b06cc  jal         func_2C1B30
    ctx->pc = 0x2DA088u;
    SET_GPR_U32(ctx, 31, 0x2DA090u);
    ctx->pc = 0x2C1B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1B30u, 0x2DA088u, 0x2DA090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA090u;
label_2da090:
    // 0x2da090: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2da090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da094: 0xc0b06c4  jal         func_2C1B10
    ctx->pc = 0x2DA094u;
    SET_GPR_U32(ctx, 31, 0x2DA09Cu);
    ctx->pc = 0x2C1B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1B10u, 0x2DA094u, 0x2DA09Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA09Cu;
label_2da09c:
    // 0x2da09c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2da09cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da0a0: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x2da0a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2da0a4: 0xc0b4aac  jal         func_2D2AB0
    ctx->pc = 0x2DA0A4u;
    SET_GPR_U32(ctx, 31, 0x2DA0ACu);
    ctx->pc = 0x2D2AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2AB0u, 0x2DA0A4u, 0x2DA0ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA0ACu;
label_2da0ac:
    // 0x2da0ac: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2DA0ACu;
    {
        const bool branch_taken_0x2da0ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2da0ac) {
            ctx->pc = 0x2DA0FCu;
            goto label_2da0fc;
        }
    }
    ctx->pc = 0x2DA0B4u;
    // 0x2da0b4: 0xc0b06cc  jal         func_2C1B30
    ctx->pc = 0x2DA0B4u;
    SET_GPR_U32(ctx, 31, 0x2DA0BCu);
    ctx->pc = 0x2C1B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1B30u, 0x2DA0B4u, 0x2DA0BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA0BCu;
label_2da0bc:
    // 0x2da0bc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2da0bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da0c0: 0xc0b06c4  jal         func_2C1B10
    ctx->pc = 0x2DA0C0u;
    SET_GPR_U32(ctx, 31, 0x2DA0C8u);
    ctx->pc = 0x2C1B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1B10u, 0x2DA0C0u, 0x2DA0C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA0C8u;
label_2da0c8:
    // 0x2da0c8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2da0c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da0cc: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x2da0ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2da0d0: 0xc0b5ad0  jal         func_2D6B40
    ctx->pc = 0x2DA0D0u;
    SET_GPR_U32(ctx, 31, 0x2DA0D8u);
    ctx->pc = 0x2D6B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6B40u, 0x2DA0D0u, 0x2DA0D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA0D8u;
label_2da0d8:
    // 0x2da0d8: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2da0d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2da0dc: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x2da0dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x2da0e0: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2DA0E0u;
    SET_GPR_U32(ctx, 31, 0x2DA0E8u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2DA0E0u, 0x2DA0E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA0E8u;
label_2da0e8:
    // 0x2da0e8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2da0e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da0ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2da0ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da0f0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2da0f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2da0f4: 0xc0ae044  jal         func_2B8110
    ctx->pc = 0x2DA0F4u;
    SET_GPR_U32(ctx, 31, 0x2DA0FCu);
    ctx->pc = 0x2B8110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8110u, 0x2DA0F4u, 0x2DA0FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA0FCu;
label_2da0fc:
    // 0x2da0fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2da0fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2da100: 0xc096da0  jal         func_25B680
    ctx->pc = 0x2DA100u;
    SET_GPR_U32(ctx, 31, 0x2DA108u);
    ctx->pc = 0x25B680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B680u, 0x2DA100u, 0x2DA108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DA108u;
label_2da108:
    // 0x2da108: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2da108u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2da10c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2da10cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2da110: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2da110u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2da114: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x2da114u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2da118: 0x3e00008  jr          $ra
    ctx->pc = 0x2DA118u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DA118u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DA120u;
}
