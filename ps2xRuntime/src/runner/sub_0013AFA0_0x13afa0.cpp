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

// Function: sub_0013AFA0
// Address: 0x13afa0 - 0x13b0c0
void sub_0013AFA0_0x13afa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013AFA0_0x13afa0");
#endif

    switch (ctx->pc) {
        case 0x13afbcu: goto label_13afbc;
        case 0x13afd0u: goto label_13afd0;
        case 0x13afe4u: goto label_13afe4;
        case 0x13b000u: goto label_13b000;
        case 0x13b010u: goto label_13b010;
        case 0x13b01cu: goto label_13b01c;
        case 0x13b034u: goto label_13b034;
        case 0x13b044u: goto label_13b044;
        case 0x13b054u: goto label_13b054;
        case 0x13b064u: goto label_13b064;
        case 0x13b080u: goto label_13b080;
        case 0x13b098u: goto label_13b098;
        case 0x13b0a8u: goto label_13b0a8;
        default: break;
    }

    ctx->pc = 0x13afa0u;

    // 0x13afa0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x13afa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x13afa4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x13afa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x13afa8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13afa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13afac: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x13afacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x13afb0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x13afb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x13afb4: 0xc088560  jal         func_221580
    ctx->pc = 0x13AFB4u;
    SET_GPR_U32(ctx, 31, 0x13AFBCu);
    ctx->pc = 0x221580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221580u, 0x13AFB4u, 0x13AFBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13AFBCu;
label_13afbc:
    // 0x13afbc: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x13afbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x13afc0: 0x2405054c  addiu       $a1, $zero, 0x54C
    ctx->pc = 0x13afc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1356));
    // 0x13afc4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x13afc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x13afc8: 0xc040924  jal         func_102490
    ctx->pc = 0x13AFC8u;
    SET_GPR_U32(ctx, 31, 0x13AFD0u);
    ctx->pc = 0x102490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102490u, 0x13AFC8u, 0x13AFD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13AFD0u;
label_13afd0:
    // 0x13afd0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x13afd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x13afd4: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x13afd4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x13afd8: 0x24a52800  addiu       $a1, $a1, 0x2800
    ctx->pc = 0x13afd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10240));
    // 0x13afdc: 0xc040304  jal         func_100C10
    ctx->pc = 0x13AFDCu;
    SET_GPR_U32(ctx, 31, 0x13AFE4u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x13AFDCu, 0x13AFE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13AFE4u;
label_13afe4:
    // 0x13afe4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x13afe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13afe8: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x13afe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x13afec: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x13afecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x13aff0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x13aff0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x13aff4: 0x24450004  addiu       $a1, $v0, 0x4
    ctx->pc = 0x13aff4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x13aff8: 0xc0424e8  jal         func_1093A0
    ctx->pc = 0x13AFF8u;
    SET_GPR_U32(ctx, 31, 0x13B000u);
    ctx->pc = 0x1093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1093A0u, 0x13AFF8u, 0x13B000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B000u;
label_13b000:
    // 0x13b000: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x13b000u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x13b004: 0x27858c78  addiu       $a1, $gp, -0x7388
    ctx->pc = 0x13b004u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937720));
    // 0x13b008: 0xc0424e8  jal         func_1093A0
    ctx->pc = 0x13B008u;
    SET_GPR_U32(ctx, 31, 0x13B010u);
    ctx->pc = 0x1093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1093A0u, 0x13B008u, 0x13B010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B010u;
label_13b010:
    // 0x13b010: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x13b010u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x13b014: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x13B014u;
    SET_GPR_U32(ctx, 31, 0x13B01Cu);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x13B014u, 0x13B01Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B01Cu;
label_13b01c:
    // 0x13b01c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x13b01cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x13b020: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x13b020u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x13b024: 0x24a52818  addiu       $a1, $a1, 0x2818
    ctx->pc = 0x13b024u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10264));
    // 0x13b028: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x13b028u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b02c: 0xc041b90  jal         func_106E40
    ctx->pc = 0x13B02Cu;
    SET_GPR_U32(ctx, 31, 0x13B034u);
    ctx->pc = 0x106E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106E40u, 0x13B02Cu, 0x13B034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B034u;
label_13b034:
    // 0x13b034: 0x8f82ba74  lw          $v0, -0x458C($gp)
    ctx->pc = 0x13b034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949492)));
    // 0x13b038: 0x2444006c  addiu       $a0, $v0, 0x6C
    ctx->pc = 0x13b038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 108));
    // 0x13b03c: 0xc04e58c  jal         func_139630
    ctx->pc = 0x13B03Cu;
    SET_GPR_U32(ctx, 31, 0x13B044u);
    ctx->pc = 0x139630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139630u, 0x13B03Cu, 0x13B044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B044u;
label_13b044:
    // 0x13b044: 0x8f82ba74  lw          $v0, -0x458C($gp)
    ctx->pc = 0x13b044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949492)));
    // 0x13b048: 0x24440080  addiu       $a0, $v0, 0x80
    ctx->pc = 0x13b048u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x13b04c: 0xc04e58c  jal         func_139630
    ctx->pc = 0x13B04Cu;
    SET_GPR_U32(ctx, 31, 0x13B054u);
    ctx->pc = 0x139630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139630u, 0x13B04Cu, 0x13B054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B054u;
label_13b054:
    // 0x13b054: 0x8f82ba74  lw          $v0, -0x458C($gp)
    ctx->pc = 0x13b054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949492)));
    // 0x13b058: 0x24440094  addiu       $a0, $v0, 0x94
    ctx->pc = 0x13b058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 148));
    // 0x13b05c: 0xc04e58c  jal         func_139630
    ctx->pc = 0x13B05Cu;
    SET_GPR_U32(ctx, 31, 0x13B064u);
    ctx->pc = 0x139630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x139630u, 0x13B05Cu, 0x13B064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B064u;
label_13b064:
    // 0x13b064: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x13b064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13b068: 0x8f82ba74  lw          $v0, -0x458C($gp)
    ctx->pc = 0x13b068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949492)));
    // 0x13b06c: 0xa04300a8  sb          $v1, 0xA8($v0)
    ctx->pc = 0x13b06cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 168), (uint8_t)GPR_U32(ctx, 3));
    // 0x13b070: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x13b070u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x13b074: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x13b074u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x13b078: 0xc08ef28  jal         func_23BCA0
    ctx->pc = 0x13B078u;
    SET_GPR_U32(ctx, 31, 0x13B080u);
    ctx->pc = 0x23BCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BCA0u, 0x13B078u, 0x13B080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B080u;
label_13b080:
    // 0x13b080: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13b080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13b084: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x13b084u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x13b088: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x13b088u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x13b08c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x13b08cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x13b090: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x13B090u;
    SET_GPR_U32(ctx, 31, 0x13B098u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x13B090u, 0x13B098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B098u;
label_13b098:
    // 0x13b098: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x13b098u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x13b09c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x13b09cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x13b0a0: 0xc0887b4  jal         func_221ED0
    ctx->pc = 0x13B0A0u;
    SET_GPR_U32(ctx, 31, 0x13B0A8u);
    ctx->pc = 0x221ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221ED0u, 0x13B0A0u, 0x13B0A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B0A8u;
label_13b0a8:
    // 0x13b0a8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x13b0a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b0ac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13b0acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13b0b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13b0b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13b0b4: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x13b0b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x13b0b8: 0x3e00008  jr          $ra
    ctx->pc = 0x13B0B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13B0B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13B0C0u;
}
