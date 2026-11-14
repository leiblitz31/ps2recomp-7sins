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

// Function: sub_00470E30
// Address: 0x470e30 - 0x471120
void sub_00470E30_0x470e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00470E30_0x470e30");
#endif

    switch (ctx->pc) {
        case 0x470e30u: goto label_470e30;
        case 0x470e34u: goto label_470e34;
        case 0x470e38u: goto label_470e38;
        case 0x470e3cu: goto label_470e3c;
        case 0x470e40u: goto label_470e40;
        case 0x470e44u: goto label_470e44;
        case 0x470e48u: goto label_470e48;
        case 0x470e4cu: goto label_470e4c;
        case 0x470e50u: goto label_470e50;
        case 0x470e54u: goto label_470e54;
        case 0x470e58u: goto label_470e58;
        case 0x470e5cu: goto label_470e5c;
        case 0x470e60u: goto label_470e60;
        case 0x470e64u: goto label_470e64;
        case 0x470e68u: goto label_470e68;
        case 0x470e6cu: goto label_470e6c;
        case 0x470e70u: goto label_470e70;
        case 0x470e74u: goto label_470e74;
        case 0x470e78u: goto label_470e78;
        case 0x470e7cu: goto label_470e7c;
        case 0x470e80u: goto label_470e80;
        case 0x470e84u: goto label_470e84;
        case 0x470e88u: goto label_470e88;
        case 0x470e8cu: goto label_470e8c;
        case 0x470e90u: goto label_470e90;
        case 0x470e94u: goto label_470e94;
        case 0x470e98u: goto label_470e98;
        case 0x470e9cu: goto label_470e9c;
        case 0x470ea0u: goto label_470ea0;
        case 0x470ea4u: goto label_470ea4;
        case 0x470ea8u: goto label_470ea8;
        case 0x470eacu: goto label_470eac;
        case 0x470eb0u: goto label_470eb0;
        case 0x470eb4u: goto label_470eb4;
        case 0x470eb8u: goto label_470eb8;
        case 0x470ebcu: goto label_470ebc;
        case 0x470ec0u: goto label_470ec0;
        case 0x470ec4u: goto label_470ec4;
        case 0x470ec8u: goto label_470ec8;
        case 0x470eccu: goto label_470ecc;
        case 0x470ed0u: goto label_470ed0;
        case 0x470ed4u: goto label_470ed4;
        case 0x470ed8u: goto label_470ed8;
        case 0x470edcu: goto label_470edc;
        case 0x470ee0u: goto label_470ee0;
        case 0x470ee4u: goto label_470ee4;
        case 0x470ee8u: goto label_470ee8;
        case 0x470eecu: goto label_470eec;
        case 0x470ef0u: goto label_470ef0;
        case 0x470ef4u: goto label_470ef4;
        case 0x470ef8u: goto label_470ef8;
        case 0x470efcu: goto label_470efc;
        case 0x470f00u: goto label_470f00;
        case 0x470f04u: goto label_470f04;
        case 0x470f08u: goto label_470f08;
        case 0x470f0cu: goto label_470f0c;
        case 0x470f10u: goto label_470f10;
        case 0x470f14u: goto label_470f14;
        case 0x470f18u: goto label_470f18;
        case 0x470f1cu: goto label_470f1c;
        case 0x470f20u: goto label_470f20;
        case 0x470f24u: goto label_470f24;
        case 0x470f28u: goto label_470f28;
        case 0x470f2cu: goto label_470f2c;
        case 0x470f30u: goto label_470f30;
        case 0x470f34u: goto label_470f34;
        case 0x470f38u: goto label_470f38;
        case 0x470f3cu: goto label_470f3c;
        case 0x470f40u: goto label_470f40;
        case 0x470f44u: goto label_470f44;
        case 0x470f48u: goto label_470f48;
        case 0x470f4cu: goto label_470f4c;
        case 0x470f50u: goto label_470f50;
        case 0x470f54u: goto label_470f54;
        case 0x470f58u: goto label_470f58;
        case 0x470f5cu: goto label_470f5c;
        case 0x470f60u: goto label_470f60;
        case 0x470f64u: goto label_470f64;
        case 0x470f68u: goto label_470f68;
        case 0x470f6cu: goto label_470f6c;
        case 0x470f70u: goto label_470f70;
        case 0x470f74u: goto label_470f74;
        case 0x470f78u: goto label_470f78;
        case 0x470f7cu: goto label_470f7c;
        case 0x470f80u: goto label_470f80;
        case 0x470f84u: goto label_470f84;
        case 0x470f88u: goto label_470f88;
        case 0x470f8cu: goto label_470f8c;
        case 0x470f90u: goto label_470f90;
        case 0x470f94u: goto label_470f94;
        case 0x470f98u: goto label_470f98;
        case 0x470f9cu: goto label_470f9c;
        case 0x470fa0u: goto label_470fa0;
        case 0x470fa4u: goto label_470fa4;
        case 0x470fa8u: goto label_470fa8;
        case 0x470facu: goto label_470fac;
        case 0x470fb0u: goto label_470fb0;
        case 0x470fb4u: goto label_470fb4;
        case 0x470fb8u: goto label_470fb8;
        case 0x470fbcu: goto label_470fbc;
        case 0x470fc0u: goto label_470fc0;
        case 0x470fc4u: goto label_470fc4;
        case 0x470fc8u: goto label_470fc8;
        case 0x470fccu: goto label_470fcc;
        case 0x470fd0u: goto label_470fd0;
        case 0x470fd4u: goto label_470fd4;
        case 0x470fd8u: goto label_470fd8;
        case 0x470fdcu: goto label_470fdc;
        case 0x470fe0u: goto label_470fe0;
        case 0x470fe4u: goto label_470fe4;
        case 0x470fe8u: goto label_470fe8;
        case 0x470fecu: goto label_470fec;
        case 0x470ff0u: goto label_470ff0;
        case 0x470ff4u: goto label_470ff4;
        case 0x470ff8u: goto label_470ff8;
        case 0x470ffcu: goto label_470ffc;
        case 0x471000u: goto label_471000;
        case 0x471004u: goto label_471004;
        case 0x471008u: goto label_471008;
        case 0x47100cu: goto label_47100c;
        case 0x471010u: goto label_471010;
        case 0x471014u: goto label_471014;
        case 0x471018u: goto label_471018;
        case 0x47101cu: goto label_47101c;
        case 0x471020u: goto label_471020;
        case 0x471024u: goto label_471024;
        case 0x471028u: goto label_471028;
        case 0x47102cu: goto label_47102c;
        case 0x471030u: goto label_471030;
        case 0x471034u: goto label_471034;
        case 0x471038u: goto label_471038;
        case 0x47103cu: goto label_47103c;
        case 0x471040u: goto label_471040;
        case 0x471044u: goto label_471044;
        case 0x471048u: goto label_471048;
        case 0x47104cu: goto label_47104c;
        case 0x471050u: goto label_471050;
        case 0x471054u: goto label_471054;
        case 0x471058u: goto label_471058;
        case 0x47105cu: goto label_47105c;
        case 0x471060u: goto label_471060;
        case 0x471064u: goto label_471064;
        case 0x471068u: goto label_471068;
        case 0x47106cu: goto label_47106c;
        case 0x471070u: goto label_471070;
        case 0x471074u: goto label_471074;
        case 0x471078u: goto label_471078;
        case 0x47107cu: goto label_47107c;
        case 0x471080u: goto label_471080;
        case 0x471084u: goto label_471084;
        case 0x471088u: goto label_471088;
        case 0x47108cu: goto label_47108c;
        case 0x471090u: goto label_471090;
        case 0x471094u: goto label_471094;
        case 0x471098u: goto label_471098;
        case 0x47109cu: goto label_47109c;
        case 0x4710a0u: goto label_4710a0;
        case 0x4710a4u: goto label_4710a4;
        case 0x4710a8u: goto label_4710a8;
        case 0x4710acu: goto label_4710ac;
        case 0x4710b0u: goto label_4710b0;
        case 0x4710b4u: goto label_4710b4;
        case 0x4710b8u: goto label_4710b8;
        case 0x4710bcu: goto label_4710bc;
        case 0x4710c0u: goto label_4710c0;
        case 0x4710c4u: goto label_4710c4;
        case 0x4710c8u: goto label_4710c8;
        case 0x4710ccu: goto label_4710cc;
        case 0x4710d0u: goto label_4710d0;
        case 0x4710d4u: goto label_4710d4;
        case 0x4710d8u: goto label_4710d8;
        case 0x4710dcu: goto label_4710dc;
        case 0x4710e0u: goto label_4710e0;
        case 0x4710e4u: goto label_4710e4;
        case 0x4710e8u: goto label_4710e8;
        case 0x4710ecu: goto label_4710ec;
        case 0x4710f0u: goto label_4710f0;
        case 0x4710f4u: goto label_4710f4;
        case 0x4710f8u: goto label_4710f8;
        case 0x4710fcu: goto label_4710fc;
        case 0x471100u: goto label_471100;
        case 0x471104u: goto label_471104;
        case 0x471108u: goto label_471108;
        case 0x47110cu: goto label_47110c;
        case 0x471110u: goto label_471110;
        case 0x471114u: goto label_471114;
        case 0x471118u: goto label_471118;
        case 0x47111cu: goto label_47111c;
        default: break;
    }

    ctx->pc = 0x470e30u;

