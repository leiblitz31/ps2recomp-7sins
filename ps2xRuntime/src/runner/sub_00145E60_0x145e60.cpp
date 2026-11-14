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

// Function: sub_00145E60
// Address: 0x145e60 - 0x1460c0
void sub_00145E60_0x145e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00145E60_0x145e60");
#endif

    switch (ctx->pc) {
        case 0x145e60u: goto label_145e60;
        case 0x145e64u: goto label_145e64;
        case 0x145e68u: goto label_145e68;
        case 0x145e6cu: goto label_145e6c;
        case 0x145e70u: goto label_145e70;
        case 0x145e74u: goto label_145e74;
        case 0x145e78u: goto label_145e78;
        case 0x145e7cu: goto label_145e7c;
        case 0x145e80u: goto label_145e80;
        case 0x145e84u: goto label_145e84;
        case 0x145e88u: goto label_145e88;
        case 0x145e8cu: goto label_145e8c;
        case 0x145e90u: goto label_145e90;
        case 0x145e94u: goto label_145e94;
        case 0x145e98u: goto label_145e98;
        case 0x145e9cu: goto label_145e9c;
        case 0x145ea0u: goto label_145ea0;
        case 0x145ea4u: goto label_145ea4;
        case 0x145ea8u: goto label_145ea8;
        case 0x145eacu: goto label_145eac;
        case 0x145eb0u: goto label_145eb0;
        case 0x145eb4u: goto label_145eb4;
        case 0x145eb8u: goto label_145eb8;
        case 0x145ebcu: goto label_145ebc;
        case 0x145ec0u: goto label_145ec0;
        case 0x145ec4u: goto label_145ec4;
        case 0x145ec8u: goto label_145ec8;
        case 0x145eccu: goto label_145ecc;
        case 0x145ed0u: goto label_145ed0;
        case 0x145ed4u: goto label_145ed4;
        case 0x145ed8u: goto label_145ed8;
        case 0x145edcu: goto label_145edc;
        case 0x145ee0u: goto label_145ee0;
        case 0x145ee4u: goto label_145ee4;
        case 0x145ee8u: goto label_145ee8;
        case 0x145eecu: goto label_145eec;
        case 0x145ef0u: goto label_145ef0;
        case 0x145ef4u: goto label_145ef4;
        case 0x145ef8u: goto label_145ef8;
        case 0x145efcu: goto label_145efc;
        case 0x145f00u: goto label_145f00;
        case 0x145f04u: goto label_145f04;
        case 0x145f08u: goto label_145f08;
        case 0x145f0cu: goto label_145f0c;
        case 0x145f10u: goto label_145f10;
        case 0x145f14u: goto label_145f14;
        case 0x145f18u: goto label_145f18;
        case 0x145f1cu: goto label_145f1c;
        case 0x145f20u: goto label_145f20;
        case 0x145f24u: goto label_145f24;
        case 0x145f28u: goto label_145f28;
        case 0x145f2cu: goto label_145f2c;
        case 0x145f30u: goto label_145f30;
        case 0x145f34u: goto label_145f34;
        case 0x145f38u: goto label_145f38;
        case 0x145f3cu: goto label_145f3c;
        case 0x145f40u: goto label_145f40;
        case 0x145f44u: goto label_145f44;
        case 0x145f48u: goto label_145f48;
        case 0x145f4cu: goto label_145f4c;
        case 0x145f50u: goto label_145f50;
        case 0x145f54u: goto label_145f54;
        case 0x145f58u: goto label_145f58;
        case 0x145f5cu: goto label_145f5c;
        case 0x145f60u: goto label_145f60;
        case 0x145f64u: goto label_145f64;
        case 0x145f68u: goto label_145f68;
        case 0x145f6cu: goto label_145f6c;
        case 0x145f70u: goto label_145f70;
        case 0x145f74u: goto label_145f74;
        case 0x145f78u: goto label_145f78;
        case 0x145f7cu: goto label_145f7c;
        case 0x145f80u: goto label_145f80;
        case 0x145f84u: goto label_145f84;
        case 0x145f88u: goto label_145f88;
        case 0x145f8cu: goto label_145f8c;
        case 0x145f90u: goto label_145f90;
        case 0x145f94u: goto label_145f94;
        case 0x145f98u: goto label_145f98;
        case 0x145f9cu: goto label_145f9c;
        case 0x145fa0u: goto label_145fa0;
        case 0x145fa4u: goto label_145fa4;
        case 0x145fa8u: goto label_145fa8;
        case 0x145facu: goto label_145fac;
        case 0x145fb0u: goto label_145fb0;
        case 0x145fb4u: goto label_145fb4;
        case 0x145fb8u: goto label_145fb8;
        case 0x145fbcu: goto label_145fbc;
        case 0x145fc0u: goto label_145fc0;
        case 0x145fc4u: goto label_145fc4;
        case 0x145fc8u: goto label_145fc8;
        case 0x145fccu: goto label_145fcc;
        case 0x145fd0u: goto label_145fd0;
        case 0x145fd4u: goto label_145fd4;
        case 0x145fd8u: goto label_145fd8;
        case 0x145fdcu: goto label_145fdc;
        case 0x145fe0u: goto label_145fe0;
        case 0x145fe4u: goto label_145fe4;
        case 0x145fe8u: goto label_145fe8;
        case 0x145fecu: goto label_145fec;
        case 0x145ff0u: goto label_145ff0;
        case 0x145ff4u: goto label_145ff4;
        case 0x145ff8u: goto label_145ff8;
        case 0x145ffcu: goto label_145ffc;
        case 0x146000u: goto label_146000;
        case 0x146004u: goto label_146004;
        case 0x146008u: goto label_146008;
        case 0x14600cu: goto label_14600c;
        case 0x146010u: goto label_146010;
        case 0x146014u: goto label_146014;
        case 0x146018u: goto label_146018;
        case 0x14601cu: goto label_14601c;
        case 0x146020u: goto label_146020;
        case 0x146024u: goto label_146024;
        case 0x146028u: goto label_146028;
        case 0x14602cu: goto label_14602c;
        case 0x146030u: goto label_146030;
        case 0x146034u: goto label_146034;
        case 0x146038u: goto label_146038;
        case 0x14603cu: goto label_14603c;
        case 0x146040u: goto label_146040;
        case 0x146044u: goto label_146044;
        case 0x146048u: goto label_146048;
        case 0x14604cu: goto label_14604c;
        case 0x146050u: goto label_146050;
        case 0x146054u: goto label_146054;
        case 0x146058u: goto label_146058;
        case 0x14605cu: goto label_14605c;
        case 0x146060u: goto label_146060;
        case 0x146064u: goto label_146064;
        case 0x146068u: goto label_146068;
        case 0x14606cu: goto label_14606c;
        case 0x146070u: goto label_146070;
        case 0x146074u: goto label_146074;
        case 0x146078u: goto label_146078;
        case 0x14607cu: goto label_14607c;
        case 0x146080u: goto label_146080;
        case 0x146084u: goto label_146084;
        case 0x146088u: goto label_146088;
        case 0x14608cu: goto label_14608c;
        case 0x146090u: goto label_146090;
        case 0x146094u: goto label_146094;
        case 0x146098u: goto label_146098;
        case 0x14609cu: goto label_14609c;
        case 0x1460a0u: goto label_1460a0;
        case 0x1460a4u: goto label_1460a4;
        case 0x1460a8u: goto label_1460a8;
        case 0x1460acu: goto label_1460ac;
        case 0x1460b0u: goto label_1460b0;
        case 0x1460b4u: goto label_1460b4;
        case 0x1460b8u: goto label_1460b8;
        case 0x1460bcu: goto label_1460bc;
        default: break;
    }

    ctx->pc = 0x145e60u;

