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

// Function: sub_00453BA0
// Address: 0x453ba0 - 0x454050
void sub_00453BA0_0x453ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00453BA0_0x453ba0");
#endif

    switch (ctx->pc) {
        case 0x453ba0u: goto label_453ba0;
        case 0x453ba4u: goto label_453ba4;
        case 0x453ba8u: goto label_453ba8;
        case 0x453bacu: goto label_453bac;
        case 0x453bb0u: goto label_453bb0;
        case 0x453bb4u: goto label_453bb4;
        case 0x453bb8u: goto label_453bb8;
        case 0x453bbcu: goto label_453bbc;
        case 0x453bc0u: goto label_453bc0;
        case 0x453bc4u: goto label_453bc4;
        case 0x453bc8u: goto label_453bc8;
        case 0x453bccu: goto label_453bcc;
        case 0x453bd0u: goto label_453bd0;
        case 0x453bd4u: goto label_453bd4;
        case 0x453bd8u: goto label_453bd8;
        case 0x453bdcu: goto label_453bdc;
        case 0x453be0u: goto label_453be0;
        case 0x453be4u: goto label_453be4;
        case 0x453be8u: goto label_453be8;
        case 0x453becu: goto label_453bec;
        case 0x453bf0u: goto label_453bf0;
        case 0x453bf4u: goto label_453bf4;
        case 0x453bf8u: goto label_453bf8;
        case 0x453bfcu: goto label_453bfc;
        case 0x453c00u: goto label_453c00;
        case 0x453c04u: goto label_453c04;
        case 0x453c08u: goto label_453c08;
        case 0x453c0cu: goto label_453c0c;
        case 0x453c10u: goto label_453c10;
        case 0x453c14u: goto label_453c14;
        case 0x453c18u: goto label_453c18;
        case 0x453c1cu: goto label_453c1c;
        case 0x453c20u: goto label_453c20;
        case 0x453c24u: goto label_453c24;
        case 0x453c28u: goto label_453c28;
        case 0x453c2cu: goto label_453c2c;
        case 0x453c30u: goto label_453c30;
        case 0x453c34u: goto label_453c34;
        case 0x453c38u: goto label_453c38;
        case 0x453c3cu: goto label_453c3c;
        case 0x453c40u: goto label_453c40;
        case 0x453c44u: goto label_453c44;
        case 0x453c48u: goto label_453c48;
        case 0x453c4cu: goto label_453c4c;
        case 0x453c50u: goto label_453c50;
        case 0x453c54u: goto label_453c54;
        case 0x453c58u: goto label_453c58;
        case 0x453c5cu: goto label_453c5c;
        case 0x453c60u: goto label_453c60;
        case 0x453c64u: goto label_453c64;
        case 0x453c68u: goto label_453c68;
        case 0x453c6cu: goto label_453c6c;
        case 0x453c70u: goto label_453c70;
        case 0x453c74u: goto label_453c74;
        case 0x453c78u: goto label_453c78;
        case 0x453c7cu: goto label_453c7c;
        case 0x453c80u: goto label_453c80;
        case 0x453c84u: goto label_453c84;
        case 0x453c88u: goto label_453c88;
        case 0x453c8cu: goto label_453c8c;
        case 0x453c90u: goto label_453c90;
        case 0x453c94u: goto label_453c94;
        case 0x453c98u: goto label_453c98;
        case 0x453c9cu: goto label_453c9c;
        case 0x453ca0u: goto label_453ca0;
        case 0x453ca4u: goto label_453ca4;
        case 0x453ca8u: goto label_453ca8;
        case 0x453cacu: goto label_453cac;
        case 0x453cb0u: goto label_453cb0;
        case 0x453cb4u: goto label_453cb4;
        case 0x453cb8u: goto label_453cb8;
        case 0x453cbcu: goto label_453cbc;
        case 0x453cc0u: goto label_453cc0;
        case 0x453cc4u: goto label_453cc4;
        case 0x453cc8u: goto label_453cc8;
        case 0x453cccu: goto label_453ccc;
        case 0x453cd0u: goto label_453cd0;
        case 0x453cd4u: goto label_453cd4;
        case 0x453cd8u: goto label_453cd8;
        case 0x453cdcu: goto label_453cdc;
        case 0x453ce0u: goto label_453ce0;
        case 0x453ce4u: goto label_453ce4;
        case 0x453ce8u: goto label_453ce8;
        case 0x453cecu: goto label_453cec;
        case 0x453cf0u: goto label_453cf0;
        case 0x453cf4u: goto label_453cf4;
        case 0x453cf8u: goto label_453cf8;
        case 0x453cfcu: goto label_453cfc;
        case 0x453d00u: goto label_453d00;
        case 0x453d04u: goto label_453d04;
        case 0x453d08u: goto label_453d08;
        case 0x453d0cu: goto label_453d0c;
        case 0x453d10u: goto label_453d10;
        case 0x453d14u: goto label_453d14;
        case 0x453d18u: goto label_453d18;
        case 0x453d1cu: goto label_453d1c;
        case 0x453d20u: goto label_453d20;
        case 0x453d24u: goto label_453d24;
        case 0x453d28u: goto label_453d28;
        case 0x453d2cu: goto label_453d2c;
        case 0x453d30u: goto label_453d30;
        case 0x453d34u: goto label_453d34;
        case 0x453d38u: goto label_453d38;
        case 0x453d3cu: goto label_453d3c;
        case 0x453d40u: goto label_453d40;
        case 0x453d44u: goto label_453d44;
        case 0x453d48u: goto label_453d48;
        case 0x453d4cu: goto label_453d4c;
        case 0x453d50u: goto label_453d50;
        case 0x453d54u: goto label_453d54;
        case 0x453d58u: goto label_453d58;
        case 0x453d5cu: goto label_453d5c;
        case 0x453d60u: goto label_453d60;
        case 0x453d64u: goto label_453d64;
        case 0x453d68u: goto label_453d68;
        case 0x453d6cu: goto label_453d6c;
        case 0x453d70u: goto label_453d70;
        case 0x453d74u: goto label_453d74;
        case 0x453d78u: goto label_453d78;
        case 0x453d7cu: goto label_453d7c;
        case 0x453d80u: goto label_453d80;
        case 0x453d84u: goto label_453d84;
        case 0x453d88u: goto label_453d88;
        case 0x453d8cu: goto label_453d8c;
        case 0x453d90u: goto label_453d90;
        case 0x453d94u: goto label_453d94;
        case 0x453d98u: goto label_453d98;
        case 0x453d9cu: goto label_453d9c;
        case 0x453da0u: goto label_453da0;
        case 0x453da4u: goto label_453da4;
        case 0x453da8u: goto label_453da8;
        case 0x453dacu: goto label_453dac;
        case 0x453db0u: goto label_453db0;
        case 0x453db4u: goto label_453db4;
        case 0x453db8u: goto label_453db8;
        case 0x453dbcu: goto label_453dbc;
        case 0x453dc0u: goto label_453dc0;
        case 0x453dc4u: goto label_453dc4;
        case 0x453dc8u: goto label_453dc8;
        case 0x453dccu: goto label_453dcc;
        case 0x453dd0u: goto label_453dd0;
        case 0x453dd4u: goto label_453dd4;
        case 0x453dd8u: goto label_453dd8;
        case 0x453ddcu: goto label_453ddc;
        case 0x453de0u: goto label_453de0;
        case 0x453de4u: goto label_453de4;
        case 0x453de8u: goto label_453de8;
        case 0x453decu: goto label_453dec;
        case 0x453df0u: goto label_453df0;
        case 0x453df4u: goto label_453df4;
        case 0x453df8u: goto label_453df8;
        case 0x453dfcu: goto label_453dfc;
        case 0x453e00u: goto label_453e00;
        case 0x453e04u: goto label_453e04;
        case 0x453e08u: goto label_453e08;
        case 0x453e0cu: goto label_453e0c;
        case 0x453e10u: goto label_453e10;
        case 0x453e14u: goto label_453e14;
        case 0x453e18u: goto label_453e18;
        case 0x453e1cu: goto label_453e1c;
        case 0x453e20u: goto label_453e20;
        case 0x453e24u: goto label_453e24;
        case 0x453e28u: goto label_453e28;
        case 0x453e2cu: goto label_453e2c;
        case 0x453e30u: goto label_453e30;
        case 0x453e34u: goto label_453e34;
        case 0x453e38u: goto label_453e38;
        case 0x453e3cu: goto label_453e3c;
        case 0x453e40u: goto label_453e40;
        case 0x453e44u: goto label_453e44;
        case 0x453e48u: goto label_453e48;
        case 0x453e4cu: goto label_453e4c;
        case 0x453e50u: goto label_453e50;
        case 0x453e54u: goto label_453e54;
        case 0x453e58u: goto label_453e58;
        case 0x453e5cu: goto label_453e5c;
        case 0x453e60u: goto label_453e60;
        case 0x453e64u: goto label_453e64;
        case 0x453e68u: goto label_453e68;
        case 0x453e6cu: goto label_453e6c;
        case 0x453e70u: goto label_453e70;
        case 0x453e74u: goto label_453e74;
        case 0x453e78u: goto label_453e78;
        case 0x453e7cu: goto label_453e7c;
        case 0x453e80u: goto label_453e80;
        case 0x453e84u: goto label_453e84;
        case 0x453e88u: goto label_453e88;
        case 0x453e8cu: goto label_453e8c;
        case 0x453e90u: goto label_453e90;
        case 0x453e94u: goto label_453e94;
        case 0x453e98u: goto label_453e98;
        case 0x453e9cu: goto label_453e9c;
        case 0x453ea0u: goto label_453ea0;
        case 0x453ea4u: goto label_453ea4;
        case 0x453ea8u: goto label_453ea8;
        case 0x453eacu: goto label_453eac;
        case 0x453eb0u: goto label_453eb0;
        case 0x453eb4u: goto label_453eb4;
        case 0x453eb8u: goto label_453eb8;
        case 0x453ebcu: goto label_453ebc;
        case 0x453ec0u: goto label_453ec0;
        case 0x453ec4u: goto label_453ec4;
        case 0x453ec8u: goto label_453ec8;
        case 0x453eccu: goto label_453ecc;
        case 0x453ed0u: goto label_453ed0;
        case 0x453ed4u: goto label_453ed4;
        case 0x453ed8u: goto label_453ed8;
        case 0x453edcu: goto label_453edc;
        case 0x453ee0u: goto label_453ee0;
        case 0x453ee4u: goto label_453ee4;
        case 0x453ee8u: goto label_453ee8;
        case 0x453eecu: goto label_453eec;
        case 0x453ef0u: goto label_453ef0;
        case 0x453ef4u: goto label_453ef4;
        case 0x453ef8u: goto label_453ef8;
        case 0x453efcu: goto label_453efc;
        case 0x453f00u: goto label_453f00;
        case 0x453f04u: goto label_453f04;
        case 0x453f08u: goto label_453f08;
        case 0x453f0cu: goto label_453f0c;
        case 0x453f10u: goto label_453f10;
        case 0x453f14u: goto label_453f14;
        case 0x453f18u: goto label_453f18;
        case 0x453f1cu: goto label_453f1c;
        case 0x453f20u: goto label_453f20;
        case 0x453f24u: goto label_453f24;
        case 0x453f28u: goto label_453f28;
        case 0x453f2cu: goto label_453f2c;
        case 0x453f30u: goto label_453f30;
        case 0x453f34u: goto label_453f34;
        case 0x453f38u: goto label_453f38;
        case 0x453f3cu: goto label_453f3c;
        case 0x453f40u: goto label_453f40;
        case 0x453f44u: goto label_453f44;
        case 0x453f48u: goto label_453f48;
        case 0x453f4cu: goto label_453f4c;
        case 0x453f50u: goto label_453f50;
        case 0x453f54u: goto label_453f54;
        case 0x453f58u: goto label_453f58;
        case 0x453f5cu: goto label_453f5c;
        case 0x453f60u: goto label_453f60;
        case 0x453f64u: goto label_453f64;
        case 0x453f68u: goto label_453f68;
        case 0x453f6cu: goto label_453f6c;
        case 0x453f70u: goto label_453f70;
        case 0x453f74u: goto label_453f74;
        case 0x453f78u: goto label_453f78;
        case 0x453f7cu: goto label_453f7c;
        case 0x453f80u: goto label_453f80;
        case 0x453f84u: goto label_453f84;
        case 0x453f88u: goto label_453f88;
        case 0x453f8cu: goto label_453f8c;
        case 0x453f90u: goto label_453f90;
        case 0x453f94u: goto label_453f94;
        case 0x453f98u: goto label_453f98;
        case 0x453f9cu: goto label_453f9c;
        case 0x453fa0u: goto label_453fa0;
        case 0x453fa4u: goto label_453fa4;
        case 0x453fa8u: goto label_453fa8;
        case 0x453facu: goto label_453fac;
        case 0x453fb0u: goto label_453fb0;
        case 0x453fb4u: goto label_453fb4;
        case 0x453fb8u: goto label_453fb8;
        case 0x453fbcu: goto label_453fbc;
        case 0x453fc0u: goto label_453fc0;
        case 0x453fc4u: goto label_453fc4;
        case 0x453fc8u: goto label_453fc8;
        case 0x453fccu: goto label_453fcc;
        case 0x453fd0u: goto label_453fd0;
        case 0x453fd4u: goto label_453fd4;
        case 0x453fd8u: goto label_453fd8;
        case 0x453fdcu: goto label_453fdc;
        case 0x453fe0u: goto label_453fe0;
        case 0x453fe4u: goto label_453fe4;
        case 0x453fe8u: goto label_453fe8;
        case 0x453fecu: goto label_453fec;
        case 0x453ff0u: goto label_453ff0;
        case 0x453ff4u: goto label_453ff4;
        case 0x453ff8u: goto label_453ff8;
        case 0x453ffcu: goto label_453ffc;
        case 0x454000u: goto label_454000;
        case 0x454004u: goto label_454004;
        case 0x454008u: goto label_454008;
        case 0x45400cu: goto label_45400c;
        case 0x454010u: goto label_454010;
        case 0x454014u: goto label_454014;
        case 0x454018u: goto label_454018;
        case 0x45401cu: goto label_45401c;
        case 0x454020u: goto label_454020;
        case 0x454024u: goto label_454024;
        case 0x454028u: goto label_454028;
        case 0x45402cu: goto label_45402c;
        case 0x454030u: goto label_454030;
        case 0x454034u: goto label_454034;
        case 0x454038u: goto label_454038;
        case 0x45403cu: goto label_45403c;
        case 0x454040u: goto label_454040;
        case 0x454044u: goto label_454044;
        case 0x454048u: goto label_454048;
        case 0x45404cu: goto label_45404c;
        default: break;
    }

    ctx->pc = 0x453ba0u;

