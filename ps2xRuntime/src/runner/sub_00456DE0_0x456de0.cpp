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

// Function: sub_00456DE0
// Address: 0x456de0 - 0x456ee0
void sub_00456DE0_0x456de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00456DE0_0x456de0");
#endif

    switch (ctx->pc) {
        case 0x456de0u: goto label_456de0;
        case 0x456de4u: goto label_456de4;
        case 0x456de8u: goto label_456de8;
        case 0x456decu: goto label_456dec;
        case 0x456df0u: goto label_456df0;
        case 0x456df4u: goto label_456df4;
        case 0x456df8u: goto label_456df8;
        case 0x456dfcu: goto label_456dfc;
        case 0x456e00u: goto label_456e00;
        case 0x456e04u: goto label_456e04;
        case 0x456e08u: goto label_456e08;
        case 0x456e0cu: goto label_456e0c;
        case 0x456e10u: goto label_456e10;
        case 0x456e14u: goto label_456e14;
        case 0x456e18u: goto label_456e18;
        case 0x456e1cu: goto label_456e1c;
        case 0x456e20u: goto label_456e20;
        case 0x456e24u: goto label_456e24;
        case 0x456e28u: goto label_456e28;
        case 0x456e2cu: goto label_456e2c;
        case 0x456e30u: goto label_456e30;
        case 0x456e34u: goto label_456e34;
        case 0x456e38u: goto label_456e38;
        case 0x456e3cu: goto label_456e3c;
        case 0x456e40u: goto label_456e40;
        case 0x456e44u: goto label_456e44;
        case 0x456e48u: goto label_456e48;
        case 0x456e4cu: goto label_456e4c;
        case 0x456e50u: goto label_456e50;
        case 0x456e54u: goto label_456e54;
        case 0x456e58u: goto label_456e58;
        case 0x456e5cu: goto label_456e5c;
        case 0x456e60u: goto label_456e60;
        case 0x456e64u: goto label_456e64;
        case 0x456e68u: goto label_456e68;
        case 0x456e6cu: goto label_456e6c;
        case 0x456e70u: goto label_456e70;
        case 0x456e74u: goto label_456e74;
        case 0x456e78u: goto label_456e78;
        case 0x456e7cu: goto label_456e7c;
        case 0x456e80u: goto label_456e80;
        case 0x456e84u: goto label_456e84;
        case 0x456e88u: goto label_456e88;
        case 0x456e8cu: goto label_456e8c;
        case 0x456e90u: goto label_456e90;
        case 0x456e94u: goto label_456e94;
        case 0x456e98u: goto label_456e98;
        case 0x456e9cu: goto label_456e9c;
        case 0x456ea0u: goto label_456ea0;
        case 0x456ea4u: goto label_456ea4;
        case 0x456ea8u: goto label_456ea8;
        case 0x456eacu: goto label_456eac;
        case 0x456eb0u: goto label_456eb0;
        case 0x456eb4u: goto label_456eb4;
        case 0x456eb8u: goto label_456eb8;
        case 0x456ebcu: goto label_456ebc;
        case 0x456ec0u: goto label_456ec0;
        case 0x456ec4u: goto label_456ec4;
        case 0x456ec8u: goto label_456ec8;
        case 0x456eccu: goto label_456ecc;
        case 0x456ed0u: goto label_456ed0;
        case 0x456ed4u: goto label_456ed4;
        case 0x456ed8u: goto label_456ed8;
        case 0x456edcu: goto label_456edc;
        default: break;
    }

    ctx->pc = 0x456de0u;

label_456de0:
    // 0x456de0: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x456de0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
label_456de4:
    // 0x456de4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x456de4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_456de8:
    // 0x456de8: 0xafa40140  sw          $a0, 0x140($sp)
    ctx->pc = 0x456de8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 4));
label_456dec:
    // 0x456dec: 0x9382bf30  lbu         $v0, -0x40D0($gp)
    ctx->pc = 0x456decu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294950704)));
label_456df0:
    // 0x456df0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x456df0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_456df4:
    // 0x456df4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x456df4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_456df8:
    // 0x456df8: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x456df8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_456dfc:
    // 0x456dfc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x456dfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_456e00:
    // 0x456e00: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
