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

// Function: sub_00483EC0
// Address: 0x483ec0 - 0x484180
void sub_00483EC0_0x483ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00483EC0_0x483ec0");
#endif

    switch (ctx->pc) {
        case 0x483ec0u: goto label_483ec0;
        case 0x483ec4u: goto label_483ec4;
        case 0x483ec8u: goto label_483ec8;
        case 0x483eccu: goto label_483ecc;
        case 0x483ed0u: goto label_483ed0;
        case 0x483ed4u: goto label_483ed4;
        case 0x483ed8u: goto label_483ed8;
        case 0x483edcu: goto label_483edc;
        case 0x483ee0u: goto label_483ee0;
        case 0x483ee4u: goto label_483ee4;
        case 0x483ee8u: goto label_483ee8;
        case 0x483eecu: goto label_483eec;
        case 0x483ef0u: goto label_483ef0;
        case 0x483ef4u: goto label_483ef4;
        case 0x483ef8u: goto label_483ef8;
        case 0x483efcu: goto label_483efc;
        case 0x483f00u: goto label_483f00;
        case 0x483f04u: goto label_483f04;
        case 0x483f08u: goto label_483f08;
        case 0x483f0cu: goto label_483f0c;
        case 0x483f10u: goto label_483f10;
        case 0x483f14u: goto label_483f14;
        case 0x483f18u: goto label_483f18;
        case 0x483f1cu: goto label_483f1c;
        case 0x483f20u: goto label_483f20;
        case 0x483f24u: goto label_483f24;
        case 0x483f28u: goto label_483f28;
        case 0x483f2cu: goto label_483f2c;
        case 0x483f30u: goto label_483f30;
        case 0x483f34u: goto label_483f34;
        case 0x483f38u: goto label_483f38;
        case 0x483f3cu: goto label_483f3c;
        case 0x483f40u: goto label_483f40;
        case 0x483f44u: goto label_483f44;
        case 0x483f48u: goto label_483f48;
        case 0x483f4cu: goto label_483f4c;
        case 0x483f50u: goto label_483f50;
        case 0x483f54u: goto label_483f54;
        case 0x483f58u: goto label_483f58;
        case 0x483f5cu: goto label_483f5c;
        case 0x483f60u: goto label_483f60;
        case 0x483f64u: goto label_483f64;
        case 0x483f68u: goto label_483f68;
        case 0x483f6cu: goto label_483f6c;
        case 0x483f70u: goto label_483f70;
        case 0x483f74u: goto label_483f74;
        case 0x483f78u: goto label_483f78;
        case 0x483f7cu: goto label_483f7c;
        case 0x483f80u: goto label_483f80;
        case 0x483f84u: goto label_483f84;
        case 0x483f88u: goto label_483f88;
        case 0x483f8cu: goto label_483f8c;
        case 0x483f90u: goto label_483f90;
        case 0x483f94u: goto label_483f94;
        case 0x483f98u: goto label_483f98;
        case 0x483f9cu: goto label_483f9c;
        case 0x483fa0u: goto label_483fa0;
        case 0x483fa4u: goto label_483fa4;
        case 0x483fa8u: goto label_483fa8;
        case 0x483facu: goto label_483fac;
        case 0x483fb0u: goto label_483fb0;
        case 0x483fb4u: goto label_483fb4;
        case 0x483fb8u: goto label_483fb8;
        case 0x483fbcu: goto label_483fbc;
        case 0x483fc0u: goto label_483fc0;
        case 0x483fc4u: goto label_483fc4;
        case 0x483fc8u: goto label_483fc8;
        case 0x483fccu: goto label_483fcc;
        case 0x483fd0u: goto label_483fd0;
        case 0x483fd4u: goto label_483fd4;
        case 0x483fd8u: goto label_483fd8;
        case 0x483fdcu: goto label_483fdc;
        case 0x483fe0u: goto label_483fe0;
        case 0x483fe4u: goto label_483fe4;
        case 0x483fe8u: goto label_483fe8;
        case 0x483fecu: goto label_483fec;
        case 0x483ff0u: goto label_483ff0;
        case 0x483ff4u: goto label_483ff4;
        case 0x483ff8u: goto label_483ff8;
        case 0x483ffcu: goto label_483ffc;
        case 0x484000u: goto label_484000;
        case 0x484004u: goto label_484004;
        case 0x484008u: goto label_484008;
        case 0x48400cu: goto label_48400c;
        case 0x484010u: goto label_484010;
        case 0x484014u: goto label_484014;
        case 0x484018u: goto label_484018;
        case 0x48401cu: goto label_48401c;
        case 0x484020u: goto label_484020;
        case 0x484024u: goto label_484024;
        case 0x484028u: goto label_484028;
        case 0x48402cu: goto label_48402c;
        case 0x484030u: goto label_484030;
        case 0x484034u: goto label_484034;
        case 0x484038u: goto label_484038;
        case 0x48403cu: goto label_48403c;
        case 0x484040u: goto label_484040;
        case 0x484044u: goto label_484044;
        case 0x484048u: goto label_484048;
        case 0x48404cu: goto label_48404c;
        case 0x484050u: goto label_484050;
        case 0x484054u: goto label_484054;
        case 0x484058u: goto label_484058;
        case 0x48405cu: goto label_48405c;
        case 0x484060u: goto label_484060;
        case 0x484064u: goto label_484064;
        case 0x484068u: goto label_484068;
        case 0x48406cu: goto label_48406c;
        case 0x484070u: goto label_484070;
        case 0x484074u: goto label_484074;
        case 0x484078u: goto label_484078;
        case 0x48407cu: goto label_48407c;
        case 0x484080u: goto label_484080;
        case 0x484084u: goto label_484084;
        case 0x484088u: goto label_484088;
        case 0x48408cu: goto label_48408c;
        case 0x484090u: goto label_484090;
        case 0x484094u: goto label_484094;
        case 0x484098u: goto label_484098;
        case 0x48409cu: goto label_48409c;
        case 0x4840a0u: goto label_4840a0;
        case 0x4840a4u: goto label_4840a4;
        case 0x4840a8u: goto label_4840a8;
        case 0x4840acu: goto label_4840ac;
        case 0x4840b0u: goto label_4840b0;
        case 0x4840b4u: goto label_4840b4;
        case 0x4840b8u: goto label_4840b8;
        case 0x4840bcu: goto label_4840bc;
        case 0x4840c0u: goto label_4840c0;
        case 0x4840c4u: goto label_4840c4;
        case 0x4840c8u: goto label_4840c8;
        case 0x4840ccu: goto label_4840cc;
        case 0x4840d0u: goto label_4840d0;
        case 0x4840d4u: goto label_4840d4;
        case 0x4840d8u: goto label_4840d8;
        case 0x4840dcu: goto label_4840dc;
        case 0x4840e0u: goto label_4840e0;
        case 0x4840e4u: goto label_4840e4;
        case 0x4840e8u: goto label_4840e8;
        case 0x4840ecu: goto label_4840ec;
        case 0x4840f0u: goto label_4840f0;
        case 0x4840f4u: goto label_4840f4;
        case 0x4840f8u: goto label_4840f8;
        case 0x4840fcu: goto label_4840fc;
        case 0x484100u: goto label_484100;
        case 0x484104u: goto label_484104;
        case 0x484108u: goto label_484108;
        case 0x48410cu: goto label_48410c;
        case 0x484110u: goto label_484110;
        case 0x484114u: goto label_484114;
        case 0x484118u: goto label_484118;
        case 0x48411cu: goto label_48411c;
        case 0x484120u: goto label_484120;
        case 0x484124u: goto label_484124;
        case 0x484128u: goto label_484128;
        case 0x48412cu: goto label_48412c;
        case 0x484130u: goto label_484130;
        case 0x484134u: goto label_484134;
        case 0x484138u: goto label_484138;
        case 0x48413cu: goto label_48413c;
        case 0x484140u: goto label_484140;
        case 0x484144u: goto label_484144;
        case 0x484148u: goto label_484148;
        case 0x48414cu: goto label_48414c;
        case 0x484150u: goto label_484150;
        case 0x484154u: goto label_484154;
        case 0x484158u: goto label_484158;
        case 0x48415cu: goto label_48415c;
        case 0x484160u: goto label_484160;
        case 0x484164u: goto label_484164;
        case 0x484168u: goto label_484168;
        case 0x48416cu: goto label_48416c;
        case 0x484170u: goto label_484170;
        case 0x484174u: goto label_484174;
        case 0x484178u: goto label_484178;
        case 0x48417cu: goto label_48417c;
        default: break;
    }

    ctx->pc = 0x483ec0u;