label_145e60:
    // 0x145e60: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x145e60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_145e64:
    // 0x145e64: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x145e64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_145e68:
    // 0x145e68: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x145e68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_145e6c:
    // 0x145e6c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x145e6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_145e70:
    // 0x145e70: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x145e70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_145e74:
    // 0x145e74: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x145e74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_145e78:
    // 0x145e78: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x145e78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_145e7c:
    // 0x145e7c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x145e7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_145e80:
    // 0x145e80: 0xafa500a0  sw          $a1, 0xA0($sp)
    ctx->pc = 0x145e80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 5));
label_145e84:
    // 0x145e84: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x145e84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_145e88:
    // 0x145e88: 0xc041a70  jal         func_1069C0
label_145e8c:
    if (ctx->pc == 0x145E8Cu) {
        ctx->pc = 0x145E90u;
        goto label_145e90;
    }
    ctx->pc = 0x145E88u;
    SET_GPR_U32(ctx, 31, 0x145E90u);
    ctx->pc = 0x1069C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1069C0u, 0x145E88u, 0x145E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145E90u;
label_145e90:
    // 0x145e90: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x145e90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_145e94:
    // 0x145e94: 0xc041a60  jal         func_106980
label_145e98:
    if (ctx->pc == 0x145E98u) {
        ctx->pc = 0x145E9Cu;
        goto label_145e9c;
    }
    ctx->pc = 0x145E94u;
    SET_GPR_U32(ctx, 31, 0x145E9Cu);
    ctx->pc = 0x106980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106980u, 0x145E94u, 0x145E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145E9Cu;