label_453ba0:
    // 0x453ba0: 0x27bdfc80  addiu       $sp, $sp, -0x380
    ctx->pc = 0x453ba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966400));
label_453ba4:
    // 0x453ba4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x453ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_453ba8:
    // 0x453ba8: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x453ba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_453bac:
    // 0x453bac: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x453bacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_453bb0:
    // 0x453bb0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x453bb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_453bb4:
    // 0x453bb4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x453bb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_453bb8:
    // 0x453bb8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x453bb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_453bbc:
    // 0x453bbc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x453bbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_453bc0:
    // 0x453bc0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x453bc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_453bc4:
    // 0x453bc4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x453bc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_453bc8:
    // 0x453bc8: 0xafa40350  sw          $a0, 0x350($sp)
    ctx->pc = 0x453bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 848), GPR_U32(ctx, 4));
label_453bcc:
    // 0x453bcc: 0xafa50360  sw          $a1, 0x360($sp)
    ctx->pc = 0x453bccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 864), GPR_U32(ctx, 5));
label_453bd0:
    // 0x453bd0: 0xafa60370  sw          $a2, 0x370($sp)
    ctx->pc = 0x453bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 880), GPR_U32(ctx, 6));
label_453bd4:
    // 0x453bd4: 0x8fa40360  lw          $a0, 0x360($sp)
    ctx->pc = 0x453bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 864)));