label_470e30:
    // 0x470e30: 0x27bdfc20  addiu       $sp, $sp, -0x3E0
    ctx->pc = 0x470e30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966304));
label_470e34:
    // 0x470e34: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x470e34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_470e38:
    // 0x470e38: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x470e38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_470e3c:
    // 0x470e3c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x470e3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_470e40:
    // 0x470e40: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x470e40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_470e44:
    // 0x470e44: 0xafa403d0  sw          $a0, 0x3D0($sp)
    ctx->pc = 0x470e44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 976), GPR_U32(ctx, 4));
label_470e48:
    // 0x470e48: 0x8f82c048  lw          $v0, -0x3FB8($gp)
    ctx->pc = 0x470e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950984)));
label_470e4c:
    // 0x470e4c: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_470e50:
    if (ctx->pc == 0x470E50u) {
        ctx->pc = 0x470E54u;
        goto label_470e54;
    }
    ctx->pc = 0x470E4Cu;
    {
        const bool branch_taken_0x470e4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x470e4c) {
            ctx->pc = 0x470EFCu;
            goto label_470efc;
        }
    }
    ctx->pc = 0x470E54u;
label_470e54:
    // 0x470e54: 0x8f82b36c  lw          $v0, -0x4C94($gp)
    ctx->pc = 0x470e54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947692)));