label_145e9c:
    // 0x145e9c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x145e9cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_145ea0:
    // 0x145ea0: 0x10000074  b           . + 4 + (0x74 << 2)
label_145ea4:
    if (ctx->pc == 0x145EA4u) {
        ctx->pc = 0x145EA8u;
        goto label_145ea8;
    }
    ctx->pc = 0x145EA0u;
    {
        const bool branch_taken_0x145ea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x145ea0) {
            ctx->pc = 0x146074u;
            goto label_146074;
        }
    }
    ctx->pc = 0x145EA8u;
label_145ea8:
    // 0x145ea8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x145ea8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_145eac:
    // 0x145eac: 0x8e950000  lw          $s5, 0x0($s4)
    ctx->pc = 0x145eacu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_145eb0:
    // 0x145eb0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x145eb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_145eb4:
    // 0x145eb4: 0xc09d0b8  jal         func_2742E0
label_145eb8:
    if (ctx->pc == 0x145EB8u) {
        ctx->pc = 0x145EBCu;
        goto label_145ebc;
    }
    ctx->pc = 0x145EB4u;
    SET_GPR_U32(ctx, 31, 0x145EBCu);
    ctx->pc = 0x2742E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2742E0u, 0x145EB4u, 0x145EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145EBCu;
label_145ebc:
    // 0x145ebc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x145ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_145ec0:
    // 0x145ec0: 0x1043002b  beq         $v0, $v1, . + 4 + (0x2B << 2)
label_145ec4:
    if (ctx->pc == 0x145EC4u) {
        ctx->pc = 0x145EC8u;
        goto label_145ec8;
    }
    ctx->pc = 0x145EC0u;
    {
        const bool branch_taken_0x145ec0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x145ec0) {
            ctx->pc = 0x145F70u;
            goto label_145f70;
        }
    }
    ctx->pc = 0x145EC8u;
label_145ec8:
    // 0x145ec8: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x145ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_145ecc:
    // 0x145ecc: 0x10430017  beq         $v0, $v1, . + 4 + (0x17 << 2)
label_145ed0:
    if (ctx->pc == 0x145ED0u) {
        ctx->pc = 0x145ED4u;
        goto label_145ed4;
    }
    ctx->pc = 0x145ECCu;
    {
        const bool branch_taken_0x145ecc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x145ecc) {
            ctx->pc = 0x145F2Cu;
            goto label_145f2c;
        }
    }
    ctx->pc = 0x145ED4u;
label_145ed4:
    // 0x145ed4: 0x24030017  addiu       $v1, $zero, 0x17
    ctx->pc = 0x145ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_145ed8:
    // 0x145ed8: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
label_145edc:
    if (ctx->pc == 0x145EDCu) {
        ctx->pc = 0x145EE0u;
        goto label_145ee0;
    }
    ctx->pc = 0x145ED8u;
    {
        const bool branch_taken_0x145ed8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x145ed8) {
            ctx->pc = 0x145EE8u;
            goto label_145ee8;
        }
    }
    ctx->pc = 0x145EE0u;
label_145ee0:
    // 0x145ee0: 0x10000032  b           . + 4 + (0x32 << 2)
