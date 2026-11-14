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

// Function: sub_00103E50
// Address: 0x103e50 - 0x103fe0
void sub_00103E50_0x103e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00103E50_0x103e50");
#endif

    switch (ctx->pc) {
        case 0x103e50u: goto label_103e50;
        case 0x103e54u: goto label_103e54;
        case 0x103e58u: goto label_103e58;
        case 0x103e5cu: goto label_103e5c;
        case 0x103e60u: goto label_103e60;
        case 0x103e64u: goto label_103e64;
        case 0x103e68u: goto label_103e68;
        case 0x103e6cu: goto label_103e6c;
        case 0x103e70u: goto label_103e70;
        case 0x103e74u: goto label_103e74;
        case 0x103e78u: goto label_103e78;
        case 0x103e7cu: goto label_103e7c;
        case 0x103e80u: goto label_103e80;
        case 0x103e84u: goto label_103e84;
        case 0x103e88u: goto label_103e88;
        case 0x103e8cu: goto label_103e8c;
        case 0x103e90u: goto label_103e90;
        case 0x103e94u: goto label_103e94;
        case 0x103e98u: goto label_103e98;
        case 0x103e9cu: goto label_103e9c;
        case 0x103ea0u: goto label_103ea0;
        case 0x103ea4u: goto label_103ea4;
        case 0x103ea8u: goto label_103ea8;
        case 0x103eacu: goto label_103eac;
        case 0x103eb0u: goto label_103eb0;
        case 0x103eb4u: goto label_103eb4;
        case 0x103eb8u: goto label_103eb8;
        case 0x103ebcu: goto label_103ebc;
        case 0x103ec0u: goto label_103ec0;
        case 0x103ec4u: goto label_103ec4;
        case 0x103ec8u: goto label_103ec8;
        case 0x103eccu: goto label_103ecc;
        case 0x103ed0u: goto label_103ed0;
        case 0x103ed4u: goto label_103ed4;
        case 0x103ed8u: goto label_103ed8;
        case 0x103edcu: goto label_103edc;
        case 0x103ee0u: goto label_103ee0;
        case 0x103ee4u: goto label_103ee4;
        case 0x103ee8u: goto label_103ee8;
        case 0x103eecu: goto label_103eec;
        case 0x103ef0u: goto label_103ef0;
        case 0x103ef4u: goto label_103ef4;
        case 0x103ef8u: goto label_103ef8;
        case 0x103efcu: goto label_103efc;
        case 0x103f00u: goto label_103f00;
        case 0x103f04u: goto label_103f04;
        case 0x103f08u: goto label_103f08;
        case 0x103f0cu: goto label_103f0c;
        case 0x103f10u: goto label_103f10;
        case 0x103f14u: goto label_103f14;
        case 0x103f18u: goto label_103f18;
        case 0x103f1cu: goto label_103f1c;
        case 0x103f20u: goto label_103f20;
        case 0x103f24u: goto label_103f24;
        case 0x103f28u: goto label_103f28;
        case 0x103f2cu: goto label_103f2c;
        case 0x103f30u: goto label_103f30;
        case 0x103f34u: goto label_103f34;
        case 0x103f38u: goto label_103f38;
        case 0x103f3cu: goto label_103f3c;
        case 0x103f40u: goto label_103f40;
        case 0x103f44u: goto label_103f44;
        case 0x103f48u: goto label_103f48;
        case 0x103f4cu: goto label_103f4c;
        case 0x103f50u: goto label_103f50;
        case 0x103f54u: goto label_103f54;
        case 0x103f58u: goto label_103f58;
        case 0x103f5cu: goto label_103f5c;
        case 0x103f60u: goto label_103f60;
        case 0x103f64u: goto label_103f64;
        case 0x103f68u: goto label_103f68;
        case 0x103f6cu: goto label_103f6c;
        case 0x103f70u: goto label_103f70;
        case 0x103f74u: goto label_103f74;
        case 0x103f78u: goto label_103f78;
        case 0x103f7cu: goto label_103f7c;
        case 0x103f80u: goto label_103f80;
        case 0x103f84u: goto label_103f84;
        case 0x103f88u: goto label_103f88;
        case 0x103f8cu: goto label_103f8c;
        case 0x103f90u: goto label_103f90;
        case 0x103f94u: goto label_103f94;
        case 0x103f98u: goto label_103f98;
        case 0x103f9cu: goto label_103f9c;
        case 0x103fa0u: goto label_103fa0;
        case 0x103fa4u: goto label_103fa4;
        case 0x103fa8u: goto label_103fa8;
        case 0x103facu: goto label_103fac;
        case 0x103fb0u: goto label_103fb0;
        case 0x103fb4u: goto label_103fb4;
        case 0x103fb8u: goto label_103fb8;
        case 0x103fbcu: goto label_103fbc;
        case 0x103fc0u: goto label_103fc0;
        case 0x103fc4u: goto label_103fc4;
        case 0x103fc8u: goto label_103fc8;
        case 0x103fccu: goto label_103fcc;
        case 0x103fd0u: goto label_103fd0;
        case 0x103fd4u: goto label_103fd4;
        case 0x103fd8u: goto label_103fd8;
        case 0x103fdcu: goto label_103fdc;
        default: break;
    }

    ctx->pc = 0x103e50u;

