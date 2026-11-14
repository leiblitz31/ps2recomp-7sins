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

// Function: sub_00471DC0
// Address: 0x471dc0 - 0x4721e0
void sub_00471DC0_0x471dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00471DC0_0x471dc0");
#endif

    switch (ctx->pc) {
        case 0x471dc0u: goto label_471dc0;
        case 0x471dc4u: goto label_471dc4;
        case 0x471dc8u: goto label_471dc8;
        case 0x471dccu: goto label_471dcc;
        case 0x471dd0u: goto label_471dd0;
        case 0x471dd4u: goto label_471dd4;
        case 0x471dd8u: goto label_471dd8;
        case 0x471ddcu: goto label_471ddc;
        case 0x471de0u: goto label_471de0;
        case 0x471de4u: goto label_471de4;
        case 0x471de8u: goto label_471de8;
        case 0x471decu: goto label_471dec;
        case 0x471df0u: goto label_471df0;
        case 0x471df4u: goto label_471df4;
        case 0x471df8u: goto label_471df8;
        case 0x471dfcu: goto label_471dfc;
        case 0x471e00u: goto label_471e00;
        case 0x471e04u: goto label_471e04;
        case 0x471e08u: goto label_471e08;
        case 0x471e0cu: goto label_471e0c;
        case 0x471e10u: goto label_471e10;
        case 0x471e14u: goto label_471e14;
        case 0x471e18u: goto label_471e18;
        case 0x471e1cu: goto label_471e1c;
        case 0x471e20u: goto label_471e20;
        case 0x471e24u: goto label_471e24;
        case 0x471e28u: goto label_471e28;
        case 0x471e2cu: goto label_471e2c;
        case 0x471e30u: goto label_471e30;
        case 0x471e34u: goto label_471e34;
        case 0x471e38u: goto label_471e38;
        case 0x471e3cu: goto label_471e3c;
        case 0x471e40u: goto label_471e40;
        case 0x471e44u: goto label_471e44;
        case 0x471e48u: goto label_471e48;
        case 0x471e4cu: goto label_471e4c;
        case 0x471e50u: goto label_471e50;
        case 0x471e54u: goto label_471e54;
        case 0x471e58u: goto label_471e58;
        case 0x471e5cu: goto label_471e5c;
        case 0x471e60u: goto label_471e60;
        case 0x471e64u: goto label_471e64;
        case 0x471e68u: goto label_471e68;
        case 0x471e6cu: goto label_471e6c;
        case 0x471e70u: goto label_471e70;
        case 0x471e74u: goto label_471e74;
        case 0x471e78u: goto label_471e78;
        case 0x471e7cu: goto label_471e7c;
        case 0x471e80u: goto label_471e80;
        case 0x471e84u: goto label_471e84;
        case 0x471e88u: goto label_471e88;
        case 0x471e8cu: goto label_471e8c;
        case 0x471e90u: goto label_471e90;
        case 0x471e94u: goto label_471e94;
        case 0x471e98u: goto label_471e98;
        case 0x471e9cu: goto label_471e9c;
        case 0x471ea0u: goto label_471ea0;
        case 0x471ea4u: goto label_471ea4;
        case 0x471ea8u: goto label_471ea8;
        case 0x471eacu: goto label_471eac;
        case 0x471eb0u: goto label_471eb0;
        case 0x471eb4u: goto label_471eb4;
        case 0x471eb8u: goto label_471eb8;
        case 0x471ebcu: goto label_471ebc;
        case 0x471ec0u: goto label_471ec0;
        case 0x471ec4u: goto label_471ec4;
        case 0x471ec8u: goto label_471ec8;
        case 0x471eccu: goto label_471ecc;
        case 0x471ed0u: goto label_471ed0;
        case 0x471ed4u: goto label_471ed4;
        case 0x471ed8u: goto label_471ed8;
        case 0x471edcu: goto label_471edc;
        case 0x471ee0u: goto label_471ee0;
        case 0x471ee4u: goto label_471ee4;
        case 0x471ee8u: goto label_471ee8;
        case 0x471eecu: goto label_471eec;
        case 0x471ef0u: goto label_471ef0;
        case 0x471ef4u: goto label_471ef4;
        case 0x471ef8u: goto label_471ef8;
        case 0x471efcu: goto label_471efc;
        case 0x471f00u: goto label_471f00;
        case 0x471f04u: goto label_471f04;
        case 0x471f08u: goto label_471f08;
        case 0x471f0cu: goto label_471f0c;
        case 0x471f10u: goto label_471f10;
        case 0x471f14u: goto label_471f14;
        case 0x471f18u: goto label_471f18;
        case 0x471f1cu: goto label_471f1c;
        case 0x471f20u: goto label_471f20;
        case 0x471f24u: goto label_471f24;
        case 0x471f28u: goto label_471f28;
        case 0x471f2cu: goto label_471f2c;
        case 0x471f30u: goto label_471f30;
        case 0x471f34u: goto label_471f34;
        case 0x471f38u: goto label_471f38;
        case 0x471f3cu: goto label_471f3c;
        case 0x471f40u: goto label_471f40;
        case 0x471f44u: goto label_471f44;
        case 0x471f48u: goto label_471f48;
        case 0x471f4cu: goto label_471f4c;
        case 0x471f50u: goto label_471f50;
        case 0x471f54u: goto label_471f54;
        case 0x471f58u: goto label_471f58;
        case 0x471f5cu: goto label_471f5c;
        case 0x471f60u: goto label_471f60;
        case 0x471f64u: goto label_471f64;
        case 0x471f68u: goto label_471f68;
        case 0x471f6cu: goto label_471f6c;
        case 0x471f70u: goto label_471f70;
        case 0x471f74u: goto label_471f74;
        case 0x471f78u: goto label_471f78;
        case 0x471f7cu: goto label_471f7c;
        case 0x471f80u: goto label_471f80;
        case 0x471f84u: goto label_471f84;
        case 0x471f88u: goto label_471f88;
        case 0x471f8cu: goto label_471f8c;
        case 0x471f90u: goto label_471f90;
        case 0x471f94u: goto label_471f94;
        case 0x471f98u: goto label_471f98;
        case 0x471f9cu: goto label_471f9c;
        case 0x471fa0u: goto label_471fa0;
        case 0x471fa4u: goto label_471fa4;
        case 0x471fa8u: goto label_471fa8;
        case 0x471facu: goto label_471fac;
        case 0x471fb0u: goto label_471fb0;
        case 0x471fb4u: goto label_471fb4;
        case 0x471fb8u: goto label_471fb8;
        case 0x471fbcu: goto label_471fbc;
        case 0x471fc0u: goto label_471fc0;
        case 0x471fc4u: goto label_471fc4;
        case 0x471fc8u: goto label_471fc8;
        case 0x471fccu: goto label_471fcc;
        case 0x471fd0u: goto label_471fd0;
        case 0x471fd4u: goto label_471fd4;
        case 0x471fd8u: goto label_471fd8;
        case 0x471fdcu: goto label_471fdc;
        case 0x471fe0u: goto label_471fe0;
        case 0x471fe4u: goto label_471fe4;
        case 0x471fe8u: goto label_471fe8;
        case 0x471fecu: goto label_471fec;
        case 0x471ff0u: goto label_471ff0;
        case 0x471ff4u: goto label_471ff4;
        case 0x471ff8u: goto label_471ff8;
        case 0x471ffcu: goto label_471ffc;
        case 0x472000u: goto label_472000;
        case 0x472004u: goto label_472004;
        case 0x472008u: goto label_472008;
        case 0x47200cu: goto label_47200c;
        case 0x472010u: goto label_472010;
        case 0x472014u: goto label_472014;
        case 0x472018u: goto label_472018;
        case 0x47201cu: goto label_47201c;
        case 0x472020u: goto label_472020;
        case 0x472024u: goto label_472024;
        case 0x472028u: goto label_472028;
        case 0x47202cu: goto label_47202c;
        case 0x472030u: goto label_472030;
        case 0x472034u: goto label_472034;
        case 0x472038u: goto label_472038;
        case 0x47203cu: goto label_47203c;
        case 0x472040u: goto label_472040;
        case 0x472044u: goto label_472044;
        case 0x472048u: goto label_472048;
        case 0x47204cu: goto label_47204c;
        case 0x472050u: goto label_472050;
        case 0x472054u: goto label_472054;
        case 0x472058u: goto label_472058;
        case 0x47205cu: goto label_47205c;
        case 0x472060u: goto label_472060;
        case 0x472064u: goto label_472064;
        case 0x472068u: goto label_472068;
        case 0x47206cu: goto label_47206c;
        case 0x472070u: goto label_472070;
        case 0x472074u: goto label_472074;
        case 0x472078u: goto label_472078;
        case 0x47207cu: goto label_47207c;
        case 0x472080u: goto label_472080;
        case 0x472084u: goto label_472084;
        case 0x472088u: goto label_472088;
        case 0x47208cu: goto label_47208c;
        case 0x472090u: goto label_472090;
        case 0x472094u: goto label_472094;
        case 0x472098u: goto label_472098;
        case 0x47209cu: goto label_47209c;
        case 0x4720a0u: goto label_4720a0;
        case 0x4720a4u: goto label_4720a4;
        case 0x4720a8u: goto label_4720a8;
        case 0x4720acu: goto label_4720ac;
        case 0x4720b0u: goto label_4720b0;
        case 0x4720b4u: goto label_4720b4;
        case 0x4720b8u: goto label_4720b8;
        case 0x4720bcu: goto label_4720bc;
        case 0x4720c0u: goto label_4720c0;
        case 0x4720c4u: goto label_4720c4;
        case 0x4720c8u: goto label_4720c8;
        case 0x4720ccu: goto label_4720cc;
        case 0x4720d0u: goto label_4720d0;
        case 0x4720d4u: goto label_4720d4;
        case 0x4720d8u: goto label_4720d8;
        case 0x4720dcu: goto label_4720dc;
        case 0x4720e0u: goto label_4720e0;
        case 0x4720e4u: goto label_4720e4;
        case 0x4720e8u: goto label_4720e8;
        case 0x4720ecu: goto label_4720ec;
        case 0x4720f0u: goto label_4720f0;
        case 0x4720f4u: goto label_4720f4;
        case 0x4720f8u: goto label_4720f8;
        case 0x4720fcu: goto label_4720fc;
        case 0x472100u: goto label_472100;
        case 0x472104u: goto label_472104;
        case 0x472108u: goto label_472108;
        case 0x47210cu: goto label_47210c;
        case 0x472110u: goto label_472110;
        case 0x472114u: goto label_472114;
        case 0x472118u: goto label_472118;
        case 0x47211cu: goto label_47211c;
        case 0x472120u: goto label_472120;
        case 0x472124u: goto label_472124;
        case 0x472128u: goto label_472128;
        case 0x47212cu: goto label_47212c;
        case 0x472130u: goto label_472130;
        case 0x472134u: goto label_472134;
        case 0x472138u: goto label_472138;
        case 0x47213cu: goto label_47213c;
        case 0x472140u: goto label_472140;
        case 0x472144u: goto label_472144;
        case 0x472148u: goto label_472148;
        case 0x47214cu: goto label_47214c;
        case 0x472150u: goto label_472150;
        case 0x472154u: goto label_472154;
        case 0x472158u: goto label_472158;
        case 0x47215cu: goto label_47215c;
        case 0x472160u: goto label_472160;
        case 0x472164u: goto label_472164;
        case 0x472168u: goto label_472168;
        case 0x47216cu: goto label_47216c;
        case 0x472170u: goto label_472170;
        case 0x472174u: goto label_472174;
        case 0x472178u: goto label_472178;
        case 0x47217cu: goto label_47217c;
        case 0x472180u: goto label_472180;
        case 0x472184u: goto label_472184;
        case 0x472188u: goto label_472188;
        case 0x47218cu: goto label_47218c;
        case 0x472190u: goto label_472190;
        case 0x472194u: goto label_472194;
        case 0x472198u: goto label_472198;
        case 0x47219cu: goto label_47219c;
        case 0x4721a0u: goto label_4721a0;
        case 0x4721a4u: goto label_4721a4;
        case 0x4721a8u: goto label_4721a8;
        case 0x4721acu: goto label_4721ac;
        case 0x4721b0u: goto label_4721b0;
        case 0x4721b4u: goto label_4721b4;
        case 0x4721b8u: goto label_4721b8;
        case 0x4721bcu: goto label_4721bc;
        case 0x4721c0u: goto label_4721c0;
        case 0x4721c4u: goto label_4721c4;
        case 0x4721c8u: goto label_4721c8;
        case 0x4721ccu: goto label_4721cc;
        case 0x4721d0u: goto label_4721d0;
        case 0x4721d4u: goto label_4721d4;
        case 0x4721d8u: goto label_4721d8;
        case 0x4721dcu: goto label_4721dc;
        default: break;
    }

    ctx->pc = 0x471dc0u;