label_145ee4:
    if (ctx->pc == 0x145EE4u) {
        ctx->pc = 0x145EE8u;
        goto label_145ee8;
    }
    ctx->pc = 0x145EE0u;
    {
        const bool branch_taken_0x145ee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x145ee0) {
            ctx->pc = 0x145FACu;
            goto label_145fac;
        }
    }
    ctx->pc = 0x145EE8u;
label_145ee8:
    // 0x145ee8: 0x24040054  addiu       $a0, $zero, 0x54
    ctx->pc = 0x145ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_145eec:
    // 0x145eec: 0xc119b68  jal         func_466DA0
label_145ef0:
    if (ctx->pc == 0x145EF0u) {
        ctx->pc = 0x145EF4u;
        goto label_145ef4;
    }
    ctx->pc = 0x145EECu;
    SET_GPR_U32(ctx, 31, 0x145EF4u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x145EECu, 0x145EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145EF4u;
label_145ef4:
    // 0x145ef4: 0x24040054  addiu       $a0, $zero, 0x54
    ctx->pc = 0x145ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_145ef8:
    // 0x145ef8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x145ef8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_145efc:
    // 0x145efc: 0xc0400e0  jal         func_100380
label_145f00:
    if (ctx->pc == 0x145F00u) {
        ctx->pc = 0x145F04u;
        goto label_145f04;
    }
    ctx->pc = 0x145EFCu;
    SET_GPR_U32(ctx, 31, 0x145F04u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x145EFCu, 0x145F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145F04u;
label_145f04:
    // 0x145f04: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x145f04u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_145f08:
    // 0x145f08: 0x12600005  beqz        $s3, . + 4 + (0x5 << 2)
label_145f0c:
    if (ctx->pc == 0x145F0Cu) {
        ctx->pc = 0x145F10u;
        goto label_145f10;
    }
    ctx->pc = 0x145F08u;
    {
        const bool branch_taken_0x145f08 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x145f08) {
            ctx->pc = 0x145F20u;
            goto label_145f20;
        }
    }
    ctx->pc = 0x145F10u;
label_145f10:
    // 0x145f10: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x145f10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_145f14:
    // 0x145f14: 0xc09d468  jal         func_2751A0
label_145f18:
    if (ctx->pc == 0x145F18u) {
        ctx->pc = 0x145F1Cu;
        goto label_145f1c;
    }
    ctx->pc = 0x145F14u;
    SET_GPR_U32(ctx, 31, 0x145F1Cu);
    ctx->pc = 0x2751A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2751A0u, 0x145F14u, 0x145F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145F1Cu;
label_145f1c:
    // 0x145f1c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x145f1cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_145f20:
    // 0x145f20: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x145f20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_145f24:
    // 0x145f24: 0x10000021  b           . + 4 + (0x21 << 2)
label_145f28:
    if (ctx->pc == 0x145F28u) {
        ctx->pc = 0x145F2Cu;
        goto label_145f2c;
    }
    ctx->pc = 0x145F24u;
    {
        const bool branch_taken_0x145f24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x145f24) {
            ctx->pc = 0x145FACu;
            goto label_145fac;
        }
    }
    ctx->pc = 0x145F2Cu;
label_145f2c:
    // 0x145f2c: 0x24040054  addiu       $a0, $zero, 0x54
    ctx->pc = 0x145f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_145f30:
    // 0x145f30: 0xc119b68  jal         func_466DA0