label_103e50:
    // 0x103e50: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x103e50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_103e54:
    // 0x103e54: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x103e54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_103e58:
    // 0x103e58: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x103e58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_103e5c:
    // 0x103e5c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x103e5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_103e60:
    // 0x103e60: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x103e60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_103e64:
    // 0x103e64: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x103e64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_103e68:
    // 0x103e68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x103e68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_103e6c:
    // 0x103e6c: 0xafa40060  sw          $a0, 0x60($sp)
    ctx->pc = 0x103e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
label_103e70:
    // 0x103e70: 0xafa50070  sw          $a1, 0x70($sp)
    ctx->pc = 0x103e70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 5));
label_103e74:
    // 0x103e74: 0xafa60080  sw          $a2, 0x80($sp)
    ctx->pc = 0x103e74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 6));
label_103e78:
    // 0x103e78: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x103e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_103e7c:
    // 0x103e7c: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x103e7cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_103e80:
    // 0x103e80: 0x8f82bb6c  lw          $v0, -0x4494($gp)
    ctx->pc = 0x103e80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949740)));
label_103e84:
    // 0x103e84: 0x10020038  beq         $zero, $v0, . + 4 + (0x38 << 2)
label_103e88:
    if (ctx->pc == 0x103E88u) {
        ctx->pc = 0x103E8Cu;
        goto label_103e8c;
    }
    ctx->pc = 0x103E84u;
    {
        const bool branch_taken_0x103e84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x103e84) {
            ctx->pc = 0x103F68u;
            goto label_103f68;
        }
    }
    ctx->pc = 0x103E8Cu;
label_103e8c:
    // 0x103e8c: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x103e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_103e90:
    // 0x103e90: 0xc041010  jal         func_104040
label_103e94:
    if (ctx->pc == 0x103E94u) {
        ctx->pc = 0x103E98u;
        goto label_103e98;
    }
    ctx->pc = 0x103E90u;
    SET_GPR_U32(ctx, 31, 0x103E98u);
    ctx->pc = 0x104040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104040u, 0x103E90u, 0x103E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103E98u;
label_103e98:
    // 0x103e98: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x103e98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_103e9c:
    // 0x103e9c: 0x1000002d  b           . + 4 + (0x2D << 2)
label_103ea0:
    if (ctx->pc == 0x103EA0u) {
        ctx->pc = 0x103EA4u;
        goto label_103ea4;
    }
    ctx->pc = 0x103E9Cu;
    {
        const bool branch_taken_0x103e9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x103e9c) {
            ctx->pc = 0x103F54u;
            goto label_103f54;
        }
    }
    ctx->pc = 0x103EA4u;
label_103ea4:
    // 0x103ea4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x103ea4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_103ea8:
    // 0x103ea8: 0x8f84bb6c  lw          $a0, -0x4494($gp)
    ctx->pc = 0x103ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949740)));
label_103eac:
    // 0x103eac: 0xc041008  jal         func_104020
label_103eb0:
    if (ctx->pc == 0x103EB0u) {
        ctx->pc = 0x103EB4u;
        goto label_103eb4;
    }
    ctx->pc = 0x103EACu;
    SET_GPR_U32(ctx, 31, 0x103EB4u);
    ctx->pc = 0x104020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104020u, 0x103EACu, 0x103EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103EB4u;
label_103eb4:
    // 0x103eb4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x103eb4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_103eb8:
    // 0x103eb8: 0x1000001a  b           . + 4 + (0x1A << 2)