label_471dc0:
    // 0x471dc0: 0x27bdfa90  addiu       $sp, $sp, -0x570
    ctx->pc = 0x471dc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965904));
label_471dc4:
    // 0x471dc4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x471dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_471dc8:
    // 0x471dc8: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x471dc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_471dcc:
    // 0x471dcc: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x471dccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_471dd0:
    // 0x471dd0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x471dd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_471dd4:
    // 0x471dd4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x471dd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_471dd8:
    // 0x471dd8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x471dd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_471ddc:
    // 0x471ddc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x471ddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_471de0:
    // 0x471de0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x471de0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_471de4:
    // 0x471de4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x471de4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_471de8:
    // 0x471de8: 0xafa40550  sw          $a0, 0x550($sp)
    ctx->pc = 0x471de8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1360), GPR_U32(ctx, 4));
label_471dec:
    // 0x471dec: 0xafa50560  sw          $a1, 0x560($sp)
    ctx->pc = 0x471decu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1376), GPR_U32(ctx, 5));
label_471df0:
    // 0x471df0: 0x8fa20550  lw          $v0, 0x550($sp)
    ctx->pc = 0x471df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1360)));
label_471df4:
    // 0x471df4: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x471df4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_471df8:
    // 0x471df8: 0x1600002b  bnez        $s0, . + 4 + (0x2B << 2)
