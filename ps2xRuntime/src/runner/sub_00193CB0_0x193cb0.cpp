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

// Function: sub_00193CB0
// Address: 0x193cb0 - 0x193fe0
void sub_00193CB0_0x193cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00193CB0_0x193cb0");
#endif

    switch (ctx->pc) {
        case 0x193cb0u: goto label_193cb0;
        case 0x193cb4u: goto label_193cb4;
        case 0x193cb8u: goto label_193cb8;
        case 0x193cbcu: goto label_193cbc;
        case 0x193cc0u: goto label_193cc0;
        case 0x193cc4u: goto label_193cc4;
        case 0x193cc8u: goto label_193cc8;
        case 0x193cccu: goto label_193ccc;
        case 0x193cd0u: goto label_193cd0;
        case 0x193cd4u: goto label_193cd4;
        case 0x193cd8u: goto label_193cd8;
        case 0x193cdcu: goto label_193cdc;
        case 0x193ce0u: goto label_193ce0;
        case 0x193ce4u: goto label_193ce4;
        case 0x193ce8u: goto label_193ce8;
        case 0x193cecu: goto label_193cec;
        case 0x193cf0u: goto label_193cf0;
        case 0x193cf4u: goto label_193cf4;
        case 0x193cf8u: goto label_193cf8;
        case 0x193cfcu: goto label_193cfc;
        case 0x193d00u: goto label_193d00;
        case 0x193d04u: goto label_193d04;
        case 0x193d08u: goto label_193d08;
        case 0x193d0cu: goto label_193d0c;
        case 0x193d10u: goto label_193d10;
        case 0x193d14u: goto label_193d14;
        case 0x193d18u: goto label_193d18;
        case 0x193d1cu: goto label_193d1c;
        case 0x193d20u: goto label_193d20;
        case 0x193d24u: goto label_193d24;
        case 0x193d28u: goto label_193d28;
        case 0x193d2cu: goto label_193d2c;
        case 0x193d30u: goto label_193d30;
        case 0x193d34u: goto label_193d34;
        case 0x193d38u: goto label_193d38;
        case 0x193d3cu: goto label_193d3c;
        case 0x193d40u: goto label_193d40;
        case 0x193d44u: goto label_193d44;
        case 0x193d48u: goto label_193d48;
        case 0x193d4cu: goto label_193d4c;
        case 0x193d50u: goto label_193d50;
        case 0x193d54u: goto label_193d54;
        case 0x193d58u: goto label_193d58;
        case 0x193d5cu: goto label_193d5c;
        case 0x193d60u: goto label_193d60;
        case 0x193d64u: goto label_193d64;
        case 0x193d68u: goto label_193d68;
        case 0x193d6cu: goto label_193d6c;
        case 0x193d70u: goto label_193d70;
        case 0x193d74u: goto label_193d74;
        case 0x193d78u: goto label_193d78;
        case 0x193d7cu: goto label_193d7c;
        case 0x193d80u: goto label_193d80;
        case 0x193d84u: goto label_193d84;
        case 0x193d88u: goto label_193d88;
        case 0x193d8cu: goto label_193d8c;
        case 0x193d90u: goto label_193d90;
        case 0x193d94u: goto label_193d94;
        case 0x193d98u: goto label_193d98;
        case 0x193d9cu: goto label_193d9c;
        case 0x193da0u: goto label_193da0;
        case 0x193da4u: goto label_193da4;
        case 0x193da8u: goto label_193da8;
        case 0x193dacu: goto label_193dac;
        case 0x193db0u: goto label_193db0;
        case 0x193db4u: goto label_193db4;
        case 0x193db8u: goto label_193db8;
        case 0x193dbcu: goto label_193dbc;
        case 0x193dc0u: goto label_193dc0;
        case 0x193dc4u: goto label_193dc4;
        case 0x193dc8u: goto label_193dc8;
        case 0x193dccu: goto label_193dcc;
        case 0x193dd0u: goto label_193dd0;
        case 0x193dd4u: goto label_193dd4;
        case 0x193dd8u: goto label_193dd8;
        case 0x193ddcu: goto label_193ddc;
        case 0x193de0u: goto label_193de0;
        case 0x193de4u: goto label_193de4;
        case 0x193de8u: goto label_193de8;
        case 0x193decu: goto label_193dec;
        case 0x193df0u: goto label_193df0;
        case 0x193df4u: goto label_193df4;
        case 0x193df8u: goto label_193df8;
        case 0x193dfcu: goto label_193dfc;
        case 0x193e00u: goto label_193e00;
        case 0x193e04u: goto label_193e04;
        case 0x193e08u: goto label_193e08;
        case 0x193e0cu: goto label_193e0c;
        case 0x193e10u: goto label_193e10;
        case 0x193e14u: goto label_193e14;
        case 0x193e18u: goto label_193e18;
        case 0x193e1cu: goto label_193e1c;
        case 0x193e20u: goto label_193e20;
        case 0x193e24u: goto label_193e24;
        case 0x193e28u: goto label_193e28;
        case 0x193e2cu: goto label_193e2c;
        case 0x193e30u: goto label_193e30;
        case 0x193e34u: goto label_193e34;
        case 0x193e38u: goto label_193e38;
        case 0x193e3cu: goto label_193e3c;
        case 0x193e40u: goto label_193e40;
        case 0x193e44u: goto label_193e44;
        case 0x193e48u: goto label_193e48;
        case 0x193e4cu: goto label_193e4c;
        case 0x193e50u: goto label_193e50;
        case 0x193e54u: goto label_193e54;
        case 0x193e58u: goto label_193e58;
        case 0x193e5cu: goto label_193e5c;
        case 0x193e60u: goto label_193e60;
        case 0x193e64u: goto label_193e64;
        case 0x193e68u: goto label_193e68;
        case 0x193e6cu: goto label_193e6c;
        case 0x193e70u: goto label_193e70;
        case 0x193e74u: goto label_193e74;
        case 0x193e78u: goto label_193e78;
        case 0x193e7cu: goto label_193e7c;
        case 0x193e80u: goto label_193e80;
        case 0x193e84u: goto label_193e84;
        case 0x193e88u: goto label_193e88;
        case 0x193e8cu: goto label_193e8c;
        case 0x193e90u: goto label_193e90;
        case 0x193e94u: goto label_193e94;
        case 0x193e98u: goto label_193e98;
        case 0x193e9cu: goto label_193e9c;
        case 0x193ea0u: goto label_193ea0;
        case 0x193ea4u: goto label_193ea4;
        case 0x193ea8u: goto label_193ea8;
        case 0x193eacu: goto label_193eac;
        case 0x193eb0u: goto label_193eb0;
        case 0x193eb4u: goto label_193eb4;
        case 0x193eb8u: goto label_193eb8;
        case 0x193ebcu: goto label_193ebc;
        case 0x193ec0u: goto label_193ec0;
        case 0x193ec4u: goto label_193ec4;
        case 0x193ec8u: goto label_193ec8;
        case 0x193eccu: goto label_193ecc;
        case 0x193ed0u: goto label_193ed0;
        case 0x193ed4u: goto label_193ed4;
        case 0x193ed8u: goto label_193ed8;
        case 0x193edcu: goto label_193edc;
        case 0x193ee0u: goto label_193ee0;
        case 0x193ee4u: goto label_193ee4;
        case 0x193ee8u: goto label_193ee8;
        case 0x193eecu: goto label_193eec;
        case 0x193ef0u: goto label_193ef0;
        case 0x193ef4u: goto label_193ef4;
        case 0x193ef8u: goto label_193ef8;
        case 0x193efcu: goto label_193efc;
        case 0x193f00u: goto label_193f00;
        case 0x193f04u: goto label_193f04;
        case 0x193f08u: goto label_193f08;
        case 0x193f0cu: goto label_193f0c;
        case 0x193f10u: goto label_193f10;
        case 0x193f14u: goto label_193f14;
        case 0x193f18u: goto label_193f18;
        case 0x193f1cu: goto label_193f1c;
        case 0x193f20u: goto label_193f20;
        case 0x193f24u: goto label_193f24;
        case 0x193f28u: goto label_193f28;
        case 0x193f2cu: goto label_193f2c;
        case 0x193f30u: goto label_193f30;
        case 0x193f34u: goto label_193f34;
        case 0x193f38u: goto label_193f38;
        case 0x193f3cu: goto label_193f3c;
        case 0x193f40u: goto label_193f40;
        case 0x193f44u: goto label_193f44;
        case 0x193f48u: goto label_193f48;
        case 0x193f4cu: goto label_193f4c;
        case 0x193f50u: goto label_193f50;
        case 0x193f54u: goto label_193f54;
        case 0x193f58u: goto label_193f58;
        case 0x193f5cu: goto label_193f5c;
        case 0x193f60u: goto label_193f60;
        case 0x193f64u: goto label_193f64;
        case 0x193f68u: goto label_193f68;
        case 0x193f6cu: goto label_193f6c;
        case 0x193f70u: goto label_193f70;
        case 0x193f74u: goto label_193f74;
        case 0x193f78u: goto label_193f78;
        case 0x193f7cu: goto label_193f7c;
        case 0x193f80u: goto label_193f80;
        case 0x193f84u: goto label_193f84;
        case 0x193f88u: goto label_193f88;
        case 0x193f8cu: goto label_193f8c;
        case 0x193f90u: goto label_193f90;
        case 0x193f94u: goto label_193f94;
        case 0x193f98u: goto label_193f98;
        case 0x193f9cu: goto label_193f9c;
        case 0x193fa0u: goto label_193fa0;
        case 0x193fa4u: goto label_193fa4;
        case 0x193fa8u: goto label_193fa8;
        case 0x193facu: goto label_193fac;
        case 0x193fb0u: goto label_193fb0;
        case 0x193fb4u: goto label_193fb4;
        case 0x193fb8u: goto label_193fb8;
        case 0x193fbcu: goto label_193fbc;
        case 0x193fc0u: goto label_193fc0;
        case 0x193fc4u: goto label_193fc4;
        case 0x193fc8u: goto label_193fc8;
        case 0x193fccu: goto label_193fcc;
        case 0x193fd0u: goto label_193fd0;
        case 0x193fd4u: goto label_193fd4;
        case 0x193fd8u: goto label_193fd8;
        case 0x193fdcu: goto label_193fdc;
        default: break;
    }

    ctx->pc = 0x193cb0u;

