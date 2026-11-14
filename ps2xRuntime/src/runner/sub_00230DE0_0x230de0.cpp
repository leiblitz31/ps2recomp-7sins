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

// Function: sub_00230DE0
// Address: 0x230de0 - 0x2310d0
void sub_00230DE0_0x230de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00230DE0_0x230de0");
#endif

    switch (ctx->pc) {
        case 0x230de0u: goto label_230de0;
        case 0x230de4u: goto label_230de4;
        case 0x230de8u: goto label_230de8;
        case 0x230decu: goto label_230dec;
        case 0x230df0u: goto label_230df0;
        case 0x230df4u: goto label_230df4;
        case 0x230df8u: goto label_230df8;
        case 0x230dfcu: goto label_230dfc;
        case 0x230e00u: goto label_230e00;
        case 0x230e04u: goto label_230e04;
        case 0x230e08u: goto label_230e08;
        case 0x230e0cu: goto label_230e0c;
        case 0x230e10u: goto label_230e10;
        case 0x230e14u: goto label_230e14;
        case 0x230e18u: goto label_230e18;
        case 0x230e1cu: goto label_230e1c;
        case 0x230e20u: goto label_230e20;
        case 0x230e24u: goto label_230e24;
        case 0x230e28u: goto label_230e28;
        case 0x230e2cu: goto label_230e2c;
        case 0x230e30u: goto label_230e30;
        case 0x230e34u: goto label_230e34;
        case 0x230e38u: goto label_230e38;
        case 0x230e3cu: goto label_230e3c;
        case 0x230e40u: goto label_230e40;
        case 0x230e44u: goto label_230e44;
        case 0x230e48u: goto label_230e48;
        case 0x230e4cu: goto label_230e4c;
        case 0x230e50u: goto label_230e50;
        case 0x230e54u: goto label_230e54;
        case 0x230e58u: goto label_230e58;
        case 0x230e5cu: goto label_230e5c;
        case 0x230e60u: goto label_230e60;
        case 0x230e64u: goto label_230e64;
        case 0x230e68u: goto label_230e68;
        case 0x230e6cu: goto label_230e6c;
        case 0x230e70u: goto label_230e70;
        case 0x230e74u: goto label_230e74;
        case 0x230e78u: goto label_230e78;
        case 0x230e7cu: goto label_230e7c;
        case 0x230e80u: goto label_230e80;
        case 0x230e84u: goto label_230e84;
        case 0x230e88u: goto label_230e88;
        case 0x230e8cu: goto label_230e8c;
        case 0x230e90u: goto label_230e90;
        case 0x230e94u: goto label_230e94;
        case 0x230e98u: goto label_230e98;
        case 0x230e9cu: goto label_230e9c;
        case 0x230ea0u: goto label_230ea0;
        case 0x230ea4u: goto label_230ea4;
        case 0x230ea8u: goto label_230ea8;
        case 0x230eacu: goto label_230eac;
        case 0x230eb0u: goto label_230eb0;
        case 0x230eb4u: goto label_230eb4;
        case 0x230eb8u: goto label_230eb8;
        case 0x230ebcu: goto label_230ebc;
        case 0x230ec0u: goto label_230ec0;
        case 0x230ec4u: goto label_230ec4;
        case 0x230ec8u: goto label_230ec8;
        case 0x230eccu: goto label_230ecc;
        case 0x230ed0u: goto label_230ed0;
        case 0x230ed4u: goto label_230ed4;
        case 0x230ed8u: goto label_230ed8;
        case 0x230edcu: goto label_230edc;
        case 0x230ee0u: goto label_230ee0;
        case 0x230ee4u: goto label_230ee4;
        case 0x230ee8u: goto label_230ee8;
        case 0x230eecu: goto label_230eec;
        case 0x230ef0u: goto label_230ef0;
        case 0x230ef4u: goto label_230ef4;
        case 0x230ef8u: goto label_230ef8;
        case 0x230efcu: goto label_230efc;
        case 0x230f00u: goto label_230f00;
        case 0x230f04u: goto label_230f04;
        case 0x230f08u: goto label_230f08;
        case 0x230f0cu: goto label_230f0c;
        case 0x230f10u: goto label_230f10;
        case 0x230f14u: goto label_230f14;
        case 0x230f18u: goto label_230f18;
        case 0x230f1cu: goto label_230f1c;
        case 0x230f20u: goto label_230f20;
        case 0x230f24u: goto label_230f24;
        case 0x230f28u: goto label_230f28;
        case 0x230f2cu: goto label_230f2c;
        case 0x230f30u: goto label_230f30;
        case 0x230f34u: goto label_230f34;
        case 0x230f38u: goto label_230f38;
        case 0x230f3cu: goto label_230f3c;
        case 0x230f40u: goto label_230f40;
        case 0x230f44u: goto label_230f44;
        case 0x230f48u: goto label_230f48;
        case 0x230f4cu: goto label_230f4c;
        case 0x230f50u: goto label_230f50;
        case 0x230f54u: goto label_230f54;
        case 0x230f58u: goto label_230f58;
        case 0x230f5cu: goto label_230f5c;
        case 0x230f60u: goto label_230f60;
        case 0x230f64u: goto label_230f64;
        case 0x230f68u: goto label_230f68;
        case 0x230f6cu: goto label_230f6c;
        case 0x230f70u: goto label_230f70;
        case 0x230f74u: goto label_230f74;
        case 0x230f78u: goto label_230f78;
        case 0x230f7cu: goto label_230f7c;
        case 0x230f80u: goto label_230f80;
        case 0x230f84u: goto label_230f84;
        case 0x230f88u: goto label_230f88;
        case 0x230f8cu: goto label_230f8c;
        case 0x230f90u: goto label_230f90;
        case 0x230f94u: goto label_230f94;
        case 0x230f98u: goto label_230f98;
        case 0x230f9cu: goto label_230f9c;
        case 0x230fa0u: goto label_230fa0;
        case 0x230fa4u: goto label_230fa4;
        case 0x230fa8u: goto label_230fa8;
        case 0x230facu: goto label_230fac;
        case 0x230fb0u: goto label_230fb0;
        case 0x230fb4u: goto label_230fb4;
        case 0x230fb8u: goto label_230fb8;
        case 0x230fbcu: goto label_230fbc;
        case 0x230fc0u: goto label_230fc0;
        case 0x230fc4u: goto label_230fc4;
        case 0x230fc8u: goto label_230fc8;
        case 0x230fccu: goto label_230fcc;
        case 0x230fd0u: goto label_230fd0;
        case 0x230fd4u: goto label_230fd4;
        case 0x230fd8u: goto label_230fd8;
        case 0x230fdcu: goto label_230fdc;
        case 0x230fe0u: goto label_230fe0;
        case 0x230fe4u: goto label_230fe4;
        case 0x230fe8u: goto label_230fe8;
        case 0x230fecu: goto label_230fec;
        case 0x230ff0u: goto label_230ff0;
        case 0x230ff4u: goto label_230ff4;
        case 0x230ff8u: goto label_230ff8;
        case 0x230ffcu: goto label_230ffc;
        case 0x231000u: goto label_231000;
        case 0x231004u: goto label_231004;
        case 0x231008u: goto label_231008;
        case 0x23100cu: goto label_23100c;
        case 0x231010u: goto label_231010;
        case 0x231014u: goto label_231014;
        case 0x231018u: goto label_231018;
        case 0x23101cu: goto label_23101c;
        case 0x231020u: goto label_231020;
        case 0x231024u: goto label_231024;
        case 0x231028u: goto label_231028;
        case 0x23102cu: goto label_23102c;
        case 0x231030u: goto label_231030;
        case 0x231034u: goto label_231034;
        case 0x231038u: goto label_231038;
        case 0x23103cu: goto label_23103c;
        case 0x231040u: goto label_231040;
        case 0x231044u: goto label_231044;
        case 0x231048u: goto label_231048;
        case 0x23104cu: goto label_23104c;
        case 0x231050u: goto label_231050;
        case 0x231054u: goto label_231054;
        case 0x231058u: goto label_231058;
        case 0x23105cu: goto label_23105c;
        case 0x231060u: goto label_231060;
        case 0x231064u: goto label_231064;
        case 0x231068u: goto label_231068;
        case 0x23106cu: goto label_23106c;
        case 0x231070u: goto label_231070;
        case 0x231074u: goto label_231074;
        case 0x231078u: goto label_231078;
        case 0x23107cu: goto label_23107c;
        case 0x231080u: goto label_231080;
        case 0x231084u: goto label_231084;
        case 0x231088u: goto label_231088;
        case 0x23108cu: goto label_23108c;
        case 0x231090u: goto label_231090;
        case 0x231094u: goto label_231094;
        case 0x231098u: goto label_231098;
        case 0x23109cu: goto label_23109c;
        case 0x2310a0u: goto label_2310a0;
        case 0x2310a4u: goto label_2310a4;
        case 0x2310a8u: goto label_2310a8;
        case 0x2310acu: goto label_2310ac;
        case 0x2310b0u: goto label_2310b0;
        case 0x2310b4u: goto label_2310b4;
        case 0x2310b8u: goto label_2310b8;
        case 0x2310bcu: goto label_2310bc;
        case 0x2310c0u: goto label_2310c0;
        case 0x2310c4u: goto label_2310c4;
        case 0x2310c8u: goto label_2310c8;
        case 0x2310ccu: goto label_2310cc;
        default: break;
    }

    ctx->pc = 0x230de0u;