label_483ec0:
    // 0x483ec0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x483ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_483ec4:
    // 0x483ec4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x483ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_483ec8:
    // 0x483ec8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x483ec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_483ecc:
    // 0x483ecc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x483eccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_483ed0:
    // 0x483ed0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x483ed0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_483ed4:
    // 0x483ed4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x483ed4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_483ed8:
    // 0x483ed8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x483ed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_483edc:
    // 0x483edc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x483edcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_483ee0:
    // 0x483ee0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x483ee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_483ee4:
    // 0x483ee4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x483ee4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_483ee8:
    // 0x483ee8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x483ee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_483eec:
    // 0x483eec: 0xafa400b0  sw          $a0, 0xB0($sp)
    ctx->pc = 0x483eecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 4));
label_483ef0:
    // 0x483ef0: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x483ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_483ef4:
    // 0x483ef4: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x483ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_483ef8:
    // 0x483ef8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_483efc:
    if (ctx->pc == 0x483EFCu) {
        ctx->pc = 0x483F00u;
        goto label_483f00;
    }
    ctx->pc = 0x483EF8u;
    {
        const bool branch_taken_0x483ef8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x483ef8) {
            ctx->pc = 0x483F0Cu;
            goto label_483f0c;
        }
    }
    ctx->pc = 0x483F00u;