label_453bd8:
    // 0x453bd8: 0xc042514  jal         func_109450
label_453bdc:
    if (ctx->pc == 0x453BDCu) {
        ctx->pc = 0x453BE0u;
        goto label_453be0;
    }
    ctx->pc = 0x453BD8u;
    SET_GPR_U32(ctx, 31, 0x453BE0u);
    ctx->pc = 0x109450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109450u, 0x453BD8u, 0x453BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x453BE0u;
label_453be0:
    // 0x453be0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x453be0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_453be4:
    // 0x453be4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x453be4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_453be8:
    // 0x453be8: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_453bec:
    if (ctx->pc == 0x453BECu) {
        ctx->pc = 0x453BF0u;
        goto label_453bf0;
    }
    ctx->pc = 0x453BE8u;
    {
        const bool branch_taken_0x453be8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x453be8) {
            ctx->pc = 0x453C98u;
            goto label_453c98;
        }
    }
    ctx->pc = 0x453BF0u;
label_453bf0:
    // 0x453bf0: 0x8f82b030  lw          $v0, -0x4FD0($gp)
    ctx->pc = 0x453bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946864)));
label_453bf4:
    // 0x453bf4: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_453bf8:
    if (ctx->pc == 0x453BF8u) {
        ctx->pc = 0x453BFCu;
        goto label_453bfc;
    }
    ctx->pc = 0x453BF4u;
    {
        const bool branch_taken_0x453bf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x453bf4) {
            ctx->pc = 0x453C98u;
            goto label_453c98;
        }
    }
    ctx->pc = 0x453BFCu;
label_453bfc:
    // 0x453bfc: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x453bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_453c00:
    // 0x453c00: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x453c00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_453c04:
    // 0x453c04: 0x27a60340  addiu       $a2, $sp, 0x340
    ctx->pc = 0x453c04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 832));
label_453c08:
    // 0x453c08: 0xc115ee8  jal         func_457BA0
label_453c0c:
    if (ctx->pc == 0x453C0Cu) {
        ctx->pc = 0x453C10u;
        goto label_453c10;
    }
    ctx->pc = 0x453C08u;
    SET_GPR_U32(ctx, 31, 0x453C10u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x453C08u, 0x453C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x453C10u;
label_453c10:
    // 0x453c10: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_453c14:
    if (ctx->pc == 0x453C14u) {
        ctx->pc = 0x453C18u;
        goto label_453c18;
    }
    ctx->pc = 0x453C10u;
    {
        const bool branch_taken_0x453c10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x453c10) {
            ctx->pc = 0x453C98u;
            goto label_453c98;
        }
    }
    ctx->pc = 0x453C18u;
label_453c18:
    // 0x453c18: 0x8fa20348  lw          $v0, 0x348($sp)
    ctx->pc = 0x453c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 840)));
label_453c1c:
    // 0x453c1c: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_453c20:
    if (ctx->pc == 0x453C20u) {
        ctx->pc = 0x453C24u;
        goto label_453c24;
    }
    ctx->pc = 0x453C1Cu;
    {
        const bool branch_taken_0x453c1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x453c1c) {
            ctx->pc = 0x453C98u;
            goto label_453c98;
        }
    }
    ctx->pc = 0x453C24u;
label_453c24:
    // 0x453c24: 0x27a401d0  addiu       $a0, $sp, 0x1D0
    ctx->pc = 0x453c24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
label_453c28:
    // 0x453c28: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x453c28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_453c2c:
    // 0x453c2c: 0x8fa60344  lw          $a2, 0x344($sp)
    ctx->pc = 0x453c2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 836)));
label_453c30:
    // 0x453c30: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x453c30u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_453c34:
    // 0x453c34: 0x24e7de80  addiu       $a3, $a3, -0x2180
    ctx->pc = 0x453c34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294958720));
label_453c38:
    // 0x453c38: 0x24080114  addiu       $t0, $zero, 0x114
    ctx->pc = 0x453c38u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 276));
label_453c3c:
    // 0x453c3c: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x453c3cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_453c40:
    // 0x453c40: 0x2529de90  addiu       $t1, $t1, -0x2170
    ctx->pc = 0x453c40u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294958736));
label_453c44:
    // 0x453c44: 0xc113940  jal         func_44E500
label_453c48:
    if (ctx->pc == 0x453C48u) {
        ctx->pc = 0x453C4Cu;
        goto label_453c4c;
    }
    ctx->pc = 0x453C44u;
    SET_GPR_U32(ctx, 31, 0x453C4Cu);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x453C44u, 0x453C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x453C4Cu;
label_453c4c:
    // 0x453c4c: 0x27a401d0  addiu       $a0, $sp, 0x1D0
    ctx->pc = 0x453c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
label_453c50:
    // 0x453c50: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x453c50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_453c54:
    // 0x453c54: 0x24a5e060  addiu       $a1, $a1, -0x1FA0
    ctx->pc = 0x453c54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959200));
label_453c58:
    // 0x453c58: 0xc115c24  jal         func_457090
label_453c5c:
    if (ctx->pc == 0x453C5Cu) {
        ctx->pc = 0x453C60u;
        goto label_453c60;
    }
    ctx->pc = 0x453C58u;
    SET_GPR_U32(ctx, 31, 0x453C60u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x453C58u, 0x453C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x453C60u;
label_453c60:
    // 0x453c60: 0x27a401d0  addiu       $a0, $sp, 0x1D0
    ctx->pc = 0x453c60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
label_453c64:
    // 0x453c64: 0x8fa20348  lw          $v0, 0x348($sp)
    ctx->pc = 0x453c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 840)));
label_453c68:
    // 0x453c68: 0x40f809  jalr        $v0
label_453c6c:
    if (ctx->pc == 0x453C6Cu) {
        ctx->pc = 0x453C70u;
        goto label_453c70;
    }
    ctx->pc = 0x453C68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x453C70u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x453C68u, 0x453C70u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x453C70u;
label_453c70:
    // 0x453c70: 0xaf82b030  sw          $v0, -0x4FD0($gp)
    ctx->pc = 0x453c70u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946864), GPR_U32(ctx, 2));
label_453c74:
    // 0x453c74: 0x8fa201d0  lw          $v0, 0x1D0($sp)
    ctx->pc = 0x453c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