label_193cb0:
    // 0x193cb0: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x193cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
label_193cb4:
    // 0x193cb4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x193cb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_193cb8:
    // 0x193cb8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x193cb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_193cbc:
    // 0x193cbc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x193cbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_193cc0:
    // 0x193cc0: 0xafa400d0  sw          $a0, 0xD0($sp)
    ctx->pc = 0x193cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 4));
label_193cc4:
    // 0x193cc4: 0xafa500e0  sw          $a1, 0xE0($sp)
    ctx->pc = 0x193cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 5));
label_193cc8:
    // 0x193cc8: 0xe7ac00f0  swc1        $f12, 0xF0($sp)
    ctx->pc = 0x193cc8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_193ccc:
    // 0x193ccc: 0xe7ad0100  swc1        $f13, 0x100($sp)
    ctx->pc = 0x193cccu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_193cd0:
    // 0x193cd0: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x193cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_193cd4:
    // 0x193cd4: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x193cd4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_193cd8:
    // 0x193cd8: 0x24a55b30  addiu       $a1, $a1, 0x5B30
    ctx->pc = 0x193cd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23344));
label_193cdc:
    // 0x193cdc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x193cdcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_193ce0:
    // 0x193ce0: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x193ce0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_193ce4:
    // 0x193ce4: 0x320f809  jalr        $t9