label_103ebc:
    if (ctx->pc == 0x103EBCu) {
        ctx->pc = 0x103EC0u;
        goto label_103ec0;
    }
    ctx->pc = 0x103EB8u;
    {
        const bool branch_taken_0x103eb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x103eb8) {
            ctx->pc = 0x103F24u;
            goto label_103f24;
        }
    }
    ctx->pc = 0x103EC0u;
label_103ec0:
    // 0x103ec0: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x103ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_103ec4:
    // 0x103ec4: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x103ec4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_103ec8:
    // 0x103ec8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x103ec8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_103ecc:
    // 0x103ecc: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x103eccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_103ed0:
    // 0x103ed0: 0x320f809  jalr        $t9
label_103ed4:
    if (ctx->pc == 0x103ED4u) {
        ctx->pc = 0x103ED8u;
        goto label_103ed8;
    }
    ctx->pc = 0x103ED0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x103ED8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x103ED0u, 0x103ED8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x103ED8u;
label_103ed8:
    // 0x103ed8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x103ed8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_103edc:
    // 0x103edc: 0x10140010  beq         $zero, $s4, . + 4 + (0x10 << 2)
label_103ee0:
    if (ctx->pc == 0x103EE0u) {
        ctx->pc = 0x103EE4u;
        goto label_103ee4;
    }
    ctx->pc = 0x103EDCu;
    {
        const bool branch_taken_0x103edc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 20));
        if (branch_taken_0x103edc) {
            ctx->pc = 0x103F20u;
            goto label_103f20;
        }
    }
    ctx->pc = 0x103EE4u;
label_103ee4:
    // 0x103ee4: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x103ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_103ee8:
    // 0x103ee8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x103ee8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_103eec:
    // 0x103eec: 0xc08555c  jal         func_215570
label_103ef0:
    if (ctx->pc == 0x103EF0u) {
        ctx->pc = 0x103EF4u;
        goto label_103ef4;
    }
    ctx->pc = 0x103EECu;
    SET_GPR_U32(ctx, 31, 0x103EF4u);
    ctx->pc = 0x215570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215570u, 0x103EECu, 0x103EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103EF4u;
label_103ef4:
    // 0x103ef4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x103ef4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_103ef8:
    // 0x103ef8: 0x322200ff  andi        $v0, $s1, 0xFF
    ctx->pc = 0x103ef8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_103efc:
    // 0x103efc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x103efcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_103f00:
    // 0x103f00: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x103f00u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_103f04:
    // 0x103f04: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x103f04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_103f08:
    // 0x103f08: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x103f08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_103f0c:
    // 0x103f0c: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x103f0cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_103f10:
    // 0x103f10: 0x326300ff  andi        $v1, $s3, 0xFF
    ctx->pc = 0x103f10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
label_103f14:
    // 0x103f14: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x103f14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_103f18:
    // 0x103f18: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x103f18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_103f1c:
    // 0x103f1c: 0x305300ff  andi        $s3, $v0, 0xFF
    ctx->pc = 0x103f1cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_103f20:
    // 0x103f20: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x103f20u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_103f24:
    // 0x103f24: 0x8f84bb6c  lw          $a0, -0x4494($gp)
    ctx->pc = 0x103f24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949740)));
label_103f28:
    // 0x103f28: 0xc041000  jal         func_104000
label_103f2c:
    if (ctx->pc == 0x103F2Cu) {
        ctx->pc = 0x103F30u;
        goto label_103f30;
    }
    ctx->pc = 0x103F28u;
    SET_GPR_U32(ctx, 31, 0x103F30u);
    ctx->pc = 0x104000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104000u, 0x103F28u, 0x103F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103F30u;
label_103f30:
    // 0x103f30: 0x1642ffe3  bne         $s2, $v0, . + 4 + (-0x1D << 2)
label_103f34:
    if (ctx->pc == 0x103F34u) {
        ctx->pc = 0x103F38u;
        goto label_103f38;
    }
    ctx->pc = 0x103F30u;
    {
        const bool branch_taken_0x103f30 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x103f30) {
            ctx->pc = 0x103EC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_103ec0;
        }
    }
    ctx->pc = 0x103F38u;
label_103f38:
    // 0x103f38: 0x326200ff  andi        $v0, $s3, 0xFF
    ctx->pc = 0x103f38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
label_103f3c:
    // 0x103f3c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_103f40:
    if (ctx->pc == 0x103F40u) {
        ctx->pc = 0x103F44u;
        goto label_103f44;
    }
    ctx->pc = 0x103F3Cu;
    {
        const bool branch_taken_0x103f3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x103f3c) {
            ctx->pc = 0x103F50u;
            goto label_103f50;
        }
    }
    ctx->pc = 0x103F44u;
