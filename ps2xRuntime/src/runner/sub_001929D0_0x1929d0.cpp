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

// Function: sub_001929D0
// Address: 0x1929d0 - 0x192b40
void sub_001929D0_0x1929d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001929D0_0x1929d0");
#endif

    switch (ctx->pc) {
        case 0x1929fcu: goto label_1929fc;
        case 0x192a14u: goto label_192a14;
        case 0x192a2cu: goto label_192a2c;
        case 0x192a44u: goto label_192a44;
        case 0x192a5cu: goto label_192a5c;
        case 0x192a74u: goto label_192a74;
        case 0x192a90u: goto label_192a90;
        case 0x192aa8u: goto label_192aa8;
        case 0x192ac4u: goto label_192ac4;
        case 0x192adcu: goto label_192adc;
        case 0x192aecu: goto label_192aec;
        case 0x192b04u: goto label_192b04;
        case 0x192b18u: goto label_192b18;
        case 0x192b24u: goto label_192b24;
        default: break;
    }

    ctx->pc = 0x1929d0u;

    // 0x1929d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1929d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1929d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1929d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1929d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1929d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1929dc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1929dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1929e0: 0x8f82bc60  lw          $v0, -0x43A0($gp)
    ctx->pc = 0x1929e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949984)));
    // 0x1929e4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1929E4u;
    {
        const bool branch_taken_0x1929e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1929e4) {
            ctx->pc = 0x192A00u;
            goto label_192a00;
        }
    }
    ctx->pc = 0x1929ECu;
    // 0x1929ec: 0x8f84bc60  lw          $a0, -0x43A0($gp)
    ctx->pc = 0x1929ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949984)));
    // 0x1929f0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1929f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1929f4: 0xc0ac13c  jal         func_2B04F0
    ctx->pc = 0x1929F4u;
    SET_GPR_U32(ctx, 31, 0x1929FCu);
    ctx->pc = 0x2B04F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B04F0u, 0x1929F4u, 0x1929FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1929FCu;
label_1929fc:
    // 0x1929fc: 0xaf80bc60  sw          $zero, -0x43A0($gp)
    ctx->pc = 0x1929fcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949984), GPR_U32(ctx, 0));
label_192a00:
    // 0x192a00: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x192a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x192a04: 0x24440040  addiu       $a0, $v0, 0x40
    ctx->pc = 0x192a04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x192a08: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x192a08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x192a0c: 0xc056708  jal         func_159C20
    ctx->pc = 0x192A0Cu;
    SET_GPR_U32(ctx, 31, 0x192A14u);
    ctx->pc = 0x159C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159C20u, 0x192A0Cu, 0x192A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192A14u;
label_192a14:
    // 0x192a14: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x192a14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x192a18: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x192a18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x192a1c: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x192a1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x192a20: 0x24a55a40  addiu       $a1, $a1, 0x5A40
    ctx->pc = 0x192a20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23104));
    // 0x192a24: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x192A24u;
    SET_GPR_U32(ctx, 31, 0x192A2Cu);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x192A24u, 0x192A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192A2Cu;
label_192a2c:
    // 0x192a2c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x192a2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192a30: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x192a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x192a34: 0x24440040  addiu       $a0, $v0, 0x40
    ctx->pc = 0x192a34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x192a38: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x192a38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192a3c: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x192A3Cu;
    SET_GPR_U32(ctx, 31, 0x192A44u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x192A3Cu, 0x192A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192A44u;
label_192a44:
    // 0x192a44: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x192a44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x192a48: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x192a48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x192a4c: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x192a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x192a50: 0x27859218  addiu       $a1, $gp, -0x6DE8
    ctx->pc = 0x192a50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939160));
    // 0x192a54: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x192A54u;
    SET_GPR_U32(ctx, 31, 0x192A5Cu);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x192A54u, 0x192A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192A5Cu;
label_192a5c:
    // 0x192a5c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x192a5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192a60: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x192a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x192a64: 0x24440040  addiu       $a0, $v0, 0x40
    ctx->pc = 0x192a64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x192a68: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x192a68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x192a6c: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x192A6Cu;
    SET_GPR_U32(ctx, 31, 0x192A74u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x192A6Cu, 0x192A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192A74u;
label_192a74:
    // 0x192a74: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x192a74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x192a78: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x192a78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x192a7c: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x192a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x192a80: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x192a80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x192a84: 0x24a55a50  addiu       $a1, $a1, 0x5A50
    ctx->pc = 0x192a84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23120));
    // 0x192a88: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x192A88u;
    SET_GPR_U32(ctx, 31, 0x192A90u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x192A88u, 0x192A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192A90u;
label_192a90:
    // 0x192a90: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x192a90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192a94: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x192a94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x192a98: 0x24440040  addiu       $a0, $v0, 0x40
    ctx->pc = 0x192a98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x192a9c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x192a9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x192aa0: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x192AA0u;
    SET_GPR_U32(ctx, 31, 0x192AA8u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x192AA0u, 0x192AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192AA8u;
label_192aa8:
    // 0x192aa8: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x192aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x192aac: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x192aacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x192ab0: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x192ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x192ab4: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x192ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x192ab8: 0x24a55a60  addiu       $a1, $a1, 0x5A60
    ctx->pc = 0x192ab8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23136));
    // 0x192abc: 0xc064ad0  jal         func_192B40
    ctx->pc = 0x192ABCu;
    SET_GPR_U32(ctx, 31, 0x192AC4u);
    ctx->pc = 0x192B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B40u, 0x192ABCu, 0x192AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192AC4u;
label_192ac4:
    // 0x192ac4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x192ac4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192ac8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x192ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x192acc: 0x24440040  addiu       $a0, $v0, 0x40
    ctx->pc = 0x192accu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x192ad0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x192ad0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x192ad4: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x192AD4u;
    SET_GPR_U32(ctx, 31, 0x192ADCu);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x192AD4u, 0x192ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192ADCu;
label_192adc:
    // 0x192adc: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x192adcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x192ae0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x192ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x192ae4: 0xc06479c  jal         func_191E70
    ctx->pc = 0x192AE4u;
    SET_GPR_U32(ctx, 31, 0x192AECu);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x192AE4u, 0x192AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192AECu;
label_192aec:
    // 0x192aec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x192aecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192af0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x192af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x192af4: 0x24440040  addiu       $a0, $v0, 0x40
    ctx->pc = 0x192af4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x192af8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x192af8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x192afc: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x192AFCu;
    SET_GPR_U32(ctx, 31, 0x192B04u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x192AFCu, 0x192B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192B04u;
label_192b04:
    // 0x192b04: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x192b04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x192b08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x192b08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192b0c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x192b0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192b10: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x192B10u;
    SET_GPR_U32(ctx, 31, 0x192B18u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x192B10u, 0x192B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192B18u;
label_192b18:
    // 0x192b18: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x192b18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x192b1c: 0xc08ec3c  jal         func_23B0F0
    ctx->pc = 0x192B1Cu;
    SET_GPR_U32(ctx, 31, 0x192B24u);
    ctx->pc = 0x23B0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B0F0u, 0x192B1Cu, 0x192B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192B24u;
label_192b24:
    // 0x192b24: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x192b24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x192b28: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x192b28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x192b2c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x192b2cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x192b30: 0x3e00008  jr          $ra
    ctx->pc = 0x192B30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x192B30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x192B38u;
    // 0x192b38: 0x0  nop
    ctx->pc = 0x192b38u;
    // NOP
    // 0x192b3c: 0x0  nop
    ctx->pc = 0x192b3cu;
    // NOP
    ctx->pc = 0x192b40u;
}