label_471dfc:
    if (ctx->pc == 0x471DFCu) {
        ctx->pc = 0x471E00u;
        goto label_471e00;
    }
    ctx->pc = 0x471DF8u;
    {
        const bool branch_taken_0x471df8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x471df8) {
            ctx->pc = 0x471EA8u;
            goto label_471ea8;
        }
    }
    ctx->pc = 0x471E00u;
label_471e00:
    // 0x471e00: 0x8f82b39c  lw          $v0, -0x4C64($gp)
    ctx->pc = 0x471e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947740)));
label_471e04:
    // 0x471e04: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_471e08:
    if (ctx->pc == 0x471E08u) {
        ctx->pc = 0x471E0Cu;
        goto label_471e0c;
    }
    ctx->pc = 0x471E04u;
    {
        const bool branch_taken_0x471e04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x471e04) {
            ctx->pc = 0x471EA8u;
            goto label_471ea8;
        }
    }
    ctx->pc = 0x471E0Cu;
label_471e0c:
    // 0x471e0c: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x471e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_471e10:
    // 0x471e10: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x471e10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_471e14:
    // 0x471e14: 0x27a60540  addiu       $a2, $sp, 0x540
    ctx->pc = 0x471e14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1344));
label_471e18:
    // 0x471e18: 0xc115ee8  jal         func_457BA0
label_471e1c:
    if (ctx->pc == 0x471E1Cu) {
        ctx->pc = 0x471E20u;
        goto label_471e20;
    }
    ctx->pc = 0x471E18u;
    SET_GPR_U32(ctx, 31, 0x471E20u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x471E18u, 0x471E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x471E20u;
label_471e20:
    // 0x471e20: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_471e24:
    if (ctx->pc == 0x471E24u) {
        ctx->pc = 0x471E28u;
        goto label_471e28;
    }
    ctx->pc = 0x471E20u;
    {
        const bool branch_taken_0x471e20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x471e20) {
            ctx->pc = 0x471EA8u;
            goto label_471ea8;
        }
    }
    ctx->pc = 0x471E28u;
label_471e28:
    // 0x471e28: 0x8fa20548  lw          $v0, 0x548($sp)
    ctx->pc = 0x471e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1352)));
label_471e2c:
    // 0x471e2c: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_471e30:
    if (ctx->pc == 0x471E30u) {
        ctx->pc = 0x471E34u;
        goto label_471e34;
    }
    ctx->pc = 0x471E2Cu;
    {
        const bool branch_taken_0x471e2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x471e2c) {
            ctx->pc = 0x471EA8u;
            goto label_471ea8;
        }
    }
    ctx->pc = 0x471E34u;
label_471e34:
    // 0x471e34: 0x27a403f0  addiu       $a0, $sp, 0x3F0
    ctx->pc = 0x471e34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1008));
label_471e38:
    // 0x471e38: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x471e38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_471e3c:
    // 0x471e3c: 0x8fa60544  lw          $a2, 0x544($sp)
    ctx->pc = 0x471e3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1348)));
label_471e40:
    // 0x471e40: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x471e40u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_471e44:
    // 0x471e44: 0x24e701e0  addiu       $a3, $a3, 0x1E0
    ctx->pc = 0x471e44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 480));
label_471e48:
    // 0x471e48: 0x2408011f  addiu       $t0, $zero, 0x11F
    ctx->pc = 0x471e48u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 287));
label_471e4c:
    // 0x471e4c: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x471e4cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_471e50:
    // 0x471e50: 0x252901f0  addiu       $t1, $t1, 0x1F0
    ctx->pc = 0x471e50u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 496));
label_471e54:
    // 0x471e54: 0xc113940  jal         func_44E500
label_471e58:
    if (ctx->pc == 0x471E58u) {
        ctx->pc = 0x471E5Cu;
        goto label_471e5c;
    }
    ctx->pc = 0x471E54u;
    SET_GPR_U32(ctx, 31, 0x471E5Cu);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x471E54u, 0x471E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x471E5Cu;
label_471e5c:
    // 0x471e5c: 0x27a403f0  addiu       $a0, $sp, 0x3F0
    ctx->pc = 0x471e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1008));
label_471e60:
    // 0x471e60: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x471e60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_471e64:
    // 0x471e64: 0x24a50200  addiu       $a1, $a1, 0x200
    ctx->pc = 0x471e64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 512));
label_471e68:
    // 0x471e68: 0xc115c24  jal         func_457090
label_471e6c:
    if (ctx->pc == 0x471E6Cu) {
        ctx->pc = 0x471E70u;
        goto label_471e70;
    }
    ctx->pc = 0x471E68u;
    SET_GPR_U32(ctx, 31, 0x471E70u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x471E68u, 0x471E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x471E70u;
label_471e70:
    // 0x471e70: 0x27a403f0  addiu       $a0, $sp, 0x3F0
    ctx->pc = 0x471e70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1008));