label_193ce8:
    if (ctx->pc == 0x193CE8u) {
        ctx->pc = 0x193CECu;
        goto label_193cec;
    }
    ctx->pc = 0x193CE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x193CECu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x193CE4u, 0x193CECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x193CECu;
label_193cec:
    // 0x193cec: 0x144000b4  bnez        $v0, . + 4 + (0xB4 << 2)
label_193cf0:
    if (ctx->pc == 0x193CF0u) {
        ctx->pc = 0x193CF4u;
        goto label_193cf4;
    }
    ctx->pc = 0x193CECu;
    {
        const bool branch_taken_0x193cec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x193cec) {
            ctx->pc = 0x193FC0u;
            goto label_193fc0;
        }
    }
    ctx->pc = 0x193CF4u;
label_193cf4:
    // 0x193cf4: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x193cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_193cf8:
    // 0x193cf8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x193cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_193cfc:
    // 0x193cfc: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x193cfcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_193d00:
    // 0x193d00: 0x24a55b60  addiu       $a1, $a1, 0x5B60
    ctx->pc = 0x193d00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23392));
label_193d04:
    // 0x193d04: 0x8c460028  lw          $a2, 0x28($v0)
    ctx->pc = 0x193d04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_193d08:
    // 0x193d08: 0xc0bc3e2  jal         func_2F0F88
label_193d0c:
    if (ctx->pc == 0x193D0Cu) {
        ctx->pc = 0x193D10u;
        goto label_193d10;
    }
    ctx->pc = 0x193D08u;
    SET_GPR_U32(ctx, 31, 0x193D10u);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x193D08u, 0x193D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193D10u;