label_145f34:
    if (ctx->pc == 0x145F34u) {
        ctx->pc = 0x145F38u;
        goto label_145f38;
    }
    ctx->pc = 0x145F30u;
    SET_GPR_U32(ctx, 31, 0x145F38u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x145F30u, 0x145F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145F38u;
label_145f38:
    // 0x145f38: 0x24040054  addiu       $a0, $zero, 0x54
    ctx->pc = 0x145f38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_145f3c:
    // 0x145f3c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x145f3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_145f40:
    // 0x145f40: 0xc0400e0  jal         func_100380
label_145f44:
    if (ctx->pc == 0x145F44u) {
        ctx->pc = 0x145F48u;
        goto label_145f48;
    }
    ctx->pc = 0x145F40u;
    SET_GPR_U32(ctx, 31, 0x145F48u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x145F40u, 0x145F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145F48u;
label_145f48:
    // 0x145f48: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x145f48u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_145f4c:
    // 0x145f4c: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
label_145f50:
    if (ctx->pc == 0x145F50u) {
        ctx->pc = 0x145F54u;
        goto label_145f54;
    }
    ctx->pc = 0x145F4Cu;
    {
        const bool branch_taken_0x145f4c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x145f4c) {
            ctx->pc = 0x145F64u;
            goto label_145f64;
        }
    }
    ctx->pc = 0x145F54u;
label_145f54:
    // 0x145f54: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x145f54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_145f58:
    // 0x145f58: 0xc051840  jal         func_146100
label_145f5c:
    if (ctx->pc == 0x145F5Cu) {
        ctx->pc = 0x145F60u;
        goto label_145f60;
    }
    ctx->pc = 0x145F58u;
    SET_GPR_U32(ctx, 31, 0x145F60u);
    ctx->pc = 0x146100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x146100u, 0x145F58u, 0x145F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145F60u;
label_145f60:
    // 0x145f60: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x145f60u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_145f64:
    // 0x145f64: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x145f64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_145f68:
    // 0x145f68: 0x10000010  b           . + 4 + (0x10 << 2)
label_145f6c:
    if (ctx->pc == 0x145F6Cu) {
        ctx->pc = 0x145F70u;
        goto label_145f70;
    }
    ctx->pc = 0x145F68u;
    {
        const bool branch_taken_0x145f68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x145f68) {
            ctx->pc = 0x145FACu;
            goto label_145fac;
        }
    }
    ctx->pc = 0x145F70u;
label_145f70:
    // 0x145f70: 0x24040064  addiu       $a0, $zero, 0x64
    ctx->pc = 0x145f70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_145f74:
    // 0x145f74: 0xc119b68  jal         func_466DA0
label_145f78:
    if (ctx->pc == 0x145F78u) {
        ctx->pc = 0x145F7Cu;
        goto label_145f7c;
    }
    ctx->pc = 0x145F74u;
    SET_GPR_U32(ctx, 31, 0x145F7Cu);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x145F74u, 0x145F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145F7Cu;
label_145f7c:
    // 0x145f7c: 0x24040064  addiu       $a0, $zero, 0x64
    ctx->pc = 0x145f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_145f80:
    // 0x145f80: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x145f80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_145f84:
    // 0x145f84: 0xc0400e0  jal         func_100380
label_145f88:
    if (ctx->pc == 0x145F88u) {
        ctx->pc = 0x145F8Cu;
        goto label_145f8c;
    }
    ctx->pc = 0x145F84u;
    SET_GPR_U32(ctx, 31, 0x145F8Cu);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x145F84u, 0x145F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145F8Cu;
label_145f8c:
    // 0x145f8c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x145f8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_145f90:
    // 0x145f90: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
label_145f94:
    if (ctx->pc == 0x145F94u) {
        ctx->pc = 0x145F98u;
        goto label_145f98;
    }
    ctx->pc = 0x145F90u;
    {
        const bool branch_taken_0x145f90 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x145f90) {
            ctx->pc = 0x145FA8u;
            goto label_145fa8;
        }
    }
    ctx->pc = 0x145F98u;
label_145f98:
    // 0x145f98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x145f98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_145f9c:
    // 0x145f9c: 0xc0b6bb4  jal         func_2DAED0
label_145fa0:
    if (ctx->pc == 0x145FA0u) {
        ctx->pc = 0x145FA4u;
        goto label_145fa4;
    }
    ctx->pc = 0x145F9Cu;
    SET_GPR_U32(ctx, 31, 0x145FA4u);
    ctx->pc = 0x2DAED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DAED0u, 0x145F9Cu, 0x145FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145FA4u;
label_145fa4:
    // 0x145fa4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x145fa4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_145fa8:
    // 0x145fa8: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x145fa8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_145fac:
    // 0x145fac: 0x12000030  beqz        $s0, . + 4 + (0x30 << 2)
label_145fb0:
    if (ctx->pc == 0x145FB0u) {
        ctx->pc = 0x145FB4u;
        goto label_145fb4;
    }
    ctx->pc = 0x145FACu;
    {
        const bool branch_taken_0x145fac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x145fac) {
            ctx->pc = 0x146070u;
            goto label_146070;
        }
    }
    ctx->pc = 0x145FB4u;
