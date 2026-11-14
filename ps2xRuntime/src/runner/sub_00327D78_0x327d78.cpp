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

// Function: sub_00327D78
// Address: 0x327d78 - 0x328270
void sub_00327D78_0x327d78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00327D78_0x327d78");
#endif

    switch (ctx->pc) {
        case 0x327d78u: goto label_327d78;
        case 0x327d7cu: goto label_327d7c;
        case 0x327d80u: goto label_327d80;
        case 0x327d84u: goto label_327d84;
        case 0x327d88u: goto label_327d88;
        case 0x327d8cu: goto label_327d8c;
        case 0x327d90u: goto label_327d90;
        case 0x327d94u: goto label_327d94;
        case 0x327d98u: goto label_327d98;
        case 0x327d9cu: goto label_327d9c;
        case 0x327da0u: goto label_327da0;
        case 0x327da4u: goto label_327da4;
        case 0x327da8u: goto label_327da8;
        case 0x327dacu: goto label_327dac;
        case 0x327db0u: goto label_327db0;
        case 0x327db4u: goto label_327db4;
        case 0x327db8u: goto label_327db8;
        case 0x327dbcu: goto label_327dbc;
        case 0x327dc0u: goto label_327dc0;
        case 0x327dc4u: goto label_327dc4;
        case 0x327dc8u: goto label_327dc8;
        case 0x327dccu: goto label_327dcc;
        case 0x327dd0u: goto label_327dd0;
        case 0x327dd4u: goto label_327dd4;
        case 0x327dd8u: goto label_327dd8;
        case 0x327ddcu: goto label_327ddc;
        case 0x327de0u: goto label_327de0;
        case 0x327de4u: goto label_327de4;
        case 0x327de8u: goto label_327de8;
        case 0x327decu: goto label_327dec;
        case 0x327df0u: goto label_327df0;
        case 0x327df4u: goto label_327df4;
        case 0x327df8u: goto label_327df8;
        case 0x327dfcu: goto label_327dfc;
        case 0x327e00u: goto label_327e00;
        case 0x327e04u: goto label_327e04;
        case 0x327e08u: goto label_327e08;
        case 0x327e0cu: goto label_327e0c;
        case 0x327e10u: goto label_327e10;
        case 0x327e14u: goto label_327e14;
        case 0x327e18u: goto label_327e18;
        case 0x327e1cu: goto label_327e1c;
        case 0x327e20u: goto label_327e20;
        case 0x327e24u: goto label_327e24;
        case 0x327e28u: goto label_327e28;
        case 0x327e2cu: goto label_327e2c;
        case 0x327e30u: goto label_327e30;
        case 0x327e34u: goto label_327e34;
        case 0x327e38u: goto label_327e38;
        case 0x327e3cu: goto label_327e3c;
        case 0x327e40u: goto label_327e40;
        case 0x327e44u: goto label_327e44;
        case 0x327e48u: goto label_327e48;
        case 0x327e4cu: goto label_327e4c;
        case 0x327e50u: goto label_327e50;
        case 0x327e54u: goto label_327e54;
        case 0x327e58u: goto label_327e58;
        case 0x327e5cu: goto label_327e5c;
        case 0x327e60u: goto label_327e60;
        case 0x327e64u: goto label_327e64;
        case 0x327e68u: goto label_327e68;
        case 0x327e6cu: goto label_327e6c;
        case 0x327e70u: goto label_327e70;
        case 0x327e74u: goto label_327e74;
        case 0x327e78u: goto label_327e78;
        case 0x327e7cu: goto label_327e7c;
        case 0x327e80u: goto label_327e80;
        case 0x327e84u: goto label_327e84;
        case 0x327e88u: goto label_327e88;
        case 0x327e8cu: goto label_327e8c;
        case 0x327e90u: goto label_327e90;
        case 0x327e94u: goto label_327e94;
        case 0x327e98u: goto label_327e98;
        case 0x327e9cu: goto label_327e9c;
        case 0x327ea0u: goto label_327ea0;
        case 0x327ea4u: goto label_327ea4;
        case 0x327ea8u: goto label_327ea8;
        case 0x327eacu: goto label_327eac;
        case 0x327eb0u: goto label_327eb0;
        case 0x327eb4u: goto label_327eb4;
        case 0x327eb8u: goto label_327eb8;
        case 0x327ebcu: goto label_327ebc;
        case 0x327ec0u: goto label_327ec0;
        case 0x327ec4u: goto label_327ec4;
        case 0x327ec8u: goto label_327ec8;
        case 0x327eccu: goto label_327ecc;
        case 0x327ed0u: goto label_327ed0;
        case 0x327ed4u: goto label_327ed4;
        case 0x327ed8u: goto label_327ed8;
        case 0x327edcu: goto label_327edc;
        case 0x327ee0u: goto label_327ee0;
        case 0x327ee4u: goto label_327ee4;
        case 0x327ee8u: goto label_327ee8;
        case 0x327eecu: goto label_327eec;
        case 0x327ef0u: goto label_327ef0;
        case 0x327ef4u: goto label_327ef4;
        case 0x327ef8u: goto label_327ef8;
        case 0x327efcu: goto label_327efc;
        case 0x327f00u: goto label_327f00;
        case 0x327f04u: goto label_327f04;
        case 0x327f08u: goto label_327f08;
        case 0x327f0cu: goto label_327f0c;
        case 0x327f10u: goto label_327f10;
        case 0x327f14u: goto label_327f14;
        case 0x327f18u: goto label_327f18;
        case 0x327f1cu: goto label_327f1c;
        case 0x327f20u: goto label_327f20;
        case 0x327f24u: goto label_327f24;
        case 0x327f28u: goto label_327f28;
        case 0x327f2cu: goto label_327f2c;
        case 0x327f30u: goto label_327f30;
        case 0x327f34u: goto label_327f34;
        case 0x327f38u: goto label_327f38;
        case 0x327f3cu: goto label_327f3c;
        case 0x327f40u: goto label_327f40;
        case 0x327f44u: goto label_327f44;
        case 0x327f48u: goto label_327f48;
        case 0x327f4cu: goto label_327f4c;
        case 0x327f50u: goto label_327f50;
        case 0x327f54u: goto label_327f54;
        case 0x327f58u: goto label_327f58;
        case 0x327f5cu: goto label_327f5c;
        case 0x327f60u: goto label_327f60;
        case 0x327f64u: goto label_327f64;
        case 0x327f68u: goto label_327f68;
        case 0x327f6cu: goto label_327f6c;
        case 0x327f70u: goto label_327f70;
        case 0x327f74u: goto label_327f74;
        case 0x327f78u: goto label_327f78;
        case 0x327f7cu: goto label_327f7c;
        case 0x327f80u: goto label_327f80;
        case 0x327f84u: goto label_327f84;
        case 0x327f88u: goto label_327f88;
        case 0x327f8cu: goto label_327f8c;
        case 0x327f90u: goto label_327f90;
        case 0x327f94u: goto label_327f94;
        case 0x327f98u: goto label_327f98;
        case 0x327f9cu: goto label_327f9c;
        case 0x327fa0u: goto label_327fa0;
        case 0x327fa4u: goto label_327fa4;
        case 0x327fa8u: goto label_327fa8;
        case 0x327facu: goto label_327fac;
        case 0x327fb0u: goto label_327fb0;
        case 0x327fb4u: goto label_327fb4;
        case 0x327fb8u: goto label_327fb8;
        case 0x327fbcu: goto label_327fbc;
        case 0x327fc0u: goto label_327fc0;
        case 0x327fc4u: goto label_327fc4;
        case 0x327fc8u: goto label_327fc8;
        case 0x327fccu: goto label_327fcc;
        case 0x327fd0u: goto label_327fd0;
        case 0x327fd4u: goto label_327fd4;
        case 0x327fd8u: goto label_327fd8;
        case 0x327fdcu: goto label_327fdc;
        case 0x327fe0u: goto label_327fe0;
        case 0x327fe4u: goto label_327fe4;
        case 0x327fe8u: goto label_327fe8;
        case 0x327fecu: goto label_327fec;
        case 0x327ff0u: goto label_327ff0;
        case 0x327ff4u: goto label_327ff4;
        case 0x327ff8u: goto label_327ff8;
        case 0x327ffcu: goto label_327ffc;
        case 0x328000u: goto label_328000;
        case 0x328004u: goto label_328004;
        case 0x328008u: goto label_328008;
        case 0x32800cu: goto label_32800c;
        case 0x328010u: goto label_328010;
        case 0x328014u: goto label_328014;
        case 0x328018u: goto label_328018;
        case 0x32801cu: goto label_32801c;
        case 0x328020u: goto label_328020;
        case 0x328024u: goto label_328024;
        case 0x328028u: goto label_328028;
        case 0x32802cu: goto label_32802c;
        case 0x328030u: goto label_328030;
        case 0x328034u: goto label_328034;
        case 0x328038u: goto label_328038;
        case 0x32803cu: goto label_32803c;
        case 0x328040u: goto label_328040;
        case 0x328044u: goto label_328044;
        case 0x328048u: goto label_328048;
        case 0x32804cu: goto label_32804c;
        case 0x328050u: goto label_328050;
        case 0x328054u: goto label_328054;
        case 0x328058u: goto label_328058;
        case 0x32805cu: goto label_32805c;
        case 0x328060u: goto label_328060;
        case 0x328064u: goto label_328064;
        case 0x328068u: goto label_328068;
        case 0x32806cu: goto label_32806c;
        case 0x328070u: goto label_328070;
        case 0x328074u: goto label_328074;
        case 0x328078u: goto label_328078;
        case 0x32807cu: goto label_32807c;
        case 0x328080u: goto label_328080;
        case 0x328084u: goto label_328084;
        case 0x328088u: goto label_328088;
        case 0x32808cu: goto label_32808c;
        case 0x328090u: goto label_328090;
        case 0x328094u: goto label_328094;
        case 0x328098u: goto label_328098;
        case 0x32809cu: goto label_32809c;
        case 0x3280a0u: goto label_3280a0;
        case 0x3280a4u: goto label_3280a4;
        case 0x3280a8u: goto label_3280a8;
        case 0x3280acu: goto label_3280ac;
        case 0x3280b0u: goto label_3280b0;
        case 0x3280b4u: goto label_3280b4;
        case 0x3280b8u: goto label_3280b8;
        case 0x3280bcu: goto label_3280bc;
        case 0x3280c0u: goto label_3280c0;
        case 0x3280c4u: goto label_3280c4;
        case 0x3280c8u: goto label_3280c8;
        case 0x3280ccu: goto label_3280cc;
        case 0x3280d0u: goto label_3280d0;
        case 0x3280d4u: goto label_3280d4;
        case 0x3280d8u: goto label_3280d8;
        case 0x3280dcu: goto label_3280dc;
        case 0x3280e0u: goto label_3280e0;
        case 0x3280e4u: goto label_3280e4;
        case 0x3280e8u: goto label_3280e8;
        case 0x3280ecu: goto label_3280ec;
        case 0x3280f0u: goto label_3280f0;
        case 0x3280f4u: goto label_3280f4;
        case 0x3280f8u: goto label_3280f8;
        case 0x3280fcu: goto label_3280fc;
        case 0x328100u: goto label_328100;
        case 0x328104u: goto label_328104;
        case 0x328108u: goto label_328108;
        case 0x32810cu: goto label_32810c;
        case 0x328110u: goto label_328110;
        case 0x328114u: goto label_328114;
        case 0x328118u: goto label_328118;
        case 0x32811cu: goto label_32811c;
        case 0x328120u: goto label_328120;
        case 0x328124u: goto label_328124;
        case 0x328128u: goto label_328128;
        case 0x32812cu: goto label_32812c;
        case 0x328130u: goto label_328130;
        case 0x328134u: goto label_328134;
        case 0x328138u: goto label_328138;
        case 0x32813cu: goto label_32813c;
        case 0x328140u: goto label_328140;
        case 0x328144u: goto label_328144;
        case 0x328148u: goto label_328148;
        case 0x32814cu: goto label_32814c;
        case 0x328150u: goto label_328150;
        case 0x328154u: goto label_328154;
        case 0x328158u: goto label_328158;
        case 0x32815cu: goto label_32815c;
        case 0x328160u: goto label_328160;
        case 0x328164u: goto label_328164;
        case 0x328168u: goto label_328168;
        case 0x32816cu: goto label_32816c;
        case 0x328170u: goto label_328170;
        case 0x328174u: goto label_328174;
        case 0x328178u: goto label_328178;
        case 0x32817cu: goto label_32817c;
        case 0x328180u: goto label_328180;
        case 0x328184u: goto label_328184;
        case 0x328188u: goto label_328188;
        case 0x32818cu: goto label_32818c;
        case 0x328190u: goto label_328190;
        case 0x328194u: goto label_328194;
        case 0x328198u: goto label_328198;
        case 0x32819cu: goto label_32819c;
        case 0x3281a0u: goto label_3281a0;
        case 0x3281a4u: goto label_3281a4;
        case 0x3281a8u: goto label_3281a8;
        case 0x3281acu: goto label_3281ac;
        case 0x3281b0u: goto label_3281b0;
        case 0x3281b4u: goto label_3281b4;
        case 0x3281b8u: goto label_3281b8;
        case 0x3281bcu: goto label_3281bc;
        case 0x3281c0u: goto label_3281c0;
        case 0x3281c4u: goto label_3281c4;
        case 0x3281c8u: goto label_3281c8;
        case 0x3281ccu: goto label_3281cc;
        case 0x3281d0u: goto label_3281d0;
        case 0x3281d4u: goto label_3281d4;
        case 0x3281d8u: goto label_3281d8;
        case 0x3281dcu: goto label_3281dc;
        case 0x3281e0u: goto label_3281e0;
        case 0x3281e4u: goto label_3281e4;
        case 0x3281e8u: goto label_3281e8;
        case 0x3281ecu: goto label_3281ec;
        case 0x3281f0u: goto label_3281f0;
        case 0x3281f4u: goto label_3281f4;
        case 0x3281f8u: goto label_3281f8;
        case 0x3281fcu: goto label_3281fc;
        case 0x328200u: goto label_328200;
        case 0x328204u: goto label_328204;
        case 0x328208u: goto label_328208;
        case 0x32820cu: goto label_32820c;
        case 0x328210u: goto label_328210;
        case 0x328214u: goto label_328214;
        case 0x328218u: goto label_328218;
        case 0x32821cu: goto label_32821c;
        case 0x328220u: goto label_328220;
        case 0x328224u: goto label_328224;
        case 0x328228u: goto label_328228;
        case 0x32822cu: goto label_32822c;
        case 0x328230u: goto label_328230;
        case 0x328234u: goto label_328234;
        case 0x328238u: goto label_328238;
        case 0x32823cu: goto label_32823c;
        case 0x328240u: goto label_328240;
        case 0x328244u: goto label_328244;
        case 0x328248u: goto label_328248;
        case 0x32824cu: goto label_32824c;
        case 0x328250u: goto label_328250;
        case 0x328254u: goto label_328254;
        case 0x328258u: goto label_328258;
        case 0x32825cu: goto label_32825c;
        case 0x328260u: goto label_328260;
        case 0x328264u: goto label_328264;
        case 0x328268u: goto label_328268;
        case 0x32826cu: goto label_32826c;
        default: break;
    }

    ctx->pc = 0x327d78u;

