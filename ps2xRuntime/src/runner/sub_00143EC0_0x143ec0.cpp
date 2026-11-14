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

// Function: sub_00143EC0
// Address: 0x143ec0 - 0x143fb0
void sub_00143EC0_0x143ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00143EC0_0x143ec0");
#endif

    switch (ctx->pc) {
        case 0x143ec0u: goto label_143ec0;
        case 0x143ec4u: goto label_143ec4;
        case 0x143ec8u: goto label_143ec8;
        case 0x143eccu: goto label_143ecc;
        case 0x143ed0u: goto label_143ed0;
        case 0x143ed4u: goto label_143ed4;
        case 0x143ed8u: goto label_143ed8;
        case 0x143edcu: goto label_143edc;
        case 0x143ee0u: goto label_143ee0;
        case 0x143ee4u: goto label_143ee4;
        case 0x143ee8u: goto label_143ee8;
        case 0x143eecu: goto label_143eec;
        case 0x143ef0u: goto label_143ef0;
        case 0x143ef4u: goto label_143ef4;
        case 0x143ef8u: goto label_143ef8;
        case 0x143efcu: goto label_143efc;
        case 0x143f00u: goto label_143f00;
        case 0x143f04u: goto label_143f04;
        case 0x143f08u: goto label_143f08;
        case 0x143f0cu: goto label_143f0c;
        case 0x143f10u: goto label_143f10;
        case 0x143f14u: goto label_143f14;
        case 0x143f18u: goto label_143f18;
        case 0x143f1cu: goto label_143f1c;
        case 0x143f20u: goto label_143f20;
        case 0x143f24u: goto label_143f24;
        case 0x143f28u: goto label_143f28;
        case 0x143f2cu: goto label_143f2c;
        case 0x143f30u: goto label_143f30;
        case 0x143f34u: goto label_143f34;
        case 0x143f38u: goto label_143f38;
        case 0x143f3cu: goto label_143f3c;
        case 0x143f40u: goto label_143f40;
        case 0x143f44u: goto label_143f44;
        case 0x143f48u: goto label_143f48;
        case 0x143f4cu: goto label_143f4c;
        case 0x143f50u: goto label_143f50;
        case 0x143f54u: goto label_143f54;
        case 0x143f58u: goto label_143f58;
        case 0x143f5cu: goto label_143f5c;
        case 0x143f60u: goto label_143f60;
        case 0x143f64u: goto label_143f64;
        case 0x143f68u: goto label_143f68;
        case 0x143f6cu: goto label_143f6c;
        case 0x143f70u: goto label_143f70;
        case 0x143f74u: goto label_143f74;
        case 0x143f78u: goto label_143f78;
        case 0x143f7cu: goto label_143f7c;
        case 0x143f80u: goto label_143f80;
        case 0x143f84u: goto label_143f84;
        case 0x143f88u: goto label_143f88;
        case 0x143f8cu: goto label_143f8c;
        case 0x143f90u: goto label_143f90;
        case 0x143f94u: goto label_143f94;
        case 0x143f98u: goto label_143f98;
        case 0x143f9cu: goto label_143f9c;
        case 0x143fa0u: goto label_143fa0;
        case 0x143fa4u: goto label_143fa4;
        case 0x143fa8u: goto label_143fa8;
        case 0x143facu: goto label_143fac;
        default: break;
    }

    ctx->pc = 0x143ec0u;

label_143ec0:
    // 0x143ec0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x143ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_143ec4:
    // 0x143ec4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x143ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_143ec8:
    // 0x143ec8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x143ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_143ecc:
    // 0x143ecc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x143eccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_143ed0:
    // 0x143ed0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x143ed0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_143ed4:
    // 0x143ed4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x143ed4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_143ed8:
    // 0x143ed8: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x143ed8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_143edc:
    // 0x143edc: 0x320f809  jalr        $t9
label_143ee0:
    if (ctx->pc == 0x143EE0u) {
        ctx->pc = 0x143EE4u;
        goto label_143ee4;
    }
    ctx->pc = 0x143EDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x143EE4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143EDCu, 0x143EE4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x143EE4u;
label_143ee4:
    // 0x143ee4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x143ee4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_143ee8:
    // 0x143ee8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x143ee8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_143eec:
    // 0x143eec: 0x3e00008  jr          $ra
label_143ef0:
    if (ctx->pc == 0x143EF0u) {
        ctx->pc = 0x143EF4u;
        goto label_143ef4;
    }
    ctx->pc = 0x143EECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143EECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x143EF4u;
label_143ef4:
    // 0x143ef4: 0x0  nop
    ctx->pc = 0x143ef4u;
    // NOP
label_143ef8:
    // 0x143ef8: 0x0  nop
    ctx->pc = 0x143ef8u;
    // NOP
label_143efc:
    // 0x143efc: 0x0  nop
    ctx->pc = 0x143efcu;
    // NOP