label_145fb4:
    // 0x145fb4: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x145fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_145fb8:
    // 0x145fb8: 0xc09d114  jal         func_274450
label_145fbc:
    if (ctx->pc == 0x145FBCu) {
        ctx->pc = 0x145FC0u;
        goto label_145fc0;
    }
    ctx->pc = 0x145FB8u;
    SET_GPR_U32(ctx, 31, 0x145FC0u);
    ctx->pc = 0x274450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274450u, 0x145FB8u, 0x145FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145FC0u;
label_145fc0:
    // 0x145fc0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x145fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_145fc4:
    // 0x145fc4: 0xa3a20074  sb          $v0, 0x74($sp)
    ctx->pc = 0x145fc4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 116), (uint8_t)GPR_U32(ctx, 2));
label_145fc8:
    // 0x145fc8: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x145fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
label_145fcc:
    // 0x145fcc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x145fccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_145fd0:
    // 0x145fd0: 0xafa20078  sw          $v0, 0x78($sp)
    ctx->pc = 0x145fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 2));
label_145fd4:
    // 0x145fd4: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x145fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_145fd8:
    // 0x145fd8: 0xafa20084  sw          $v0, 0x84($sp)
    ctx->pc = 0x145fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 2));
label_145fdc:
    // 0x145fdc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x145fdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_145fe0:
    // 0x145fe0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x145fe0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_145fe4:
    // 0x145fe4: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x145fe4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_145fe8:
    // 0x145fe8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x145fe8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_145fec:
    // 0x145fec: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x145fecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_145ff0:
    // 0x145ff0: 0x320f809  jalr        $t9
label_145ff4:
    if (ctx->pc == 0x145FF4u) {
        ctx->pc = 0x145FF8u;
        goto label_145ff8;
    }
    ctx->pc = 0x145FF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x145FF8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145FF0u, 0x145FF8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x145FF8u;
label_145ff8:
    // 0x145ff8: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_145ffc:
    if (ctx->pc == 0x145FFCu) {
        ctx->pc = 0x146000u;
        goto label_146000;
    }
    ctx->pc = 0x145FF8u;
    {
        const bool branch_taken_0x145ff8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x145ff8) {
            ctx->pc = 0x14604Cu;
            goto label_14604c;
        }
    }
    ctx->pc = 0x146000u;
label_146000:
    // 0x146000: 0x10000006  b           . + 4 + (0x6 << 2)
label_146004:
    if (ctx->pc == 0x146004u) {
        ctx->pc = 0x146008u;
        goto label_146008;
    }
    ctx->pc = 0x146000u;
    {
        const bool branch_taken_0x146000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x146000) {
            ctx->pc = 0x14601Cu;
            goto label_14601c;
        }
    }
    ctx->pc = 0x146008u;
label_146008:
    // 0x146008: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x146008u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_14600c:
    // 0x14600c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x14600cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_146010:
    // 0x146010: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x146010u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_146014:
    // 0x146014: 0x320f809  jalr        $t9
label_146018:
    if (ctx->pc == 0x146018u) {
        ctx->pc = 0x14601Cu;
        goto label_14601c;
    }
    ctx->pc = 0x146014u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x14601Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x146014u, 0x14601Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14601Cu;
label_14601c:
    // 0x14601c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14601cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_146020:
    // 0x146020: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x146020u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_146024:
    // 0x146024: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x146024u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_146028:
    // 0x146028: 0x320f809  jalr        $t9
label_14602c:
    if (ctx->pc == 0x14602Cu) {
        ctx->pc = 0x146030u;
        goto label_146030;
    }
    ctx->pc = 0x146028u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x146030u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x146028u, 0x146030u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x146030u;
label_146030:
    // 0x146030: 0x1040fff5  beqz        $v0, . + 4 + (-0xB << 2)
label_146034:
    if (ctx->pc == 0x146034u) {
        ctx->pc = 0x146038u;
        goto label_146038;
    }
    ctx->pc = 0x146030u;
    {
        const bool branch_taken_0x146030 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x146030) {
            ctx->pc = 0x146008u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_146008;
        }
    }
    ctx->pc = 0x146038u;