label_327d78:
    // 0x327d78: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x327d78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_327d7c:
    // 0x327d7c: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x327d7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_327d80:
    // 0x327d80: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x327d80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_327d84:
    // 0x327d84: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x327d84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_327d88:
    // 0x327d88: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x327d88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_327d8c:
    // 0x327d8c: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x327d8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_327d90:
    // 0x327d90: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x327d90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_327d94:
    // 0x327d94: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x327d94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_327d98:
    // 0x327d98: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x327d98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
label_327d9c:
    // 0x327d9c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x327d9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_327da0:
    // 0x327da0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x327da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_327da4:
    // 0x327da4: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x327da4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_327da8:
    // 0x327da8: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x327da8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_327dac:
    // 0x327dac: 0x30470004  andi        $a3, $v0, 0x4
    ctx->pc = 0x327dacu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_327db0:
    // 0x327db0: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x327db0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_327db4:
    // 0x327db4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x327db4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_327db8:
    // 0x327db8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_327dbc:
    if (ctx->pc == 0x327DBCu) {
        ctx->pc = 0x327DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327DB8u;
        // 0x327dbc: 0x651818  mult        $v1, $v1, $a1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x327DC0u;
        goto label_327dc0;
    }
    ctx->pc = 0x327DB8u;
    {
        const bool branch_taken_0x327db8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x327DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327DB8u;
        // 0x327dbc: 0x651818  mult        $v1, $v1, $a1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x327db8) {
            ctx->pc = 0x327DCCu;
            goto label_327dcc;
        }
    }
    ctx->pc = 0x327DC0u;
