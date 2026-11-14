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

// Function: sub_001039F0
// Address: 0x1039f0 - 0x103ad0
void sub_001039F0_0x1039f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001039F0_0x1039f0");
#endif

    switch (ctx->pc) {
        case 0x1039f0u: goto label_1039f0;
        case 0x1039f4u: goto label_1039f4;
        case 0x1039f8u: goto label_1039f8;
        case 0x1039fcu: goto label_1039fc;
        case 0x103a00u: goto label_103a00;
        case 0x103a04u: goto label_103a04;
        case 0x103a08u: goto label_103a08;
        case 0x103a0cu: goto label_103a0c;
        case 0x103a10u: goto label_103a10;
        case 0x103a14u: goto label_103a14;
        case 0x103a18u: goto label_103a18;
        case 0x103a1cu: goto label_103a1c;
        case 0x103a20u: goto label_103a20;
        case 0x103a24u: goto label_103a24;
        case 0x103a28u: goto label_103a28;
        case 0x103a2cu: goto label_103a2c;
        case 0x103a30u: goto label_103a30;
        case 0x103a34u: goto label_103a34;
        case 0x103a38u: goto label_103a38;
        case 0x103a3cu: goto label_103a3c;
        case 0x103a40u: goto label_103a40;
        case 0x103a44u: goto label_103a44;
        case 0x103a48u: goto label_103a48;
        case 0x103a4cu: goto label_103a4c;
        case 0x103a50u: goto label_103a50;
        case 0x103a54u: goto label_103a54;
        case 0x103a58u: goto label_103a58;
        case 0x103a5cu: goto label_103a5c;
        case 0x103a60u: goto label_103a60;
        case 0x103a64u: goto label_103a64;
        case 0x103a68u: goto label_103a68;
        case 0x103a6cu: goto label_103a6c;
        case 0x103a70u: goto label_103a70;
        case 0x103a74u: goto label_103a74;
        case 0x103a78u: goto label_103a78;
        case 0x103a7cu: goto label_103a7c;
        case 0x103a80u: goto label_103a80;
        case 0x103a84u: goto label_103a84;
        case 0x103a88u: goto label_103a88;
        case 0x103a8cu: goto label_103a8c;
        case 0x103a90u: goto label_103a90;
        case 0x103a94u: goto label_103a94;
        case 0x103a98u: goto label_103a98;
        case 0x103a9cu: goto label_103a9c;
        case 0x103aa0u: goto label_103aa0;
        case 0x103aa4u: goto label_103aa4;
        case 0x103aa8u: goto label_103aa8;
        case 0x103aacu: goto label_103aac;
        case 0x103ab0u: goto label_103ab0;
        case 0x103ab4u: goto label_103ab4;
        case 0x103ab8u: goto label_103ab8;
        case 0x103abcu: goto label_103abc;
        case 0x103ac0u: goto label_103ac0;
        case 0x103ac4u: goto label_103ac4;
        case 0x103ac8u: goto label_103ac8;
        case 0x103accu: goto label_103acc;
        default: break;
    }

    ctx->pc = 0x1039f0u;

label_1039f0:
    // 0x1039f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1039f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1039f4:
    // 0x1039f4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1039f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_1039f8:
    // 0x1039f8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1039f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1039fc:
    // 0x1039fc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1039fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_103a00:
    // 0x103a00: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x103a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_103a04:
    // 0x103a04: 0x3e00008  jr          $ra
label_103a08:
    if (ctx->pc == 0x103A08u) {
        ctx->pc = 0x103A0Cu;
        goto label_103a0c;
    }
    ctx->pc = 0x103A04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x103A04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x103A0Cu;
label_103a0c:
    // 0x103a0c: 0x0  nop
    ctx->pc = 0x103a0cu;
    // NOP
label_103a10:
    // 0x103a10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x103a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_103a14:
    // 0x103a14: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x103a14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_103a18:
    // 0x103a18: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x103a18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_103a1c:
    // 0x103a1c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x103a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
label_103a20:
    // 0x103a20: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x103a20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_103a24:
    // 0x103a24: 0xc0852ac  jal         func_214AB0