label_483f00:
    // 0x483f00: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x483f00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_483f04:
    // 0x483f04: 0xc121094  jal         func_484250
label_483f08:
    if (ctx->pc == 0x483F08u) {
        ctx->pc = 0x483F0Cu;
        goto label_483f0c;
    }
    ctx->pc = 0x483F04u;
    SET_GPR_U32(ctx, 31, 0x483F0Cu);
    ctx->pc = 0x484250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x484250u, 0x483F04u, 0x483F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x483F0Cu;
label_483f0c:
    // 0x483f0c: 0x3c148000  lui         $s4, 0x8000
    ctx->pc = 0x483f0cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)32768 << 16));
label_483f10:
    // 0x483f10: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x483f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_483f14:
    // 0x483f14: 0x2444001c  addiu       $a0, $v0, 0x1C
    ctx->pc = 0x483f14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
label_483f18:
    // 0x483f18: 0xc120a80  jal         func_482A00
label_483f1c:
    if (ctx->pc == 0x483F1Cu) {
        ctx->pc = 0x483F20u;
        goto label_483f20;
    }
    ctx->pc = 0x483F18u;
    SET_GPR_U32(ctx, 31, 0x483F20u);
    ctx->pc = 0x482A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x482A00u, 0x483F18u, 0x483F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x483F20u;
label_483f20:
    // 0x483f20: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x483f20u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_483f24:
    // 0x483f24: 0x1000000c  b           . + 4 + (0xC << 2)
label_483f28:
    if (ctx->pc == 0x483F28u) {
        ctx->pc = 0x483F2Cu;
        goto label_483f2c;
    }
    ctx->pc = 0x483F24u;
    {
        const bool branch_taken_0x483f24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x483f24) {
            ctx->pc = 0x483F58u;
            goto label_483f58;
        }
    }
    ctx->pc = 0x483F2Cu;
label_483f2c:
    // 0x483f2c: 0x8e550000  lw          $s5, 0x0($s2)
    ctx->pc = 0x483f2cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_483f30:
    // 0x483f30: 0x8ea30050  lw          $v1, 0x50($s5)
    ctx->pc = 0x483f30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
label_483f34:
    // 0x483f34: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x483f34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_483f38:
    // 0x483f38: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