label_103f44:
    // 0x103f44: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x103f44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_103f48:
    // 0x103f48: 0x3842001a  xori        $v0, $v0, 0x1A
    ctx->pc = 0x103f48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)26);
label_103f4c:
    // 0x103f4c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x103f4cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_103f50:
    // 0x103f50: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x103f50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_103f54:
    // 0x103f54: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x103f54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_103f58:
    // 0x103f58: 0xc040ff8  jal         func_103FE0
label_103f5c:
    if (ctx->pc == 0x103F5Cu) {
        ctx->pc = 0x103F60u;
        goto label_103f60;
    }
    ctx->pc = 0x103F58u;
    SET_GPR_U32(ctx, 31, 0x103F60u);
    ctx->pc = 0x103FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103FE0u, 0x103F58u, 0x103F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103F60u;
label_103f60:
    // 0x103f60: 0x1602ffd0  bne         $s0, $v0, . + 4 + (-0x30 << 2)
label_103f64:
    if (ctx->pc == 0x103F64u) {
        ctx->pc = 0x103F68u;
        goto label_103f68;
    }
    ctx->pc = 0x103F60u;
    {
        const bool branch_taken_0x103f60 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x103f60) {
            ctx->pc = 0x103EA4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_103ea4;
        }
    }
    ctx->pc = 0x103F68u;
label_103f68:
    // 0x103f68: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x103f68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_103f6c:
    // 0x103f6c: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x103f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_103f70:
    // 0x103f70: 0xc090590  jal         func_241640
label_103f74:
    if (ctx->pc == 0x103F74u) {
        ctx->pc = 0x103F78u;
        goto label_103f78;
    }
    ctx->pc = 0x103F70u;
    SET_GPR_U32(ctx, 31, 0x103F78u);
    ctx->pc = 0x241640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241640u, 0x103F70u, 0x103F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103F78u;
label_103f78:
    // 0x103f78: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x103f78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_103f7c:
    // 0x103f7c: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x103f7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_103f80:
    // 0x103f80: 0xc091594  jal         func_245650
label_103f84:
    if (ctx->pc == 0x103F84u) {
        ctx->pc = 0x103F88u;
        goto label_103f88;
    }
    ctx->pc = 0x103F80u;
    SET_GPR_U32(ctx, 31, 0x103F88u);
    ctx->pc = 0x245650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x245650u, 0x103F80u, 0x103F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103F88u;
label_103f88:
    // 0x103f88: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x103f88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_103f8c:
    // 0x103f8c: 0x322200ff  andi        $v0, $s1, 0xFF
    ctx->pc = 0x103f8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_103f90:
    // 0x103f90: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x103f90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_103f94:
    // 0x103f94: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x103f94u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_103f98:
    // 0x103f98: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x103f98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_103f9c:
    // 0x103f9c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x103f9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_103fa0:
    // 0x103fa0: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x103fa0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_103fa4:
    // 0x103fa4: 0x8f83bb70  lw          $v1, -0x4490($gp)
    ctx->pc = 0x103fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_103fa8:
    // 0x103fa8: 0x8c620040  lw          $v0, 0x40($v1)
    ctx->pc = 0x103fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
label_103fac:
    // 0x103fac: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x103facu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_103fb0:
    // 0x103fb0: 0xac620040  sw          $v0, 0x40($v1)
    ctx->pc = 0x103fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 2));
label_103fb4:
    // 0x103fb4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x103fb4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_103fb8:
    // 0x103fb8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x103fb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_103fbc:
    // 0x103fbc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x103fbcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_103fc0:
    // 0x103fc0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x103fc0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_103fc4:
    // 0x103fc4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x103fc4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_103fc8:
    // 0x103fc8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x103fc8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_103fcc:
    // 0x103fcc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x103fccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_103fd0:
    // 0x103fd0: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x103fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_103fd4:
    // 0x103fd4: 0x3e00008  jr          $ra
label_103fd8:
    if (ctx->pc == 0x103FD8u) {
        ctx->pc = 0x103FDCu;
        goto label_103fdc;
    }
    ctx->pc = 0x103FD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x103FD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x103FDCu;
label_103fdc:
    // 0x103fdc: 0x0  nop
    ctx->pc = 0x103fdcu;
    // NOP
    ctx->pc = 0x103fe0u;
}