label_327dc0:
    // 0x327dc0: 0x24e2000c  addiu       $v0, $a3, 0xC
    ctx->pc = 0x327dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 12));
label_327dc4:
    // 0x327dc4: 0x10000002  b           . + 4 + (0x2 << 2)
label_327dc8:
    if (ctx->pc == 0x327DC8u) {
        ctx->pc = 0x327DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327DC4u;
        // 0x327dc8: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327DCCu;
        goto label_327dcc;
    }
    ctx->pc = 0x327DC4u;
    {
        const bool branch_taken_0x327dc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x327DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327DC4u;
        // 0x327dc8: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327dc4) {
            ctx->pc = 0x327DD0u;
            goto label_327dd0;
        }
    }
    ctx->pc = 0x327DCCu;
label_327dcc:
    // 0x327dcc: 0x671021  addu        $v0, $v1, $a3
    ctx->pc = 0x327dccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_327dd0:
    // 0x327dd0: 0x449021  addu        $s2, $v0, $a0
    ctx->pc = 0x327dd0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_327dd4:
    // 0x327dd4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x327dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_327dd8:
    // 0x327dd8: 0x24130044  addiu       $s3, $zero, 0x44
    ctx->pc = 0x327dd8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
label_327ddc:
    // 0x327ddc: 0x8e26000c  lw          $a2, 0xC($s1)
    ctx->pc = 0x327ddcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_327de0:
    // 0x327de0: 0x2414002c  addiu       $s4, $zero, 0x2C
    ctx->pc = 0x327de0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
label_327de4:
    // 0x327de4: 0x2429018  mult        $s2, $s2, $v0
    ctx->pc = 0x327de4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
label_327de8:
    // 0x327de8: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x327de8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_327dec:
    // 0x327dec: 0xd33018  mult        $a2, $a2, $s3
    ctx->pc = 0x327decu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_327df0:
    // 0x327df0: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x327df0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_327df4:
    // 0x327df4: 0x942018  mult        $a0, $a0, $s4
    ctx->pc = 0x327df4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_327df8:
    // 0x327df8: 0x60a82d  daddu       $s5, $v1, $zero
    ctx->pc = 0x327df8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_327dfc:
    // 0x327dfc: 0x2463e880  addiu       $v1, $v1, -0x1780
    ctx->pc = 0x327dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961280));
label_327e00:
    // 0x327e00: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x327e00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_327e04:
    // 0x327e04: 0x26520060  addiu       $s2, $s2, 0x60
    ctx->pc = 0x327e04u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
label_327e08:
    // 0x327e08: 0x8c620108  lw          $v0, 0x108($v1)
    ctx->pc = 0x327e08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
label_327e0c:
    // 0x327e0c: 0x2469021  addu        $s2, $s2, $a2
    ctx->pc = 0x327e0cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
label_327e10:
    // 0x327e10: 0x34a50028  ori         $a1, $a1, 0x28
    ctx->pc = 0x327e10u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)40);
label_327e14:
    // 0x327e14: 0x2449021  addu        $s2, $s2, $a0
    ctx->pc = 0x327e14u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
label_327e18:
    // 0x327e18: 0x40f809  jalr        $v0
label_327e1c:
    if (ctx->pc == 0x327E1Cu) {
        ctx->pc = 0x327E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327E18u;
        // 0x327e1c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327E20u;
        goto label_327e20;
    }
    ctx->pc = 0x327E18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x327E20u);
        ctx->pc = 0x327E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327E18u;
        // 0x327e1c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x327E18u, 0x327E20u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x327E20u;
label_327e20:
    // 0x327e20: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x327e20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_327e24:
    // 0x327e24: 0x5600000c  bnel        $s0, $zero, . + 4 + (0xC << 2)
label_327e28:
    if (ctx->pc == 0x327E28u) {
        ctx->pc = 0x327E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327E24u;
        // 0x327e28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327E2Cu;
        goto label_327e2c;
    }
    ctx->pc = 0x327E24u;
    {
        const bool branch_taken_0x327e24 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x327e24) {
            ctx->pc = 0x327E28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x327E24u;
            // 0x327e28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x327E58u;
            goto label_327e58;
        }
    }
    ctx->pc = 0x327E2Cu;
label_327e2c:
    // 0x327e2c: 0x24020123  addiu       $v0, $zero, 0x123
    ctx->pc = 0x327e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 291));
label_327e30:
    // 0x327e30: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x327e30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_327e34:
    // 0x327e34: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x327e34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_327e38:
    // 0x327e38: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x327e38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_327e3c:
    // 0x327e3c: 0xc1035f6  jal         func_40D7D8
label_327e40:
    if (ctx->pc == 0x327E40u) {
        ctx->pc = 0x327E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327E3Cu;
        // 0x327e40: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        ctx->pc = 0x327E44u;
        goto label_327e44;
    }
    ctx->pc = 0x327E3Cu;
    SET_GPR_U32(ctx, 31, 0x327E44u);
    ctx->pc = 0x327E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327E3Cu;
    // 0x327e40: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x327E3Cu, 0x327E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327E44u;
label_327e44:
    // 0x327e44: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x327e44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_327e48:
    // 0x327e48: 0xc103628  jal         func_40D8A0
label_327e4c:
    if (ctx->pc == 0x327E4Cu) {
        ctx->pc = 0x327E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327E48u;
        // 0x327e4c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327E50u;
        goto label_327e50;
    }
    ctx->pc = 0x327E48u;
    SET_GPR_U32(ctx, 31, 0x327E50u);
    ctx->pc = 0x327E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327E48u;
    // 0x327e4c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x327E48u, 0x327E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327E50u;
label_327e50:
    // 0x327e50: 0x10000073  b           . + 4 + (0x73 << 2)
label_327e54:
    if (ctx->pc == 0x327E54u) {
        ctx->pc = 0x327E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327E50u;
        // 0x327e54: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327E58u;
        goto label_327e58;
    }
    ctx->pc = 0x327E50u;
    {
        const bool branch_taken_0x327e50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x327E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327E50u;
        // 0x327e54: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327e50) {
            ctx->pc = 0x328020u;
            goto label_328020;
        }
    }
    ctx->pc = 0x327E58u;