label_456e04:
    if (ctx->pc == 0x456E04u) {
        ctx->pc = 0x456E08u;
        goto label_456e08;
    }
    ctx->pc = 0x456E00u;
    {
        const bool branch_taken_0x456e00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x456e00) {
            ctx->pc = 0x456EACu;
            goto label_456eac;
        }
    }
    ctx->pc = 0x456E08u;
label_456e08:
    // 0x456e08: 0x8f82b0ac  lw          $v0, -0x4F54($gp)
    ctx->pc = 0x456e08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946988)));
label_456e0c:
    // 0x456e0c: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_456e10:
    if (ctx->pc == 0x456E10u) {
        ctx->pc = 0x456E14u;
        goto label_456e14;
    }
    ctx->pc = 0x456E0Cu;
    {
        const bool branch_taken_0x456e0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x456e0c) {
            ctx->pc = 0x456EACu;
            goto label_456eac;
        }
    }
    ctx->pc = 0x456E14u;
label_456e14:
    // 0x456e14: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x456e14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_456e18:
    // 0x456e18: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x456e18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_456e1c:
    // 0x456e1c: 0x27a60130  addiu       $a2, $sp, 0x130
    ctx->pc = 0x456e1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_456e20:
    // 0x456e20: 0xc115ee8  jal         func_457BA0
label_456e24:
    if (ctx->pc == 0x456E24u) {
        ctx->pc = 0x456E28u;
        goto label_456e28;
    }
    ctx->pc = 0x456E20u;
    SET_GPR_U32(ctx, 31, 0x456E28u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x456E20u, 0x456E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x456E28u;
label_456e28:
    // 0x456e28: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_456e2c:
    if (ctx->pc == 0x456E2Cu) {
        ctx->pc = 0x456E30u;
        goto label_456e30;
    }
    ctx->pc = 0x456E28u;
    {
        const bool branch_taken_0x456e28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x456e28) {
            ctx->pc = 0x456EACu;
            goto label_456eac;
        }
    }
    ctx->pc = 0x456E30u;
label_456e30:
    // 0x456e30: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x456e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_456e34:
    // 0x456e34: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_456e38:
    if (ctx->pc == 0x456E38u) {
        ctx->pc = 0x456E3Cu;
        goto label_456e3c;
    }
    ctx->pc = 0x456E34u;
    {
        const bool branch_taken_0x456e34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x456e34) {
            ctx->pc = 0x456EACu;
            goto label_456eac;
        }
    }
    ctx->pc = 0x456E3Cu;
label_456e3c:
    // 0x456e3c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x456e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_456e40:
    // 0x456e40: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x456e40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_456e44:
    // 0x456e44: 0x8fa60134  lw          $a2, 0x134($sp)
    ctx->pc = 0x456e44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
label_456e48:
    // 0x456e48: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x456e48u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_456e4c:
    // 0x456e4c: 0x24e7e4b0  addiu       $a3, $a3, -0x1B50
    ctx->pc = 0x456e4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294960304));
label_456e50:
    // 0x456e50: 0x240800a5  addiu       $t0, $zero, 0xA5
    ctx->pc = 0x456e50u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 165));
label_456e54:
    // 0x456e54: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x456e54u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_456e58:
    // 0x456e58: 0x2529e550  addiu       $t1, $t1, -0x1AB0
    ctx->pc = 0x456e58u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294960464));
label_456e5c:
    // 0x456e5c: 0xc113940  jal         func_44E500
label_456e60:
    if (ctx->pc == 0x456E60u) {
        ctx->pc = 0x456E64u;
        goto label_456e64;
    }
    ctx->pc = 0x456E5Cu;
    SET_GPR_U32(ctx, 31, 0x456E64u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x456E5Cu, 0x456E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x456E64u;
label_456e64:
    // 0x456e64: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x456e64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_456e68:
    // 0x456e68: 0x2785b0b0  addiu       $a1, $gp, -0x4F50
    ctx->pc = 0x456e68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294946992));
label_456e6c:
    // 0x456e6c: 0xc115c24  jal         func_457090
