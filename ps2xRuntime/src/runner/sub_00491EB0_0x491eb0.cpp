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

// Function: sub_00491EB0
// Address: 0x491eb0 - 0x491f80
void sub_00491EB0_0x491eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00491EB0_0x491eb0");
#endif

    switch (ctx->pc) {
        case 0x491eb0u: goto label_491eb0;
        case 0x491eb4u: goto label_491eb4;
        case 0x491eb8u: goto label_491eb8;
        case 0x491ebcu: goto label_491ebc;
        case 0x491ec0u: goto label_491ec0;
        case 0x491ec4u: goto label_491ec4;
        case 0x491ec8u: goto label_491ec8;
        case 0x491eccu: goto label_491ecc;
        case 0x491ed0u: goto label_491ed0;
        case 0x491ed4u: goto label_491ed4;
        case 0x491ed8u: goto label_491ed8;
        case 0x491edcu: goto label_491edc;
        case 0x491ee0u: goto label_491ee0;
        case 0x491ee4u: goto label_491ee4;
        case 0x491ee8u: goto label_491ee8;
        case 0x491eecu: goto label_491eec;
        case 0x491ef0u: goto label_491ef0;
        case 0x491ef4u: goto label_491ef4;
        case 0x491ef8u: goto label_491ef8;
        case 0x491efcu: goto label_491efc;
        case 0x491f00u: goto label_491f00;
        case 0x491f04u: goto label_491f04;
        case 0x491f08u: goto label_491f08;
        case 0x491f0cu: goto label_491f0c;
        case 0x491f10u: goto label_491f10;
        case 0x491f14u: goto label_491f14;
        case 0x491f18u: goto label_491f18;
        case 0x491f1cu: goto label_491f1c;
        case 0x491f20u: goto label_491f20;
        case 0x491f24u: goto label_491f24;
        case 0x491f28u: goto label_491f28;
        case 0x491f2cu: goto label_491f2c;
        case 0x491f30u: goto label_491f30;
        case 0x491f34u: goto label_491f34;
        case 0x491f38u: goto label_491f38;
        case 0x491f3cu: goto label_491f3c;
        case 0x491f40u: goto label_491f40;
        case 0x491f44u: goto label_491f44;
        case 0x491f48u: goto label_491f48;
        case 0x491f4cu: goto label_491f4c;
        case 0x491f50u: goto label_491f50;
        case 0x491f54u: goto label_491f54;
        case 0x491f58u: goto label_491f58;
        case 0x491f5cu: goto label_491f5c;
        case 0x491f60u: goto label_491f60;
        case 0x491f64u: goto label_491f64;
        case 0x491f68u: goto label_491f68;
        case 0x491f6cu: goto label_491f6c;
        case 0x491f70u: goto label_491f70;
        case 0x491f74u: goto label_491f74;
        case 0x491f78u: goto label_491f78;
        case 0x491f7cu: goto label_491f7c;
        default: break;
    }

    ctx->pc = 0x491eb0u;

label_491eb0:
    // 0x491eb0: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x491eb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
label_491eb4:
    // 0x491eb4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x491eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_491eb8:
    // 0x491eb8: 0x8f82c0f4  lw          $v0, -0x3F0C($gp)
    ctx->pc = 0x491eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951156)));
label_491ebc:
    // 0x491ebc: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
label_491ec0:
    if (ctx->pc == 0x491EC0u) {
        ctx->pc = 0x491EC4u;
        goto label_491ec4;
    }
    ctx->pc = 0x491EBCu;
    {
        const bool branch_taken_0x491ebc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x491ebc) {
            ctx->pc = 0x491F68u;
            goto label_491f68;
        }
    }
    ctx->pc = 0x491EC4u;
label_491ec4:
    // 0x491ec4: 0x8f82b6f4  lw          $v0, -0x490C($gp)
    ctx->pc = 0x491ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948596)));
label_491ec8:
    // 0x491ec8: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_491ecc:
    if (ctx->pc == 0x491ECCu) {
        ctx->pc = 0x491ED0u;
        goto label_491ed0;
    }
    ctx->pc = 0x491EC8u;
    {
        const bool branch_taken_0x491ec8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x491ec8) {
            ctx->pc = 0x491F68u;
            goto label_491f68;
        }
    }
    ctx->pc = 0x491ED0u;
label_491ed0:
    // 0x491ed0: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x491ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_491ed4:
    // 0x491ed4: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x491ed4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_491ed8:
    // 0x491ed8: 0x27a60130  addiu       $a2, $sp, 0x130
    ctx->pc = 0x491ed8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_491edc:
    // 0x491edc: 0xc115ee8  jal         func_457BA0
label_491ee0:
    if (ctx->pc == 0x491EE0u) {
        ctx->pc = 0x491EE4u;
        goto label_491ee4;
    }
    ctx->pc = 0x491EDCu;
    SET_GPR_U32(ctx, 31, 0x491EE4u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x491EDCu, 0x491EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x491EE4u;
label_491ee4:
    // 0x491ee4: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_491ee8:
    if (ctx->pc == 0x491EE8u) {
        ctx->pc = 0x491EECu;
        goto label_491eec;
    }
    ctx->pc = 0x491EE4u;
    {
        const bool branch_taken_0x491ee4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x491ee4) {
            ctx->pc = 0x491F68u;
            goto label_491f68;
        }
    }
    ctx->pc = 0x491EECu;