label_471e74:
    // 0x471e74: 0x8fa20548  lw          $v0, 0x548($sp)
    ctx->pc = 0x471e74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1352)));
label_471e78:
    // 0x471e78: 0x40f809  jalr        $v0
label_471e7c:
    if (ctx->pc == 0x471E7Cu) {
        ctx->pc = 0x471E80u;
        goto label_471e80;
    }
    ctx->pc = 0x471E78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x471E80u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x471E78u, 0x471E80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x471E80u;
label_471e80:
    // 0x471e80: 0xaf82b39c  sw          $v0, -0x4C64($gp)
    ctx->pc = 0x471e80u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947740), GPR_U32(ctx, 2));
label_471e84:
    // 0x471e84: 0x8fa203f0  lw          $v0, 0x3F0($sp)
    ctx->pc = 0x471e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1008)));
label_471e88:
    // 0x471e88: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_471e8c:
    if (ctx->pc == 0x471E8Cu) {
        ctx->pc = 0x471E90u;
        goto label_471e90;
    }
    ctx->pc = 0x471E88u;
    {
        const bool branch_taken_0x471e88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x471e88) {
            ctx->pc = 0x471E98u;
            goto label_471e98;
        }
    }
    ctx->pc = 0x471E90u;
label_471e90:
    // 0x471e90: 0xd  break       0
    ctx->pc = 0x471e90u;
    runtime->handleBreak(rdram, ctx);
label_471e94:
    // 0x471e94: 0x0  nop
    ctx->pc = 0x471e94u;
    // NOP
label_471e98:
    // 0x471e98: 0x27a403f0  addiu       $a0, $sp, 0x3F0
    ctx->pc = 0x471e98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1008));
label_471e9c:
    // 0x471e9c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x471e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_471ea0:
    // 0x471ea0: 0xc11392c  jal         func_44E4B0
label_471ea4:
    if (ctx->pc == 0x471EA4u) {
        ctx->pc = 0x471EA8u;
        goto label_471ea8;
    }
    ctx->pc = 0x471EA0u;
    SET_GPR_U32(ctx, 31, 0x471EA8u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x471EA0u, 0x471EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x471EA8u;
label_471ea8:
    // 0x471ea8: 0x8e12000c  lw          $s2, 0xC($s0)
    ctx->pc = 0x471ea8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_471eac:
    // 0x471eac: 0x8e170010  lw          $s7, 0x10($s0)
    ctx->pc = 0x471eacu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_471eb0:
    // 0x471eb0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x471eb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_471eb4:
    // 0x471eb4: 0xc11ca04  jal         func_472810
label_471eb8:
    if (ctx->pc == 0x471EB8u) {
        ctx->pc = 0x471EBCu;
        goto label_471ebc;
    }
    ctx->pc = 0x471EB4u;
    SET_GPR_U32(ctx, 31, 0x471EBCu);
    ctx->pc = 0x472810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x472810u, 0x471EB4u, 0x471EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x471EBCu;
label_471ebc:
    // 0x471ebc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x471ebcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_471ec0:
    // 0x471ec0: 0x1660002b  bnez        $s3, . + 4 + (0x2B << 2)
label_471ec4:
    if (ctx->pc == 0x471EC4u) {
        ctx->pc = 0x471EC8u;
        goto label_471ec8;
    }
    ctx->pc = 0x471EC0u;
    {
        const bool branch_taken_0x471ec0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x471ec0) {
            ctx->pc = 0x471F70u;
            goto label_471f70;
        }
    }
    ctx->pc = 0x471EC8u;
label_471ec8:
    // 0x471ec8: 0x8f82b3a0  lw          $v0, -0x4C60($gp)
    ctx->pc = 0x471ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947744)));
label_471ecc:
    // 0x471ecc: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_471ed0:
    if (ctx->pc == 0x471ED0u) {
        ctx->pc = 0x471ED4u;
        goto label_471ed4;
    }
    ctx->pc = 0x471ECCu;
    {
        const bool branch_taken_0x471ecc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x471ecc) {
            ctx->pc = 0x471F70u;
            goto label_471f70;
        }
    }
    ctx->pc = 0x471ED4u;
label_471ed4:
    // 0x471ed4: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x471ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_471ed8:
    // 0x471ed8: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x471ed8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_471edc:
    // 0x471edc: 0x27a60530  addiu       $a2, $sp, 0x530
    ctx->pc = 0x471edcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1328));
label_471ee0:
    // 0x471ee0: 0xc115ee8  jal         func_457BA0
label_471ee4:
    if (ctx->pc == 0x471EE4u) {
        ctx->pc = 0x471EE8u;
        goto label_471ee8;
    }
    ctx->pc = 0x471EE0u;
    SET_GPR_U32(ctx, 31, 0x471EE8u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x471EE0u, 0x471EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x471EE8u;
label_471ee8:
    // 0x471ee8: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_471eec:
    if (ctx->pc == 0x471EECu) {
        ctx->pc = 0x471EF0u;
        goto label_471ef0;
    }
    ctx->pc = 0x471EE8u;
    {
        const bool branch_taken_0x471ee8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x471ee8) {
            ctx->pc = 0x471F70u;
            goto label_471f70;
        }
    }
    ctx->pc = 0x471EF0u;
label_471ef0:
    // 0x471ef0: 0x8fa20538  lw          $v0, 0x538($sp)
    ctx->pc = 0x471ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1336)));
label_471ef4:
    // 0x471ef4: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_471ef8:
    if (ctx->pc == 0x471EF8u) {
        ctx->pc = 0x471EFCu;
        goto label_471efc;
    }
    ctx->pc = 0x471EF4u;
    {
        const bool branch_taken_0x471ef4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x471ef4) {
            ctx->pc = 0x471F70u;
            goto label_471f70;
        }
    }
    ctx->pc = 0x471EFCu;
label_471efc:
    // 0x471efc: 0x27a402d0  addiu       $a0, $sp, 0x2D0
    ctx->pc = 0x471efcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
label_471f00:
    // 0x471f00: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x471f00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_471f04:
    // 0x471f04: 0x8fa60534  lw          $a2, 0x534($sp)
    ctx->pc = 0x471f04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1332)));
label_471f08:
    // 0x471f08: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x471f08u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_471f0c:
    // 0x471f0c: 0x24e701e0  addiu       $a3, $a3, 0x1E0
    ctx->pc = 0x471f0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 480));