label_483f3c:
    if (ctx->pc == 0x483F3Cu) {
        ctx->pc = 0x483F40u;
        goto label_483f40;
    }
    ctx->pc = 0x483F38u;
    {
        const bool branch_taken_0x483f38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x483f38) {
            ctx->pc = 0x483F54u;
            goto label_483f54;
        }
    }
    ctx->pc = 0x483F40u;
label_483f40:
    // 0x483f40: 0x8ea20058  lw          $v0, 0x58($s5)
    ctx->pc = 0x483f40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 88)));
label_483f44:
    // 0x483f44: 0x54082b  sltu        $at, $v0, $s4
    ctx->pc = 0x483f44u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
label_483f48:
    // 0x483f48: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_483f4c:
    if (ctx->pc == 0x483F4Cu) {
        ctx->pc = 0x483F50u;
        goto label_483f50;
    }
    ctx->pc = 0x483F48u;
    {
        const bool branch_taken_0x483f48 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x483f48) {
            ctx->pc = 0x483F54u;
            goto label_483f54;
        }
    }
    ctx->pc = 0x483F50u;
label_483f50:
    // 0x483f50: 0x8eb40058  lw          $s4, 0x58($s5)
    ctx->pc = 0x483f50u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 88)));
label_483f54:
    // 0x483f54: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x483f54u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_483f58:
    // 0x483f58: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x483f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_483f5c:
    // 0x483f5c: 0x2444001c  addiu       $a0, $v0, 0x1C
    ctx->pc = 0x483f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
label_483f60:
    // 0x483f60: 0xc120a78  jal         func_4829E0
label_483f64:
    if (ctx->pc == 0x483F64u) {
        ctx->pc = 0x483F68u;
        goto label_483f68;
    }
    ctx->pc = 0x483F60u;
    SET_GPR_U32(ctx, 31, 0x483F68u);
    ctx->pc = 0x4829E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4829E0u, 0x483F60u, 0x483F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x483F68u;
label_483f68:
    // 0x483f68: 0x1642fff0  bne         $s2, $v0, . + 4 + (-0x10 << 2)
label_483f6c:
    if (ctx->pc == 0x483F6Cu) {
        ctx->pc = 0x483F70u;
        goto label_483f70;
    }
    ctx->pc = 0x483F68u;
    {
        const bool branch_taken_0x483f68 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x483f68) {
            ctx->pc = 0x483F2Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_483f2c;
        }
    }
    ctx->pc = 0x483F70u;
label_483f70:
    // 0x483f70: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x483f70u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_483f74:
    // 0x483f74: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x483f74u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_483f78:
    // 0x483f78: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x483f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_483f7c:
    // 0x483f7c: 0x2444001c  addiu       $a0, $v0, 0x1C
    ctx->pc = 0x483f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
label_483f80:
    // 0x483f80: 0xc120a80  jal         func_482A00
label_483f84:
    if (ctx->pc == 0x483F84u) {
        ctx->pc = 0x483F88u;
        goto label_483f88;
    }
    ctx->pc = 0x483F80u;
    SET_GPR_U32(ctx, 31, 0x483F88u);
    ctx->pc = 0x482A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x482A00u, 0x483F80u, 0x483F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x483F88u;
label_483f88:
    // 0x483f88: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x483f88u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_483f8c:
    // 0x483f8c: 0x1000003c  b           . + 4 + (0x3C << 2)
label_483f90:
    if (ctx->pc == 0x483F90u) {
        ctx->pc = 0x483F94u;
        goto label_483f94;
    }
    ctx->pc = 0x483F8Cu;
    {
        const bool branch_taken_0x483f8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x483f8c) {
            ctx->pc = 0x484080u;
            goto label_484080;
        }
    }
    ctx->pc = 0x483F94u;
label_483f94:
    // 0x483f94: 0x8e700000  lw          $s0, 0x0($s3)
    ctx->pc = 0x483f94u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_483f98:
    // 0x483f98: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x483f98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_483f9c:
    // 0x483f9c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x483f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_483fa0:
    // 0x483fa0: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_483fa4:
    if (ctx->pc == 0x483FA4u) {
        ctx->pc = 0x483FA8u;
        goto label_483fa8;
    }
    ctx->pc = 0x483FA0u;
    {
        const bool branch_taken_0x483fa0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x483fa0) {
            ctx->pc = 0x483FB8u;
            goto label_483fb8;
        }
    }
    ctx->pc = 0x483FA8u;