label_470e58:
    // 0x470e58: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_470e5c:
    if (ctx->pc == 0x470E5Cu) {
        ctx->pc = 0x470E60u;
        goto label_470e60;
    }
    ctx->pc = 0x470E58u;
    {
        const bool branch_taken_0x470e58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x470e58) {
            ctx->pc = 0x470EFCu;
            goto label_470efc;
        }
    }
    ctx->pc = 0x470E60u;
label_470e60:
    // 0x470e60: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x470e60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_470e64:
    // 0x470e64: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x470e64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_470e68:
    // 0x470e68: 0x27a603c0  addiu       $a2, $sp, 0x3C0
    ctx->pc = 0x470e68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 960));
label_470e6c:
    // 0x470e6c: 0xc115ee8  jal         func_457BA0
label_470e70:
    if (ctx->pc == 0x470E70u) {
        ctx->pc = 0x470E74u;
        goto label_470e74;
    }
    ctx->pc = 0x470E6Cu;
    SET_GPR_U32(ctx, 31, 0x470E74u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x470E6Cu, 0x470E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x470E74u;
label_470e74:
    // 0x470e74: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_470e78:
    if (ctx->pc == 0x470E78u) {
        ctx->pc = 0x470E7Cu;
        goto label_470e7c;
    }
    ctx->pc = 0x470E74u;
    {
        const bool branch_taken_0x470e74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x470e74) {
            ctx->pc = 0x470EFCu;
            goto label_470efc;
        }
    }
    ctx->pc = 0x470E7Cu;
label_470e7c:
    // 0x470e7c: 0x8fa203c8  lw          $v0, 0x3C8($sp)
    ctx->pc = 0x470e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 968)));
label_470e80:
    // 0x470e80: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_470e84:
    if (ctx->pc == 0x470E84u) {
        ctx->pc = 0x470E88u;
        goto label_470e88;
    }
    ctx->pc = 0x470E80u;
    {
        const bool branch_taken_0x470e80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x470e80) {
            ctx->pc = 0x470EFCu;
            goto label_470efc;
        }
    }
    ctx->pc = 0x470E88u;
label_470e88:
    // 0x470e88: 0x27a40280  addiu       $a0, $sp, 0x280
    ctx->pc = 0x470e88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
label_470e8c:
    // 0x470e8c: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x470e8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_470e90:
    // 0x470e90: 0x8fa603c4  lw          $a2, 0x3C4($sp)
    ctx->pc = 0x470e90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 964)));
label_470e94:
    // 0x470e94: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x470e94u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_470e98:
    // 0x470e98: 0x24e7fe30  addiu       $a3, $a3, -0x1D0
    ctx->pc = 0x470e98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294966832));
label_470e9c:
    // 0x470e9c: 0x2408014d  addiu       $t0, $zero, 0x14D
    ctx->pc = 0x470e9cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 333));
label_470ea0:
    // 0x470ea0: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x470ea0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_470ea4:
    // 0x470ea4: 0x25290010  addiu       $t1, $t1, 0x10
    ctx->pc = 0x470ea4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
label_470ea8:
    // 0x470ea8: 0xc113940  jal         func_44E500