label_471f10:
    // 0x471f10: 0x24080125  addiu       $t0, $zero, 0x125
    ctx->pc = 0x471f10u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 293));
label_471f14:
    // 0x471f14: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x471f14u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_471f18:
    // 0x471f18: 0x25290248  addiu       $t1, $t1, 0x248
    ctx->pc = 0x471f18u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 584));
label_471f1c:
    // 0x471f1c: 0xc113940  jal         func_44E500
label_471f20:
    if (ctx->pc == 0x471F20u) {
        ctx->pc = 0x471F24u;
        goto label_471f24;
    }
    ctx->pc = 0x471F1Cu;
    SET_GPR_U32(ctx, 31, 0x471F24u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x471F1Cu, 0x471F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x471F24u;
label_471f24:
    // 0x471f24: 0x27a402d0  addiu       $a0, $sp, 0x2D0
    ctx->pc = 0x471f24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
label_471f28:
    // 0x471f28: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x471f28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_471f2c:
    // 0x471f2c: 0x24a50260  addiu       $a1, $a1, 0x260
    ctx->pc = 0x471f2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 608));
label_471f30:
    // 0x471f30: 0xc115c24  jal         func_457090
label_471f34:
    if (ctx->pc == 0x471F34u) {
        ctx->pc = 0x471F38u;
        goto label_471f38;
    }
    ctx->pc = 0x471F30u;
    SET_GPR_U32(ctx, 31, 0x471F38u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x471F30u, 0x471F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x471F38u;
label_471f38:
    // 0x471f38: 0x27a402d0  addiu       $a0, $sp, 0x2D0
    ctx->pc = 0x471f38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
label_471f3c:
    // 0x471f3c: 0x8fa20538  lw          $v0, 0x538($sp)
    ctx->pc = 0x471f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1336)));
label_471f40:
    // 0x471f40: 0x40f809  jalr        $v0
label_471f44:
    if (ctx->pc == 0x471F44u) {
        ctx->pc = 0x471F48u;
        goto label_471f48;
    }
    ctx->pc = 0x471F40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x471F48u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x471F40u, 0x471F48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x471F48u;
label_471f48:
    // 0x471f48: 0xaf82b3a0  sw          $v0, -0x4C60($gp)
    ctx->pc = 0x471f48u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947744), GPR_U32(ctx, 2));
label_471f4c:
    // 0x471f4c: 0x8fa202d0  lw          $v0, 0x2D0($sp)
    ctx->pc = 0x471f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 720)));
label_471f50:
    // 0x471f50: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_471f54:
    if (ctx->pc == 0x471F54u) {
        ctx->pc = 0x471F58u;
        goto label_471f58;
    }
    ctx->pc = 0x471F50u;
    {
        const bool branch_taken_0x471f50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x471f50) {
            ctx->pc = 0x471F60u;
            goto label_471f60;
        }
    }
    ctx->pc = 0x471F58u;
label_471f58:
    // 0x471f58: 0xd  break       0
    ctx->pc = 0x471f58u;
    runtime->handleBreak(rdram, ctx);
label_471f5c:
    // 0x471f5c: 0x0  nop
    ctx->pc = 0x471f5cu;
    // NOP
label_471f60:
    // 0x471f60: 0x27a402d0  addiu       $a0, $sp, 0x2D0
    ctx->pc = 0x471f60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
label_471f64:
    // 0x471f64: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x471f64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_471f68:
    // 0x471f68: 0xc11392c  jal         func_44E4B0
label_471f6c:
    if (ctx->pc == 0x471F6Cu) {
        ctx->pc = 0x471F70u;
        goto label_471f70;
    }
    ctx->pc = 0x471F68u;
    SET_GPR_U32(ctx, 31, 0x471F70u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x471F68u, 0x471F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x471F70u;
label_471f70:
    // 0x471f70: 0x8fa20560  lw          $v0, 0x560($sp)
    ctx->pc = 0x471f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1376)));
label_471f74:
    // 0x471f74: 0x2422018  mult        $a0, $s2, $v0
    ctx->pc = 0x471f74u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_471f78:
    // 0x471f78: 0xc11ca04  jal         func_472810
label_471f7c:
    if (ctx->pc == 0x471F7Cu) {
        ctx->pc = 0x471F80u;
        goto label_471f80;
    }
    ctx->pc = 0x471F78u;
    SET_GPR_U32(ctx, 31, 0x471F80u);
    ctx->pc = 0x472810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x472810u, 0x471F78u, 0x471F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x471F80u;
label_471f80:
    // 0x471f80: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x471f80u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_471f84:
    // 0x471f84: 0x1680002b  bnez        $s4, . + 4 + (0x2B << 2)
label_471f88:
    if (ctx->pc == 0x471F88u) {
        ctx->pc = 0x471F8Cu;
        goto label_471f8c;
    }
    ctx->pc = 0x471F84u;
    {
        const bool branch_taken_0x471f84 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x471f84) {
            ctx->pc = 0x472034u;
            goto label_472034;
        }
    }
    ctx->pc = 0x471F8Cu;
label_471f8c:
    // 0x471f8c: 0x8f82b3a4  lw          $v0, -0x4C5C($gp)
    ctx->pc = 0x471f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947748)));
label_471f90:
    // 0x471f90: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_471f94:
    if (ctx->pc == 0x471F94u) {
        ctx->pc = 0x471F98u;
        goto label_471f98;
    }
    ctx->pc = 0x471F90u;
    {
        const bool branch_taken_0x471f90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x471f90) {
            ctx->pc = 0x472034u;
            goto label_472034;
        }
    }
    ctx->pc = 0x471F98u;
label_471f98:
    // 0x471f98: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x471f98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_471f9c:
    // 0x471f9c: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x471f9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_471fa0:
    // 0x471fa0: 0x27a60520  addiu       $a2, $sp, 0x520
    ctx->pc = 0x471fa0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1312));
label_471fa4:
    // 0x471fa4: 0xc115ee8  jal         func_457BA0
label_471fa8:
    if (ctx->pc == 0x471FA8u) {
        ctx->pc = 0x471FACu;
        goto label_471fac;
    }
    ctx->pc = 0x471FA4u;
    SET_GPR_U32(ctx, 31, 0x471FACu);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x471FA4u, 0x471FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x471FACu;