label_327e58:
    // 0x327e58: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x327e58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_327e5c:
    // 0x327e5c: 0xc0bb7e6  jal         func_2EDF98
label_327e60:
    if (ctx->pc == 0x327E60u) {
        ctx->pc = 0x327E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327E5Cu;
        // 0x327e60: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327E64u;
        goto label_327e64;
    }
    ctx->pc = 0x327E5Cu;
    SET_GPR_U32(ctx, 31, 0x327E64u);
    ctx->pc = 0x327E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327E5Cu;
    // 0x327e60: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x327E5Cu, 0x327E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327E64u;
label_327e64:
    // 0x327e64: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x327e64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_327e68:
    // 0x327e68: 0x26030060  addiu       $v1, $s0, 0x60
    ctx->pc = 0x327e68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
label_327e6c:
    // 0x327e6c: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x327e6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_327e70:
    // 0x327e70: 0x931018  mult        $v0, $a0, $s3
    ctx->pc = 0x327e70u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_327e74:
    // 0x327e74: 0xae030058  sw          $v1, 0x58($s0)
    ctx->pc = 0x327e74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 3));
label_327e78:
    // 0x327e78: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x327e78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_327e7c:
    // 0x327e7c: 0xb41818  mult        $v1, $a1, $s4
    ctx->pc = 0x327e7cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_327e80:
    // 0x327e80: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x327e80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_327e84:
    // 0x327e84: 0xae06005c  sw          $a2, 0x5C($s0)
    ctx->pc = 0x327e84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 6));
label_327e88:
    // 0x327e88: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x327e88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_327e8c:
    // 0x327e8c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_327e90:
    if (ctx->pc == 0x327E90u) {
        ctx->pc = 0x327E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327E8Cu;
        // 0x327e90: 0x663021  addu        $a2, $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327E94u;
        goto label_327e94;
    }
    ctx->pc = 0x327E8Cu;
    {
        const bool branch_taken_0x327e8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x327E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327E8Cu;
        // 0x327e90: 0x663021  addu        $a2, $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327e8c) {
            ctx->pc = 0x327EA8u;
            goto label_327ea8;
        }
    }
    ctx->pc = 0x327E94u;
label_327e94:
    // 0x327e94: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x327e94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_327e98:
    // 0x327e98: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x327e98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_327e9c:
    // 0x327e9c: 0xae060000  sw          $a2, 0x0($s0)
    ctx->pc = 0x327e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
label_327ea0:
    // 0x327ea0: 0x622018  mult        $a0, $v1, $v0
    ctx->pc = 0x327ea0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_327ea4:
    // 0x327ea4: 0x863021  addu        $a2, $a0, $a2
    ctx->pc = 0x327ea4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_327ea8:
    // 0x327ea8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x327ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_327eac:
    // 0x327eac: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x327eacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_327eb0:
    // 0x327eb0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_327eb4:
    if (ctx->pc == 0x327EB4u) {
        ctx->pc = 0x327EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327EB0u;
        // 0x327eb4: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327EB8u;
        goto label_327eb8;
    }
    ctx->pc = 0x327EB0u;
    {
        const bool branch_taken_0x327eb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x327EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327EB0u;
        // 0x327eb4: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327eb0) {
            ctx->pc = 0x327EC8u;
            goto label_327ec8;
        }
    }
    ctx->pc = 0x327EB8u;
label_327eb8:
    // 0x327eb8: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x327eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_327ebc:
    // 0x327ebc: 0xae060004  sw          $a2, 0x4($s0)
    ctx->pc = 0x327ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 6));
label_327ec0:
    // 0x327ec0: 0x622018  mult        $a0, $v1, $v0
    ctx->pc = 0x327ec0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_327ec4:
    // 0x327ec4: 0x863021  addu        $a2, $a0, $a2
    ctx->pc = 0x327ec4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_327ec8:
    // 0x327ec8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x327ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_327ecc:
    // 0x327ecc: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x327eccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_327ed0:
    // 0x327ed0: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_327ed4:
    if (ctx->pc == 0x327ED4u) {
        ctx->pc = 0x327ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327ED0u;
        // 0x327ed4: 0x8e290010  lw          $t1, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327ED8u;
        goto label_327ed8;
    }
    ctx->pc = 0x327ED0u;
    {
        const bool branch_taken_0x327ed0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x327ed0) {
            ctx->pc = 0x327ED4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x327ED0u;
            // 0x327ed4: 0x8e290010  lw          $t1, 0x10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x327EECu;
            goto label_327eec;
        }
    }
    ctx->pc = 0x327ED8u;
label_327ed8:
    // 0x327ed8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x327ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_327edc:
    // 0x327edc: 0xae060008  sw          $a2, 0x8($s0)
    ctx->pc = 0x327edcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 6));
label_327ee0:
    // 0x327ee0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x327ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_327ee4:
    // 0x327ee4: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x327ee4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_327ee8:
    // 0x327ee8: 0x8e290010  lw          $t1, 0x10($s1)
    ctx->pc = 0x327ee8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_327eec:
    // 0x327eec: 0x1120002c  beqz        $t1, . + 4 + (0x2C << 2)
label_327ef0:
    if (ctx->pc == 0x327EF0u) {
        ctx->pc = 0x327EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327EECu;
        // 0x327ef0: 0x26040048  addiu       $a0, $s0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327EF4u;
        goto label_327ef4;
    }
    ctx->pc = 0x327EECu;
    {
        const bool branch_taken_0x327eec = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x327EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327EECu;
        // 0x327ef0: 0x26040048  addiu       $a0, $s0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327eec) {
            ctx->pc = 0x327FA0u;
            goto label_327fa0;
        }
    }
    ctx->pc = 0x327EF4u;
label_327ef4:
    // 0x327ef4: 0x1120002a  beqz        $t1, . + 4 + (0x2A << 2)
label_327ef8:
    if (ctx->pc == 0x327EF8u) {
        ctx->pc = 0x327EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327EF4u;
        // 0x327ef8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327EFCu;
        goto label_327efc;
    }
    ctx->pc = 0x327EF4u;
    {
        const bool branch_taken_0x327ef4 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x327EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327EF4u;
        // 0x327ef8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327ef4) {
            ctx->pc = 0x327FA0u;
            goto label_327fa0;
        }
    }
    ctx->pc = 0x327EFCu;
label_327efc:
    // 0x327efc: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x327efcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_327f00:
    // 0x327f00: 0x2603000c  addiu       $v1, $s0, 0xC
    ctx->pc = 0x327f00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_327f04:
    // 0x327f04: 0x31250003  andi        $a1, $t1, 0x3
    ctx->pc = 0x327f04u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)3);
label_327f08:
    // 0x327f08: 0x19200011  blez        $t1, . + 4 + (0x11 << 2)
label_327f0c:
    if (ctx->pc == 0x327F0Cu) {
        ctx->pc = 0x327F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327F08u;
        // 0x327f0c: 0x240c0  sll         $t0, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327F10u;
        goto label_327f10;
    }
    ctx->pc = 0x327F08u;
    {
        const bool branch_taken_0x327f08 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x327F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327F08u;
        // 0x327f0c: 0x240c0  sll         $t0, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327f08) {
            ctx->pc = 0x327F50u;
            goto label_327f50;
        }
    }
    ctx->pc = 0x327F10u;
label_327f10:
    // 0x327f10: 0x10a00017  beqz        $a1, . + 4 + (0x17 << 2)