label_470eac:
    if (ctx->pc == 0x470EACu) {
        ctx->pc = 0x470EB0u;
        goto label_470eb0;
    }
    ctx->pc = 0x470EA8u;
    SET_GPR_U32(ctx, 31, 0x470EB0u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x470EA8u, 0x470EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x470EB0u;
label_470eb0:
    // 0x470eb0: 0x27a40280  addiu       $a0, $sp, 0x280
    ctx->pc = 0x470eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
label_470eb4:
    // 0x470eb4: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x470eb4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_470eb8:
    // 0x470eb8: 0x24a50160  addiu       $a1, $a1, 0x160
    ctx->pc = 0x470eb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 352));
label_470ebc:
    // 0x470ebc: 0xc115c24  jal         func_457090
label_470ec0:
    if (ctx->pc == 0x470EC0u) {
        ctx->pc = 0x470EC4u;
        goto label_470ec4;
    }
    ctx->pc = 0x470EBCu;
    SET_GPR_U32(ctx, 31, 0x470EC4u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x470EBCu, 0x470EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x470EC4u;
label_470ec4:
    // 0x470ec4: 0x27a40280  addiu       $a0, $sp, 0x280
    ctx->pc = 0x470ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
label_470ec8:
    // 0x470ec8: 0x8fa203c8  lw          $v0, 0x3C8($sp)
    ctx->pc = 0x470ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 968)));
label_470ecc:
    // 0x470ecc: 0x40f809  jalr        $v0
label_470ed0:
    if (ctx->pc == 0x470ED0u) {
        ctx->pc = 0x470ED4u;
        goto label_470ed4;
    }
    ctx->pc = 0x470ECCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x470ED4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x470ECCu, 0x470ED4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x470ED4u;
label_470ed4:
    // 0x470ed4: 0xaf82b36c  sw          $v0, -0x4C94($gp)
    ctx->pc = 0x470ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947692), GPR_U32(ctx, 2));
label_470ed8:
    // 0x470ed8: 0x8fa20280  lw          $v0, 0x280($sp)
    ctx->pc = 0x470ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_470edc:
    // 0x470edc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_470ee0:
    if (ctx->pc == 0x470EE0u) {
        ctx->pc = 0x470EE4u;
        goto label_470ee4;
    }
    ctx->pc = 0x470EDCu;
    {
        const bool branch_taken_0x470edc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x470edc) {
            ctx->pc = 0x470EECu;
            goto label_470eec;
        }
    }
    ctx->pc = 0x470EE4u;
label_470ee4:
    // 0x470ee4: 0xd  break       0
    ctx->pc = 0x470ee4u;
    runtime->handleBreak(rdram, ctx);
label_470ee8:
    // 0x470ee8: 0x0  nop
    ctx->pc = 0x470ee8u;
    // NOP
label_470eec:
    // 0x470eec: 0x27a40280  addiu       $a0, $sp, 0x280
    ctx->pc = 0x470eecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
label_470ef0:
    // 0x470ef0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x470ef0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_470ef4:
    // 0x470ef4: 0xc11392c  jal         func_44E4B0
label_470ef8:
    if (ctx->pc == 0x470EF8u) {
        ctx->pc = 0x470EFCu;
        goto label_470efc;
    }
    ctx->pc = 0x470EF4u;
    SET_GPR_U32(ctx, 31, 0x470EFCu);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x470EF4u, 0x470EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x470EFCu;
label_470efc:
    // 0x470efc: 0x8f82c050  lw          $v0, -0x3FB0($gp)
    ctx->pc = 0x470efcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950992)));
label_470f00:
    // 0x470f00: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x470f00u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_470f04:
    // 0x470f04: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x470f04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_470f08:
    // 0x470f08: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_470f0c:
    if (ctx->pc == 0x470F0Cu) {
        ctx->pc = 0x470F10u;
        goto label_470f10;
    }
    ctx->pc = 0x470F08u;
    {
        const bool branch_taken_0x470f08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x470f08) {
            ctx->pc = 0x470FB8u;
            goto label_470fb8;
        }
    }
    ctx->pc = 0x470F10u;
label_470f10:
    // 0x470f10: 0x8f82b370  lw          $v0, -0x4C90($gp)
    ctx->pc = 0x470f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947696)));
label_470f14:
    // 0x470f14: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_470f18:
    if (ctx->pc == 0x470F18u) {
        ctx->pc = 0x470F1Cu;
        goto label_470f1c;
    }
    ctx->pc = 0x470F14u;
    {
        const bool branch_taken_0x470f14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x470f14) {
            ctx->pc = 0x470FB8u;
            goto label_470fb8;
        }
    }
    ctx->pc = 0x470F1Cu;