label_230de0:
    // 0x230de0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x230de0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_230de4:
    // 0x230de4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x230de4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_230de8:
    // 0x230de8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x230de8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_230dec:
    // 0x230dec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x230decu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_230df0:
    // 0x230df0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x230df0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_230df4:
    // 0x230df4: 0xafa40090  sw          $a0, 0x90($sp)
    ctx->pc = 0x230df4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 4));
label_230df8:
    // 0x230df8: 0xafa500a0  sw          $a1, 0xA0($sp)
    ctx->pc = 0x230df8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 5));
label_230dfc:
    // 0x230dfc: 0xafa600b0  sw          $a2, 0xB0($sp)
    ctx->pc = 0x230dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 6));
label_230e00:
    // 0x230e00: 0xa3a700c0  sb          $a3, 0xC0($sp)
    ctx->pc = 0x230e00u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 192), (uint8_t)GPR_U32(ctx, 7));
label_230e04:
    // 0x230e04: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x230e04u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_230e08:
    // 0x230e08: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x230e08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_230e0c:
    // 0x230e0c: 0x2405005f  addiu       $a1, $zero, 0x5F
    ctx->pc = 0x230e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
label_230e10:
    // 0x230e10: 0xc059640  jal         func_165900
label_230e14:
    if (ctx->pc == 0x230E14u) {
        ctx->pc = 0x230E18u;
        goto label_230e18;
    }
    ctx->pc = 0x230E10u;
    SET_GPR_U32(ctx, 31, 0x230E18u);
    ctx->pc = 0x165900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165900u, 0x230E10u, 0x230E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230E18u;