label_146038:
    // 0x146038: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x146038u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_14603c:
    // 0x14603c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x14603cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_146040:
    // 0x146040: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x146040u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_146044:
    // 0x146044: 0x320f809  jalr        $t9
label_146048:
    if (ctx->pc == 0x146048u) {
        ctx->pc = 0x14604Cu;
        goto label_14604c;
    }
    ctx->pc = 0x146044u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x14604Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x146044u, 0x14604Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14604Cu;
label_14604c:
    // 0x14604c: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_146050:
    if (ctx->pc == 0x146050u) {
        ctx->pc = 0x146054u;
        goto label_146054;
    }
    ctx->pc = 0x14604Cu;
    {
        const bool branch_taken_0x14604c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x14604c) {
            ctx->pc = 0x146070u;
            goto label_146070;
        }
    }
    ctx->pc = 0x146054u;
label_146054:
    // 0x146054: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x146054u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_146058:
    // 0x146058: 0xc051830  jal         func_1460C0
label_14605c:
    if (ctx->pc == 0x14605Cu) {
        ctx->pc = 0x146060u;
        goto label_146060;
    }
    ctx->pc = 0x146058u;
    SET_GPR_U32(ctx, 31, 0x146060u);
    ctx->pc = 0x1460C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1460C0u, 0x146058u, 0x146060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146060u;
label_146060:
    // 0x146060: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x146060u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_146064:
    // 0x146064: 0xc119c5c  jal         func_467170
label_146068:
    if (ctx->pc == 0x146068u) {
        ctx->pc = 0x14606Cu;
        goto label_14606c;
    }
    ctx->pc = 0x146064u;
    SET_GPR_U32(ctx, 31, 0x14606Cu);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x146064u, 0x14606Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14606Cu;
label_14606c:
    // 0x14606c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x14606cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_146070:
    // 0x146070: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x146070u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
label_146074:
    // 0x146074: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x146074u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_146078:
    // 0x146078: 0xc041a70  jal         func_1069C0
label_14607c:
    if (ctx->pc == 0x14607Cu) {
        ctx->pc = 0x146080u;
        goto label_146080;
    }
    ctx->pc = 0x146078u;
    SET_GPR_U32(ctx, 31, 0x146080u);
    ctx->pc = 0x1069C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1069C0u, 0x146078u, 0x146080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146080u;
label_146080:
    // 0x146080: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x146080u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_146084:
    // 0x146084: 0xc041a14  jal         func_106850
label_146088:
    if (ctx->pc == 0x146088u) {
        ctx->pc = 0x14608Cu;
        goto label_14608c;
    }
    ctx->pc = 0x146084u;
    SET_GPR_U32(ctx, 31, 0x14608Cu);
    ctx->pc = 0x106850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106850u, 0x146084u, 0x14608Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14608Cu;
label_14608c:
    // 0x14608c: 0x1682ff86  bne         $s4, $v0, . + 4 + (-0x7A << 2)
label_146090:
    if (ctx->pc == 0x146090u) {
        ctx->pc = 0x146094u;
        goto label_146094;
    }
    ctx->pc = 0x14608Cu;
    {
        const bool branch_taken_0x14608c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x14608c) {
            ctx->pc = 0x145EA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_145ea8;
        }
    }
    ctx->pc = 0x146094u;
label_146094:
    // 0x146094: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x146094u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_146098:
    // 0x146098: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x146098u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_14609c:
    // 0x14609c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x14609cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1460a0:
    // 0x1460a0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1460a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1460a4:
    // 0x1460a4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1460a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1460a8:
    // 0x1460a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1460a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1460ac:
    // 0x1460ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1460acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1460b0:
    // 0x1460b0: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x1460b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1460b4:
    // 0x1460b4: 0x3e00008  jr          $ra
label_1460b8:
    if (ctx->pc == 0x1460B8u) {
        ctx->pc = 0x1460BCu;
        goto label_1460bc;
    }
    ctx->pc = 0x1460B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1460B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1460BCu;
label_1460bc:
    // 0x1460bc: 0x0  nop
    ctx->pc = 0x1460bcu;
    // NOP
    ctx->pc = 0x1460c0u;
}