label_470f1c:
    // 0x470f1c: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x470f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_470f20:
    // 0x470f20: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x470f20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_470f24:
    // 0x470f24: 0x27a603b0  addiu       $a2, $sp, 0x3B0
    ctx->pc = 0x470f24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 944));
label_470f28:
    // 0x470f28: 0xc115ee8  jal         func_457BA0
label_470f2c:
    if (ctx->pc == 0x470F2Cu) {
        ctx->pc = 0x470F30u;
        goto label_470f30;
    }
    ctx->pc = 0x470F28u;
    SET_GPR_U32(ctx, 31, 0x470F30u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x470F28u, 0x470F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x470F30u;
label_470f30:
    // 0x470f30: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_470f34:
    if (ctx->pc == 0x470F34u) {
        ctx->pc = 0x470F38u;
        goto label_470f38;
    }
    ctx->pc = 0x470F30u;
    {
        const bool branch_taken_0x470f30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x470f30) {
            ctx->pc = 0x470FB8u;
            goto label_470fb8;
        }
    }
    ctx->pc = 0x470F38u;
label_470f38:
    // 0x470f38: 0x8fa203b8  lw          $v0, 0x3B8($sp)
    ctx->pc = 0x470f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 952)));
label_470f3c:
    // 0x470f3c: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_470f40:
    if (ctx->pc == 0x470F40u) {
        ctx->pc = 0x470F44u;
        goto label_470f44;
    }
    ctx->pc = 0x470F3Cu;
    {
        const bool branch_taken_0x470f3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x470f3c) {
            ctx->pc = 0x470FB8u;
            goto label_470fb8;
        }
    }
    ctx->pc = 0x470F44u;
label_470f44:
    // 0x470f44: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x470f44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_470f48:
    // 0x470f48: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x470f48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_470f4c:
    // 0x470f4c: 0x8fa603b4  lw          $a2, 0x3B4($sp)
    ctx->pc = 0x470f4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 948)));
label_470f50:
    // 0x470f50: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x470f50u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_470f54:
    // 0x470f54: 0x24e7fe30  addiu       $a3, $a3, -0x1D0
    ctx->pc = 0x470f54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294966832));
label_470f58:
    // 0x470f58: 0x2408014e  addiu       $t0, $zero, 0x14E
    ctx->pc = 0x470f58u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 334));
label_470f5c:
    // 0x470f5c: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x470f5cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_470f60:
    // 0x470f60: 0x2529fef0  addiu       $t1, $t1, -0x110
    ctx->pc = 0x470f60u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967024));
label_470f64:
    // 0x470f64: 0xc113940  jal         func_44E500
label_470f68:
    if (ctx->pc == 0x470F68u) {
        ctx->pc = 0x470F6Cu;
        goto label_470f6c;
    }
    ctx->pc = 0x470F64u;
    SET_GPR_U32(ctx, 31, 0x470F6Cu);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x470F64u, 0x470F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x470F6Cu;
label_470f6c:
    // 0x470f6c: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x470f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_470f70:
    // 0x470f70: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x470f70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_470f74:
    // 0x470f74: 0x24a501a0  addiu       $a1, $a1, 0x1A0
    ctx->pc = 0x470f74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 416));
label_470f78:
    // 0x470f78: 0xc115c24  jal         func_457090
label_470f7c:
    if (ctx->pc == 0x470F7Cu) {
        ctx->pc = 0x470F80u;
        goto label_470f80;
    }
    ctx->pc = 0x470F78u;
    SET_GPR_U32(ctx, 31, 0x470F80u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x470F78u, 0x470F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x470F80u;
label_470f80:
    // 0x470f80: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x470f80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_470f84:
    // 0x470f84: 0x8fa203b8  lw          $v0, 0x3B8($sp)
    ctx->pc = 0x470f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 952)));
label_470f88:
    // 0x470f88: 0x40f809  jalr        $v0
label_470f8c:
    if (ctx->pc == 0x470F8Cu) {
        ctx->pc = 0x470F90u;
        goto label_470f90;
    }
    ctx->pc = 0x470F88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x470F90u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x470F88u, 0x470F90u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x470F90u;
label_470f90:
    // 0x470f90: 0xaf82b370  sw          $v0, -0x4C90($gp)
    ctx->pc = 0x470f90u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947696), GPR_U32(ctx, 2));
label_470f94:
    // 0x470f94: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x470f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_470f98:
    // 0x470f98: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_470f9c:
    if (ctx->pc == 0x470F9Cu) {
        ctx->pc = 0x470FA0u;
        goto label_470fa0;
    }
    ctx->pc = 0x470F98u;
    {
        const bool branch_taken_0x470f98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x470f98) {
            ctx->pc = 0x470FA8u;
            goto label_470fa8;
        }
    }
    ctx->pc = 0x470FA0u;