label_471fac:
    // 0x471fac: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_471fb0:
    if (ctx->pc == 0x471FB0u) {
        ctx->pc = 0x471FB4u;
        goto label_471fb4;
    }
    ctx->pc = 0x471FACu;
    {
        const bool branch_taken_0x471fac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x471fac) {
            ctx->pc = 0x472034u;
            goto label_472034;
        }
    }
    ctx->pc = 0x471FB4u;
label_471fb4:
    // 0x471fb4: 0x8fa20528  lw          $v0, 0x528($sp)
    ctx->pc = 0x471fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_471fb8:
    // 0x471fb8: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_471fbc:
    if (ctx->pc == 0x471FBCu) {
        ctx->pc = 0x471FC0u;
        goto label_471fc0;
    }
    ctx->pc = 0x471FB8u;
    {
        const bool branch_taken_0x471fb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x471fb8) {
            ctx->pc = 0x472034u;
            goto label_472034;
        }
    }
    ctx->pc = 0x471FC0u;
label_471fc0:
    // 0x471fc0: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x471fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_471fc4:
    // 0x471fc4: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x471fc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_471fc8:
    // 0x471fc8: 0x8fa60524  lw          $a2, 0x524($sp)
    ctx->pc = 0x471fc8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1316)));
label_471fcc:
    // 0x471fcc: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x471fccu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_471fd0:
    // 0x471fd0: 0x24e701e0  addiu       $a3, $a3, 0x1E0
    ctx->pc = 0x471fd0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 480));
label_471fd4:
    // 0x471fd4: 0x24080128  addiu       $t0, $zero, 0x128
    ctx->pc = 0x471fd4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 296));
label_471fd8:
    // 0x471fd8: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x471fd8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_471fdc:
    // 0x471fdc: 0x25290278  addiu       $t1, $t1, 0x278
    ctx->pc = 0x471fdcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 632));
label_471fe0:
    // 0x471fe0: 0xc113940  jal         func_44E500
label_471fe4:
    if (ctx->pc == 0x471FE4u) {
        ctx->pc = 0x471FE8u;
        goto label_471fe8;
    }
    ctx->pc = 0x471FE0u;
    SET_GPR_U32(ctx, 31, 0x471FE8u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x471FE0u, 0x471FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x471FE8u;
label_471fe8:
    // 0x471fe8: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x471fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_471fec:
    // 0x471fec: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x471fecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_471ff0:
    // 0x471ff0: 0x24a50260  addiu       $a1, $a1, 0x260
    ctx->pc = 0x471ff0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 608));
label_471ff4:
    // 0x471ff4: 0xc115c24  jal         func_457090
label_471ff8:
    if (ctx->pc == 0x471FF8u) {
        ctx->pc = 0x471FFCu;
        goto label_471ffc;
    }
    ctx->pc = 0x471FF4u;
    SET_GPR_U32(ctx, 31, 0x471FFCu);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x471FF4u, 0x471FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x471FFCu;
label_471ffc:
    // 0x471ffc: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x471ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_472000:
    // 0x472000: 0x8fa20528  lw          $v0, 0x528($sp)
    ctx->pc = 0x472000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
label_472004:
    // 0x472004: 0x40f809  jalr        $v0
label_472008:
    if (ctx->pc == 0x472008u) {
        ctx->pc = 0x47200Cu;
        goto label_47200c;
    }
    ctx->pc = 0x472004u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x47200Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x472004u, 0x47200Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x47200Cu;
label_47200c:
    // 0x47200c: 0xaf82b3a4  sw          $v0, -0x4C5C($gp)
    ctx->pc = 0x47200cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947748), GPR_U32(ctx, 2));
label_472010:
    // 0x472010: 0x8fa201b0  lw          $v0, 0x1B0($sp)
    ctx->pc = 0x472010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
label_472014:
    // 0x472014: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_472018:
    if (ctx->pc == 0x472018u) {
        ctx->pc = 0x47201Cu;
        goto label_47201c;
    }
    ctx->pc = 0x472014u;
    {
        const bool branch_taken_0x472014 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x472014) {
            ctx->pc = 0x472024u;
            goto label_472024;
        }
    }
    ctx->pc = 0x47201Cu;
label_47201c:
    // 0x47201c: 0xd  break       0
    ctx->pc = 0x47201cu;
    runtime->handleBreak(rdram, ctx);
label_472020:
    // 0x472020: 0x0  nop
    ctx->pc = 0x472020u;
    // NOP
label_472024:
    // 0x472024: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x472024u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_472028:
    // 0x472028: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x472028u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_47202c:
    // 0x47202c: 0xc11392c  jal         func_44E4B0
label_472030:
    if (ctx->pc == 0x472030u) {
        ctx->pc = 0x472034u;
        goto label_472034;
    }
    ctx->pc = 0x47202Cu;
    SET_GPR_U32(ctx, 31, 0x472034u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x47202Cu, 0x472034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x472034u;
label_472034:
    // 0x472034: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x472034u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_472038:
    // 0x472038: 0xc11c994  jal         func_472650
label_47203c:
    if (ctx->pc == 0x47203Cu) {
        ctx->pc = 0x472040u;
        goto label_472040;
    }
    ctx->pc = 0x472038u;
    SET_GPR_U32(ctx, 31, 0x472040u);
    ctx->pc = 0x472650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x472650u, 0x472038u, 0x472040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x472040u;
label_472040:
    // 0x472040: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x472040u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_472044:
    // 0x472044: 0x8fa20560  lw          $v0, 0x560($sp)
    ctx->pc = 0x472044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1376)));
label_472048:
    // 0x472048: 0x2422018  mult        $a0, $s2, $v0
    ctx->pc = 0x472048u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_47204c:
    // 0x47204c: 0xc11c994  jal         func_472650
label_472050:
    if (ctx->pc == 0x472050u) {
        ctx->pc = 0x472054u;
        goto label_472054;
    }
    ctx->pc = 0x47204Cu;
    SET_GPR_U32(ctx, 31, 0x472054u);
    ctx->pc = 0x472650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x472650u, 0x47204Cu, 0x472054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x472054u;
label_472054:
    // 0x472054: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x472054u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_472058:
    // 0x472058: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x472058u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_47205c:
    // 0x47205c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x47205cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_472060:
    // 0x472060: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x472060u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_472064:
    // 0x472064: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x472064u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_472068:
    // 0x472068: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x472068u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_47206c:
    // 0x47206c: 0x8fa90560  lw          $t1, 0x560($sp)
    ctx->pc = 0x47206cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1376)));