label_483fa8:
    // 0x483fa8: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x483fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_483fac:
    // 0x483fac: 0x14540002  bne         $v0, $s4, . + 4 + (0x2 << 2)
label_483fb0:
    if (ctx->pc == 0x483FB0u) {
        ctx->pc = 0x483FB4u;
        goto label_483fb4;
    }
    ctx->pc = 0x483FACu;
    {
        const bool branch_taken_0x483fac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x483fac) {
            ctx->pc = 0x483FB8u;
            goto label_483fb8;
        }
    }
    ctx->pc = 0x483FB4u;
label_483fb4:
    // 0x483fb4: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x483fb4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_483fb8:
    // 0x483fb8: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x483fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_483fbc:
    // 0x483fbc: 0x14540002  bne         $v0, $s4, . + 4 + (0x2 << 2)
label_483fc0:
    if (ctx->pc == 0x483FC0u) {
        ctx->pc = 0x483FC4u;
        goto label_483fc4;
    }
    ctx->pc = 0x483FBCu;
    {
        const bool branch_taken_0x483fbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x483fbc) {
            ctx->pc = 0x483FC8u;
            goto label_483fc8;
        }
    }
    ctx->pc = 0x483FC4u;
label_483fc4:
    // 0x483fc4: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x483fc4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
label_483fc8:
    // 0x483fc8: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x483fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_483fcc:
    // 0x483fcc: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x483fccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_483fd0:
    // 0x483fd0: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_483fd4:
    if (ctx->pc == 0x483FD4u) {
        ctx->pc = 0x483FD8u;
        goto label_483fd8;
    }
    ctx->pc = 0x483FD0u;
    {
        const bool branch_taken_0x483fd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x483fd0) {
            ctx->pc = 0x483FE8u;
            goto label_483fe8;
        }
    }
    ctx->pc = 0x483FD8u;
label_483fd8:
    // 0x483fd8: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x483fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_483fdc:
    // 0x483fdc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x483fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_483fe0:
    // 0x483fe0: 0x14620012  bne         $v1, $v0, . + 4 + (0x12 << 2)
label_483fe4:
    if (ctx->pc == 0x483FE4u) {
        ctx->pc = 0x483FE8u;
        goto label_483fe8;
    }
    ctx->pc = 0x483FE0u;
    {
        const bool branch_taken_0x483fe0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x483fe0) {
            ctx->pc = 0x48402Cu;
            goto label_48402c;
        }
    }
    ctx->pc = 0x483FE8u;
label_483fe8:
    // 0x483fe8: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_483fec:
    if (ctx->pc == 0x483FECu) {
        ctx->pc = 0x483FF0u;
        goto label_483ff0;
    }
    ctx->pc = 0x483FE8u;
    {
        const bool branch_taken_0x483fe8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x483fe8) {
            ctx->pc = 0x48400Cu;
            goto label_48400c;
        }
    }
    ctx->pc = 0x483FF0u;
label_483ff0:
    // 0x483ff0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x483ff0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_483ff4:
    // 0x483ff4: 0xc12108c  jal         func_484230
label_483ff8:
    if (ctx->pc == 0x483FF8u) {
        ctx->pc = 0x483FFCu;
        goto label_483ffc;
    }
    ctx->pc = 0x483FF4u;
    SET_GPR_U32(ctx, 31, 0x483FFCu);
    ctx->pc = 0x484230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x484230u, 0x483FF4u, 0x483FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x483FFCu;
label_483ffc:
    // 0x483ffc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x483ffcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_484000:
    // 0x484000: 0xc119c5c  jal         func_467170