label_491eec:
    // 0x491eec: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x491eecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_491ef0:
    // 0x491ef0: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_491ef4:
    if (ctx->pc == 0x491EF4u) {
        ctx->pc = 0x491EF8u;
        goto label_491ef8;
    }
    ctx->pc = 0x491EF0u;
    {
        const bool branch_taken_0x491ef0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x491ef0) {
            ctx->pc = 0x491F68u;
            goto label_491f68;
        }
    }
    ctx->pc = 0x491EF8u;
label_491ef8:
    // 0x491ef8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x491ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_491efc:
    // 0x491efc: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x491efcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_491f00:
    // 0x491f00: 0x8fa60134  lw          $a2, 0x134($sp)
    ctx->pc = 0x491f00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
label_491f04:
    // 0x491f04: 0x3c07005f  lui         $a3, 0x5F
    ctx->pc = 0x491f04u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)95 << 16));
label_491f08:
    // 0x491f08: 0x24e75050  addiu       $a3, $a3, 0x5050
    ctx->pc = 0x491f08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 20560));
label_491f0c:
    // 0x491f0c: 0x24080115  addiu       $t0, $zero, 0x115
    ctx->pc = 0x491f0cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 277));
label_491f10:
    // 0x491f10: 0x3c09005f  lui         $t1, 0x5F
    ctx->pc = 0x491f10u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)95 << 16));
label_491f14:
    // 0x491f14: 0x25295070  addiu       $t1, $t1, 0x5070
    ctx->pc = 0x491f14u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 20592));
label_491f18:
    // 0x491f18: 0xc113940  jal         func_44E500
label_491f1c:
    if (ctx->pc == 0x491F1Cu) {
        ctx->pc = 0x491F20u;
        goto label_491f20;
    }
    ctx->pc = 0x491F18u;
    SET_GPR_U32(ctx, 31, 0x491F20u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x491F18u, 0x491F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x491F20u;
label_491f20:
    // 0x491f20: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x491f20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_491f24:
    // 0x491f24: 0x2785b6e0  addiu       $a1, $gp, -0x4920
    ctx->pc = 0x491f24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294948576));
label_491f28:
    // 0x491f28: 0xc115c24  jal         func_457090
label_491f2c:
    if (ctx->pc == 0x491F2Cu) {
        ctx->pc = 0x491F30u;
        goto label_491f30;
    }
    ctx->pc = 0x491F28u;
    SET_GPR_U32(ctx, 31, 0x491F30u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x491F28u, 0x491F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x491F30u;
label_491f30:
    // 0x491f30: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x491f30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_491f34:
    // 0x491f34: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x491f34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_491f38:
    // 0x491f38: 0x40f809  jalr        $v0
label_491f3c:
    if (ctx->pc == 0x491F3Cu) {
        ctx->pc = 0x491F40u;
        goto label_491f40;
    }
    ctx->pc = 0x491F38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x491F40u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x491F38u, 0x491F40u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x491F40u;
label_491f40:
    // 0x491f40: 0xaf82b6f4  sw          $v0, -0x490C($gp)
    ctx->pc = 0x491f40u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948596), GPR_U32(ctx, 2));
label_491f44:
    // 0x491f44: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x491f44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_491f48:
    // 0x491f48: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_491f4c:
    if (ctx->pc == 0x491F4Cu) {
        ctx->pc = 0x491F50u;
        goto label_491f50;
    }
    ctx->pc = 0x491F48u;
    {
        const bool branch_taken_0x491f48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x491f48) {
            ctx->pc = 0x491F58u;
            goto label_491f58;
        }
    }
    ctx->pc = 0x491F50u;
label_491f50:
    // 0x491f50: 0xd  break       0
    ctx->pc = 0x491f50u;
    runtime->handleBreak(rdram, ctx);
label_491f54:
    // 0x491f54: 0x0  nop
    ctx->pc = 0x491f54u;
    // NOP
label_491f58:
    // 0x491f58: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x491f58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_491f5c:
    // 0x491f5c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x491f5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_491f60:
    // 0x491f60: 0xc11392c  jal         func_44E4B0
label_491f64:
    if (ctx->pc == 0x491F64u) {
        ctx->pc = 0x491F68u;
        goto label_491f68;
    }
    ctx->pc = 0x491F60u;
    SET_GPR_U32(ctx, 31, 0x491F68u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x491F60u, 0x491F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x491F68u;
label_491f68:
    // 0x491f68: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x491f68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_491f6c:
    // 0x491f6c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x491f6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_491f70:
    // 0x491f70: 0x27bd0140  addiu       $sp, $sp, 0x140
    ctx->pc = 0x491f70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_491f74:
    // 0x491f74: 0x3e00008  jr          $ra
label_491f78:
    if (ctx->pc == 0x491F78u) {
        ctx->pc = 0x491F7Cu;
        goto label_491f7c;
    }
    ctx->pc = 0x491F74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x491F74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x491F7Cu;
label_491f7c:
    // 0x491f7c: 0x0  nop
    ctx->pc = 0x491f7cu;
    // NOP
    ctx->pc = 0x491f80u;
}