label_453c78:
    // 0x453c78: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_453c7c:
    if (ctx->pc == 0x453C7Cu) {
        ctx->pc = 0x453C80u;
        goto label_453c80;
    }
    ctx->pc = 0x453C78u;
    {
        const bool branch_taken_0x453c78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x453c78) {
            ctx->pc = 0x453C88u;
            goto label_453c88;
        }
    }
    ctx->pc = 0x453C80u;
label_453c80:
    // 0x453c80: 0xd  break       0
    ctx->pc = 0x453c80u;
    runtime->handleBreak(rdram, ctx);
label_453c84:
    // 0x453c84: 0x0  nop
    ctx->pc = 0x453c84u;
    // NOP
label_453c88:
    // 0x453c88: 0x27a401d0  addiu       $a0, $sp, 0x1D0
    ctx->pc = 0x453c88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
label_453c8c:
    // 0x453c8c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x453c8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_453c90:
    // 0x453c90: 0xc11392c  jal         func_44E4B0
label_453c94:
    if (ctx->pc == 0x453C94u) {
        ctx->pc = 0x453C98u;
        goto label_453c98;
    }
    ctx->pc = 0x453C90u;
    SET_GPR_U32(ctx, 31, 0x453C98u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x453C90u, 0x453C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x453C98u;
label_453c98:
    // 0x453c98: 0x8fa20370  lw          $v0, 0x370($sp)
    ctx->pc = 0x453c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 880)));
label_453c9c:
    // 0x453c9c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x453c9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_453ca0:
    // 0x453ca0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x453ca0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_453ca4:
    // 0x453ca4: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
label_453ca8:
    if (ctx->pc == 0x453CA8u) {
        ctx->pc = 0x453CACu;
        goto label_453cac;
    }
    ctx->pc = 0x453CA4u;
    {
        const bool branch_taken_0x453ca4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x453ca4) {
            ctx->pc = 0x453D50u;
            goto label_453d50;
        }
    }
    ctx->pc = 0x453CACu;
label_453cac:
    // 0x453cac: 0x8f82b034  lw          $v0, -0x4FCC($gp)
    ctx->pc = 0x453cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946868)));
label_453cb0:
    // 0x453cb0: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_453cb4:
    if (ctx->pc == 0x453CB4u) {
        ctx->pc = 0x453CB8u;
        goto label_453cb8;
    }
    ctx->pc = 0x453CB0u;
    {
        const bool branch_taken_0x453cb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x453cb0) {
            ctx->pc = 0x453D50u;
            goto label_453d50;
        }
    }
    ctx->pc = 0x453CB8u;
label_453cb8:
    // 0x453cb8: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x453cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_453cbc:
    // 0x453cbc: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x453cbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_453cc0:
    // 0x453cc0: 0x27a60330  addiu       $a2, $sp, 0x330
    ctx->pc = 0x453cc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 816));
label_453cc4:
    // 0x453cc4: 0xc115ee8  jal         func_457BA0
label_453cc8:
    if (ctx->pc == 0x453CC8u) {
        ctx->pc = 0x453CCCu;
        goto label_453ccc;
    }
    ctx->pc = 0x453CC4u;
    SET_GPR_U32(ctx, 31, 0x453CCCu);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x453CC4u, 0x453CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x453CCCu;
label_453ccc:
    // 0x453ccc: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_453cd0:
    if (ctx->pc == 0x453CD0u) {
        ctx->pc = 0x453CD4u;
        goto label_453cd4;
    }
    ctx->pc = 0x453CCCu;
    {
        const bool branch_taken_0x453ccc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x453ccc) {
            ctx->pc = 0x453D50u;
            goto label_453d50;
        }
    }
    ctx->pc = 0x453CD4u;
label_453cd4:
    // 0x453cd4: 0x8fa20338  lw          $v0, 0x338($sp)
    ctx->pc = 0x453cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 824)));
label_453cd8:
    // 0x453cd8: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_453cdc:
    if (ctx->pc == 0x453CDCu) {
        ctx->pc = 0x453CE0u;
        goto label_453ce0;
    }
    ctx->pc = 0x453CD8u;
    {
        const bool branch_taken_0x453cd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x453cd8) {
            ctx->pc = 0x453D50u;
            goto label_453d50;
        }
    }
    ctx->pc = 0x453CE0u;
label_453ce0:
    // 0x453ce0: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x453ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_453ce4:
    // 0x453ce4: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x453ce4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_453ce8:
    // 0x453ce8: 0x8fa60334  lw          $a2, 0x334($sp)
    ctx->pc = 0x453ce8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 820)));
label_453cec:
    // 0x453cec: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x453cecu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_453cf0:
    // 0x453cf0: 0x24e7de80  addiu       $a3, $a3, -0x2180
    ctx->pc = 0x453cf0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294958720));
label_453cf4:
    // 0x453cf4: 0x24080115  addiu       $t0, $zero, 0x115
    ctx->pc = 0x453cf4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 277));
label_453cf8:
    // 0x453cf8: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x453cf8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_453cfc:
    // 0x453cfc: 0x2529e090  addiu       $t1, $t1, -0x1F70
    ctx->pc = 0x453cfcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294959248));
label_453d00:
    // 0x453d00: 0xc113940  jal         func_44E500
label_453d04:
    if (ctx->pc == 0x453D04u) {
        ctx->pc = 0x453D08u;
        goto label_453d08;
    }
    ctx->pc = 0x453D00u;
    SET_GPR_U32(ctx, 31, 0x453D08u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x453D00u, 0x453D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x453D08u;
label_453d08:
    // 0x453d08: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x453d08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_453d0c:
    // 0x453d0c: 0x2785b00c  addiu       $a1, $gp, -0x4FF4
    ctx->pc = 0x453d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294946828));
label_453d10:
    // 0x453d10: 0xc115c24  jal         func_457090
label_453d14:
    if (ctx->pc == 0x453D14u) {
        ctx->pc = 0x453D18u;
        goto label_453d18;
    }
    ctx->pc = 0x453D10u;
    SET_GPR_U32(ctx, 31, 0x453D18u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x453D10u, 0x453D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x453D18u;
label_453d18:
    // 0x453d18: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x453d18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_453d1c:
    // 0x453d1c: 0x8fa20338  lw          $v0, 0x338($sp)
    ctx->pc = 0x453d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 824)));
label_453d20:
    // 0x453d20: 0x40f809  jalr        $v0
label_453d24:
    if (ctx->pc == 0x453D24u) {
        ctx->pc = 0x453D28u;
        goto label_453d28;
    }
    ctx->pc = 0x453D20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x453D28u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x453D20u, 0x453D28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x453D28u;
label_453d28:
    // 0x453d28: 0xaf82b034  sw          $v0, -0x4FCC($gp)
    ctx->pc = 0x453d28u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946868), GPR_U32(ctx, 2));
label_453d2c:
    // 0x453d2c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x453d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_453d30:
    // 0x453d30: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_453d34:
    if (ctx->pc == 0x453D34u) {
        ctx->pc = 0x453D38u;
        goto label_453d38;
    }
    ctx->pc = 0x453D30u;
    {
        const bool branch_taken_0x453d30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x453d30) {
            ctx->pc = 0x453D40u;
            goto label_453d40;
        }
    }
    ctx->pc = 0x453D38u;
label_453d38:
    // 0x453d38: 0xd  break       0
    ctx->pc = 0x453d38u;
    runtime->handleBreak(rdram, ctx);
label_453d3c:
    // 0x453d3c: 0x0  nop
    ctx->pc = 0x453d3cu;
    // NOP
label_453d40:
    // 0x453d40: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x453d40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_453d44:
    // 0x453d44: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x453d44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_453d48:
    // 0x453d48: 0xc11392c  jal         func_44E4B0