label_484004:
    if (ctx->pc == 0x484004u) {
        ctx->pc = 0x484008u;
        goto label_484008;
    }
    ctx->pc = 0x484000u;
    SET_GPR_U32(ctx, 31, 0x484008u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x484000u, 0x484008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x484008u;
label_484008:
    // 0x484008: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x484008u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_48400c:
    // 0x48400c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x48400cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_484010:
    // 0x484010: 0x2444001c  addiu       $a0, $v0, 0x1C
    ctx->pc = 0x484010u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
label_484014:
    // 0x484014: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x484014u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_484018:
    // 0x484018: 0xc121060  jal         func_484180
label_48401c:
    if (ctx->pc == 0x48401Cu) {
        ctx->pc = 0x484020u;
        goto label_484020;
    }
    ctx->pc = 0x484018u;
    SET_GPR_U32(ctx, 31, 0x484020u);
    ctx->pc = 0x484180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x484180u, 0x484018u, 0x484020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x484020u;
label_484020:
    // 0x484020: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x484020u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_484024:
    // 0x484024: 0x10000016  b           . + 4 + (0x16 << 2)
label_484028:
    if (ctx->pc == 0x484028u) {
        ctx->pc = 0x48402Cu;
        goto label_48402c;
    }
    ctx->pc = 0x484024u;
    {
        const bool branch_taken_0x484024 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x484024) {
            ctx->pc = 0x484080u;
            goto label_484080;
        }
    }
    ctx->pc = 0x48402Cu;
label_48402c:
    // 0x48402c: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x48402cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_484030:
    // 0x484030: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x484030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_484034:
    // 0x484034: 0x14620011  bne         $v1, $v0, . + 4 + (0x11 << 2)
label_484038:
    if (ctx->pc == 0x484038u) {
        ctx->pc = 0x48403Cu;
        goto label_48403c;
    }
    ctx->pc = 0x484034u;
    {
        const bool branch_taken_0x484034 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x484034) {
            ctx->pc = 0x48407Cu;
            goto label_48407c;
        }
    }
    ctx->pc = 0x48403Cu;
label_48403c:
    // 0x48403c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x48403cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_484040:
    // 0x484040: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x484040u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_484044:
    // 0x484044: 0x26050008  addiu       $a1, $s0, 0x8
    ctx->pc = 0x484044u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_484048:
    // 0x484048: 0xc120e04  jal         func_483810
label_48404c:
    if (ctx->pc == 0x48404Cu) {
        ctx->pc = 0x484050u;
        goto label_484050;
    }
    ctx->pc = 0x484048u;
    SET_GPR_U32(ctx, 31, 0x484050u);
    ctx->pc = 0x483810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x483810u, 0x484048u, 0x484050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x484050u;
label_484050:
    // 0x484050: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x484050u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_484054:
    // 0x484054: 0x8ec30008  lw          $v1, 0x8($s6)
    ctx->pc = 0x484054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
label_484058:
    // 0x484058: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x484058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_48405c:
    // 0x48405c: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_484060:
    if (ctx->pc == 0x484060u) {
        ctx->pc = 0x484064u;
        goto label_484064;
    }
    ctx->pc = 0x48405Cu;
    {
        const bool branch_taken_0x48405c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x48405c) {
            ctx->pc = 0x484074u;
            goto label_484074;
        }
    }
    ctx->pc = 0x484064u;
label_484064:
    // 0x484064: 0x8ec30008  lw          $v1, 0x8($s6)
    ctx->pc = 0x484064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
label_484068:
    // 0x484068: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x484068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_48406c:
    // 0x48406c: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_484070:
    if (ctx->pc == 0x484070u) {
        ctx->pc = 0x484074u;
        goto label_484074;
    }
    ctx->pc = 0x48406Cu;
    {
        const bool branch_taken_0x48406c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x48406c) {
            ctx->pc = 0x48407Cu;
            goto label_48407c;
        }
    }
    ctx->pc = 0x484074u;
label_484074:
    // 0x484074: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x484074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_484078:
    // 0x484078: 0xae020050  sw          $v0, 0x50($s0)
    ctx->pc = 0x484078u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
label_48407c:
    // 0x48407c: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x48407cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_484080:
    // 0x484080: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x484080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_484084:
    // 0x484084: 0x2444001c  addiu       $a0, $v0, 0x1C
    ctx->pc = 0x484084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
label_484088:
    // 0x484088: 0xc120a78  jal         func_4829E0