label_327f14:
    if (ctx->pc == 0x327F14u) {
        ctx->pc = 0x327F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327F10u;
        // 0x327f14: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327F18u;
        goto label_327f18;
    }
    ctx->pc = 0x327F10u;
    {
        const bool branch_taken_0x327f10 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x327F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327F10u;
        // 0x327f14: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327f10) {
            ctx->pc = 0x327F70u;
            goto label_327f70;
        }
    }
    ctx->pc = 0x327F18u;
label_327f18:
    // 0x327f18: 0x28a20002  slti        $v0, $a1, 0x2
    ctx->pc = 0x327f18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
label_327f1c:
    // 0x327f1c: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
label_327f20:
    if (ctx->pc == 0x327F20u) {
        ctx->pc = 0x327F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327F1Cu;
        // 0x327f20: 0xac660000  sw          $a2, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327F24u;
        goto label_327f24;
    }
    ctx->pc = 0x327F1Cu;
    {
        const bool branch_taken_0x327f1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x327f1c) {
            ctx->pc = 0x327F20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x327F1Cu;
            // 0x327f20: 0xac660000  sw          $a2, 0x0($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x327F54u;
            goto label_327f54;
        }
    }
    ctx->pc = 0x327F24u;
label_327f24:
    // 0x327f24: 0x28a20003  slti        $v0, $a1, 0x3
    ctx->pc = 0x327f24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
label_327f28:
    // 0x327f28: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_327f2c:
    if (ctx->pc == 0x327F2Cu) {
        ctx->pc = 0x327F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327F28u;
        // 0x327f2c: 0xac660000  sw          $a2, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327F30u;
        goto label_327f30;
    }
    ctx->pc = 0x327F28u;
    {
        const bool branch_taken_0x327f28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x327f28) {
            ctx->pc = 0x327F2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x327F28u;
            // 0x327f2c: 0xac660000  sw          $a2, 0x0($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x327F44u;
            goto label_327f44;
        }
    }
    ctx->pc = 0x327F30u;
label_327f30:
    // 0x327f30: 0xae06000c  sw          $a2, 0xC($s0)
    ctx->pc = 0x327f30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 6));
label_327f34:
    // 0x327f34: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x327f34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_327f38:
    // 0x327f38: 0xc83021  addu        $a2, $a2, $t0
    ctx->pc = 0x327f38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
label_327f3c:
    // 0x327f3c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x327f3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_327f40:
    // 0x327f40: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x327f40u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
label_327f44:
    // 0x327f44: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x327f44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_327f48:
    // 0x327f48: 0xc83021  addu        $a2, $a2, $t0
    ctx->pc = 0x327f48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
label_327f4c:
    // 0x327f4c: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x327f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_327f50:
    // 0x327f50: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x327f50u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
label_327f54:
    // 0x327f54: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x327f54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_327f58:
    // 0x327f58: 0xc83021  addu        $a2, $a2, $t0
    ctx->pc = 0x327f58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
label_327f5c:
    // 0x327f5c: 0xe9282b  sltu        $a1, $a3, $t1
    ctx->pc = 0x327f5cu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
label_327f60:
    // 0x327f60: 0x10a0000f  beqz        $a1, . + 4 + (0xF << 2)
label_327f64:
    if (ctx->pc == 0x327F64u) {
        ctx->pc = 0x327F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327F60u;
        // 0x327f64: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327F68u;
        goto label_327f68;
    }
    ctx->pc = 0x327F60u;
    {
        const bool branch_taken_0x327f60 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x327F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327F60u;
        // 0x327f64: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327f60) {
            ctx->pc = 0x327FA0u;
            goto label_327fa0;
        }
    }
    ctx->pc = 0x327F68u;
label_327f68:
    // 0x327f68: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x327f68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_327f6c:
    // 0x327f6c: 0x0  nop
    ctx->pc = 0x327f6cu;
    // NOP
label_327f70:
    // 0x327f70: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x327f70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
label_327f74:
    // 0x327f74: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x327f74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_327f78:
    // 0x327f78: 0xc83021  addu        $a2, $a2, $t0
    ctx->pc = 0x327f78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
label_327f7c:
    // 0x327f7c: 0xe9282b  sltu        $a1, $a3, $t1
    ctx->pc = 0x327f7cu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
label_327f80:
    // 0x327f80: 0xac460004  sw          $a2, 0x4($v0)
    ctx->pc = 0x327f80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 6));
label_327f84:
    // 0x327f84: 0xc83021  addu        $a2, $a2, $t0
    ctx->pc = 0x327f84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
label_327f88:
    // 0x327f88: 0xac460008  sw          $a2, 0x8($v0)
    ctx->pc = 0x327f88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 6));
label_327f8c:
    // 0x327f8c: 0xc83021  addu        $a2, $a2, $t0
    ctx->pc = 0x327f8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
label_327f90:
    // 0x327f90: 0xac46000c  sw          $a2, 0xC($v0)
    ctx->pc = 0x327f90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 6));
label_327f94:
    // 0x327f94: 0xc83021  addu        $a2, $a2, $t0
    ctx->pc = 0x327f94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
label_327f98:
    // 0x327f98: 0x14a0fff5  bnez        $a1, . + 4 + (-0xB << 2)
label_327f9c:
    if (ctx->pc == 0x327F9Cu) {
        ctx->pc = 0x327F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327F98u;
        // 0x327f9c: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327FA0u;
        goto label_327fa0;
    }
    ctx->pc = 0x327F98u;
    {
        const bool branch_taken_0x327f98 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x327F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327F98u;
        // 0x327f9c: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327f98) {
            ctx->pc = 0x327F70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_327f70;
        }
    }
    ctx->pc = 0x327FA0u;
label_327fa0:
    // 0x327fa0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x327fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_327fa4:
    // 0x327fa4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x327fa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_327fa8:
    // 0x327fa8: 0xae03002c  sw          $v1, 0x2C($s0)
    ctx->pc = 0x327fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
label_327fac:
    // 0x327fac: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x327facu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_327fb0:
    // 0x327fb0: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x327fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
label_327fb4:
    // 0x327fb4: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x327fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_327fb8:
    // 0x327fb8: 0xae030034  sw          $v1, 0x34($s0)
    ctx->pc = 0x327fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 3));
label_327fbc:
    // 0x327fbc: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x327fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_327fc0:
    // 0x327fc0: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x327fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
label_327fc4:
    // 0x327fc4: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x327fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_327fc8:
    // 0x327fc8: 0xae050044  sw          $a1, 0x44($s0)
    ctx->pc = 0x327fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 5));
label_327fcc:
    // 0x327fcc: 0xc0e3d9a  jal         func_38F668
label_327fd0:
    if (ctx->pc == 0x327FD0u) {
        ctx->pc = 0x327FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327FCCu;
        // 0x327fd0: 0xae03003c  sw          $v1, 0x3C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327FD4u;
        goto label_327fd4;
    }
    ctx->pc = 0x327FCCu;
    SET_GPR_U32(ctx, 31, 0x327FD4u);
    ctx->pc = 0x327FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327FCCu;
    // 0x327fd0: 0xae03003c  sw          $v1, 0x3C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F668u, 0x327FCCu, 0x327FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327FD4u;
label_327fd4:
    // 0x327fd4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_327fd8:
    if (ctx->pc == 0x327FD8u) {
        ctx->pc = 0x327FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327FD4u;
        // 0x327fd8: 0x3403ffff  ori         $v1, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x327FDCu;
        goto label_327fdc;
    }
    ctx->pc = 0x327FD4u;
    {
        const bool branch_taken_0x327fd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x327FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327FD4u;
        // 0x327fd8: 0x3403ffff  ori         $v1, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x327fd4) {
            ctx->pc = 0x327FE8u;
            goto label_327fe8;
        }
    }
    ctx->pc = 0x327FDCu;
label_327fdc:
    // 0x327fdc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x327fdcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_327fe0:
    // 0x327fe0: 0x1000000f  b           . + 4 + (0xF << 2)