label_230e18:
    // 0x230e18: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x230e18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_230e1c:
    // 0x230e1c: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
label_230e20:
    if (ctx->pc == 0x230E20u) {
        ctx->pc = 0x230E24u;
        goto label_230e24;
    }
    ctx->pc = 0x230E1Cu;
    {
        const bool branch_taken_0x230e1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x230e1c) {
            ctx->pc = 0x230E2Cu;
            goto label_230e2c;
        }
    }
    ctx->pc = 0x230E24u;
label_230e24:
    // 0x230e24: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x230e24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_230e28:
    // 0x230e28: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x230e28u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_230e2c:
    // 0x230e2c: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x230e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_230e30:
    // 0x230e30: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x230e30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_230e34:
    // 0x230e34: 0xc08c200  jal         func_230800
label_230e38:
    if (ctx->pc == 0x230E38u) {
        ctx->pc = 0x230E3Cu;
        goto label_230e3c;
    }
    ctx->pc = 0x230E34u;
    SET_GPR_U32(ctx, 31, 0x230E3Cu);
    ctx->pc = 0x230800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230800u, 0x230E34u, 0x230E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230E3Cu;
label_230e3c:
    // 0x230e3c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_230e40:
    if (ctx->pc == 0x230E40u) {
        ctx->pc = 0x230E44u;
        goto label_230e44;
    }
    ctx->pc = 0x230E3Cu;
    {
        const bool branch_taken_0x230e3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x230e3c) {
            ctx->pc = 0x230E50u;
            goto label_230e50;
        }
    }
    ctx->pc = 0x230E44u;