label_453d4c:
    if (ctx->pc == 0x453D4Cu) {
        ctx->pc = 0x453D50u;
        goto label_453d50;
    }
    ctx->pc = 0x453D48u;
    SET_GPR_U32(ctx, 31, 0x453D50u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x453D48u, 0x453D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x453D50u;
label_453d50:
    // 0x453d50: 0x27a40320  addiu       $a0, $sp, 0x320
    ctx->pc = 0x453d50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 800));
label_453d54:
    // 0x453d54: 0xc041b48  jal         func_106D20
label_453d58:
    if (ctx->pc == 0x453D58u) {
        ctx->pc = 0x453D5Cu;
        goto label_453d5c;
    }
    ctx->pc = 0x453D54u;
    SET_GPR_U32(ctx, 31, 0x453D5Cu);
    ctx->pc = 0x106D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D20u, 0x453D54u, 0x453D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x453D5Cu;
label_453d5c:
    // 0x453d5c: 0x27a40310  addiu       $a0, $sp, 0x310
    ctx->pc = 0x453d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 784));
label_453d60:
    // 0x453d60: 0xc041b48  jal         func_106D20
label_453d64:
    if (ctx->pc == 0x453D64u) {
        ctx->pc = 0x453D68u;
        goto label_453d68;
    }
    ctx->pc = 0x453D60u;
    SET_GPR_U32(ctx, 31, 0x453D68u);
    ctx->pc = 0x106D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D20u, 0x453D60u, 0x453D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x453D68u;
label_453d68:
    // 0x453d68: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x453d68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_453d6c:
    // 0x453d6c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x453d6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_453d70:
    // 0x453d70: 0x27a40300  addiu       $a0, $sp, 0x300
    ctx->pc = 0x453d70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
label_453d74:
    // 0x453d74: 0x2785b020  addiu       $a1, $gp, -0x4FE0
    ctx->pc = 0x453d74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294946848));
label_453d78:
    // 0x453d78: 0xc040304  jal         func_100C10
label_453d7c:
    if (ctx->pc == 0x453D7Cu) {
        ctx->pc = 0x453D80u;
        goto label_453d80;
    }
    ctx->pc = 0x453D78u;
    SET_GPR_U32(ctx, 31, 0x453D80u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x453D78u, 0x453D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x453D80u;
label_453d80:
    // 0x453d80: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x453d80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_453d84:
    // 0x453d84: 0x8fa50360  lw          $a1, 0x360($sp)
    ctx->pc = 0x453d84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 864)));
label_453d88:
    // 0x453d88: 0x27a60300  addiu       $a2, $sp, 0x300
    ctx->pc = 0x453d88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
label_453d8c:
    // 0x453d8c: 0xc119d74  jal         func_4675D0
label_453d90:
    if (ctx->pc == 0x453D90u) {
        ctx->pc = 0x453D94u;
        goto label_453d94;
    }
    ctx->pc = 0x453D8Cu;
    SET_GPR_U32(ctx, 31, 0x453D94u);
    ctx->pc = 0x4675D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4675D0u, 0x453D8Cu, 0x453D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x453D94u;
label_453d94:
    // 0x453d94: 0x27a40300  addiu       $a0, $sp, 0x300
    ctx->pc = 0x453d94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
label_453d98:
    // 0x453d98: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x453d98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_453d9c:
    // 0x453d9c: 0xc0402d4  jal         func_100B50
label_453da0:
    if (ctx->pc == 0x453DA0u) {
        ctx->pc = 0x453DA4u;
        goto label_453da4;
    }
    ctx->pc = 0x453D9Cu;
    SET_GPR_U32(ctx, 31, 0x453DA4u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x453D9Cu, 0x453DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x453DA4u;
label_453da4:
    // 0x453da4: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x453da4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_453da8:
    // 0x453da8: 0xc119db4  jal         func_4676D0
label_453dac:
    if (ctx->pc == 0x453DACu) {
        ctx->pc = 0x453DB0u;
        goto label_453db0;
    }
    ctx->pc = 0x453DA8u;
    SET_GPR_U32(ctx, 31, 0x453DB0u);
    ctx->pc = 0x4676D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4676D0u, 0x453DA8u, 0x453DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x453DB0u;
label_453db0:
    // 0x453db0: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
label_453db4:
    if (ctx->pc == 0x453DB4u) {
        ctx->pc = 0x453DB8u;
        goto label_453db8;
    }
    ctx->pc = 0x453DB0u;
    {
        const bool branch_taken_0x453db0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x453db0) {
            ctx->pc = 0x453E0Cu;
            goto label_453e0c;
        }
    }
    ctx->pc = 0x453DB8u;
label_453db8:
    // 0x453db8: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x453db8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
label_453dbc:
    // 0x453dbc: 0x2484e0b0  addiu       $a0, $a0, -0x1F50
    ctx->pc = 0x453dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959280));
label_453dc0:
    // 0x453dc0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x453dc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_453dc4:
    // 0x453dc4: 0xc115ae4  jal         func_456B90
label_453dc8:
    if (ctx->pc == 0x453DC8u) {
        ctx->pc = 0x453DCCu;
        goto label_453dcc;
    }
    ctx->pc = 0x453DC4u;
    SET_GPR_U32(ctx, 31, 0x453DCCu);
    ctx->pc = 0x456B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x456B90u, 0x453DC4u, 0x453DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x453DCCu;
label_453dcc:
    // 0x453dcc: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x453dccu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_453dd0:
    // 0x453dd0: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x453dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_453dd4:
    // 0x453dd4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x453dd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_453dd8:
    // 0x453dd8: 0xc119d90  jal         func_467640
label_453ddc:
    if (ctx->pc == 0x453DDCu) {
        ctx->pc = 0x453DE0u;
        goto label_453de0;
    }
    ctx->pc = 0x453DD8u;
    SET_GPR_U32(ctx, 31, 0x453DE0u);
    ctx->pc = 0x467640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467640u, 0x453DD8u, 0x453DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x453DE0u;
label_453de0:
    // 0x453de0: 0x27a40310  addiu       $a0, $sp, 0x310
    ctx->pc = 0x453de0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 784));
label_453de4:
    // 0x453de4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x453de4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_453de8:
    // 0x453de8: 0xc0402d4  jal         func_100B50
label_453dec:
    if (ctx->pc == 0x453DECu) {
        ctx->pc = 0x453DF0u;
        goto label_453df0;
    }
    ctx->pc = 0x453DE8u;
    SET_GPR_U32(ctx, 31, 0x453DF0u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x453DE8u, 0x453DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x453DF0u;
label_453df0:
    // 0x453df0: 0x27a40320  addiu       $a0, $sp, 0x320
    ctx->pc = 0x453df0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 800));
label_453df4:
    // 0x453df4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x453df4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_453df8:
    // 0x453df8: 0xc0402d4  jal         func_100B50
label_453dfc:
    if (ctx->pc == 0x453DFCu) {
        ctx->pc = 0x453E00u;
        goto label_453e00;
    }
    ctx->pc = 0x453DF8u;
    SET_GPR_U32(ctx, 31, 0x453E00u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x453DF8u, 0x453E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x453E00u;
label_453e00:
    // 0x453e00: 0x2e0102d  daddu       $v0, $s7, $zero
    ctx->pc = 0x453e00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_453e04:
    // 0x453e04: 0x10000083  b           . + 4 + (0x83 << 2)
label_453e08:
    if (ctx->pc == 0x453E08u) {
        ctx->pc = 0x453E0Cu;
        goto label_453e0c;
    }
    ctx->pc = 0x453E04u;
    {
        const bool branch_taken_0x453e04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x453e04) {
            ctx->pc = 0x454014u;
            goto label_454014;
        }
    }
    ctx->pc = 0x453E0Cu;