label_456e70:
    if (ctx->pc == 0x456E70u) {
        ctx->pc = 0x456E74u;
        goto label_456e74;
    }
    ctx->pc = 0x456E6Cu;
    SET_GPR_U32(ctx, 31, 0x456E74u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x456E6Cu, 0x456E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x456E74u;
label_456e74:
    // 0x456e74: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x456e74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_456e78:
    // 0x456e78: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x456e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_456e7c:
    // 0x456e7c: 0x40f809  jalr        $v0
label_456e80:
    if (ctx->pc == 0x456E80u) {
        ctx->pc = 0x456E84u;
        goto label_456e84;
    }
    ctx->pc = 0x456E7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x456E84u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x456E7Cu, 0x456E84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x456E84u;
label_456e84:
    // 0x456e84: 0xaf82b0ac  sw          $v0, -0x4F54($gp)
    ctx->pc = 0x456e84u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946988), GPR_U32(ctx, 2));
label_456e88:
    // 0x456e88: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x456e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_456e8c:
    // 0x456e8c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_456e90:
    if (ctx->pc == 0x456E90u) {
        ctx->pc = 0x456E94u;
        goto label_456e94;
    }
    ctx->pc = 0x456E8Cu;
    {
        const bool branch_taken_0x456e8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x456e8c) {
            ctx->pc = 0x456E9Cu;
            goto label_456e9c;
        }
    }
    ctx->pc = 0x456E94u;
label_456e94:
    // 0x456e94: 0xd  break       0
    ctx->pc = 0x456e94u;
    runtime->handleBreak(rdram, ctx);
label_456e98:
    // 0x456e98: 0x0  nop
    ctx->pc = 0x456e98u;
    // NOP
label_456e9c:
    // 0x456e9c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x456e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_456ea0:
    // 0x456ea0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x456ea0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_456ea4:
    // 0x456ea4: 0xc11392c  jal         func_44E4B0
label_456ea8:
    if (ctx->pc == 0x456EA8u) {
        ctx->pc = 0x456EACu;
        goto label_456eac;
    }
    ctx->pc = 0x456EA4u;
    SET_GPR_U32(ctx, 31, 0x456EACu);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x456EA4u, 0x456EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x456EACu;
label_456eac:
    // 0x456eac: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x456eacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_456eb0:
    // 0x456eb0: 0xc042514  jal         func_109450
label_456eb4:
    if (ctx->pc == 0x456EB4u) {
        ctx->pc = 0x456EB8u;
        goto label_456eb8;
    }
    ctx->pc = 0x456EB0u;
    SET_GPR_U32(ctx, 31, 0x456EB8u);
    ctx->pc = 0x109450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109450u, 0x456EB0u, 0x456EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x456EB8u;
label_456eb8:
    // 0x456eb8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_456ebc:
    if (ctx->pc == 0x456EBCu) {
        ctx->pc = 0x456EC0u;
        goto label_456ec0;
    }
    ctx->pc = 0x456EB8u;
    {
        const bool branch_taken_0x456eb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x456eb8) {
            ctx->pc = 0x456ED0u;
            goto label_456ed0;
        }
    }
    ctx->pc = 0x456EC0u;
label_456ec0:
    // 0x456ec0: 0x8f84bf2c  lw          $a0, -0x40D4($gp)
    ctx->pc = 0x456ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950700)));
label_456ec4:
    // 0x456ec4: 0x8fa50140  lw          $a1, 0x140($sp)
    ctx->pc = 0x456ec4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_456ec8:
    // 0x456ec8: 0xc08e79c  jal         func_239E70
label_456ecc:
    if (ctx->pc == 0x456ECCu) {
        ctx->pc = 0x456ED0u;
        goto label_456ed0;
    }
    ctx->pc = 0x456EC8u;
    SET_GPR_U32(ctx, 31, 0x456ED0u);
    ctx->pc = 0x239E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239E70u, 0x456EC8u, 0x456ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x456ED0u;
label_456ed0:
    // 0x456ed0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x456ed0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_456ed4:
    // 0x456ed4: 0x27bd0150  addiu       $sp, $sp, 0x150
    ctx->pc = 0x456ed4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_456ed8:
    // 0x456ed8: 0x3e00008  jr          $ra
label_456edc:
    if (ctx->pc == 0x456EDCu) {
        ctx->pc = 0x456EE0u;
        goto label_fallthrough_0x456ed8;
    }
    ctx->pc = 0x456ED8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x456ED8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x456ed8:
    ctx->pc = 0x456EE0u;
}