label_230e44:
    // 0x230e44: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x230e44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_230e48:
    // 0x230e48: 0x10000097  b           . + 4 + (0x97 << 2)
label_230e4c:
    if (ctx->pc == 0x230E4Cu) {
        ctx->pc = 0x230E50u;
        goto label_230e50;
    }
    ctx->pc = 0x230E48u;
    {
        const bool branch_taken_0x230e48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x230e48) {
            ctx->pc = 0x2310A8u;
            goto label_2310a8;
        }
    }
    ctx->pc = 0x230E50u;
label_230e50:
    // 0x230e50: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x230e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_230e54:
    // 0x230e54: 0x3043f000  andi        $v1, $v0, 0xF000
    ctx->pc = 0x230e54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)61440);
label_230e58:
    // 0x230e58: 0x24021000  addiu       $v0, $zero, 0x1000
    ctx->pc = 0x230e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
label_230e5c:
    // 0x230e5c: 0x10620091  beq         $v1, $v0, . + 4 + (0x91 << 2)
label_230e60:
    if (ctx->pc == 0x230E60u) {
        ctx->pc = 0x230E64u;
        goto label_230e64;
    }
    ctx->pc = 0x230E5Cu;
    {
        const bool branch_taken_0x230e5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x230e5c) {
            ctx->pc = 0x2310A4u;
            goto label_2310a4;
        }
    }
    ctx->pc = 0x230E64u;
label_230e64:
    // 0x230e64: 0x24022000  addiu       $v0, $zero, 0x2000
    ctx->pc = 0x230e64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
label_230e68:
    // 0x230e68: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_230e6c:
    if (ctx->pc == 0x230E6Cu) {
        ctx->pc = 0x230E70u;
        goto label_230e70;
    }
    ctx->pc = 0x230E68u;
    {
        const bool branch_taken_0x230e68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x230e68) {
            ctx->pc = 0x230E78u;
            goto label_230e78;
        }
    }
    ctx->pc = 0x230E70u;
label_230e70:
    // 0x230e70: 0x1000008c  b           . + 4 + (0x8C << 2)
label_230e74:
    if (ctx->pc == 0x230E74u) {
        ctx->pc = 0x230E78u;
        goto label_230e78;
    }
    ctx->pc = 0x230E70u;
    {
        const bool branch_taken_0x230e70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x230e70) {
            ctx->pc = 0x2310A4u;
            goto label_2310a4;
        }
    }
    ctx->pc = 0x230E78u;
label_230e78:
    // 0x230e78: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x230e78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_230e7c:
    // 0x230e7c: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x230e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_230e80:
    // 0x230e80: 0x2445e000  addiu       $a1, $v0, -0x2000
    ctx->pc = 0x230e80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959104));
label_230e84:
    // 0x230e84: 0x24640034  addiu       $a0, $v1, 0x34
    ctx->pc = 0x230e84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 52));
label_230e88:
    // 0x230e88: 0xc08c1f0  jal         func_2307C0
label_230e8c:
    if (ctx->pc == 0x230E8Cu) {
        ctx->pc = 0x230E90u;
        goto label_230e90;
    }
    ctx->pc = 0x230E88u;
    SET_GPR_U32(ctx, 31, 0x230E90u);
    ctx->pc = 0x2307C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2307C0u, 0x230E88u, 0x230E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230E90u;
label_230e90:
    // 0x230e90: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x230e90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_230e94:
    // 0x230e94: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x230e94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_230e98:
    // 0x230e98: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x230e98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_230e9c:
    // 0x230e9c: 0xc0ecf9e  jal         func_3B3E78
label_230ea0:
    if (ctx->pc == 0x230EA0u) {
        ctx->pc = 0x230EA4u;
        goto label_230ea4;
    }
    ctx->pc = 0x230E9Cu;
    SET_GPR_U32(ctx, 31, 0x230EA4u);
    ctx->pc = 0x3B3E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B3E78u, 0x230E9Cu, 0x230EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230EA4u;
label_230ea4:
    // 0x230ea4: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x230ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_230ea8:
    // 0x230ea8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x230ea8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_230eac:
    // 0x230eac: 0xc08cacc  jal         func_232B30
label_230eb0:
    if (ctx->pc == 0x230EB0u) {
        ctx->pc = 0x230EB4u;
        goto label_230eb4;
    }
    ctx->pc = 0x230EACu;
    SET_GPR_U32(ctx, 31, 0x230EB4u);
    ctx->pc = 0x232B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232B30u, 0x230EACu, 0x230EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230EB4u;