label_193d10:
    // 0x193d10: 0x8f84bbdc  lw          $a0, -0x4424($gp)
    ctx->pc = 0x193d10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949852)));
label_193d14:
    // 0x193d14: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x193d14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_193d18:
    // 0x193d18: 0xc08e57c  jal         func_2395F0
label_193d1c:
    if (ctx->pc == 0x193D1Cu) {
        ctx->pc = 0x193D20u;
        goto label_193d20;
    }
    ctx->pc = 0x193D18u;
    SET_GPR_U32(ctx, 31, 0x193D20u);
    ctx->pc = 0x2395F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2395F0u, 0x193D18u, 0x193D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193D20u;
label_193d20:
    // 0x193d20: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x193d20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_193d24:
    // 0x193d24: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x193d24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_193d28:
    // 0x193d28: 0xc0406d0  jal         func_101B40
label_193d2c:
    if (ctx->pc == 0x193D2Cu) {
        ctx->pc = 0x193D30u;
        goto label_193d30;
    }
    ctx->pc = 0x193D28u;
    SET_GPR_U32(ctx, 31, 0x193D30u);
    ctx->pc = 0x101B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101B40u, 0x193D28u, 0x193D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193D30u;
label_193d30:
    // 0x193d30: 0x27a40088  addiu       $a0, $sp, 0x88
    ctx->pc = 0x193d30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
label_193d34:
    // 0x193d34: 0x27859250  addiu       $a1, $gp, -0x6DB0
    ctx->pc = 0x193d34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939216));
label_193d38:
    // 0x193d38: 0xc040304  jal         func_100C10
label_193d3c:
    if (ctx->pc == 0x193D3Cu) {
        ctx->pc = 0x193D40u;
        goto label_193d40;
    }
    ctx->pc = 0x193D38u;
    SET_GPR_U32(ctx, 31, 0x193D40u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x193D38u, 0x193D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193D40u;
label_193d40:
    // 0x193d40: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x193d40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_193d44:
    // 0x193d44: 0x27a50088  addiu       $a1, $sp, 0x88
    ctx->pc = 0x193d44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
label_193d48:
    // 0x193d48: 0xc119568  jal         func_4655A0
label_193d4c:
    if (ctx->pc == 0x193D4Cu) {
        ctx->pc = 0x193D50u;
        goto label_193d50;
    }
    ctx->pc = 0x193D48u;
    SET_GPR_U32(ctx, 31, 0x193D50u);
    ctx->pc = 0x4655A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4655A0u, 0x193D48u, 0x193D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193D50u;
label_193d50:
    // 0x193d50: 0x27a40088  addiu       $a0, $sp, 0x88
    ctx->pc = 0x193d50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
label_193d54:
    // 0x193d54: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x193d54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_193d58:
    // 0x193d58: 0xc0402d4  jal         func_100B50
label_193d5c:
    if (ctx->pc == 0x193D5Cu) {
        ctx->pc = 0x193D60u;
        goto label_193d60;
    }
    ctx->pc = 0x193D58u;
    SET_GPR_U32(ctx, 31, 0x193D60u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x193D58u, 0x193D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193D60u;
label_193d60:
    // 0x193d60: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x193d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_193d64:
    // 0x193d64: 0xc440008c  lwc1        $f0, 0x8C($v0)
    ctx->pc = 0x193d64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_193d68:
    // 0x193d68: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x193d68u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_193d6c:
    // 0x193d6c: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x193d6cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
label_193d70:
    // 0x193d70: 0x8f84bbdc  lw          $a0, -0x4424($gp)
    ctx->pc = 0x193d70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949852)));
label_193d74:
    // 0x193d74: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x193d74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_193d78:
    // 0x193d78: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x193d78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_193d7c:
    // 0x193d7c: 0xc08e63c  jal         func_2398F0
label_193d80:
    if (ctx->pc == 0x193D80u) {
        ctx->pc = 0x193D84u;
        goto label_193d84;
    }
    ctx->pc = 0x193D7Cu;
    SET_GPR_U32(ctx, 31, 0x193D84u);
    ctx->pc = 0x2398F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2398F0u, 0x193D7Cu, 0x193D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193D84u;
label_193d84:
    // 0x193d84: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x193d84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_193d88:
    // 0x193d88: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x193d88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_193d8c:
    // 0x193d8c: 0xc064f24  jal         func_193C90