label_327fe4:
    if (ctx->pc == 0x327FE4u) {
        ctx->pc = 0x327FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327FE0u;
        // 0x327fe4: 0xae030040  sw          $v1, 0x40($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x327FE8u;
        goto label_327fe8;
    }
    ctx->pc = 0x327FE0u;
    {
        const bool branch_taken_0x327fe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x327FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327FE0u;
        // 0x327fe4: 0xae030040  sw          $v1, 0x40($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327fe0) {
            ctx->pc = 0x328020u;
            goto label_328020;
        }
    }
    ctx->pc = 0x327FE8u;
label_327fe8:
    // 0x327fe8: 0x24020123  addiu       $v0, $zero, 0x123
    ctx->pc = 0x327fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 291));
label_327fec:
    // 0x327fec: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x327fecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_327ff0:
    // 0x327ff0: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x327ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_327ff4:
    // 0x327ff4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x327ff4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_327ff8:
    // 0x327ff8: 0xc1035f6  jal         func_40D7D8
label_327ffc:
    if (ctx->pc == 0x327FFCu) {
        ctx->pc = 0x327FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327FF8u;
        // 0x327ffc: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        ctx->pc = 0x328000u;
        goto label_328000;
    }
    ctx->pc = 0x327FF8u;
    SET_GPR_U32(ctx, 31, 0x328000u);
    ctx->pc = 0x327FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327FF8u;
    // 0x327ffc: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x327FF8u, 0x328000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328000u;
label_328000:
    // 0x328000: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x328000u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_328004:
    // 0x328004: 0xc103628  jal         func_40D8A0
label_328008:
    if (ctx->pc == 0x328008u) {
        ctx->pc = 0x328008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328004u;
        // 0x328008: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32800Cu;
        goto label_32800c;
    }
    ctx->pc = 0x328004u;
    SET_GPR_U32(ctx, 31, 0x32800Cu);
    ctx->pc = 0x328008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328004u;
    // 0x328008: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x328004u, 0x32800Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32800Cu;
label_32800c:
    // 0x32800c: 0x26a3e880  addiu       $v1, $s5, -0x1780
    ctx->pc = 0x32800cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294961280));
label_328010:
    // 0x328010: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x328010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_328014:
    // 0x328014: 0x40f809  jalr        $v0
label_328018:
    if (ctx->pc == 0x328018u) {
        ctx->pc = 0x328018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328014u;
        // 0x328018: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32801Cu;
        goto label_32801c;
    }
    ctx->pc = 0x328014u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x32801Cu);
        ctx->pc = 0x328018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328014u;
        // 0x328018: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x328014u, 0x32801Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x32801Cu;
label_32801c:
    // 0x32801c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x32801cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_328020:
    // 0x328020: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x328020u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_328024:
    // 0x328024: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x328024u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_328028:
    // 0x328028: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x328028u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_32802c:
    // 0x32802c: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x32802cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_328030:
    // 0x328030: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x328030u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_328034:
    // 0x328034: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x328034u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_328038:
    // 0x328038: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x328038u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_32803c:
    // 0x32803c: 0x3e00008  jr          $ra
label_328040:
    if (ctx->pc == 0x328040u) {
        ctx->pc = 0x328040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32803Cu;
        // 0x328040: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328044u;
        goto label_328044;
    }
    ctx->pc = 0x32803Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x328040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32803Cu;
        // 0x328040: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32803Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x328044u;
label_328044:
    // 0x328044: 0x0  nop
    ctx->pc = 0x328044u;
    // NOP
label_328048:
    // 0x328048: 0x71402  srl         $v0, $a3, 16
    ctx->pc = 0x328048u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 16));
label_32804c:
    // 0x32804c: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x32804cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_328050:
    // 0x328050: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x328050u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_328054:
    // 0x328054: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x328054u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_328058:
    // 0x328058: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x328058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_32805c:
    // 0x32805c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x32805cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_328060:
    // 0x328060: 0xafa60004  sw          $a2, 0x4($sp)
    ctx->pc = 0x328060u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 6));
label_328064:
    // 0x328064: 0xafa50008  sw          $a1, 0x8($sp)
    ctx->pc = 0x328064u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
label_328068:
    // 0x328068: 0xafa3000c  sw          $v1, 0xC($sp)
    ctx->pc = 0x328068u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
label_32806c:
    // 0x32806c: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x32806cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_328070:
    // 0x328070: 0xc0c9f5e  jal         func_327D78
label_328074:
    if (ctx->pc == 0x328074u) {
        ctx->pc = 0x328074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328070u;
        // 0x328074: 0xafa70000  sw          $a3, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328078u;
        goto label_328078;
    }
    ctx->pc = 0x328070u;
    SET_GPR_U32(ctx, 31, 0x328078u);
    ctx->pc = 0x328074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328070u;
    // 0x328074: 0xafa70000  sw          $a3, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327D78u;
    goto label_327d78;
    ctx->pc = 0x328078u;
label_328078:
    // 0x328078: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x328078u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_32807c:
    // 0x32807c: 0x3e00008  jr          $ra
label_328080:
    if (ctx->pc == 0x328080u) {
        ctx->pc = 0x328080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32807Cu;
        // 0x328080: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328084u;
        goto label_328084;
    }
    ctx->pc = 0x32807Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x328080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32807Cu;
        // 0x328080: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32807Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x328084u;
label_328084:
    // 0x328084: 0x0  nop
    ctx->pc = 0x328084u;
    // NOP
label_328088:
    // 0x328088: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x328088u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_32808c:
    // 0x32808c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x32808cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_328090:
    // 0x328090: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x328090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_328094:
    // 0x328094: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x328094u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_328098:
    // 0x328098: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x328098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_32809c:
    // 0x32809c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x32809cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3280a0:
    // 0x3280a0: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x3280a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_3280a4:
    // 0x3280a4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3280a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3280a8:
    // 0x3280a8: 0x14510008  bne         $v0, $s1, . + 4 + (0x8 << 2)
label_3280ac:
    if (ctx->pc == 0x3280ACu) {
        ctx->pc = 0x3280ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3280A8u;
        // 0x3280ac: 0xae020044  sw          $v0, 0x44($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3280B0u;
        goto label_3280b0;
    }
    ctx->pc = 0x3280A8u;
    {
        const bool branch_taken_0x3280a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x3280ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3280A8u;
        // 0x3280ac: 0xae020044  sw          $v0, 0x44($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3280a8) {
            ctx->pc = 0x3280CCu;
            goto label_3280cc;
        }
    }
    ctx->pc = 0x3280B0u;
label_3280b0:
    // 0x3280b0: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x3280b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_3280b4:
    // 0x3280b4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_3280b8:
    if (ctx->pc == 0x3280B8u) {
        ctx->pc = 0x3280B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3280B4u;
        // 0x3280b8: 0x8e020044  lw          $v0, 0x44($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3280BCu;
        goto label_3280bc;
    }
    ctx->pc = 0x3280B4u;
    {
        const bool branch_taken_0x3280b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3280b4) {
            ctx->pc = 0x3280B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3280B4u;
            // 0x3280b8: 0x8e020044  lw          $v0, 0x44($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3280D0u;
            goto label_3280d0;
        }
    }
    ctx->pc = 0x3280BCu;
label_3280bc:
    // 0x3280bc: 0xc0e3414  jal         func_38D050
label_3280c0:
    if (ctx->pc == 0x3280C0u) {
        ctx->pc = 0x3280C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3280BCu;
        // 0x3280c0: 0xae000054  sw          $zero, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3280C4u;
        goto label_3280c4;
    }
    ctx->pc = 0x3280BCu;
    SET_GPR_U32(ctx, 31, 0x3280C4u);
    ctx->pc = 0x3280C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3280BCu;
    // 0x3280c0: 0xae000054  sw          $zero, 0x54($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38D050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D050u, 0x3280BCu, 0x3280C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3280C4u;