label_470fa0:
    // 0x470fa0: 0xd  break       0
    ctx->pc = 0x470fa0u;
    runtime->handleBreak(rdram, ctx);
label_470fa4:
    // 0x470fa4: 0x0  nop
    ctx->pc = 0x470fa4u;
    // NOP
label_470fa8:
    // 0x470fa8: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x470fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_470fac:
    // 0x470fac: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x470facu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_470fb0:
    // 0x470fb0: 0xc11392c  jal         func_44E4B0
label_470fb4:
    if (ctx->pc == 0x470FB4u) {
        ctx->pc = 0x470FB8u;
        goto label_470fb8;
    }
    ctx->pc = 0x470FB0u;
    SET_GPR_U32(ctx, 31, 0x470FB8u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x470FB0u, 0x470FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x470FB8u;
label_470fb8:
    // 0x470fb8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x470fb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_470fbc:
    // 0x470fbc: 0x8fa203d0  lw          $v0, 0x3D0($sp)
    ctx->pc = 0x470fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 976)));
label_470fc0:
    // 0x470fc0: 0x10400042  beqz        $v0, . + 4 + (0x42 << 2)
label_470fc4:
    if (ctx->pc == 0x470FC4u) {
        ctx->pc = 0x470FC8u;
        goto label_470fc8;
    }
    ctx->pc = 0x470FC0u;
    {
        const bool branch_taken_0x470fc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x470fc0) {
            ctx->pc = 0x4710CCu;
            goto label_4710cc;
        }
    }
    ctx->pc = 0x470FC8u;
label_470fc8:
    // 0x470fc8: 0x8fb003d0  lw          $s0, 0x3D0($sp)
    ctx->pc = 0x470fc8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 976)));
label_470fcc:
    // 0x470fcc: 0xaf90c060  sw          $s0, -0x3FA0($gp)
    ctx->pc = 0x470fccu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294951008), GPR_U32(ctx, 16));
label_470fd0:
    // 0x470fd0: 0x8e110060  lw          $s1, 0x60($s0)
    ctx->pc = 0x470fd0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_470fd4:
    // 0x470fd4: 0x11102b  sltu        $v0, $zero, $s1
    ctx->pc = 0x470fd4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_470fd8:
    // 0x470fd8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x470fd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_470fdc:
    // 0x470fdc: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
label_470fe0:
    if (ctx->pc == 0x470FE0u) {
        ctx->pc = 0x470FE4u;
        goto label_470fe4;
    }
    ctx->pc = 0x470FDCu;
    {
        const bool branch_taken_0x470fdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x470fdc) {
            ctx->pc = 0x471088u;
            goto label_471088;
        }
    }
    ctx->pc = 0x470FE4u;
label_470fe4:
    // 0x470fe4: 0x8f82b374  lw          $v0, -0x4C8C($gp)
    ctx->pc = 0x470fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947700)));
label_470fe8:
    // 0x470fe8: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_470fec:
    if (ctx->pc == 0x470FECu) {
        ctx->pc = 0x470FF0u;
        goto label_470ff0;
    }
    ctx->pc = 0x470FE8u;
    {
        const bool branch_taken_0x470fe8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x470fe8) {
            ctx->pc = 0x471088u;
            goto label_471088;
        }
    }
    ctx->pc = 0x470FF0u;
label_470ff0:
    // 0x470ff0: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x470ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_470ff4:
    // 0x470ff4: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x470ff4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_470ff8:
    // 0x470ff8: 0x27a603a0  addiu       $a2, $sp, 0x3A0
    ctx->pc = 0x470ff8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 928));
label_470ffc:
    // 0x470ffc: 0xc115ee8  jal         func_457BA0
label_471000:
    if (ctx->pc == 0x471000u) {
        ctx->pc = 0x471004u;
        goto label_471004;
    }
    ctx->pc = 0x470FFCu;
    SET_GPR_U32(ctx, 31, 0x471004u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x470FFCu, 0x471004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x471004u;
label_471004:
    // 0x471004: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_471008:
    if (ctx->pc == 0x471008u) {
        ctx->pc = 0x47100Cu;
        goto label_47100c;
    }
    ctx->pc = 0x471004u;
    {
        const bool branch_taken_0x471004 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x471004) {
            ctx->pc = 0x471088u;
            goto label_471088;
        }
    }
    ctx->pc = 0x47100Cu;
label_47100c:
    // 0x47100c: 0x8fa203a8  lw          $v0, 0x3A8($sp)
    ctx->pc = 0x47100cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 936)));