label_193d90:
    if (ctx->pc == 0x193D90u) {
        ctx->pc = 0x193D94u;
        goto label_193d94;
    }
    ctx->pc = 0x193D8Cu;
    SET_GPR_U32(ctx, 31, 0x193D94u);
    ctx->pc = 0x193C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193C90u, 0x193D8Cu, 0x193D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193D94u;
label_193d94:
    // 0x193d94: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x193d94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_193d98:
    // 0x193d98: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x193d98u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_193d9c:
    // 0x193d9c: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x193d9cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
label_193da0:
    // 0x193da0: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x193da0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_193da4:
    // 0x193da4: 0x27859258  addiu       $a1, $gp, -0x6DA8
    ctx->pc = 0x193da4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939224));
label_193da8:
    // 0x193da8: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x193da8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_193dac:
    // 0x193dac: 0xc055fb0  jal         func_157EC0
label_193db0:
    if (ctx->pc == 0x193DB0u) {
        ctx->pc = 0x193DB4u;
        goto label_193db4;
    }
    ctx->pc = 0x193DACu;
    SET_GPR_U32(ctx, 31, 0x193DB4u);
    ctx->pc = 0x157EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157EC0u, 0x193DACu, 0x193DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193DB4u;
label_193db4:
    // 0x193db4: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x193db4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
label_193db8:
    // 0x193db8: 0xc440008c  lwc1        $f0, 0x8C($v0)
    ctx->pc = 0x193db8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_193dbc:
    // 0x193dbc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x193dbcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_193dc0:
    // 0x193dc0: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x193dc0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_193dc4:
    // 0x193dc4: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x193dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_193dc8:
    // 0x193dc8: 0x27859238  addiu       $a1, $gp, -0x6DC8
    ctx->pc = 0x193dc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939192));
label_193dcc:
    // 0x193dcc: 0xc0bc3e2  jal         func_2F0F88
label_193dd0:
    if (ctx->pc == 0x193DD0u) {
        ctx->pc = 0x193DD4u;
        goto label_193dd4;
    }
    ctx->pc = 0x193DCCu;
    SET_GPR_U32(ctx, 31, 0x193DD4u);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x193DCCu, 0x193DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193DD4u;
label_193dd4:
    // 0x193dd4: 0x27a40078  addiu       $a0, $sp, 0x78
    ctx->pc = 0x193dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
label_193dd8:
    // 0x193dd8: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x193dd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_193ddc:
    // 0x193ddc: 0xc040304  jal         func_100C10
label_193de0:
    if (ctx->pc == 0x193DE0u) {
        ctx->pc = 0x193DE4u;
        goto label_193de4;
    }
    ctx->pc = 0x193DDCu;
    SET_GPR_U32(ctx, 31, 0x193DE4u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x193DDCu, 0x193DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193DE4u;
label_193de4:
    // 0x193de4: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x193de4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_193de8:
    // 0x193de8: 0x27a50078  addiu       $a1, $sp, 0x78
    ctx->pc = 0x193de8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
label_193dec:
    // 0x193dec: 0xc119568  jal         func_4655A0
label_193df0:
    if (ctx->pc == 0x193DF0u) {
        ctx->pc = 0x193DF4u;
        goto label_193df4;
    }
    ctx->pc = 0x193DECu;
    SET_GPR_U32(ctx, 31, 0x193DF4u);
    ctx->pc = 0x4655A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4655A0u, 0x193DECu, 0x193DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193DF4u;
label_193df4:
    // 0x193df4: 0x27a40078  addiu       $a0, $sp, 0x78
    ctx->pc = 0x193df4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
label_193df8:
    // 0x193df8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x193df8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_193dfc:
    // 0x193dfc: 0xc0402d4  jal         func_100B50
label_193e00:
    if (ctx->pc == 0x193E00u) {
        ctx->pc = 0x193E04u;
        goto label_193e04;
    }
    ctx->pc = 0x193DFCu;
    SET_GPR_U32(ctx, 31, 0x193E04u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x193DFCu, 0x193E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193E04u;
label_193e04:
    // 0x193e04: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x193e04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_193e08:
    // 0x193e08: 0x8fa500e0  lw          $a1, 0xE0($sp)
    ctx->pc = 0x193e08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_193e0c:
    // 0x193e0c: 0x27869258  addiu       $a2, $gp, -0x6DA8
    ctx->pc = 0x193e0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939224));