label_453e0c:
    // 0x453e0c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x453e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_453e10:
    // 0x453e10: 0x27a50320  addiu       $a1, $sp, 0x320
    ctx->pc = 0x453e10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 800));
label_453e14:
    // 0x453e14: 0xc119ecc  jal         func_467B30
label_453e18:
    if (ctx->pc == 0x453E18u) {
        ctx->pc = 0x453E1Cu;
        goto label_453e1c;
    }
    ctx->pc = 0x453E14u;
    SET_GPR_U32(ctx, 31, 0x453E1Cu);
    ctx->pc = 0x467B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467B30u, 0x453E14u, 0x453E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x453E1Cu;
label_453e1c:
    // 0x453e1c: 0x27a402f0  addiu       $a0, $sp, 0x2F0
    ctx->pc = 0x453e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 752));
label_453e20:
    // 0x453e20: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x453e20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_453e24:
    // 0x453e24: 0x24a5e0e8  addiu       $a1, $a1, -0x1F18
    ctx->pc = 0x453e24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959336));
label_453e28:
    // 0x453e28: 0xc040304  jal         func_100C10
label_453e2c:
    if (ctx->pc == 0x453E2Cu) {
        ctx->pc = 0x453E30u;
        goto label_453e30;
    }
    ctx->pc = 0x453E28u;
    SET_GPR_U32(ctx, 31, 0x453E30u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x453E28u, 0x453E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x453E30u;
label_453e30:
    // 0x453e30: 0x27a40320  addiu       $a0, $sp, 0x320
    ctx->pc = 0x453e30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 800));
label_453e34:
    // 0x453e34: 0x27a502f0  addiu       $a1, $sp, 0x2F0
    ctx->pc = 0x453e34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 752));
label_453e38:
    // 0x453e38: 0xc05c618  jal         func_171860
label_453e3c:
    if (ctx->pc == 0x453E3Cu) {
        ctx->pc = 0x453E40u;
        goto label_453e40;
    }
    ctx->pc = 0x453E38u;
    SET_GPR_U32(ctx, 31, 0x453E40u);
    ctx->pc = 0x171860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171860u, 0x453E38u, 0x453E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x453E40u;
label_453e40:
    // 0x453e40: 0x401027  not         $v0, $v0
    ctx->pc = 0x453e40u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 2) | GPR_U64(ctx, 0)));
label_453e44:
    // 0x453e44: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x453e44u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_453e48:
    // 0x453e48: 0x305400ff  andi        $s4, $v0, 0xFF
    ctx->pc = 0x453e48u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_453e4c:
    // 0x453e4c: 0x27a402f0  addiu       $a0, $sp, 0x2F0
    ctx->pc = 0x453e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 752));
label_453e50:
    // 0x453e50: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x453e50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_453e54:
    // 0x453e54: 0xc0402d4  jal         func_100B50
label_453e58:
    if (ctx->pc == 0x453E58u) {
        ctx->pc = 0x453E5Cu;
        goto label_453e5c;
    }
    ctx->pc = 0x453E54u;
    SET_GPR_U32(ctx, 31, 0x453E5Cu);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x453E54u, 0x453E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x453E5Cu;
label_453e5c:
    // 0x453e5c: 0x12800059  beqz        $s4, . + 4 + (0x59 << 2)
label_453e60:
    if (ctx->pc == 0x453E60u) {
        ctx->pc = 0x453E64u;
        goto label_453e64;
    }
    ctx->pc = 0x453E5Cu;
    {
        const bool branch_taken_0x453e5c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x453e5c) {
            ctx->pc = 0x453FC4u;
            goto label_453fc4;
        }
    }
    ctx->pc = 0x453E64u;
label_453e64:
    // 0x453e64: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x453e64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
label_453e68:
    // 0x453e68: 0x2484e100  addiu       $a0, $a0, -0x1F00
    ctx->pc = 0x453e68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959360));
label_453e6c:
    // 0x453e6c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x453e6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_453e70:
    // 0x453e70: 0xc115ae4  jal         func_456B90
label_453e74:
    if (ctx->pc == 0x453E74u) {
        ctx->pc = 0x453E78u;
        goto label_453e78;
    }
    ctx->pc = 0x453E70u;
    SET_GPR_U32(ctx, 31, 0x453E78u);
    ctx->pc = 0x456B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x456B90u, 0x453E70u, 0x453E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x453E78u;
label_453e78:
    // 0x453e78: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x453e78u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_453e7c:
    // 0x453e7c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x453e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_453e80:
    // 0x453e80: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x453e80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_453e84:
    // 0x453e84: 0xc119d90  jal         func_467640
label_453e88:
    if (ctx->pc == 0x453E88u) {
        ctx->pc = 0x453E8Cu;
        goto label_453e8c;
    }
    ctx->pc = 0x453E84u;
    SET_GPR_U32(ctx, 31, 0x453E8Cu);
    ctx->pc = 0x467640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467640u, 0x453E84u, 0x453E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x453E8Cu;
label_453e8c:
    // 0x453e8c: 0x27a40310  addiu       $a0, $sp, 0x310
    ctx->pc = 0x453e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 784));
label_453e90:
    // 0x453e90: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x453e90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_453e94:
    // 0x453e94: 0xc0402d4  jal         func_100B50
label_453e98:
    if (ctx->pc == 0x453E98u) {
        ctx->pc = 0x453E9Cu;
        goto label_453e9c;
    }
    ctx->pc = 0x453E94u;
    SET_GPR_U32(ctx, 31, 0x453E9Cu);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x453E94u, 0x453E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x453E9Cu;
label_453e9c:
    // 0x453e9c: 0x27a40320  addiu       $a0, $sp, 0x320
    ctx->pc = 0x453e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 800));
label_453ea0:
    // 0x453ea0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x453ea0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_453ea4:
    // 0x453ea4: 0xc0402d4  jal         func_100B50
label_453ea8:
    if (ctx->pc == 0x453EA8u) {
        ctx->pc = 0x453EACu;
        goto label_453eac;
    }
    ctx->pc = 0x453EA4u;
    SET_GPR_U32(ctx, 31, 0x453EACu);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x453EA4u, 0x453EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x453EACu;
label_453eac:
    // 0x453eac: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x453eacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_453eb0:
    // 0x453eb0: 0x10000058  b           . + 4 + (0x58 << 2)
label_453eb4:
    if (ctx->pc == 0x453EB4u) {
        ctx->pc = 0x453EB8u;
        goto label_453eb8;
    }
    ctx->pc = 0x453EB0u;
    {
        const bool branch_taken_0x453eb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x453eb0) {
            ctx->pc = 0x454014u;
            goto label_454014;
        }
    }
    ctx->pc = 0x453EB8u;
label_453eb8:
    // 0x453eb8: 0x27a40310  addiu       $a0, $sp, 0x310
    ctx->pc = 0x453eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 784));
label_453ebc:
    // 0x453ebc: 0xc041b38  jal         func_106CE0
