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

// Function: sub_00154E60
// Address: 0x154e60 - 0x154f50
void sub_00154E60_0x154e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00154E60_0x154e60");
#endif

    switch (ctx->pc) {
        case 0x154e60u: goto label_154e60;
        case 0x154e64u: goto label_154e64;
        case 0x154e68u: goto label_154e68;
        case 0x154e6cu: goto label_154e6c;
        case 0x154e70u: goto label_154e70;
        case 0x154e74u: goto label_154e74;
        case 0x154e78u: goto label_154e78;
        case 0x154e7cu: goto label_154e7c;
        case 0x154e80u: goto label_154e80;
        case 0x154e84u: goto label_154e84;
        case 0x154e88u: goto label_154e88;
        case 0x154e8cu: goto label_154e8c;
        case 0x154e90u: goto label_154e90;
        case 0x154e94u: goto label_154e94;
        case 0x154e98u: goto label_154e98;
        case 0x154e9cu: goto label_154e9c;
        case 0x154ea0u: goto label_154ea0;
        case 0x154ea4u: goto label_154ea4;
        case 0x154ea8u: goto label_154ea8;
        case 0x154eacu: goto label_154eac;
        case 0x154eb0u: goto label_154eb0;
        case 0x154eb4u: goto label_154eb4;
        case 0x154eb8u: goto label_154eb8;
        case 0x154ebcu: goto label_154ebc;
        case 0x154ec0u: goto label_154ec0;
        case 0x154ec4u: goto label_154ec4;
        case 0x154ec8u: goto label_154ec8;
        case 0x154eccu: goto label_154ecc;
        case 0x154ed0u: goto label_154ed0;
        case 0x154ed4u: goto label_154ed4;
        case 0x154ed8u: goto label_154ed8;
        case 0x154edcu: goto label_154edc;
        case 0x154ee0u: goto label_154ee0;
        case 0x154ee4u: goto label_154ee4;
        case 0x154ee8u: goto label_154ee8;
        case 0x154eecu: goto label_154eec;
        case 0x154ef0u: goto label_154ef0;
        case 0x154ef4u: goto label_154ef4;
        case 0x154ef8u: goto label_154ef8;
        case 0x154efcu: goto label_154efc;
        case 0x154f00u: goto label_154f00;
        case 0x154f04u: goto label_154f04;
        case 0x154f08u: goto label_154f08;
        case 0x154f0cu: goto label_154f0c;
        case 0x154f10u: goto label_154f10;
        case 0x154f14u: goto label_154f14;
        case 0x154f18u: goto label_154f18;
        case 0x154f1cu: goto label_154f1c;
        case 0x154f20u: goto label_154f20;
        case 0x154f24u: goto label_154f24;
        case 0x154f28u: goto label_154f28;
        case 0x154f2cu: goto label_154f2c;
        case 0x154f30u: goto label_154f30;
        case 0x154f34u: goto label_154f34;
        case 0x154f38u: goto label_154f38;
        case 0x154f3cu: goto label_154f3c;
        case 0x154f40u: goto label_154f40;
        case 0x154f44u: goto label_154f44;
        case 0x154f48u: goto label_154f48;
        case 0x154f4cu: goto label_154f4c;
        default: break;
    }

    ctx->pc = 0x154e60u;

label_154e60:
    // 0x154e60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x154e60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_154e64:
    // 0x154e64: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x154e64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_154e68:
    // 0x154e68: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x154e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_154e6c:
    // 0x154e6c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x154e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_154e70:
    // 0x154e70: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x154e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_154e74:
    // 0x154e74: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x154e74u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_154e78:
    // 0x154e78: 0x3e00008  jr          $ra
label_154e7c:
    if (ctx->pc == 0x154E7Cu) {
        ctx->pc = 0x154E80u;
        goto label_154e80;
    }
    ctx->pc = 0x154E78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x154E78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x154E80u;