label_193e10:
    // 0x193e10: 0x27a700a0  addiu       $a3, $sp, 0xA0
    ctx->pc = 0x193e10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_193e14:
    // 0x193e14: 0xc7ac00f0  lwc1        $f12, 0xF0($sp)
    ctx->pc = 0x193e14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_193e18:
    // 0x193e18: 0xc065114  jal         func_194450
label_193e1c:
    if (ctx->pc == 0x193E1Cu) {
        ctx->pc = 0x193E20u;
        goto label_193e20;
    }
    ctx->pc = 0x193E18u;
    SET_GPR_U32(ctx, 31, 0x193E20u);
    ctx->pc = 0x194450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x194450u, 0x193E18u, 0x193E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193E20u;
label_193e20:
    // 0x193e20: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x193e20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_193e24:
    // 0x193e24: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x193e24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_193e28:
    // 0x193e28: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x193e28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_193e2c:
    // 0x193e2c: 0x24a55b78  addiu       $a1, $a1, 0x5B78
    ctx->pc = 0x193e2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23416));
label_193e30:
    // 0x193e30: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x193e30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_193e34:
    // 0x193e34: 0xc0bc3e2  jal         func_2F0F88
label_193e38:
    if (ctx->pc == 0x193E38u) {
        ctx->pc = 0x193E3Cu;
        goto label_193e3c;
    }
    ctx->pc = 0x193E34u;
    SET_GPR_U32(ctx, 31, 0x193E3Cu);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x193E34u, 0x193E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193E3Cu;
label_193e3c:
    // 0x193e3c: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x193e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_193e40:
    // 0x193e40: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x193e40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_193e44:
    // 0x193e44: 0xc05621c  jal         func_158870
label_193e48:
    if (ctx->pc == 0x193E48u) {
        ctx->pc = 0x193E4Cu;
        goto label_193e4c;
    }
    ctx->pc = 0x193E44u;
    SET_GPR_U32(ctx, 31, 0x193E4Cu);
    ctx->pc = 0x158870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158870u, 0x193E44u, 0x193E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193E4Cu;
label_193e4c:
    // 0x193e4c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x193e4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_193e50:
    // 0x193e50: 0x1200004f  beqz        $s0, . + 4 + (0x4F << 2)
label_193e54:
    if (ctx->pc == 0x193E54u) {
        ctx->pc = 0x193E58u;
        goto label_193e58;
    }
    ctx->pc = 0x193E50u;
    {
        const bool branch_taken_0x193e50 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x193e50) {
            ctx->pc = 0x193F90u;
            goto label_193f90;
        }
    }
    ctx->pc = 0x193E58u;
label_193e58:
    // 0x193e58: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x193e58u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_193e5c:
    // 0x193e5c: 0x0  nop
    ctx->pc = 0x193e5cu;
    // NOP
label_193e60:
    // 0x193e60: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x193e60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
label_193e64:
    // 0x193e64: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x193e64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_193e68:
    // 0x193e68: 0xc0552dc  jal         func_154B70
label_193e6c:
    if (ctx->pc == 0x193E6Cu) {
        ctx->pc = 0x193E70u;
        goto label_193e70;
    }
    ctx->pc = 0x193E68u;
    SET_GPR_U32(ctx, 31, 0x193E70u);
    ctx->pc = 0x154B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B70u, 0x193E68u, 0x193E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193E70u;
label_193e70:
    // 0x193e70: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x193e70u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_193e74:
    // 0x193e74: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x193e74u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_193e78:
    // 0x193e78: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x193e78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_193e7c:
    // 0x193e7c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x193e7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_193e80:
    // 0x193e80: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x193e80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_193e84:
    // 0x193e84: 0x27a700cc  addiu       $a3, $sp, 0xCC
    ctx->pc = 0x193e84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 204));
label_193e88:
    // 0x193e88: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x193e88u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_193e8c:
    // 0x193e8c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x193e8cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_193e90:
    // 0x193e90: 0xc08b9fc  jal         func_22E7F0