label_453ec0:
    if (ctx->pc == 0x453EC0u) {
        ctx->pc = 0x453EC4u;
        goto label_453ec4;
    }
    ctx->pc = 0x453EBCu;
    SET_GPR_U32(ctx, 31, 0x453EC4u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x453EBCu, 0x453EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x453EC4u;
label_453ec4:
    // 0x453ec4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x453ec4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_453ec8:
    // 0x453ec8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x453ec8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_453ecc:
    // 0x453ecc: 0xc115ae4  jal         func_456B90
label_453ed0:
    if (ctx->pc == 0x453ED0u) {
        ctx->pc = 0x453ED4u;
        goto label_453ed4;
    }
    ctx->pc = 0x453ECCu;
    SET_GPR_U32(ctx, 31, 0x453ED4u);
    ctx->pc = 0x456B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x456B90u, 0x453ECCu, 0x453ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x453ED4u;
label_453ed4:
    // 0x453ed4: 0x8fa40350  lw          $a0, 0x350($sp)
    ctx->pc = 0x453ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 848)));
label_453ed8:
    // 0x453ed8: 0x27a50310  addiu       $a1, $sp, 0x310
    ctx->pc = 0x453ed8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 784));
label_453edc:
    // 0x453edc: 0xc115034  jal         func_4540D0
label_453ee0:
    if (ctx->pc == 0x453EE0u) {
        ctx->pc = 0x453EE4u;
        goto label_453ee4;
    }
    ctx->pc = 0x453EDCu;
    SET_GPR_U32(ctx, 31, 0x453EE4u);
    ctx->pc = 0x4540D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4540D0u, 0x453EDCu, 0x453EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x453EE4u;
label_453ee4:
    // 0x453ee4: 0x14400037  bnez        $v0, . + 4 + (0x37 << 2)
label_453ee8:
    if (ctx->pc == 0x453EE8u) {
        ctx->pc = 0x453EECu;
        goto label_453eec;
    }
    ctx->pc = 0x453EE4u;
    {
        const bool branch_taken_0x453ee4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x453ee4) {
            ctx->pc = 0x453FC4u;
            goto label_453fc4;
        }
    }
    ctx->pc = 0x453EECu;
label_453eec:
    // 0x453eec: 0x8fa40350  lw          $a0, 0x350($sp)
    ctx->pc = 0x453eecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 848)));
label_453ef0:
    // 0x453ef0: 0x27a50310  addiu       $a1, $sp, 0x310
    ctx->pc = 0x453ef0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 784));
label_453ef4:
    // 0x453ef4: 0xc115054  jal         func_454150
label_453ef8:
    if (ctx->pc == 0x453EF8u) {
        ctx->pc = 0x453EFCu;
        goto label_453efc;
    }
    ctx->pc = 0x453EF4u;
    SET_GPR_U32(ctx, 31, 0x453EFCu);
    ctx->pc = 0x454150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x454150u, 0x453EF4u, 0x453EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x453EFCu;
label_453efc:
    // 0x453efc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x453efcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_453f00:
    // 0x453f00: 0x12000014  beqz        $s0, . + 4 + (0x14 << 2)
label_453f04:
    if (ctx->pc == 0x453F04u) {
        ctx->pc = 0x453F08u;
        goto label_453f08;
    }
    ctx->pc = 0x453F00u;
    {
        const bool branch_taken_0x453f00 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x453f00) {
            ctx->pc = 0x453F54u;
            goto label_453f54;
        }
    }
    ctx->pc = 0x453F08u;
label_453f08:
    // 0x453f08: 0x8fa40370  lw          $a0, 0x370($sp)
    ctx->pc = 0x453f08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 880)));
label_453f0c:
    // 0x453f0c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x453f0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_453f10:
    // 0x453f10: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x453f10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_453f14:
    // 0x453f14: 0xc113fbc  jal         func_44FEF0
label_453f18:
    if (ctx->pc == 0x453F18u) {
        ctx->pc = 0x453F1Cu;
        goto label_453f1c;
    }
    ctx->pc = 0x453F14u;
    SET_GPR_U32(ctx, 31, 0x453F1Cu);
    ctx->pc = 0x44FEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44FEF0u, 0x453F14u, 0x453F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x453F1Cu;
label_453f1c:
    // 0x453f1c: 0x8fa40370  lw          $a0, 0x370($sp)
    ctx->pc = 0x453f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 880)));
label_453f20:
    // 0x453f20: 0xc113f40  jal         func_44FD00
label_453f24:
    if (ctx->pc == 0x453F24u) {
        ctx->pc = 0x453F28u;
        goto label_453f28;
    }
    ctx->pc = 0x453F20u;
    SET_GPR_U32(ctx, 31, 0x453F28u);
    ctx->pc = 0x44FD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44FD00u, 0x453F20u, 0x453F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x453F28u;
label_453f28:
    // 0x453f28: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x453f28u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_453f2c:
    // 0x453f2c: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
label_453f30:
    if (ctx->pc == 0x453F30u) {
        ctx->pc = 0x453F34u;
        goto label_453f34;
    }
    ctx->pc = 0x453F2Cu;
    {
        const bool branch_taken_0x453f2c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x453f2c) {
            ctx->pc = 0x453F40u;
            goto label_453f40;
        }
    }
    ctx->pc = 0x453F34u;
label_453f34:
    // 0x453f34: 0x2672ffff  addiu       $s2, $s3, -0x1
    ctx->pc = 0x453f34u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_453f38:
    // 0x453f38: 0x10000002  b           . + 4 + (0x2 << 2)
label_453f3c:
    if (ctx->pc == 0x453F3Cu) {
        ctx->pc = 0x453F40u;
        goto label_453f40;
    }
    ctx->pc = 0x453F38u;
    {
        const bool branch_taken_0x453f38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x453f38) {
            ctx->pc = 0x453F44u;
            goto label_453f44;
        }
    }
    ctx->pc = 0x453F40u;
label_453f40:
    // 0x453f40: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x453f40u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_453f44:
    // 0x453f44: 0xae12000c  sw          $s2, 0xC($s0)
    ctx->pc = 0x453f44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 18));
label_453f48:
    // 0x453f48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x453f48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_453f4c:
    // 0x453f4c: 0xc115aac  jal         func_456AB0
label_453f50:
    if (ctx->pc == 0x453F50u) {
        ctx->pc = 0x453F54u;
        goto label_453f54;
    }
    ctx->pc = 0x453F4Cu;
    SET_GPR_U32(ctx, 31, 0x453F54u);
    ctx->pc = 0x456AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x456AB0u, 0x453F4Cu, 0x453F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x453F54u;
label_453f54:
    // 0x453f54: 0x8fa40350  lw          $a0, 0x350($sp)
    ctx->pc = 0x453f54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 848)));
label_453f58:
    // 0x453f58: 0x27a50310  addiu       $a1, $sp, 0x310
    ctx->pc = 0x453f58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 784));
label_453f5c:
    // 0x453f5c: 0xc1150a0  jal         func_454280
label_453f60:
    if (ctx->pc == 0x453F60u) {
        ctx->pc = 0x453F64u;
        goto label_453f64;
    }
    ctx->pc = 0x453F5Cu;
    SET_GPR_U32(ctx, 31, 0x453F64u);
    ctx->pc = 0x454280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x454280u, 0x453F5Cu, 0x453F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x453F64u;
label_453f64:
    // 0x453f64: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x453f64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_453f68:
    // 0x453f68: 0x12200016  beqz        $s1, . + 4 + (0x16 << 2)
label_453f6c:
    if (ctx->pc == 0x453F6Cu) {
        ctx->pc = 0x453F70u;
        goto label_453f70;
    }
    ctx->pc = 0x453F68u;
    {
        const bool branch_taken_0x453f68 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x453f68) {
            ctx->pc = 0x453FC4u;
            goto label_453fc4;
        }
    }
    ctx->pc = 0x453F70u;
label_453f70:
    // 0x453f70: 0x8fa40370  lw          $a0, 0x370($sp)
    ctx->pc = 0x453f70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 880)));