label_154e80:
    // 0x154e80: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x154e80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_154e84:
    // 0x154e84: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x154e84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_154e88:
    // 0x154e88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x154e88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_154e8c:
    // 0x154e8c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x154e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
label_154e90:
    // 0x154e90: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x154e90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_154e94:
    // 0x154e94: 0xc08ec70  jal         func_23B1C0
label_154e98:
    if (ctx->pc == 0x154E98u) {
        ctx->pc = 0x154E9Cu;
        goto label_154e9c;
    }
    ctx->pc = 0x154E94u;
    SET_GPR_U32(ctx, 31, 0x154E9Cu);
    ctx->pc = 0x23B1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B1C0u, 0x154E94u, 0x154E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154E9Cu;
label_154e9c:
    // 0x154e9c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x154e9cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_154ea0:
    // 0x154ea0: 0x27a4002c  addiu       $a0, $sp, 0x2C
    ctx->pc = 0x154ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_154ea4:
    // 0x154ea4: 0xc055028  jal         func_1540A0
label_154ea8:
    if (ctx->pc == 0x154EA8u) {
        ctx->pc = 0x154EACu;
        goto label_154eac;
    }
    ctx->pc = 0x154EA4u;
    SET_GPR_U32(ctx, 31, 0x154EACu);
    ctx->pc = 0x1540A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1540A0u, 0x154EA4u, 0x154EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154EACu;
label_154eac:
    // 0x154eac: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x154eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_154eb0:
    // 0x154eb0: 0x27a40028  addiu       $a0, $sp, 0x28
    ctx->pc = 0x154eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
label_154eb4:
    // 0x154eb4: 0x24450028  addiu       $a1, $v0, 0x28
    ctx->pc = 0x154eb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_154eb8:
    // 0x154eb8: 0xc055008  jal         func_154020
label_154ebc:
    if (ctx->pc == 0x154EBCu) {
        ctx->pc = 0x154EC0u;
        goto label_154ec0;
    }
    ctx->pc = 0x154EB8u;
    SET_GPR_U32(ctx, 31, 0x154EC0u);
    ctx->pc = 0x154020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154020u, 0x154EB8u, 0x154EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154EC0u;
label_154ec0:
    // 0x154ec0: 0x27a4002c  addiu       $a0, $sp, 0x2C
    ctx->pc = 0x154ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_154ec4:
    // 0x154ec4: 0x27a50028  addiu       $a1, $sp, 0x28
    ctx->pc = 0x154ec4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
label_154ec8:
    // 0x154ec8: 0xc054ff8  jal         func_153FE0
label_154ecc:
    if (ctx->pc == 0x154ECCu) {
        ctx->pc = 0x154ED0u;
        goto label_154ed0;
    }
    ctx->pc = 0x154EC8u;
    SET_GPR_U32(ctx, 31, 0x154ED0u);
    ctx->pc = 0x153FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153FE0u, 0x154EC8u, 0x154ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154ED0u;
label_154ed0:
    // 0x154ed0: 0x1000000d  b           . + 4 + (0xD << 2)
label_154ed4:
    if (ctx->pc == 0x154ED4u) {
        ctx->pc = 0x154ED8u;
        goto label_154ed8;
    }
    ctx->pc = 0x154ED0u;
    {
        const bool branch_taken_0x154ed0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x154ed0) {
            ctx->pc = 0x154F08u;
            goto label_154f08;
        }
    }
    ctx->pc = 0x154ED8u;
label_154ed8:
    // 0x154ed8: 0x27a4002c  addiu       $a0, $sp, 0x2C
    ctx->pc = 0x154ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_154edc:
    // 0x154edc: 0xc054ff0  jal         func_153FC0
label_154ee0:
    if (ctx->pc == 0x154EE0u) {
        ctx->pc = 0x154EE4u;
        goto label_154ee4;
    }
    ctx->pc = 0x154EDCu;
    SET_GPR_U32(ctx, 31, 0x154EE4u);
    ctx->pc = 0x153FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153FC0u, 0x154EDCu, 0x154EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154EE4u;