label_193e94:
    if (ctx->pc == 0x193E94u) {
        ctx->pc = 0x193E98u;
        goto label_193e98;
    }
    ctx->pc = 0x193E90u;
    SET_GPR_U32(ctx, 31, 0x193E98u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x193E90u, 0x193E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193E98u;
label_193e98:
    // 0x193e98: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x193e98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_193e9c:
    // 0x193e9c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x193e9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_193ea0:
    // 0x193ea0: 0x0  nop
    ctx->pc = 0x193ea0u;
    // NOP
label_193ea4:
    // 0x193ea4: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x193ea4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
label_193ea8:
    // 0x193ea8: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x193ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_193eac:
    // 0x193eac: 0xc0552dc  jal         func_154B70
label_193eb0:
    if (ctx->pc == 0x193EB0u) {
        ctx->pc = 0x193EB4u;
        goto label_193eb4;
    }
    ctx->pc = 0x193EACu;
    SET_GPR_U32(ctx, 31, 0x193EB4u);
    ctx->pc = 0x154B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B70u, 0x193EACu, 0x193EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193EB4u;
label_193eb4:
    // 0x193eb4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x193eb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_193eb8:
    // 0x193eb8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x193eb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_193ebc:
    // 0x193ebc: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x193ebcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_193ec0:
    // 0x193ec0: 0x27a700cc  addiu       $a3, $sp, 0xCC
    ctx->pc = 0x193ec0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 204));
label_193ec4:
    // 0x193ec4: 0xc7ac00f0  lwc1        $f12, 0xF0($sp)
    ctx->pc = 0x193ec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_193ec8:
    // 0x193ec8: 0xc7ad0100  lwc1        $f13, 0x100($sp)
    ctx->pc = 0x193ec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_193ecc:
    // 0x193ecc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x193eccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_193ed0:
    // 0x193ed0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x193ed0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_193ed4:
    // 0x193ed4: 0xc08b9fc  jal         func_22E7F0
label_193ed8:
    if (ctx->pc == 0x193ED8u) {
        ctx->pc = 0x193EDCu;
        goto label_193edc;
    }
    ctx->pc = 0x193ED4u;
    SET_GPR_U32(ctx, 31, 0x193EDCu);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x193ED4u, 0x193EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193EDCu;
label_193edc:
    // 0x193edc: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x193edcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_193ee0:
    // 0x193ee0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x193ee0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_193ee4:
    // 0x193ee4: 0x0  nop
    ctx->pc = 0x193ee4u;
    // NOP
label_193ee8:
    // 0x193ee8: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x193ee8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_193eec:
    // 0x193eec: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x193eecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_193ef0:
    // 0x193ef0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x193ef0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_193ef4:
    // 0x193ef4: 0x0  nop
    ctx->pc = 0x193ef4u;
    // NOP
label_193ef8:
    // 0x193ef8: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x193ef8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
label_193efc:
    // 0x193efc: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x193efcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_193f00:
    // 0x193f00: 0xc0552dc  jal         func_154B70
label_193f04:
    if (ctx->pc == 0x193F04u) {
        ctx->pc = 0x193F08u;
        goto label_193f08;
    }
    ctx->pc = 0x193F00u;
    SET_GPR_U32(ctx, 31, 0x193F08u);
    ctx->pc = 0x154B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B70u, 0x193F00u, 0x193F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193F08u;
label_193f08:
    // 0x193f08: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x193f08u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_193f0c:
    // 0x193f0c: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x193f0cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_193f10:
    // 0x193f10: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x193f10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_193f14:
    // 0x193f14: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x193f14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_193f18:
    // 0x193f18: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x193f18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_193f1c:
    // 0x193f1c: 0x27a70098  addiu       $a3, $sp, 0x98
    ctx->pc = 0x193f1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
label_193f20:
    // 0x193f20: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x193f20u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_193f24:
    // 0x193f24: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x193f24u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_193f28:
    // 0x193f28: 0xc08b9fc  jal         func_22E7F0