label_471010:
    // 0x471010: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_471014:
    if (ctx->pc == 0x471014u) {
        ctx->pc = 0x471018u;
        goto label_471018;
    }
    ctx->pc = 0x471010u;
    {
        const bool branch_taken_0x471010 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x471010) {
            ctx->pc = 0x471088u;
            goto label_471088;
        }
    }
    ctx->pc = 0x471018u;
label_471018:
    // 0x471018: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x471018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_47101c:
    // 0x47101c: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x47101cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_471020:
    // 0x471020: 0x8fa603a4  lw          $a2, 0x3A4($sp)
    ctx->pc = 0x471020u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 932)));
label_471024:
    // 0x471024: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x471024u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_471028:
    // 0x471028: 0x24e7fe30  addiu       $a3, $a3, -0x1D0
    ctx->pc = 0x471028u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294966832));
label_47102c:
    // 0x47102c: 0x24080157  addiu       $t0, $zero, 0x157
    ctx->pc = 0x47102cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 343));
label_471030:
    // 0x471030: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x471030u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_471034:
    // 0x471034: 0x2529ff80  addiu       $t1, $t1, -0x80
    ctx->pc = 0x471034u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967168));
label_471038:
    // 0x471038: 0xc113940  jal         func_44E500
label_47103c:
    if (ctx->pc == 0x47103Cu) {
        ctx->pc = 0x471040u;
        goto label_471040;
    }
    ctx->pc = 0x471038u;
    SET_GPR_U32(ctx, 31, 0x471040u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x471038u, 0x471040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x471040u;
label_471040:
    // 0x471040: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x471040u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_471044:
    // 0x471044: 0x2785b350  addiu       $a1, $gp, -0x4CB0
    ctx->pc = 0x471044u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294947664));
label_471048:
    // 0x471048: 0xc115c24  jal         func_457090
label_47104c:
    if (ctx->pc == 0x47104Cu) {
        ctx->pc = 0x471050u;
        goto label_471050;
    }
    ctx->pc = 0x471048u;
    SET_GPR_U32(ctx, 31, 0x471050u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x471048u, 0x471050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x471050u;
label_471050:
    // 0x471050: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x471050u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_471054:
    // 0x471054: 0x8fa203a8  lw          $v0, 0x3A8($sp)
    ctx->pc = 0x471054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 936)));
label_471058:
    // 0x471058: 0x40f809  jalr        $v0
label_47105c:
    if (ctx->pc == 0x47105Cu) {
        ctx->pc = 0x471060u;
        goto label_471060;
    }
    ctx->pc = 0x471058u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x471060u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x471058u, 0x471060u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x471060u;
label_471060:
    // 0x471060: 0xaf82b374  sw          $v0, -0x4C8C($gp)
    ctx->pc = 0x471060u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947700), GPR_U32(ctx, 2));
label_471064:
    // 0x471064: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x471064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_471068:
    // 0x471068: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_47106c:
    if (ctx->pc == 0x47106Cu) {
        ctx->pc = 0x471070u;
        goto label_471070;
    }
    ctx->pc = 0x471068u;
    {
        const bool branch_taken_0x471068 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x471068) {
            ctx->pc = 0x471078u;
            goto label_471078;
        }
    }
    ctx->pc = 0x471070u;
label_471070:
    // 0x471070: 0xd  break       0
    ctx->pc = 0x471070u;
    runtime->handleBreak(rdram, ctx);
label_471074:
    // 0x471074: 0x0  nop
    ctx->pc = 0x471074u;
    // NOP
label_471078:
    // 0x471078: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x471078u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_47107c:
    // 0x47107c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x47107cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_471080:
    // 0x471080: 0xc11392c  jal         func_44E4B0
label_471084:
    if (ctx->pc == 0x471084u) {
        ctx->pc = 0x471088u;
        goto label_471088;
    }
    ctx->pc = 0x471080u;
    SET_GPR_U32(ctx, 31, 0x471088u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x471080u, 0x471088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x471088u;
label_471088:
    // 0x471088: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x471088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_47108c:
    // 0x47108c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x47108cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_471090:
    // 0x471090: 0x0  nop
    ctx->pc = 0x471090u;
    // NOP
label_471094:
    // 0x471094: 0x468003a0  cvt.s.w     $f14, $f0
    ctx->pc = 0x471094u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
label_471098:
    // 0x471098: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x471098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_47109c:
    // 0x47109c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x47109cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4710a0:
    // 0x4710a0: 0x0  nop
    ctx->pc = 0x4710a0u;
    // NOP
label_4710a4:
    // 0x4710a4: 0x468003e0  cvt.s.w     $f15, $f0
    ctx->pc = 0x4710a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
label_4710a8:
    // 0x4710a8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4710a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4710ac:
    // 0x4710ac: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x4710acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_4710b0:
    // 0x4710b0: 0xc0eb5ce  jal         func_3AD738
label_4710b4:
    if (ctx->pc == 0x4710B4u) {
        ctx->pc = 0x4710B8u;
        goto label_4710b8;
    }
    ctx->pc = 0x4710B0u;
    SET_GPR_U32(ctx, 31, 0x4710B8u);
    ctx->pc = 0x3AD738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AD738u, 0x4710B0u, 0x4710B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4710B8u;
label_4710b8:
    // 0x4710b8: 0x8f84c060  lw          $a0, -0x3FA0($gp)
    ctx->pc = 0x4710b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951008)));