label_3280c4:
    // 0x3280c4: 0x1000000a  b           . + 4 + (0xA << 2)
label_3280c8:
    if (ctx->pc == 0x3280C8u) {
        ctx->pc = 0x3280C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3280C4u;
        // 0x3280c8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3280CCu;
        goto label_3280cc;
    }
    ctx->pc = 0x3280C4u;
    {
        const bool branch_taken_0x3280c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3280C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3280C4u;
        // 0x3280c8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3280c4) {
            ctx->pc = 0x3280F0u;
            goto label_3280f0;
        }
    }
    ctx->pc = 0x3280CCu;
label_3280cc:
    // 0x3280cc: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x3280ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_3280d0:
    // 0x3280d0: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_3280d4:
    if (ctx->pc == 0x3280D4u) {
        ctx->pc = 0x3280D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3280D0u;
        // 0x3280d4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3280D8u;
        goto label_3280d8;
    }
    ctx->pc = 0x3280D0u;
    {
        const bool branch_taken_0x3280d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3280D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3280D0u;
        // 0x3280d4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3280d0) {
            ctx->pc = 0x3280F4u;
            goto label_3280f4;
        }
    }
    ctx->pc = 0x3280D8u;
label_3280d8:
    // 0x3280d8: 0xc0e3da0  jal         func_38F680
label_3280dc:
    if (ctx->pc == 0x3280DCu) {
        ctx->pc = 0x3280DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3280D8u;
        // 0x3280dc: 0x26040048  addiu       $a0, $s0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3280E0u;
        goto label_3280e0;
    }
    ctx->pc = 0x3280D8u;
    SET_GPR_U32(ctx, 31, 0x3280E0u);
    ctx->pc = 0x3280DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3280D8u;
    // 0x3280dc: 0x26040048  addiu       $a0, $s0, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F680u, 0x3280D8u, 0x3280E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3280E0u;
label_3280e0:
    // 0x3280e0: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x3280e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_3280e4:
    // 0x3280e4: 0x8c62e98c  lw          $v0, -0x1674($v1)
    ctx->pc = 0x3280e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961548)));
label_3280e8:
    // 0x3280e8: 0x40f809  jalr        $v0
label_3280ec:
    if (ctx->pc == 0x3280ECu) {
        ctx->pc = 0x3280ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3280E8u;
        // 0x3280ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3280F0u;
        goto label_3280f0;
    }
    ctx->pc = 0x3280E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3280F0u);
        ctx->pc = 0x3280ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3280E8u;
        // 0x3280ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3280E8u, 0x3280F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3280F0u;
label_3280f0:
    // 0x3280f0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3280f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3280f4:
    // 0x3280f4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3280f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3280f8:
    // 0x3280f8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3280f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3280fc:
    // 0x3280fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3280fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_328100:
    // 0x328100: 0x3e00008  jr          $ra
label_328104:
    if (ctx->pc == 0x328104u) {
        ctx->pc = 0x328104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328100u;
        // 0x328104: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328108u;
        goto label_328108;
    }
    ctx->pc = 0x328100u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x328104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328100u;
        // 0x328104: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x328100u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x328108u;
label_328108:
    // 0x328108: 0x8c830040  lw          $v1, 0x40($a0)
    ctx->pc = 0x328108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_32810c:
    // 0x32810c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x32810cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_328110:
    // 0x328110: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x328110u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
label_328114:
    // 0x328114: 0x3e00008  jr          $ra
label_328118:
    if (ctx->pc == 0x328118u) {
        ctx->pc = 0x328118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328114u;
        // 0x328118: 0xac830040  sw          $v1, 0x40($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32811Cu;
        goto label_32811c;
    }
    ctx->pc = 0x328114u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x328118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328114u;
        // 0x328118: 0xac830040  sw          $v1, 0x40($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x328114u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32811Cu;
label_32811c:
    // 0x32811c: 0x0  nop
    ctx->pc = 0x32811cu;
    // NOP
label_328120:
    // 0x328120: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x328120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_328124:
    // 0x328124: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x328124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_328128:
    // 0x328128: 0x94820040  lhu         $v0, 0x40($a0)
    ctx->pc = 0x328128u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 64)));
label_32812c:
    // 0x32812c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_328130:
    if (ctx->pc == 0x328130u) {
        ctx->pc = 0x328130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32812Cu;
        // 0x328130: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328134u;
        goto label_328134;
    }
    ctx->pc = 0x32812Cu;
    {
        const bool branch_taken_0x32812c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x328130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32812Cu;
        // 0x328130: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32812c) {
            ctx->pc = 0x328140u;
            goto label_328140;
        }
    }
    ctx->pc = 0x328134u;
label_328134:
    // 0x328134: 0xc0ca280  jal         func_328A00
label_328138:
    if (ctx->pc == 0x328138u) {
        ctx->pc = 0x32813Cu;
        goto label_32813c;
    }
    ctx->pc = 0x328134u;
    SET_GPR_U32(ctx, 31, 0x32813Cu);
    ctx->pc = 0x328A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328A00u, 0x328134u, 0x32813Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32813Cu;
label_32813c:
    // 0x32813c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x32813cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_328140:
    // 0x328140: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x328140u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_328144:
    // 0x328144: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x328144u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_328148:
    // 0x328148: 0xac600040  sw          $zero, 0x40($v1)
    ctx->pc = 0x328148u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 0));
label_32814c:
    // 0x32814c: 0x3e00008  jr          $ra
label_328150:
    if (ctx->pc == 0x328150u) {
        ctx->pc = 0x328150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32814Cu;
        // 0x328150: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328154u;
        goto label_328154;
    }
    ctx->pc = 0x32814Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x328150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32814Cu;
        // 0x328150: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32814Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x328154u;
label_328154:
    // 0x328154: 0x0  nop
    ctx->pc = 0x328154u;
    // NOP
label_328158:
    // 0x328158: 0x24030044  addiu       $v1, $zero, 0x44
    ctx->pc = 0x328158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
label_32815c:
    // 0x32815c: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x32815cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_328160:
    // 0x328160: 0xa32818  mult        $a1, $a1, $v1
    ctx->pc = 0x328160u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_328164:
    // 0x328164: 0x8d220058  lw          $v0, 0x58($t1)
    ctx->pc = 0x328164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 88)));
label_328168:
    // 0x328168: 0x453821  addu        $a3, $v0, $a1
    ctx->pc = 0x328168u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_32816c:
    // 0x32816c: 0x24e80040  addiu       $t0, $a3, 0x40
    ctx->pc = 0x32816cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 64));
label_328170:
    // 0x328170: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x328170u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_328174:
    // 0x328174: 0x0  nop
    ctx->pc = 0x328174u;
    // NOP
label_328178:
    // 0x328178: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x328178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_32817c:
    // 0x32817c: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x32817cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
label_328180:
    // 0x328180: 0xe8202b  sltu        $a0, $a3, $t0
    ctx->pc = 0x328180u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
label_328184:
    // 0x328184: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x328184u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_328188:
    // 0x328188: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x328188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_32818c:
    // 0x32818c: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x32818cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_328190:
    // 0x328190: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x328190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_328194:
    // 0x328194: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x328194u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
label_328198:
    // 0x328198: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x328198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_32819c:
    // 0x32819c: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x32819cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
label_3281a0:
    // 0x3281a0: 0x8cc30010  lw          $v1, 0x10($a2)
    ctx->pc = 0x3281a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
label_3281a4:
    // 0x3281a4: 0xaca30010  sw          $v1, 0x10($a1)
    ctx->pc = 0x3281a4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 3));