label_230eb4:
    // 0x230eb4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_230eb8:
    if (ctx->pc == 0x230EB8u) {
        ctx->pc = 0x230EBCu;
        goto label_230ebc;
    }
    ctx->pc = 0x230EB4u;
    {
        const bool branch_taken_0x230eb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x230eb4) {
            ctx->pc = 0x230EC8u;
            goto label_230ec8;
        }
    }
    ctx->pc = 0x230EBCu;
label_230ebc:
    // 0x230ebc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x230ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_230ec0:
    // 0x230ec0: 0x10000079  b           . + 4 + (0x79 << 2)
label_230ec4:
    if (ctx->pc == 0x230EC4u) {
        ctx->pc = 0x230EC8u;
        goto label_230ec8;
    }
    ctx->pc = 0x230EC0u;
    {
        const bool branch_taken_0x230ec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x230ec0) {
            ctx->pc = 0x2310A8u;
            goto label_2310a8;
        }
    }
    ctx->pc = 0x230EC8u;
label_230ec8:
    // 0x230ec8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x230ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_230ecc:
    // 0x230ecc: 0x27a50078  addiu       $a1, $sp, 0x78
    ctx->pc = 0x230eccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
label_230ed0:
    // 0x230ed0: 0x27a6007c  addiu       $a2, $sp, 0x7C
    ctx->pc = 0x230ed0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
label_230ed4:
    // 0x230ed4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x230ed4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_230ed8:
    // 0x230ed8: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x230ed8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_230edc:
    // 0x230edc: 0x320f809  jalr        $t9
label_230ee0:
    if (ctx->pc == 0x230EE0u) {
        ctx->pc = 0x230EE4u;
        goto label_230ee4;
    }
    ctx->pc = 0x230EDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x230EE4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x230EDCu, 0x230EE4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x230EE4u;
label_230ee4:
    // 0x230ee4: 0x12400019  beqz        $s2, . + 4 + (0x19 << 2)
label_230ee8:
    if (ctx->pc == 0x230EE8u) {
        ctx->pc = 0x230EECu;
        goto label_230eec;
    }
    ctx->pc = 0x230EE4u;
    {
        const bool branch_taken_0x230ee4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x230ee4) {
            ctx->pc = 0x230F4Cu;
            goto label_230f4c;
        }
    }
    ctx->pc = 0x230EECu;
label_230eec:
    // 0x230eec: 0x27a40058  addiu       $a0, $sp, 0x58
    ctx->pc = 0x230eecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
label_230ef0:
    // 0x230ef0: 0x27859d10  addiu       $a1, $gp, -0x62F0
    ctx->pc = 0x230ef0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294941968));
label_230ef4:
    // 0x230ef4: 0xc040304  jal         func_100C10
label_230ef8:
    if (ctx->pc == 0x230EF8u) {
        ctx->pc = 0x230EFCu;
        goto label_230efc;
    }
    ctx->pc = 0x230EF4u;
    SET_GPR_U32(ctx, 31, 0x230EFCu);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x230EF4u, 0x230EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230EFCu;
label_230efc:
    // 0x230efc: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x230efcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
label_230f00:
    // 0x230f00: 0x27a50058  addiu       $a1, $sp, 0x58
    ctx->pc = 0x230f00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
label_230f04:
    // 0x230f04: 0xc119568  jal         func_4655A0
label_230f08:
    if (ctx->pc == 0x230F08u) {
        ctx->pc = 0x230F0Cu;
        goto label_230f0c;
    }
    ctx->pc = 0x230F04u;
    SET_GPR_U32(ctx, 31, 0x230F0Cu);
    ctx->pc = 0x4655A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4655A0u, 0x230F04u, 0x230F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230F0Cu;
label_230f0c:
    // 0x230f0c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x230f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_230f10:
    // 0x230f10: 0x27a50048  addiu       $a1, $sp, 0x48
    ctx->pc = 0x230f10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
label_230f14:
    // 0x230f14: 0xc11d61c  jal         func_475870