label_472070:
    // 0x472070: 0xc11c878  jal         func_4721E0
label_472074:
    if (ctx->pc == 0x472074u) {
        ctx->pc = 0x472078u;
        goto label_472078;
    }
    ctx->pc = 0x472070u;
    SET_GPR_U32(ctx, 31, 0x472078u);
    ctx->pc = 0x4721E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4721E0u, 0x472070u, 0x472078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x472078u;
label_472078:
    // 0x472078: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x472078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_47207c:
    // 0x47207c: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x47207cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_472080:
    // 0x472080: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x472080u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_472084:
    // 0x472084: 0xc107034  jal         func_41C0D0
label_472088:
    if (ctx->pc == 0x472088u) {
        ctx->pc = 0x47208Cu;
        goto label_47208c;
    }
    ctx->pc = 0x472084u;
    SET_GPR_U32(ctx, 31, 0x47208Cu);
    ctx->pc = 0x41C0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C0D0u, 0x472084u, 0x47208Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47208Cu;
label_47208c:
    // 0x47208c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x47208cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_472090:
    // 0x472090: 0x1620002a  bnez        $s1, . + 4 + (0x2A << 2)
label_472094:
    if (ctx->pc == 0x472094u) {
        ctx->pc = 0x472098u;
        goto label_472098;
    }
    ctx->pc = 0x472090u;
    {
        const bool branch_taken_0x472090 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x472090) {
            ctx->pc = 0x47213Cu;
            goto label_47213c;
        }
    }
    ctx->pc = 0x472098u;
label_472098:
    // 0x472098: 0x8f82b3a8  lw          $v0, -0x4C58($gp)
    ctx->pc = 0x472098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947752)));
label_47209c:
    // 0x47209c: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_4720a0:
    if (ctx->pc == 0x4720A0u) {
        ctx->pc = 0x4720A4u;
        goto label_4720a4;
    }
    ctx->pc = 0x47209Cu;
    {
        const bool branch_taken_0x47209c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47209c) {
            ctx->pc = 0x47213Cu;
            goto label_47213c;
        }
    }
    ctx->pc = 0x4720A4u;
label_4720a4:
    // 0x4720a4: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x4720a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_4720a8:
    // 0x4720a8: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x4720a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_4720ac:
    // 0x4720ac: 0x27a60510  addiu       $a2, $sp, 0x510
    ctx->pc = 0x4720acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1296));
label_4720b0:
    // 0x4720b0: 0xc115ee8  jal         func_457BA0
label_4720b4:
    if (ctx->pc == 0x4720B4u) {
        ctx->pc = 0x4720B8u;
        goto label_4720b8;
    }
    ctx->pc = 0x4720B0u;
    SET_GPR_U32(ctx, 31, 0x4720B8u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x4720B0u, 0x4720B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4720B8u;
label_4720b8:
    // 0x4720b8: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_4720bc:
    if (ctx->pc == 0x4720BCu) {
        ctx->pc = 0x4720C0u;
        goto label_4720c0;
    }
    ctx->pc = 0x4720B8u;
    {
        const bool branch_taken_0x4720b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4720b8) {
            ctx->pc = 0x47213Cu;
            goto label_47213c;
        }
    }
    ctx->pc = 0x4720C0u;
label_4720c0:
    // 0x4720c0: 0x8fa20518  lw          $v0, 0x518($sp)
    ctx->pc = 0x4720c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1304)));
label_4720c4:
    // 0x4720c4: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_4720c8:
    if (ctx->pc == 0x4720C8u) {
        ctx->pc = 0x4720CCu;
        goto label_4720cc;
    }
    ctx->pc = 0x4720C4u;
    {
        const bool branch_taken_0x4720c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4720c4) {
            ctx->pc = 0x47213Cu;
            goto label_47213c;
        }
    }
    ctx->pc = 0x4720CCu;
label_4720cc:
    // 0x4720cc: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x4720ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_4720d0:
    // 0x4720d0: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x4720d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_4720d4:
    // 0x4720d4: 0x8fa60514  lw          $a2, 0x514($sp)
    ctx->pc = 0x4720d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1300)));
label_4720d8:
    // 0x4720d8: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x4720d8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_4720dc:
    // 0x4720dc: 0x24e701e0  addiu       $a3, $a3, 0x1E0
    ctx->pc = 0x4720dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 480));
label_4720e0:
    // 0x4720e0: 0x24080131  addiu       $t0, $zero, 0x131
    ctx->pc = 0x4720e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 305));
label_4720e4:
    // 0x4720e4: 0x2789b390  addiu       $t1, $gp, -0x4C70
    ctx->pc = 0x4720e4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 28), 4294947728));
label_4720e8:
    // 0x4720e8: 0xc113940  jal         func_44E500
label_4720ec:
    if (ctx->pc == 0x4720ECu) {
        ctx->pc = 0x4720F0u;
        goto label_4720f0;
    }
    ctx->pc = 0x4720E8u;
    SET_GPR_U32(ctx, 31, 0x4720F0u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x4720E8u, 0x4720F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4720F0u;
label_4720f0:
    // 0x4720f0: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x4720f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_4720f4:
    // 0x4720f4: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x4720f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_4720f8:
    // 0x4720f8: 0x24a50290  addiu       $a1, $a1, 0x290
    ctx->pc = 0x4720f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 656));
label_4720fc:
    // 0x4720fc: 0xc115c24  jal         func_457090
label_472100:
    if (ctx->pc == 0x472100u) {
        ctx->pc = 0x472104u;
        goto label_472104;
    }
    ctx->pc = 0x4720FCu;
    SET_GPR_U32(ctx, 31, 0x472104u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x4720FCu, 0x472104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x472104u;
label_472104:
    // 0x472104: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x472104u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_472108:
    // 0x472108: 0x8fa20518  lw          $v0, 0x518($sp)
    ctx->pc = 0x472108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1304)));
label_47210c:
    // 0x47210c: 0x40f809  jalr        $v0
label_472110:
    if (ctx->pc == 0x472110u) {
        ctx->pc = 0x472114u;
        goto label_472114;
    }
    ctx->pc = 0x47210Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x472114u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47210Cu, 0x472114u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x472114u;
label_472114:
    // 0x472114: 0xaf82b3a8  sw          $v0, -0x4C58($gp)
    ctx->pc = 0x472114u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947752), GPR_U32(ctx, 2));