label_4710bc:
    // 0x4710bc: 0xc0eb742  jal         func_3ADD08
label_4710c0:
    if (ctx->pc == 0x4710C0u) {
        ctx->pc = 0x4710C4u;
        goto label_4710c4;
    }
    ctx->pc = 0x4710BCu;
    SET_GPR_U32(ctx, 31, 0x4710C4u);
    ctx->pc = 0x3ADD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ADD08u, 0x4710BCu, 0x4710C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4710C4u;
label_4710c4:
    // 0x4710c4: 0x10000003  b           . + 4 + (0x3 << 2)
label_4710c8:
    if (ctx->pc == 0x4710C8u) {
        ctx->pc = 0x4710CCu;
        goto label_4710cc;
    }
    ctx->pc = 0x4710C4u;
    {
        const bool branch_taken_0x4710c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4710c4) {
            ctx->pc = 0x4710D4u;
            goto label_4710d4;
        }
    }
    ctx->pc = 0x4710CCu;
label_4710cc:
    // 0x4710cc: 0x8f90c050  lw          $s0, -0x3FB0($gp)
    ctx->pc = 0x4710ccu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950992)));
label_4710d0:
    // 0x4710d0: 0xaf80c060  sw          $zero, -0x3FA0($gp)
    ctx->pc = 0x4710d0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294951008), GPR_U32(ctx, 0));
label_4710d4:
    // 0x4710d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4710d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4710d8:
    // 0x4710d8: 0xc105f96  jal         func_417E58
label_4710dc:
    if (ctx->pc == 0x4710DCu) {
        ctx->pc = 0x4710E0u;
        goto label_4710e0;
    }
    ctx->pc = 0x4710D8u;
    SET_GPR_U32(ctx, 31, 0x4710E0u);
    ctx->pc = 0x417E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x417E58u, 0x4710D8u, 0x4710E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4710E0u;
label_4710e0:
    // 0x4710e0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_4710e4:
    if (ctx->pc == 0x4710E4u) {
        ctx->pc = 0x4710E8u;
        goto label_4710e8;
    }
    ctx->pc = 0x4710E0u;
    {
        const bool branch_taken_0x4710e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4710e0) {
            ctx->pc = 0x4710F4u;
            goto label_4710f4;
        }
    }
    ctx->pc = 0x4710E8u;
label_4710e8:
    // 0x4710e8: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x4710e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4710ec:
    // 0x4710ec: 0x10000002  b           . + 4 + (0x2 << 2)
label_4710f0:
    if (ctx->pc == 0x4710F0u) {
        ctx->pc = 0x4710F4u;
        goto label_4710f4;
    }
    ctx->pc = 0x4710ECu;
    {
        const bool branch_taken_0x4710ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4710ec) {
            ctx->pc = 0x4710F8u;
            goto label_4710f8;
        }
    }
    ctx->pc = 0x4710F4u;
label_4710f4:
    // 0x4710f4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4710f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4710f8:
    // 0x4710f8: 0xaf92c04c  sw          $s2, -0x3FB4($gp)
    ctx->pc = 0x4710f8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950988), GPR_U32(ctx, 18));
label_4710fc:
    // 0x4710fc: 0x8f82c04c  lw          $v0, -0x3FB4($gp)
    ctx->pc = 0x4710fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950988)));
label_471100:
    // 0x471100: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x471100u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_471104:
    // 0x471104: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x471104u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_471108:
    // 0x471108: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x471108u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_47110c:
    // 0x47110c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x47110cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_471110:
    // 0x471110: 0x27bd03e0  addiu       $sp, $sp, 0x3E0
    ctx->pc = 0x471110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 992));
label_471114:
    // 0x471114: 0x3e00008  jr          $ra
label_471118:
    if (ctx->pc == 0x471118u) {
        ctx->pc = 0x47111Cu;
        goto label_47111c;
    }
    ctx->pc = 0x471114u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x471114u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x47111Cu;
label_47111c:
    // 0x47111c: 0x0  nop
    ctx->pc = 0x47111cu;
    // NOP
    ctx->pc = 0x471120u;
}