label_230f18:
    if (ctx->pc == 0x230F18u) {
        ctx->pc = 0x230F1Cu;
        goto label_230f1c;
    }
    ctx->pc = 0x230F14u;
    SET_GPR_U32(ctx, 31, 0x230F1Cu);
    ctx->pc = 0x475870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x475870u, 0x230F14u, 0x230F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230F1Cu;
label_230f1c:
    // 0x230f1c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x230f1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_230f20:
    // 0x230f20: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x230f20u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_230f24:
    // 0x230f24: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x230f24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
label_230f28:
    // 0x230f28: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x230f28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_230f2c:
    // 0x230f2c: 0xc0406a0  jal         func_101A80
label_230f30:
    if (ctx->pc == 0x230F30u) {
        ctx->pc = 0x230F34u;
        goto label_230f34;
    }
    ctx->pc = 0x230F2Cu;
    SET_GPR_U32(ctx, 31, 0x230F34u);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x230F2Cu, 0x230F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230F34u;
label_230f34:
    // 0x230f34: 0x27a40058  addiu       $a0, $sp, 0x58
    ctx->pc = 0x230f34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
label_230f38:
    // 0x230f38: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x230f38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_230f3c:
    // 0x230f3c: 0xc0402d4  jal         func_100B50
label_230f40:
    if (ctx->pc == 0x230F40u) {
        ctx->pc = 0x230F44u;
        goto label_230f44;
    }
    ctx->pc = 0x230F3Cu;
    SET_GPR_U32(ctx, 31, 0x230F44u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x230F3Cu, 0x230F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230F44u;
label_230f44:
    // 0x230f44: 0x10000007  b           . + 4 + (0x7 << 2)
label_230f48:
    if (ctx->pc == 0x230F48u) {
        ctx->pc = 0x230F4Cu;
        goto label_230f4c;
    }
    ctx->pc = 0x230F44u;
    {
        const bool branch_taken_0x230f44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x230f44) {
            ctx->pc = 0x230F64u;
            goto label_230f64;
        }
    }
    ctx->pc = 0x230F4Cu;
label_230f4c:
    // 0x230f4c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x230f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_230f50:
    // 0x230f50: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x230f50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_230f54:
    // 0x230f54: 0xc11d61c  jal         func_475870
label_230f58:
    if (ctx->pc == 0x230F58u) {
        ctx->pc = 0x230F5Cu;
        goto label_230f5c;
    }
    ctx->pc = 0x230F54u;
    SET_GPR_U32(ctx, 31, 0x230F5Cu);
    ctx->pc = 0x475870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x475870u, 0x230F54u, 0x230F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230F5Cu;
label_230f5c:
    // 0x230f5c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x230f5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_230f60:
    // 0x230f60: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x230f60u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_230f64:
    // 0x230f64: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x230f64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_230f68:
    // 0x230f68: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x230f68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_230f6c:
    // 0x230f6c: 0x1462004a  bne         $v1, $v0, . + 4 + (0x4A << 2)
label_230f70:
    if (ctx->pc == 0x230F70u) {
        ctx->pc = 0x230F74u;
        goto label_230f74;
    }
    ctx->pc = 0x230F6Cu;
    {
        const bool branch_taken_0x230f6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x230f6c) {
            ctx->pc = 0x231098u;
            goto label_231098;
        }
    }
    ctx->pc = 0x230F74u;
label_230f74:
    // 0x230f74: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x230f74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_230f78:
    // 0x230f78: 0x27a50068  addiu       $a1, $sp, 0x68
    ctx->pc = 0x230f78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
label_230f7c:
    // 0x230f7c: 0x27a6006c  addiu       $a2, $sp, 0x6C
    ctx->pc = 0x230f7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
label_230f80:
    // 0x230f80: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x230f80u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_230f84:
    // 0x230f84: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x230f84u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_230f88:
    // 0x230f88: 0x320f809  jalr        $t9
label_230f8c:
    if (ctx->pc == 0x230F8Cu) {
        ctx->pc = 0x230F90u;
        goto label_230f90;
    }
    ctx->pc = 0x230F88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x230F90u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x230F88u, 0x230F90u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x230F90u;
label_230f90:
    // 0x230f90: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x230f90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_230f94:
    // 0x230f94: 0x27a5008c  addiu       $a1, $sp, 0x8C
    ctx->pc = 0x230f94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