label_193f2c:
    if (ctx->pc == 0x193F2Cu) {
        ctx->pc = 0x193F30u;
        goto label_193f30;
    }
    ctx->pc = 0x193F28u;
    SET_GPR_U32(ctx, 31, 0x193F30u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x193F28u, 0x193F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193F30u;
label_193f30:
    // 0x193f30: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x193f30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_193f34:
    // 0x193f34: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x193f34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_193f38:
    // 0x193f38: 0x0  nop
    ctx->pc = 0x193f38u;
    // NOP
label_193f3c:
    // 0x193f3c: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x193f3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_193f40:
    // 0x193f40: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x193f40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_193f44:
    // 0x193f44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x193f44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_193f48:
    // 0x193f48: 0x0  nop
    ctx->pc = 0x193f48u;
    // NOP
label_193f4c:
    // 0x193f4c: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x193f4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
label_193f50:
    // 0x193f50: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x193f50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_193f54:
    // 0x193f54: 0xc0552dc  jal         func_154B70
label_193f58:
    if (ctx->pc == 0x193F58u) {
        ctx->pc = 0x193F5Cu;
        goto label_193f5c;
    }
    ctx->pc = 0x193F54u;
    SET_GPR_U32(ctx, 31, 0x193F5Cu);
    ctx->pc = 0x154B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B70u, 0x193F54u, 0x193F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193F5Cu;
label_193f5c:
    // 0x193f5c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x193f5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_193f60:
    // 0x193f60: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x193f60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_193f64:
    // 0x193f64: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x193f64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_193f68:
    // 0x193f68: 0x27a70098  addiu       $a3, $sp, 0x98
    ctx->pc = 0x193f68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
label_193f6c:
    // 0x193f6c: 0xc7ac00f0  lwc1        $f12, 0xF0($sp)
    ctx->pc = 0x193f6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_193f70:
    // 0x193f70: 0xc7ad0100  lwc1        $f13, 0x100($sp)
    ctx->pc = 0x193f70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_193f74:
    // 0x193f74: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x193f74u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_193f78:
    // 0x193f78: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x193f78u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_193f7c:
    // 0x193f7c: 0xc08b9fc  jal         func_22E7F0
label_193f80:
    if (ctx->pc == 0x193F80u) {
        ctx->pc = 0x193F84u;
        goto label_193f84;
    }
    ctx->pc = 0x193F7Cu;
    SET_GPR_U32(ctx, 31, 0x193F84u);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x193F7Cu, 0x193F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193F84u;
label_193f84:
    // 0x193f84: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x193f84u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_193f88:
    // 0x193f88: 0x1000ffa6  b           . + 4 + (-0x5A << 2)
label_193f8c:
    if (ctx->pc == 0x193F8Cu) {
        ctx->pc = 0x193F90u;
        goto label_193f90;
    }
    ctx->pc = 0x193F88u;
    {
        const bool branch_taken_0x193f88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x193f88) {
            ctx->pc = 0x193E24u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_193e24;
        }
    }
    ctx->pc = 0x193F90u;
label_193f90:
    // 0x193f90: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x193f90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_193f94:
    // 0x193f94: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x193f94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_193f98:
    // 0x193f98: 0xc0406a0  jal         func_101A80
label_193f9c:
    if (ctx->pc == 0x193F9Cu) {
        ctx->pc = 0x193FA0u;
        goto label_193fa0;
    }
    ctx->pc = 0x193F98u;
    SET_GPR_U32(ctx, 31, 0x193FA0u);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x193F98u, 0x193FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193FA0u;
label_193fa0:
    // 0x193fa0: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x193fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_193fa4:
    // 0x193fa4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x193fa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_193fa8:
    // 0x193fa8: 0xc0406a0  jal         func_101A80
label_193fac:
    if (ctx->pc == 0x193FACu) {
        ctx->pc = 0x193FB0u;
        goto label_193fb0;
    }
    ctx->pc = 0x193FA8u;
    SET_GPR_U32(ctx, 31, 0x193FB0u);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x193FA8u, 0x193FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193FB0u;
label_193fb0:
    // 0x193fb0: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x193fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_193fb4:
    // 0x193fb4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x193fb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_193fb8:
    // 0x193fb8: 0xc0406a0  jal         func_101A80
label_193fbc:
    if (ctx->pc == 0x193FBCu) {
        ctx->pc = 0x193FC0u;
        goto label_193fc0;
    }
    ctx->pc = 0x193FB8u;
    SET_GPR_U32(ctx, 31, 0x193FC0u);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x193FB8u, 0x193FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193FC0u;
label_193fc0:
    // 0x193fc0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x193fc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_193fc4:
    // 0x193fc4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x193fc4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_193fc8:
    // 0x193fc8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x193fc8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_193fcc:
    // 0x193fcc: 0x27bd0110  addiu       $sp, $sp, 0x110
    ctx->pc = 0x193fccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_193fd0:
    // 0x193fd0: 0x3e00008  jr          $ra
label_193fd4:
    if (ctx->pc == 0x193FD4u) {
        ctx->pc = 0x193FD8u;
        goto label_193fd8;
    }
    ctx->pc = 0x193FD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x193FD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x193FD8u;
label_193fd8:
    // 0x193fd8: 0x0  nop
    ctx->pc = 0x193fd8u;
    // NOP
label_193fdc:
    // 0x193fdc: 0x0  nop
    ctx->pc = 0x193fdcu;
    // NOP
    ctx->pc = 0x193fe0u;
}