label_48408c:
    if (ctx->pc == 0x48408Cu) {
        ctx->pc = 0x484090u;
        goto label_484090;
    }
    ctx->pc = 0x484088u;
    SET_GPR_U32(ctx, 31, 0x484090u);
    ctx->pc = 0x4829E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4829E0u, 0x484088u, 0x484090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x484090u;
label_484090:
    // 0x484090: 0x1662ffc0  bne         $s3, $v0, . + 4 + (-0x40 << 2)
label_484094:
    if (ctx->pc == 0x484094u) {
        ctx->pc = 0x484098u;
        goto label_484098;
    }
    ctx->pc = 0x484090u;
    {
        const bool branch_taken_0x484090 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x484090) {
            ctx->pc = 0x483F94u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_483f94;
        }
    }
    ctx->pc = 0x484098u;
label_484098:
    // 0x484098: 0x17d70029  bne         $fp, $s7, . + 4 + (0x29 << 2)
label_48409c:
    if (ctx->pc == 0x48409Cu) {
        ctx->pc = 0x4840A0u;
        goto label_4840a0;
    }
    ctx->pc = 0x484098u;
    {
        const bool branch_taken_0x484098 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 23));
        if (branch_taken_0x484098) {
            ctx->pc = 0x484140u;
            goto label_484140;
        }
    }
    ctx->pc = 0x4840A0u;
label_4840a0:
    // 0x4840a0: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x4840a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_4840a4:
    // 0x4840a4: 0x2444001c  addiu       $a0, $v0, 0x1C
    ctx->pc = 0x4840a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
label_4840a8:
    // 0x4840a8: 0xc120a80  jal         func_482A00
label_4840ac:
    if (ctx->pc == 0x4840ACu) {
        ctx->pc = 0x4840B0u;
        goto label_4840b0;
    }
    ctx->pc = 0x4840A8u;
    SET_GPR_U32(ctx, 31, 0x4840B0u);
    ctx->pc = 0x482A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x482A00u, 0x4840A8u, 0x4840B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4840B0u;
label_4840b0:
    // 0x4840b0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4840b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4840b4:
    // 0x4840b4: 0x1000001c  b           . + 4 + (0x1C << 2)
label_4840b8:
    if (ctx->pc == 0x4840B8u) {
        ctx->pc = 0x4840BCu;
        goto label_4840bc;
    }
    ctx->pc = 0x4840B4u;
    {
        const bool branch_taken_0x4840b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4840b4) {
            ctx->pc = 0x484128u;
            goto label_484128;
        }
    }
    ctx->pc = 0x4840BCu;
label_4840bc:
    // 0x4840bc: 0x8e510000  lw          $s1, 0x0($s2)
    ctx->pc = 0x4840bcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4840c0:
    // 0x4840c0: 0x8e230050  lw          $v1, 0x50($s1)
    ctx->pc = 0x4840c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_4840c4:
    // 0x4840c4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4840c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4840c8:
    // 0x4840c8: 0x14620016  bne         $v1, $v0, . + 4 + (0x16 << 2)
label_4840cc:
    if (ctx->pc == 0x4840CCu) {
        ctx->pc = 0x4840D0u;
        goto label_4840d0;
    }
    ctx->pc = 0x4840C8u;
    {
        const bool branch_taken_0x4840c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x4840c8) {
            ctx->pc = 0x484124u;
            goto label_484124;
        }
    }
    ctx->pc = 0x4840D0u;
label_4840d0:
    // 0x4840d0: 0x8e220058  lw          $v0, 0x58($s1)
    ctx->pc = 0x4840d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_4840d4:
    // 0x4840d4: 0x14540013  bne         $v0, $s4, . + 4 + (0x13 << 2)
label_4840d8:
    if (ctx->pc == 0x4840D8u) {
        ctx->pc = 0x4840DCu;
        goto label_4840dc;
    }
    ctx->pc = 0x4840D4u;
    {
        const bool branch_taken_0x4840d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x4840d4) {
            ctx->pc = 0x484124u;
            goto label_484124;
        }
    }
    ctx->pc = 0x4840DCu;