label_154ee4:
    // 0x154ee4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x154ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_154ee8:
    // 0x154ee8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x154ee8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_154eec:
    // 0x154eec: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x154eecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_154ef0:
    // 0x154ef0: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x154ef0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_154ef4:
    // 0x154ef4: 0x320f809  jalr        $t9
label_154ef8:
    if (ctx->pc == 0x154EF8u) {
        ctx->pc = 0x154EFCu;
        goto label_154efc;
    }
    ctx->pc = 0x154EF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x154EFCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x154EF4u, 0x154EFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x154EFCu;
label_154efc:
    // 0x154efc: 0x27a4002c  addiu       $a0, $sp, 0x2C
    ctx->pc = 0x154efcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_154f00:
    // 0x154f00: 0xc054fd0  jal         func_153F40
label_154f04:
    if (ctx->pc == 0x154F04u) {
        ctx->pc = 0x154F08u;
        goto label_154f08;
    }
    ctx->pc = 0x154F00u;
    SET_GPR_U32(ctx, 31, 0x154F08u);
    ctx->pc = 0x153F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153F40u, 0x154F00u, 0x154F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154F08u;
label_154f08:
    // 0x154f08: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x154f08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_154f0c:
    // 0x154f0c: 0x27a40024  addiu       $a0, $sp, 0x24
    ctx->pc = 0x154f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
label_154f10:
    // 0x154f10: 0x24450028  addiu       $a1, $v0, 0x28
    ctx->pc = 0x154f10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_154f14:
    // 0x154f14: 0xc054fa4  jal         func_153E90
label_154f18:
    if (ctx->pc == 0x154F18u) {
        ctx->pc = 0x154F1Cu;
        goto label_154f1c;
    }
    ctx->pc = 0x154F14u;
    SET_GPR_U32(ctx, 31, 0x154F1Cu);
    ctx->pc = 0x153E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153E90u, 0x154F14u, 0x154F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154F1Cu;
label_154f1c:
    // 0x154f1c: 0x27a4002c  addiu       $a0, $sp, 0x2C
    ctx->pc = 0x154f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_154f20:
    // 0x154f20: 0x27a50024  addiu       $a1, $sp, 0x24
    ctx->pc = 0x154f20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
label_154f24:
    // 0x154f24: 0xc041998  jal         func_106660
label_154f28:
    if (ctx->pc == 0x154F28u) {
        ctx->pc = 0x154F2Cu;
        goto label_154f2c;
    }
    ctx->pc = 0x154F24u;
    SET_GPR_U32(ctx, 31, 0x154F2Cu);
    ctx->pc = 0x106660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106660u, 0x154F24u, 0x154F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154F2Cu;
label_154f2c:
    // 0x154f2c: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
label_154f30:
    if (ctx->pc == 0x154F30u) {
        ctx->pc = 0x154F34u;
        goto label_154f34;
    }
    ctx->pc = 0x154F2Cu;
    {
        const bool branch_taken_0x154f2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x154f2c) {
            ctx->pc = 0x154ED8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_154ed8;
        }
    }
    ctx->pc = 0x154F34u;
label_154f34:
    // 0x154f34: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x154f34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_154f38:
    // 0x154f38: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x154f38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_154f3c:
    // 0x154f3c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x154f3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_154f40:
    // 0x154f40: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x154f40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_154f44:
    // 0x154f44: 0x3e00008  jr          $ra
label_154f48:
    if (ctx->pc == 0x154F48u) {
        ctx->pc = 0x154F4Cu;
        goto label_154f4c;
    }
    ctx->pc = 0x154F44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x154F44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x154F4Cu;
label_154f4c:
    // 0x154f4c: 0x0  nop
    ctx->pc = 0x154f4cu;
    // NOP
    ctx->pc = 0x154f50u;
}