label_472118:
    // 0x472118: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x472118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_47211c:
    // 0x47211c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_472120:
    if (ctx->pc == 0x472120u) {
        ctx->pc = 0x472124u;
        goto label_472124;
    }
    ctx->pc = 0x47211Cu;
    {
        const bool branch_taken_0x47211c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47211c) {
            ctx->pc = 0x47212Cu;
            goto label_47212c;
        }
    }
    ctx->pc = 0x472124u;
label_472124:
    // 0x472124: 0xd  break       0
    ctx->pc = 0x472124u;
    runtime->handleBreak(rdram, ctx);
label_472128:
    // 0x472128: 0x0  nop
    ctx->pc = 0x472128u;
    // NOP
label_47212c:
    // 0x47212c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x47212cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_472130:
    // 0x472130: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x472130u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_472134:
    // 0x472134: 0xc11392c  jal         func_44E4B0
label_472138:
    if (ctx->pc == 0x472138u) {
        ctx->pc = 0x47213Cu;
        goto label_47213c;
    }
    ctx->pc = 0x472134u;
    SET_GPR_U32(ctx, 31, 0x47213Cu);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x472134u, 0x47213Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47213Cu;
label_47213c:
    // 0x47213c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x47213cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_472140:
    // 0x472140: 0xc107078  jal         func_41C1E0
label_472144:
    if (ctx->pc == 0x472144u) {
        ctx->pc = 0x472148u;
        goto label_472148;
    }
    ctx->pc = 0x472140u;
    SET_GPR_U32(ctx, 31, 0x472148u);
    ctx->pc = 0x41C1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C1E0u, 0x472140u, 0x472148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x472148u;
label_472148:
    // 0x472148: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x472148u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_47214c:
    // 0x47214c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x47214cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_472150:
    // 0x472150: 0xc1073a8  jal         func_41CEA0
label_472154:
    if (ctx->pc == 0x472154u) {
        ctx->pc = 0x472158u;
        goto label_472158;
    }
    ctx->pc = 0x472150u;
    SET_GPR_U32(ctx, 31, 0x472158u);
    ctx->pc = 0x41CEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41CEA0u, 0x472150u, 0x472158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x472158u;
label_472158:
    // 0x472158: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x472158u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_47215c:
    // 0x47215c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x47215cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_472160:
    // 0x472160: 0xc1073c2  jal         func_41CF08
label_472164:
    if (ctx->pc == 0x472164u) {
        ctx->pc = 0x472168u;
        goto label_472168;
    }
    ctx->pc = 0x472160u;
    SET_GPR_U32(ctx, 31, 0x472168u);
    ctx->pc = 0x41CF08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41CF08u, 0x472160u, 0x472168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x472168u;
label_472168:
    // 0x472168: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x472168u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_47216c:
    // 0x47216c: 0xc10705c  jal         func_41C170
label_472170:
    if (ctx->pc == 0x472170u) {
        ctx->pc = 0x472174u;
        goto label_472174;
    }
    ctx->pc = 0x47216Cu;
    SET_GPR_U32(ctx, 31, 0x472174u);
    ctx->pc = 0x41C170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C170u, 0x47216Cu, 0x472174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x472174u;
label_472174:
    // 0x472174: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x472174u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_472178:
    // 0x472178: 0xc11c9cc  jal         func_472730
label_47217c:
    if (ctx->pc == 0x47217Cu) {
        ctx->pc = 0x472180u;
        goto label_472180;
    }
    ctx->pc = 0x472178u;
    SET_GPR_U32(ctx, 31, 0x472180u);
    ctx->pc = 0x472730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x472730u, 0x472178u, 0x472180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x472180u;
label_472180:
    // 0x472180: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x472180u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_472184:
    // 0x472184: 0xc11c9cc  jal         func_472730
label_472188:
    if (ctx->pc == 0x472188u) {
        ctx->pc = 0x47218Cu;
        goto label_47218c;
    }
    ctx->pc = 0x472184u;
    SET_GPR_U32(ctx, 31, 0x47218Cu);
    ctx->pc = 0x472730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x472730u, 0x472184u, 0x47218Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47218Cu;
label_47218c:
    // 0x47218c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x47218cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_472190:
    // 0x472190: 0xc11ca1c  jal         func_472870
label_472194:
    if (ctx->pc == 0x472194u) {
        ctx->pc = 0x472198u;
        goto label_472198;
    }
    ctx->pc = 0x472190u;
    SET_GPR_U32(ctx, 31, 0x472198u);
    ctx->pc = 0x472870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x472870u, 0x472190u, 0x472198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x472198u;
label_472198:
    // 0x472198: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x472198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_47219c:
    // 0x47219c: 0xc11ca1c  jal         func_472870
label_4721a0:
    if (ctx->pc == 0x4721A0u) {
        ctx->pc = 0x4721A4u;
        goto label_4721a4;
    }
    ctx->pc = 0x47219Cu;
    SET_GPR_U32(ctx, 31, 0x4721A4u);
    ctx->pc = 0x472870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x472870u, 0x47219Cu, 0x4721A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4721A4u;
label_4721a4:
    // 0x4721a4: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x4721a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_4721a8:
    // 0x4721a8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x4721a8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4721ac:
    // 0x4721ac: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x4721acu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4721b0:
    // 0x4721b0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x4721b0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4721b4:
    // 0x4721b4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4721b4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4721b8:
    // 0x4721b8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4721b8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4721bc:
    // 0x4721bc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4721bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4721c0:
    // 0x4721c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4721c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4721c4:
    // 0x4721c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4721c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4721c8:
    // 0x4721c8: 0x27bd0570  addiu       $sp, $sp, 0x570
    ctx->pc = 0x4721c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1392));
label_4721cc:
    // 0x4721cc: 0x3e00008  jr          $ra
label_4721d0:
    if (ctx->pc == 0x4721D0u) {
        ctx->pc = 0x4721D4u;
        goto label_4721d4;
    }
    ctx->pc = 0x4721CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4721CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4721D4u;
label_4721d4:
    // 0x4721d4: 0x0  nop
    ctx->pc = 0x4721d4u;
    // NOP
label_4721d8:
    // 0x4721d8: 0x0  nop
    ctx->pc = 0x4721d8u;
    // NOP
label_4721dc:
    // 0x4721dc: 0x0  nop
    ctx->pc = 0x4721dcu;
    // NOP
    ctx->pc = 0x4721e0u;
}