label_103a28:
    if (ctx->pc == 0x103A28u) {
        ctx->pc = 0x103A2Cu;
        goto label_103a2c;
    }
    ctx->pc = 0x103A24u;
    SET_GPR_U32(ctx, 31, 0x103A2Cu);
    ctx->pc = 0x214AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214AB0u, 0x103A24u, 0x103A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103A2Cu;
label_103a2c:
    // 0x103a2c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x103a2cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_103a30:
    // 0x103a30: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x103a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_103a34:
    // 0x103a34: 0x24440058  addiu       $a0, $v0, 0x58
    ctx->pc = 0x103a34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
label_103a38:
    // 0x103a38: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x103a38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_103a3c:
    // 0x103a3c: 0xc042524  jal         func_109490
label_103a40:
    if (ctx->pc == 0x103A40u) {
        ctx->pc = 0x103A44u;
        goto label_103a44;
    }
    ctx->pc = 0x103A3Cu;
    SET_GPR_U32(ctx, 31, 0x103A44u);
    ctx->pc = 0x109490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109490u, 0x103A3Cu, 0x103A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103A44u;
label_103a44:
    // 0x103a44: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x103a44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_103a48:
    // 0x103a48: 0x8c44003c  lw          $a0, 0x3C($v0)
    ctx->pc = 0x103a48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_103a4c:
    // 0x103a4c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x103a4cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_103a50:
    // 0x103a50: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x103a50u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_103a54:
    // 0x103a54: 0x320f809  jalr        $t9
label_103a58:
    if (ctx->pc == 0x103A58u) {
        ctx->pc = 0x103A5Cu;
        goto label_103a5c;
    }
    ctx->pc = 0x103A54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x103A5Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x103A54u, 0x103A5Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x103A5Cu;
label_103a5c:
    // 0x103a5c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x103a5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_103a60:
    // 0x103a60: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x103a60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_103a64:
    // 0x103a64: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x103a64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_103a68:
    // 0x103a68: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x103a68u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_103a6c:
    // 0x103a6c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x103a6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_103a70:
    // 0x103a70: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x103a70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_103a74:
    // 0x103a74: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x103a74u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_103a78:
    // 0x103a78: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x103a78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_103a7c:
    // 0x103a7c: 0x8c440054  lw          $a0, 0x54($v0)
    ctx->pc = 0x103a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_103a80:
    // 0x103a80: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x103a80u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_103a84:
    // 0x103a84: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x103a84u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_103a88:
    // 0x103a88: 0x320f809  jalr        $t9
label_103a8c:
    if (ctx->pc == 0x103A8Cu) {
        ctx->pc = 0x103A90u;
        goto label_103a90;
    }
    ctx->pc = 0x103A88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x103A90u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x103A88u, 0x103A90u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x103A90u;
label_103a90:
    // 0x103a90: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x103a90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_103a94:
    // 0x103a94: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x103a94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_103a98:
    // 0x103a98: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x103a98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_103a9c:
    // 0x103a9c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x103a9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_103aa0:
    // 0x103aa0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x103aa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_103aa4:
    // 0x103aa4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x103aa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_103aa8:
    // 0x103aa8: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x103aa8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_103aac:
    // 0x103aac: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x103aacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_103ab0:
    // 0x103ab0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x103ab0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_103ab4:
    // 0x103ab4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x103ab4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_103ab8:
    // 0x103ab8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x103ab8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_103abc:
    // 0x103abc: 0x3e00008  jr          $ra
label_103ac0:
    if (ctx->pc == 0x103AC0u) {
        ctx->pc = 0x103AC4u;
        goto label_103ac4;
    }
    ctx->pc = 0x103ABCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x103ABCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x103AC4u;
label_103ac4:
    // 0x103ac4: 0x0  nop
    ctx->pc = 0x103ac4u;
    // NOP
label_103ac8:
    // 0x103ac8: 0x0  nop
    ctx->pc = 0x103ac8u;
    // NOP
label_103acc:
    // 0x103acc: 0x0  nop
    ctx->pc = 0x103accu;
    // NOP
    ctx->pc = 0x103ad0u;
}