label_230f98:
    // 0x230f98: 0x27a60088  addiu       $a2, $sp, 0x88
    ctx->pc = 0x230f98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
label_230f9c:
    // 0x230f9c: 0xc11cb40  jal         func_472D00
label_230fa0:
    if (ctx->pc == 0x230FA0u) {
        ctx->pc = 0x230FA4u;
        goto label_230fa4;
    }
    ctx->pc = 0x230F9Cu;
    SET_GPR_U32(ctx, 31, 0x230FA4u);
    ctx->pc = 0x472D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x472D00u, 0x230F9Cu, 0x230FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230FA4u;
label_230fa4:
    // 0x230fa4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x230fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_230fa8:
    // 0x230fa8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x230fa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_230fac:
    // 0x230fac: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_230fb0:
    if (ctx->pc == 0x230FB0u) {
        ctx->pc = 0x230FB4u;
        goto label_230fb4;
    }
    ctx->pc = 0x230FACu;
    {
        const bool branch_taken_0x230fac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x230fac) {
            ctx->pc = 0x230FD4u;
            goto label_230fd4;
        }
    }
    ctx->pc = 0x230FB4u;
label_230fb4:
    // 0x230fb4: 0xc7a2008c  lwc1        $f2, 0x8C($sp)
    ctx->pc = 0x230fb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_230fb8:
    // 0x230fb8: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x230fb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_230fbc:
    // 0x230fbc: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x230fbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_230fc0:
    // 0x230fc0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x230fc0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_230fc4:
    // 0x230fc4: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x230fc4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_230fc8:
    // 0x230fc8: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x230fc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
label_230fcc:
    // 0x230fcc: 0x1000000f  b           . + 4 + (0xF << 2)
label_230fd0:
    if (ctx->pc == 0x230FD0u) {
        ctx->pc = 0x230FD4u;
        goto label_230fd4;
    }
    ctx->pc = 0x230FCCu;
    {
        const bool branch_taken_0x230fcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x230fcc) {
            ctx->pc = 0x23100Cu;
            goto label_23100c;
        }
    }
    ctx->pc = 0x230FD4u;
label_230fd4:
    // 0x230fd4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x230fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_230fd8:
    // 0x230fd8: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x230fd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_230fdc:
    // 0x230fdc: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_230fe0:
    if (ctx->pc == 0x230FE0u) {
        ctx->pc = 0x230FE4u;
        goto label_230fe4;
    }
    ctx->pc = 0x230FDCu;
    {
        const bool branch_taken_0x230fdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x230fdc) {
            ctx->pc = 0x23100Cu;
            goto label_23100c;
        }
    }
    ctx->pc = 0x230FE4u;
label_230fe4:
    // 0x230fe4: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x230fe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_230fe8:
    // 0x230fe8: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x230fe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_230fec:
    // 0x230fec: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x230fecu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_230ff0:
    // 0x230ff0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x230ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_230ff4:
    // 0x230ff4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x230ff4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_230ff8:
    // 0x230ff8: 0x0  nop
    ctx->pc = 0x230ff8u;
    // NOP
label_230ffc:
    // 0x230ffc: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x230ffcu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_231000:
    // 0x231000: 0xc7a0008c  lwc1        $f0, 0x8C($sp)
    ctx->pc = 0x231000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_231004:
    // 0x231004: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x231004u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_231008:
    // 0x231008: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x231008u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
label_23100c:
    // 0x23100c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x23100cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_231010:
    // 0x231010: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x231010u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_231014:
    // 0x231014: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_231018:
    if (ctx->pc == 0x231018u) {
        ctx->pc = 0x23101Cu;
        goto label_23101c;
    }
    ctx->pc = 0x231014u;
    {
        const bool branch_taken_0x231014 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x231014) {
            ctx->pc = 0x23103Cu;
            goto label_23103c;
        }
    }
    ctx->pc = 0x23101Cu;
label_23101c:
    // 0x23101c: 0xc7a20088  lwc1        $f2, 0x88($sp)
    ctx->pc = 0x23101cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_231020:
    // 0x231020: 0xc7a1006c  lwc1        $f1, 0x6C($sp)
    ctx->pc = 0x231020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_231024:
    // 0x231024: 0xc7a0007c  lwc1        $f0, 0x7C($sp)
    ctx->pc = 0x231024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_231028:
    // 0x231028: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x231028u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_23102c:
    // 0x23102c: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x23102cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_231030:
    // 0x231030: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x231030u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_231034:
    // 0x231034: 0x1000000f  b           . + 4 + (0xF << 2)