label_143f00:
    // 0x143f00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x143f00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_143f04:
    // 0x143f04: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x143f04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_143f08:
    // 0x143f08: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x143f08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_143f0c:
    // 0x143f0c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x143f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
label_143f10:
    // 0x143f10: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x143f10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_143f14:
    // 0x143f14: 0xc08d47c  jal         func_2351F0
label_143f18:
    if (ctx->pc == 0x143F18u) {
        ctx->pc = 0x143F1Cu;
        goto label_143f1c;
    }
    ctx->pc = 0x143F14u;
    SET_GPR_U32(ctx, 31, 0x143F1Cu);
    ctx->pc = 0x2351F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2351F0u, 0x143F14u, 0x143F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143F1Cu;
label_143f1c:
    // 0x143f1c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x143f1cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_143f20:
    // 0x143f20: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x143f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_143f24:
    // 0x143f24: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x143f24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_143f28:
    // 0x143f28: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x143f28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_143f2c:
    // 0x143f2c: 0xc051888  jal         func_146220
label_143f30:
    if (ctx->pc == 0x143F30u) {
        ctx->pc = 0x143F34u;
        goto label_143f34;
    }
    ctx->pc = 0x143F2Cu;
    SET_GPR_U32(ctx, 31, 0x143F34u);
    ctx->pc = 0x146220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x146220u, 0x143F2Cu, 0x143F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143F34u;
label_143f34:
    // 0x143f34: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x143f34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_143f38:
    // 0x143f38: 0x24440034  addiu       $a0, $v0, 0x34
    ctx->pc = 0x143f38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
label_143f3c:
    // 0x143f3c: 0xc050fec  jal         func_143FB0
label_143f40:
    if (ctx->pc == 0x143F40u) {
        ctx->pc = 0x143F44u;
        goto label_143f44;
    }
    ctx->pc = 0x143F3Cu;
    SET_GPR_U32(ctx, 31, 0x143F44u);
    ctx->pc = 0x143FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143FB0u, 0x143F3Cu, 0x143F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143F44u;
label_143f44:
    // 0x143f44: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x143f44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_143f48:
    // 0x143f48: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x143f48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_143f4c:
    // 0x143f4c: 0x14620012  bne         $v1, $v0, . + 4 + (0x12 << 2)
label_143f50:
    if (ctx->pc == 0x143F50u) {
        ctx->pc = 0x143F54u;
        goto label_143f54;
    }
    ctx->pc = 0x143F4Cu;
    {
        const bool branch_taken_0x143f4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x143f4c) {
            ctx->pc = 0x143F98u;
            goto label_143f98;
        }
    }
    ctx->pc = 0x143F54u;
label_143f54:
    // 0x143f54: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x143f54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_143f58:
    // 0x143f58: 0x8c420060  lw          $v0, 0x60($v0)
    ctx->pc = 0x143f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_143f5c:
    // 0x143f5c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_143f60:
    if (ctx->pc == 0x143F60u) {
        ctx->pc = 0x143F64u;
        goto label_143f64;
    }
    ctx->pc = 0x143F5Cu;
    {
        const bool branch_taken_0x143f5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x143f5c) {
            ctx->pc = 0x143F98u;
            goto label_143f98;
        }
    }
    ctx->pc = 0x143F64u;
label_143f64:
    // 0x143f64: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x143f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_143f68:
    // 0x143f68: 0x8c440060  lw          $a0, 0x60($v0)
    ctx->pc = 0x143f68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_143f6c:
    // 0x143f6c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x143f6cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_143f70:
    // 0x143f70: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x143f70u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_143f74:
    // 0x143f74: 0x320f809  jalr        $t9
label_143f78:
    if (ctx->pc == 0x143F78u) {
        ctx->pc = 0x143F7Cu;
        goto label_143f7c;
    }
    ctx->pc = 0x143F74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x143F7Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143F74u, 0x143F7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x143F7Cu;
label_143f7c:
    // 0x143f7c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x143f7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_143f80:
    // 0x143f80: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x143f80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_143f84:
    // 0x143f84: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x143f84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_143f88:
    // 0x143f88: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x143f88u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_143f8c:
    // 0x143f8c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x143f8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_143f90:
    // 0x143f90: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x143f90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_143f94:
    // 0x143f94: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x143f94u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_143f98:
    // 0x143f98: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x143f98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_143f9c:
    // 0x143f9c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x143f9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_143fa0:
    // 0x143fa0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x143fa0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_143fa4:
    // 0x143fa4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x143fa4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_143fa8:
    // 0x143fa8: 0x3e00008  jr          $ra
label_143fac:
    if (ctx->pc == 0x143FACu) {
        ctx->pc = 0x143FB0u;
        goto label_fallthrough_0x143fa8;
    }
    ctx->pc = 0x143FA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143FA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x143fa8:
    ctx->pc = 0x143FB0u;
}