label_3281a8:
    // 0x3281a8: 0x8cc20014  lw          $v0, 0x14($a2)
    ctx->pc = 0x3281a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
label_3281ac:
    // 0x3281ac: 0xaca20014  sw          $v0, 0x14($a1)
    ctx->pc = 0x3281acu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 2));
label_3281b0:
    // 0x3281b0: 0x8cc30018  lw          $v1, 0x18($a2)
    ctx->pc = 0x3281b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
label_3281b4:
    // 0x3281b4: 0xaca30018  sw          $v1, 0x18($a1)
    ctx->pc = 0x3281b4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 3));
label_3281b8:
    // 0x3281b8: 0x8cc2001c  lw          $v0, 0x1C($a2)
    ctx->pc = 0x3281b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
label_3281bc:
    // 0x3281bc: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x3281bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
label_3281c0:
    // 0x3281c0: 0xaca2001c  sw          $v0, 0x1C($a1)
    ctx->pc = 0x3281c0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 2));
label_3281c4:
    // 0x3281c4: 0x1480ffec  bnez        $a0, . + 4 + (-0x14 << 2)
label_3281c8:
    if (ctx->pc == 0x3281C8u) {
        ctx->pc = 0x3281C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3281C4u;
        // 0x3281c8: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3281CCu;
        goto label_3281cc;
    }
    ctx->pc = 0x3281C4u;
    {
        const bool branch_taken_0x3281c4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3281C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3281C4u;
        // 0x3281c8: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3281c4) {
            ctx->pc = 0x328178u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_328178;
        }
    }
    ctx->pc = 0x3281CCu;
label_3281cc:
    // 0x3281cc: 0x3e00008  jr          $ra
label_3281d0:
    if (ctx->pc == 0x3281D0u) {
        ctx->pc = 0x3281D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3281CCu;
        // 0x3281d0: 0x120102d  daddu       $v0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3281D4u;
        goto label_3281d4;
    }
    ctx->pc = 0x3281CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3281D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3281CCu;
        // 0x3281d0: 0x120102d  daddu       $v0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3281CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3281D4u;
label_3281d4:
    // 0x3281d4: 0x0  nop
    ctx->pc = 0x3281d4u;
    // NOP
label_3281d8:
    // 0x3281d8: 0x2403002c  addiu       $v1, $zero, 0x2C
    ctx->pc = 0x3281d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
label_3281dc:
    // 0x3281dc: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x3281dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3281e0:
    // 0x3281e0: 0xa32818  mult        $a1, $a1, $v1
    ctx->pc = 0x3281e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_3281e4:
    // 0x3281e4: 0x8c47005c  lw          $a3, 0x5C($v0)
    ctx->pc = 0x3281e4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_3281e8:
    // 0x3281e8: 0xe53821  addu        $a3, $a3, $a1
    ctx->pc = 0x3281e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
label_3281ec:
    // 0x3281ec: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x3281ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_3281f0:
    // 0x3281f0: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x3281f0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
label_3281f4:
    // 0x3281f4: 0x8cc40004  lw          $a0, 0x4($a2)
    ctx->pc = 0x3281f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_3281f8:
    // 0x3281f8: 0xace40004  sw          $a0, 0x4($a3)
    ctx->pc = 0x3281f8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 4));
label_3281fc:
    // 0x3281fc: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x3281fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_328200:
    // 0x328200: 0xace30008  sw          $v1, 0x8($a3)
    ctx->pc = 0x328200u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 3));
label_328204:
    // 0x328204: 0x8cc4000c  lw          $a0, 0xC($a2)
    ctx->pc = 0x328204u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_328208:
    // 0x328208: 0xace4000c  sw          $a0, 0xC($a3)
    ctx->pc = 0x328208u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 4));
label_32820c:
    // 0x32820c: 0x8cc30010  lw          $v1, 0x10($a2)
    ctx->pc = 0x32820cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
label_328210:
    // 0x328210: 0xace30010  sw          $v1, 0x10($a3)
    ctx->pc = 0x328210u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 3));
label_328214:
    // 0x328214: 0x8cc40014  lw          $a0, 0x14($a2)
    ctx->pc = 0x328214u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
label_328218:
    // 0x328218: 0xace40014  sw          $a0, 0x14($a3)
    ctx->pc = 0x328218u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 4));
label_32821c:
    // 0x32821c: 0x8cc30018  lw          $v1, 0x18($a2)
    ctx->pc = 0x32821cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
label_328220:
    // 0x328220: 0xace30018  sw          $v1, 0x18($a3)
    ctx->pc = 0x328220u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 3));
label_328224:
    // 0x328224: 0x8cc4001c  lw          $a0, 0x1C($a2)
    ctx->pc = 0x328224u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
label_328228:
    // 0x328228: 0xace4001c  sw          $a0, 0x1C($a3)
    ctx->pc = 0x328228u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 28), GPR_U32(ctx, 4));
label_32822c:
    // 0x32822c: 0x8cc30020  lw          $v1, 0x20($a2)
    ctx->pc = 0x32822cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
label_328230:
    // 0x328230: 0xace30020  sw          $v1, 0x20($a3)
    ctx->pc = 0x328230u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 32), GPR_U32(ctx, 3));
label_328234:
    // 0x328234: 0x8cc40024  lw          $a0, 0x24($a2)
    ctx->pc = 0x328234u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
label_328238:
    // 0x328238: 0x3e00008  jr          $ra
label_32823c:
    if (ctx->pc == 0x32823Cu) {
        ctx->pc = 0x32823Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328238u;
        // 0x32823c: 0xace40024  sw          $a0, 0x24($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 36), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328240u;
        goto label_328240;
    }
    ctx->pc = 0x328238u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32823Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328238u;
        // 0x32823c: 0xace40024  sw          $a0, 0x24($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 36), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x328238u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x328240u;
label_328240:
    // 0x328240: 0x24030044  addiu       $v1, $zero, 0x44
    ctx->pc = 0x328240u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
label_328244:
    // 0x328244: 0x8c820058  lw          $v0, 0x58($a0)
    ctx->pc = 0x328244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_328248:
    // 0x328248: 0xa32818  mult        $a1, $a1, $v1
    ctx->pc = 0x328248u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_32824c:
    // 0x32824c: 0x3e00008  jr          $ra
label_328250:
    if (ctx->pc == 0x328250u) {
        ctx->pc = 0x328250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32824Cu;
        // 0x328250: 0x451021  addu        $v0, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x328254u;
        goto label_328254;
    }
    ctx->pc = 0x32824Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x328250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32824Cu;
        // 0x328250: 0x451021  addu        $v0, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32824Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x328254u;
label_328254:
    // 0x328254: 0x0  nop
    ctx->pc = 0x328254u;
    // NOP
label_328258:
    // 0x328258: 0x2403002c  addiu       $v1, $zero, 0x2C
    ctx->pc = 0x328258u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
label_32825c:
    // 0x32825c: 0x8c82005c  lw          $v0, 0x5C($a0)
    ctx->pc = 0x32825cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
label_328260:
    // 0x328260: 0xa32818  mult        $a1, $a1, $v1
    ctx->pc = 0x328260u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_328264:
    // 0x328264: 0x3e00008  jr          $ra
label_328268:
    if (ctx->pc == 0x328268u) {
        ctx->pc = 0x328268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328264u;
        // 0x328268: 0x451021  addu        $v0, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32826Cu;
        goto label_32826c;
    }
    ctx->pc = 0x328264u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x328268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328264u;
        // 0x328268: 0x451021  addu        $v0, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x328264u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32826Cu;
label_32826c:
    // 0x32826c: 0x0  nop
    ctx->pc = 0x32826cu;
    // NOP
    ctx->pc = 0x328270u;
}