label_4840dc:
    // 0x4840dc: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x4840dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_4840e0:
    // 0x4840e0: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x4840e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_4840e4:
    // 0x4840e4: 0x26250008  addiu       $a1, $s1, 0x8
    ctx->pc = 0x4840e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_4840e8:
    // 0x4840e8: 0xc120e04  jal         func_483810
label_4840ec:
    if (ctx->pc == 0x4840ECu) {
        ctx->pc = 0x4840F0u;
        goto label_4840f0;
    }
    ctx->pc = 0x4840E8u;
    SET_GPR_U32(ctx, 31, 0x4840F0u);
    ctx->pc = 0x483810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x483810u, 0x4840E8u, 0x4840F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4840F0u;
label_4840f0:
    // 0x4840f0: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x4840f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
label_4840f4:
    // 0x4840f4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x4840f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4840f8:
    // 0x4840f8: 0xae220050  sw          $v0, 0x50($s1)
    ctx->pc = 0x4840f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 2));
label_4840fc:
    // 0x4840fc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4840fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_484100:
    // 0x484100: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x484100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_484104:
    // 0x484104: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x484104u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
label_484108:
    // 0x484108: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x484108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_48410c:
    // 0x48410c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_484110:
    if (ctx->pc == 0x484110u) {
        ctx->pc = 0x484114u;
        goto label_484114;
    }
    ctx->pc = 0x48410Cu;
    {
        const bool branch_taken_0x48410c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48410c) {
            ctx->pc = 0x484124u;
            goto label_484124;
        }
    }
    ctx->pc = 0x484114u;
label_484114:
    // 0x484114: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x484114u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_484118:
    // 0x484118: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x484118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_48411c:
    // 0x48411c: 0x40f809  jalr        $v0
label_484120:
    if (ctx->pc == 0x484120u) {
        ctx->pc = 0x484124u;
        goto label_484124;
    }
    ctx->pc = 0x48411Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x484124u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48411Cu, 0x484124u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x484124u;
label_484124:
    // 0x484124: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x484124u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_484128:
    // 0x484128: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x484128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_48412c:
    // 0x48412c: 0x2444001c  addiu       $a0, $v0, 0x1C
    ctx->pc = 0x48412cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
label_484130:
    // 0x484130: 0xc120a78  jal         func_4829E0
label_484134:
    if (ctx->pc == 0x484134u) {
        ctx->pc = 0x484138u;
        goto label_484138;
    }
    ctx->pc = 0x484130u;
    SET_GPR_U32(ctx, 31, 0x484138u);
    ctx->pc = 0x4829E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4829E0u, 0x484130u, 0x484138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x484138u;
label_484138:
    // 0x484138: 0x1642ffe0  bne         $s2, $v0, . + 4 + (-0x20 << 2)
label_48413c:
    if (ctx->pc == 0x48413Cu) {
        ctx->pc = 0x484140u;
        goto label_484140;
    }
    ctx->pc = 0x484138u;
    {
        const bool branch_taken_0x484138 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x484138) {
            ctx->pc = 0x4840BCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4840bc;
        }
    }
    ctx->pc = 0x484140u;
label_484140:
    // 0x484140: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x484140u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_484144:
    // 0x484144: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x484144u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_484148:
    // 0x484148: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x484148u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_48414c:
    // 0x48414c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x48414cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_484150:
    // 0x484150: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x484150u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_484154:
    // 0x484154: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x484154u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_484158:
    // 0x484158: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x484158u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_48415c:
    // 0x48415c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x48415cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_484160:
    // 0x484160: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x484160u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_484164:
    // 0x484164: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x484164u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_484168:
    // 0x484168: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x484168u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_48416c:
    // 0x48416c: 0x3e00008  jr          $ra
label_484170:
    if (ctx->pc == 0x484170u) {
        ctx->pc = 0x484174u;
        goto label_484174;
    }
    ctx->pc = 0x48416Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48416Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x484174u;
label_484174:
    // 0x484174: 0x0  nop
    ctx->pc = 0x484174u;
    // NOP
label_484178:
    // 0x484178: 0x0  nop
    ctx->pc = 0x484178u;
    // NOP
label_48417c:
    // 0x48417c: 0x0  nop
    ctx->pc = 0x48417cu;
    // NOP
    ctx->pc = 0x484180u;
}