label_453f74:
    // 0x453f74: 0xc113f9c  jal         func_44FE70
label_453f78:
    if (ctx->pc == 0x453F78u) {
        ctx->pc = 0x453F7Cu;
        goto label_453f7c;
    }
    ctx->pc = 0x453F74u;
    SET_GPR_U32(ctx, 31, 0x453F7Cu);
    ctx->pc = 0x44FE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44FE70u, 0x453F74u, 0x453F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x453F7Cu;
label_453f7c:
    // 0x453f7c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x453f7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_453f80:
    // 0x453f80: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_453f84:
    if (ctx->pc == 0x453F84u) {
        ctx->pc = 0x453F88u;
        goto label_453f88;
    }
    ctx->pc = 0x453F80u;
    {
        const bool branch_taken_0x453f80 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x453f80) {
            ctx->pc = 0x453FA4u;
            goto label_453fa4;
        }
    }
    ctx->pc = 0x453F88u;
label_453f88:
    // 0x453f88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x453f88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_453f8c:
    // 0x453f8c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x453f8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_453f90:
    // 0x453f90: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x453f90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_453f94:
    // 0x453f94: 0xc115a18  jal         func_456860
label_453f98:
    if (ctx->pc == 0x453F98u) {
        ctx->pc = 0x453F9Cu;
        goto label_453f9c;
    }
    ctx->pc = 0x453F94u;
    SET_GPR_U32(ctx, 31, 0x453F9Cu);
    ctx->pc = 0x456860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x456860u, 0x453F94u, 0x453F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x453F9Cu;
label_453f9c:
    // 0x453f9c: 0x10000006  b           . + 4 + (0x6 << 2)
label_453fa0:
    if (ctx->pc == 0x453FA0u) {
        ctx->pc = 0x453FA4u;
        goto label_453fa4;
    }
    ctx->pc = 0x453F9Cu;
    {
        const bool branch_taken_0x453f9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x453f9c) {
            ctx->pc = 0x453FB8u;
            goto label_453fb8;
        }
    }
    ctx->pc = 0x453FA4u;
label_453fa4:
    // 0x453fa4: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x453fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
label_453fa8:
    // 0x453fa8: 0x2484e150  addiu       $a0, $a0, -0x1EB0
    ctx->pc = 0x453fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959440));
label_453fac:
    // 0x453fac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x453facu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_453fb0:
    // 0x453fb0: 0xc115ae4  jal         func_456B90
label_453fb4:
    if (ctx->pc == 0x453FB4u) {
        ctx->pc = 0x453FB8u;
        goto label_453fb8;
    }
    ctx->pc = 0x453FB0u;
    SET_GPR_U32(ctx, 31, 0x453FB8u);
    ctx->pc = 0x456B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x456B90u, 0x453FB0u, 0x453FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x453FB8u;
label_453fb8:
    // 0x453fb8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x453fb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_453fbc:
    // 0x453fbc: 0xc113cdc  jal         func_44F370
label_453fc0:
    if (ctx->pc == 0x453FC0u) {
        ctx->pc = 0x453FC4u;
        goto label_453fc4;
    }
    ctx->pc = 0x453FBCu;
    SET_GPR_U32(ctx, 31, 0x453FC4u);
    ctx->pc = 0x44F370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44F370u, 0x453FBCu, 0x453FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x453FC4u;
label_453fc4:
    // 0x453fc4: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x453fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_453fc8:
    // 0x453fc8: 0x27a50310  addiu       $a1, $sp, 0x310
    ctx->pc = 0x453fc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 784));
label_453fcc:
    // 0x453fcc: 0xc119ecc  jal         func_467B30
label_453fd0:
    if (ctx->pc == 0x453FD0u) {
        ctx->pc = 0x453FD4u;
        goto label_453fd4;
    }
    ctx->pc = 0x453FCCu;
    SET_GPR_U32(ctx, 31, 0x453FD4u);
    ctx->pc = 0x467B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467B30u, 0x453FCCu, 0x453FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x453FD4u;
label_453fd4:
    // 0x453fd4: 0x1440ffb8  bnez        $v0, . + 4 + (-0x48 << 2)
label_453fd8:
    if (ctx->pc == 0x453FD8u) {
        ctx->pc = 0x453FDCu;
        goto label_453fdc;
    }
    ctx->pc = 0x453FD4u;
    {
        const bool branch_taken_0x453fd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x453fd4) {
            ctx->pc = 0x453EB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_453eb8;
        }
    }
    ctx->pc = 0x453FDCu;
label_453fdc:
    // 0x453fdc: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x453fdcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_453fe0:
    // 0x453fe0: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x453fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_453fe4:
    // 0x453fe4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x453fe4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_453fe8:
    // 0x453fe8: 0xc119d90  jal         func_467640
label_453fec:
    if (ctx->pc == 0x453FECu) {
        ctx->pc = 0x453FF0u;
        goto label_453ff0;
    }
    ctx->pc = 0x453FE8u;
    SET_GPR_U32(ctx, 31, 0x453FF0u);
    ctx->pc = 0x467640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467640u, 0x453FE8u, 0x453FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x453FF0u;
label_453ff0:
    // 0x453ff0: 0x27a40310  addiu       $a0, $sp, 0x310
    ctx->pc = 0x453ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 784));
label_453ff4:
    // 0x453ff4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x453ff4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_453ff8:
    // 0x453ff8: 0xc0402d4  jal         func_100B50
label_453ffc:
    if (ctx->pc == 0x453FFCu) {
        ctx->pc = 0x454000u;
        goto label_454000;
    }
    ctx->pc = 0x453FF8u;
    SET_GPR_U32(ctx, 31, 0x454000u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x453FF8u, 0x454000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x454000u;
label_454000:
    // 0x454000: 0x27a40320  addiu       $a0, $sp, 0x320
    ctx->pc = 0x454000u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 800));
label_454004:
    // 0x454004: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x454004u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_454008:
    // 0x454008: 0xc0402d4  jal         func_100B50
label_45400c:
    if (ctx->pc == 0x45400Cu) {
        ctx->pc = 0x454010u;
        goto label_454010;
    }
    ctx->pc = 0x454008u;
    SET_GPR_U32(ctx, 31, 0x454010u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x454008u, 0x454010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x454010u;
label_454010:
    // 0x454010: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x454010u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_454014:
    // 0x454014: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x454014u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_454018:
    // 0x454018: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x454018u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_45401c:
    // 0x45401c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x45401cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_454020:
    // 0x454020: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x454020u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_454024:
    // 0x454024: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x454024u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_454028:
    // 0x454028: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x454028u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_45402c:
    // 0x45402c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x45402cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_454030:
    // 0x454030: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x454030u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_454034:
    // 0x454034: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x454034u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_454038:
    // 0x454038: 0x27bd0380  addiu       $sp, $sp, 0x380
    ctx->pc = 0x454038u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 896));
label_45403c:
    // 0x45403c: 0x3e00008  jr          $ra
label_454040:
    if (ctx->pc == 0x454040u) {
        ctx->pc = 0x454044u;
        goto label_454044;
    }
    ctx->pc = 0x45403Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45403Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x454044u;
label_454044:
    // 0x454044: 0x0  nop
    ctx->pc = 0x454044u;
    // NOP
label_454048:
    // 0x454048: 0x0  nop
    ctx->pc = 0x454048u;
    // NOP
label_45404c:
    // 0x45404c: 0x0  nop
    ctx->pc = 0x45404cu;
    // NOP
    ctx->pc = 0x454050u;
}