label_231038:
    if (ctx->pc == 0x231038u) {
        ctx->pc = 0x23103Cu;
        goto label_23103c;
    }
    ctx->pc = 0x231034u;
    {
        const bool branch_taken_0x231034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x231034) {
            ctx->pc = 0x231074u;
            goto label_231074;
        }
    }
    ctx->pc = 0x23103Cu;
label_23103c:
    // 0x23103c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x23103cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_231040:
    // 0x231040: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x231040u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_231044:
    // 0x231044: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_231048:
    if (ctx->pc == 0x231048u) {
        ctx->pc = 0x23104Cu;
        goto label_23104c;
    }
    ctx->pc = 0x231044u;
    {
        const bool branch_taken_0x231044 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x231044) {
            ctx->pc = 0x231074u;
            goto label_231074;
        }
    }
    ctx->pc = 0x23104Cu;
label_23104c:
    // 0x23104c: 0xc7a1006c  lwc1        $f1, 0x6C($sp)
    ctx->pc = 0x23104cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_231050:
    // 0x231050: 0xc7a0007c  lwc1        $f0, 0x7C($sp)
    ctx->pc = 0x231050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_231054:
    // 0x231054: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x231054u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_231058:
    // 0x231058: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x231058u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_23105c:
    // 0x23105c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23105cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_231060:
    // 0x231060: 0x0  nop
    ctx->pc = 0x231060u;
    // NOP
label_231064:
    // 0x231064: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x231064u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_231068:
    // 0x231068: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x231068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_23106c:
    // 0x23106c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x23106cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_231070:
    // 0x231070: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x231070u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_231074:
    // 0x231074: 0x93a200c0  lbu         $v0, 0xC0($sp)
    ctx->pc = 0x231074u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 192)));
label_231078:
    // 0x231078: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x231078u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_23107c:
    // 0x23107c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x23107cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_231080:
    // 0x231080: 0xc7ac008c  lwc1        $f12, 0x8C($sp)
    ctx->pc = 0x231080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_231084:
    // 0x231084: 0xc7ad0088  lwc1        $f13, 0x88($sp)
    ctx->pc = 0x231084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_231088:
    // 0x231088: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x231088u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_23108c:
    // 0x23108c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x23108cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_231090:
    // 0x231090: 0x320f809  jalr        $t9
label_231094:
    if (ctx->pc == 0x231094u) {
        ctx->pc = 0x231098u;
        goto label_231098;
    }
    ctx->pc = 0x231090u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x231098u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x231090u, 0x231098u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x231098u;
label_231098:
    // 0x231098: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x231098u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23109c:
    // 0x23109c: 0x10000002  b           . + 4 + (0x2 << 2)
label_2310a0:
    if (ctx->pc == 0x2310A0u) {
        ctx->pc = 0x2310A4u;
        goto label_2310a4;
    }
    ctx->pc = 0x23109Cu;
    {
        const bool branch_taken_0x23109c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23109c) {
            ctx->pc = 0x2310A8u;
            goto label_2310a8;
        }
    }
    ctx->pc = 0x2310A4u;
label_2310a4:
    // 0x2310a4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2310a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2310a8:
    // 0x2310a8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2310a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2310ac:
    // 0x2310ac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2310acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2310b0:
    // 0x2310b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2310b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2310b4:
    // 0x2310b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2310b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2310b8:
    // 0x2310b8: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x2310b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_2310bc:
    // 0x2310bc: 0x3e00008  jr          $ra
label_2310c0:
    if (ctx->pc == 0x2310C0u) {
        ctx->pc = 0x2310C4u;
        goto label_2310c4;
    }
    ctx->pc = 0x2310BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2310BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2310C4u;
label_2310c4:
    // 0x2310c4: 0x0  nop
    ctx->pc = 0x2310c4u;
    // NOP
label_2310c8:
    // 0x2310c8: 0x0  nop
    ctx->pc = 0x2310c8u;
    // NOP
label_2310cc:
    // 0x2310cc: 0x0  nop
    ctx->pc = 0x2310ccu;
    // NOP
    ctx->pc = 0x2310d0u;
}
