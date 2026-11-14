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

// Function: sub_00101D80
// Address: 0x101d80 - 0x102210
void sub_00101D80_0x101d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00101D80_0x101d80");
#endif

    switch (ctx->pc) {
        case 0x101d80u: goto label_101d80;
        case 0x101d84u: goto label_101d84;
        case 0x101d88u: goto label_101d88;
        case 0x101d8cu: goto label_101d8c;
        case 0x101d90u: goto label_101d90;
        case 0x101d94u: goto label_101d94;
        case 0x101d98u: goto label_101d98;
        case 0x101d9cu: goto label_101d9c;
        case 0x101da0u: goto label_101da0;
        case 0x101da4u: goto label_101da4;
        case 0x101da8u: goto label_101da8;
        case 0x101dacu: goto label_101dac;
        case 0x101db0u: goto label_101db0;
        case 0x101db4u: goto label_101db4;
        case 0x101db8u: goto label_101db8;
        case 0x101dbcu: goto label_101dbc;
        case 0x101dc0u: goto label_101dc0;
        case 0x101dc4u: goto label_101dc4;
        case 0x101dc8u: goto label_101dc8;
        case 0x101dccu: goto label_101dcc;
        case 0x101dd0u: goto label_101dd0;
        case 0x101dd4u: goto label_101dd4;
        case 0x101dd8u: goto label_101dd8;
        case 0x101ddcu: goto label_101ddc;
        case 0x101de0u: goto label_101de0;
        case 0x101de4u: goto label_101de4;
        case 0x101de8u: goto label_101de8;
        case 0x101decu: goto label_101dec;
        case 0x101df0u: goto label_101df0;
        case 0x101df4u: goto label_101df4;
        case 0x101df8u: goto label_101df8;
        case 0x101dfcu: goto label_101dfc;
        case 0x101e00u: goto label_101e00;
        case 0x101e04u: goto label_101e04;
        case 0x101e08u: goto label_101e08;
        case 0x101e0cu: goto label_101e0c;
        case 0x101e10u: goto label_101e10;
        case 0x101e14u: goto label_101e14;
        case 0x101e18u: goto label_101e18;
        case 0x101e1cu: goto label_101e1c;
        case 0x101e20u: goto label_101e20;
        case 0x101e24u: goto label_101e24;
        case 0x101e28u: goto label_101e28;
        case 0x101e2cu: goto label_101e2c;
        case 0x101e30u: goto label_101e30;
        case 0x101e34u: goto label_101e34;
        case 0x101e38u: goto label_101e38;
        case 0x101e3cu: goto label_101e3c;
        case 0x101e40u: goto label_101e40;
        case 0x101e44u: goto label_101e44;
        case 0x101e48u: goto label_101e48;
        case 0x101e4cu: goto label_101e4c;
        case 0x101e50u: goto label_101e50;
        case 0x101e54u: goto label_101e54;
        case 0x101e58u: goto label_101e58;
        case 0x101e5cu: goto label_101e5c;
        case 0x101e60u: goto label_101e60;
        case 0x101e64u: goto label_101e64;
        case 0x101e68u: goto label_101e68;
        case 0x101e6cu: goto label_101e6c;
        case 0x101e70u: goto label_101e70;
        case 0x101e74u: goto label_101e74;
        case 0x101e78u: goto label_101e78;
        case 0x101e7cu: goto label_101e7c;
        case 0x101e80u: goto label_101e80;
        case 0x101e84u: goto label_101e84;
        case 0x101e88u: goto label_101e88;
        case 0x101e8cu: goto label_101e8c;
        case 0x101e90u: goto label_101e90;
        case 0x101e94u: goto label_101e94;
        case 0x101e98u: goto label_101e98;
        case 0x101e9cu: goto label_101e9c;
        case 0x101ea0u: goto label_101ea0;
        case 0x101ea4u: goto label_101ea4;
        case 0x101ea8u: goto label_101ea8;
        case 0x101eacu: goto label_101eac;
        case 0x101eb0u: goto label_101eb0;
        case 0x101eb4u: goto label_101eb4;
        case 0x101eb8u: goto label_101eb8;
        case 0x101ebcu: goto label_101ebc;
        case 0x101ec0u: goto label_101ec0;
        case 0x101ec4u: goto label_101ec4;
        case 0x101ec8u: goto label_101ec8;
        case 0x101eccu: goto label_101ecc;
        case 0x101ed0u: goto label_101ed0;
        case 0x101ed4u: goto label_101ed4;
        case 0x101ed8u: goto label_101ed8;
        case 0x101edcu: goto label_101edc;
        case 0x101ee0u: goto label_101ee0;
        case 0x101ee4u: goto label_101ee4;
        case 0x101ee8u: goto label_101ee8;
        case 0x101eecu: goto label_101eec;
        case 0x101ef0u: goto label_101ef0;
        case 0x101ef4u: goto label_101ef4;
        case 0x101ef8u: goto label_101ef8;
        case 0x101efcu: goto label_101efc;
        case 0x101f00u: goto label_101f00;
        case 0x101f04u: goto label_101f04;
        case 0x101f08u: goto label_101f08;
        case 0x101f0cu: goto label_101f0c;
        case 0x101f10u: goto label_101f10;
        case 0x101f14u: goto label_101f14;
        case 0x101f18u: goto label_101f18;
        case 0x101f1cu: goto label_101f1c;
        case 0x101f20u: goto label_101f20;
        case 0x101f24u: goto label_101f24;
        case 0x101f28u: goto label_101f28;
        case 0x101f2cu: goto label_101f2c;
        case 0x101f30u: goto label_101f30;
        case 0x101f34u: goto label_101f34;
        case 0x101f38u: goto label_101f38;
        case 0x101f3cu: goto label_101f3c;
        case 0x101f40u: goto label_101f40;
        case 0x101f44u: goto label_101f44;
        case 0x101f48u: goto label_101f48;
        case 0x101f4cu: goto label_101f4c;
        case 0x101f50u: goto label_101f50;
        case 0x101f54u: goto label_101f54;
        case 0x101f58u: goto label_101f58;
        case 0x101f5cu: goto label_101f5c;
        case 0x101f60u: goto label_101f60;
        case 0x101f64u: goto label_101f64;
        case 0x101f68u: goto label_101f68;
        case 0x101f6cu: goto label_101f6c;
        case 0x101f70u: goto label_101f70;
        case 0x101f74u: goto label_101f74;
        case 0x101f78u: goto label_101f78;
        case 0x101f7cu: goto label_101f7c;
        case 0x101f80u: goto label_101f80;
        case 0x101f84u: goto label_101f84;
        case 0x101f88u: goto label_101f88;
        case 0x101f8cu: goto label_101f8c;
        case 0x101f90u: goto label_101f90;
        case 0x101f94u: goto label_101f94;
        case 0x101f98u: goto label_101f98;
        case 0x101f9cu: goto label_101f9c;
        case 0x101fa0u: goto label_101fa0;
        case 0x101fa4u: goto label_101fa4;
        case 0x101fa8u: goto label_101fa8;
        case 0x101facu: goto label_101fac;
        case 0x101fb0u: goto label_101fb0;
        case 0x101fb4u: goto label_101fb4;
        case 0x101fb8u: goto label_101fb8;
        case 0x101fbcu: goto label_101fbc;
        case 0x101fc0u: goto label_101fc0;
        case 0x101fc4u: goto label_101fc4;
        case 0x101fc8u: goto label_101fc8;
        case 0x101fccu: goto label_101fcc;
        case 0x101fd0u: goto label_101fd0;
        case 0x101fd4u: goto label_101fd4;
        case 0x101fd8u: goto label_101fd8;
        case 0x101fdcu: goto label_101fdc;
        case 0x101fe0u: goto label_101fe0;
        case 0x101fe4u: goto label_101fe4;
        case 0x101fe8u: goto label_101fe8;
        case 0x101fecu: goto label_101fec;
        case 0x101ff0u: goto label_101ff0;
        case 0x101ff4u: goto label_101ff4;
        case 0x101ff8u: goto label_101ff8;
        case 0x101ffcu: goto label_101ffc;
        case 0x102000u: goto label_102000;
        case 0x102004u: goto label_102004;
        case 0x102008u: goto label_102008;
        case 0x10200cu: goto label_10200c;
        case 0x102010u: goto label_102010;
        case 0x102014u: goto label_102014;
        case 0x102018u: goto label_102018;
        case 0x10201cu: goto label_10201c;
        case 0x102020u: goto label_102020;
        case 0x102024u: goto label_102024;
        case 0x102028u: goto label_102028;
        case 0x10202cu: goto label_10202c;
        case 0x102030u: goto label_102030;
        case 0x102034u: goto label_102034;
        case 0x102038u: goto label_102038;
        case 0x10203cu: goto label_10203c;
        case 0x102040u: goto label_102040;
        case 0x102044u: goto label_102044;
        case 0x102048u: goto label_102048;
        case 0x10204cu: goto label_10204c;
        case 0x102050u: goto label_102050;
        case 0x102054u: goto label_102054;
        case 0x102058u: goto label_102058;
        case 0x10205cu: goto label_10205c;
        case 0x102060u: goto label_102060;
        case 0x102064u: goto label_102064;
        case 0x102068u: goto label_102068;
        case 0x10206cu: goto label_10206c;
        case 0x102070u: goto label_102070;
        case 0x102074u: goto label_102074;
        case 0x102078u: goto label_102078;
        case 0x10207cu: goto label_10207c;
        case 0x102080u: goto label_102080;
        case 0x102084u: goto label_102084;
        case 0x102088u: goto label_102088;
        case 0x10208cu: goto label_10208c;
        case 0x102090u: goto label_102090;
        case 0x102094u: goto label_102094;
        case 0x102098u: goto label_102098;
        case 0x10209cu: goto label_10209c;
        case 0x1020a0u: goto label_1020a0;
        case 0x1020a4u: goto label_1020a4;
        case 0x1020a8u: goto label_1020a8;
        case 0x1020acu: goto label_1020ac;
        case 0x1020b0u: goto label_1020b0;
        case 0x1020b4u: goto label_1020b4;
        case 0x1020b8u: goto label_1020b8;
        case 0x1020bcu: goto label_1020bc;
        case 0x1020c0u: goto label_1020c0;
        case 0x1020c4u: goto label_1020c4;
        case 0x1020c8u: goto label_1020c8;
        case 0x1020ccu: goto label_1020cc;
        case 0x1020d0u: goto label_1020d0;
        case 0x1020d4u: goto label_1020d4;
        case 0x1020d8u: goto label_1020d8;
        case 0x1020dcu: goto label_1020dc;
        case 0x1020e0u: goto label_1020e0;
        case 0x1020e4u: goto label_1020e4;
        case 0x1020e8u: goto label_1020e8;
        case 0x1020ecu: goto label_1020ec;
        case 0x1020f0u: goto label_1020f0;
        case 0x1020f4u: goto label_1020f4;
        case 0x1020f8u: goto label_1020f8;
        case 0x1020fcu: goto label_1020fc;
        case 0x102100u: goto label_102100;
        case 0x102104u: goto label_102104;
        case 0x102108u: goto label_102108;
        case 0x10210cu: goto label_10210c;
        case 0x102110u: goto label_102110;
        case 0x102114u: goto label_102114;
        case 0x102118u: goto label_102118;
        case 0x10211cu: goto label_10211c;
        case 0x102120u: goto label_102120;
        case 0x102124u: goto label_102124;
        case 0x102128u: goto label_102128;
        case 0x10212cu: goto label_10212c;
        case 0x102130u: goto label_102130;
        case 0x102134u: goto label_102134;
        case 0x102138u: goto label_102138;
        case 0x10213cu: goto label_10213c;
        case 0x102140u: goto label_102140;
        case 0x102144u: goto label_102144;
        case 0x102148u: goto label_102148;
        case 0x10214cu: goto label_10214c;
        case 0x102150u: goto label_102150;
        case 0x102154u: goto label_102154;
        case 0x102158u: goto label_102158;
        case 0x10215cu: goto label_10215c;
        case 0x102160u: goto label_102160;
        case 0x102164u: goto label_102164;
        case 0x102168u: goto label_102168;
        case 0x10216cu: goto label_10216c;
        case 0x102170u: goto label_102170;
        case 0x102174u: goto label_102174;
        case 0x102178u: goto label_102178;
        case 0x10217cu: goto label_10217c;
        case 0x102180u: goto label_102180;
        case 0x102184u: goto label_102184;
        case 0x102188u: goto label_102188;
        case 0x10218cu: goto label_10218c;
        case 0x102190u: goto label_102190;
        case 0x102194u: goto label_102194;
        case 0x102198u: goto label_102198;
        case 0x10219cu: goto label_10219c;
        case 0x1021a0u: goto label_1021a0;
        case 0x1021a4u: goto label_1021a4;
        case 0x1021a8u: goto label_1021a8;
        case 0x1021acu: goto label_1021ac;
        case 0x1021b0u: goto label_1021b0;
        case 0x1021b4u: goto label_1021b4;
        case 0x1021b8u: goto label_1021b8;
        case 0x1021bcu: goto label_1021bc;
        case 0x1021c0u: goto label_1021c0;
        case 0x1021c4u: goto label_1021c4;
        case 0x1021c8u: goto label_1021c8;
        case 0x1021ccu: goto label_1021cc;
        case 0x1021d0u: goto label_1021d0;
        case 0x1021d4u: goto label_1021d4;
        case 0x1021d8u: goto label_1021d8;
        case 0x1021dcu: goto label_1021dc;
        case 0x1021e0u: goto label_1021e0;
        case 0x1021e4u: goto label_1021e4;
        case 0x1021e8u: goto label_1021e8;
        case 0x1021ecu: goto label_1021ec;
        case 0x1021f0u: goto label_1021f0;
        case 0x1021f4u: goto label_1021f4;
        case 0x1021f8u: goto label_1021f8;
        case 0x1021fcu: goto label_1021fc;
        case 0x102200u: goto label_102200;
        case 0x102204u: goto label_102204;
        case 0x102208u: goto label_102208;
        case 0x10220cu: goto label_10220c;
        default: break;
    }

    ctx->pc = 0x101d80u;

label_101d80:
    // 0x101d80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x101d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_101d84:
    // 0x101d84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x101d84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_101d88:
    // 0x101d88: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x101d88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_101d8c:
    // 0x101d8c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x101d8cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
label_101d90:
    // 0x101d90: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x101d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_101d94:
    // 0x101d94: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_101d98:
    if (ctx->pc == 0x101D98u) {
        ctx->pc = 0x101D9Cu;
        goto label_101d9c;
    }
    ctx->pc = 0x101D94u;
    {
        const bool branch_taken_0x101d94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x101d94) {
            ctx->pc = 0x101DDCu;
            goto label_101ddc;
        }
    }
    ctx->pc = 0x101D9Cu;
label_101d9c:
    // 0x101d9c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x101d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_101da0:
    // 0x101da0: 0x24633250  addiu       $v1, $v1, 0x3250
    ctx->pc = 0x101da0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12880));
label_101da4:
    // 0x101da4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x101da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_101da8:
    // 0x101da8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x101da8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_101dac:
    // 0x101dac: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x101dacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_101db0:
    // 0x101db0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x101db0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_101db4:
    // 0x101db4: 0xc08ec24  jal         func_23B090
label_101db8:
    if (ctx->pc == 0x101DB8u) {
        ctx->pc = 0x101DBCu;
        goto label_101dbc;
    }
    ctx->pc = 0x101DB4u;
    SET_GPR_U32(ctx, 31, 0x101DBCu);
    ctx->pc = 0x23B090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B090u, 0x101DB4u, 0x101DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101DBCu;
label_101dbc:
    // 0x101dbc: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x101dbcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
label_101dc0:
    // 0x101dc0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x101dc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_101dc4:
    // 0x101dc4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x101dc4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_101dc8:
    // 0x101dc8: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
label_101dcc:
    if (ctx->pc == 0x101DCCu) {
        ctx->pc = 0x101DD0u;
        goto label_101dd0;
    }
    ctx->pc = 0x101DC8u;
    {
        const bool branch_taken_0x101dc8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x101dc8) {
            ctx->pc = 0x101DDCu;
            goto label_101ddc;
        }
    }
    ctx->pc = 0x101DD0u;
label_101dd0:
    // 0x101dd0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x101dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_101dd4:
    // 0x101dd4: 0xc0ba070  jal         func_2E81C0
label_101dd8:
    if (ctx->pc == 0x101DD8u) {
        ctx->pc = 0x101DDCu;
        goto label_101ddc;
    }
    ctx->pc = 0x101DD4u;
    SET_GPR_U32(ctx, 31, 0x101DDCu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x101DD4u, 0x101DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101DDCu;
label_101ddc:
    // 0x101ddc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x101ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_101de0:
    // 0x101de0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x101de0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_101de4:
    // 0x101de4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x101de4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_101de8:
    // 0x101de8: 0x3e00008  jr          $ra
label_101dec:
    if (ctx->pc == 0x101DECu) {
        ctx->pc = 0x101DF0u;
        goto label_101df0;
    }
    ctx->pc = 0x101DE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x101DE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x101DF0u;
label_101df0:
    // 0x101df0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x101df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_101df4:
    // 0x101df4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x101df4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_101df8:
    // 0x101df8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x101df8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_101dfc:
    // 0x101dfc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x101dfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_101e00:
    // 0x101e00: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x101e00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_101e04:
    // 0x101e04: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x101e04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_101e08:
    // 0x101e08: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x101e08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_101e0c:
    // 0x101e0c: 0xafa40060  sw          $a0, 0x60($sp)
    ctx->pc = 0x101e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
label_101e10:
    // 0x101e10: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x101e10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_101e14:
    // 0x101e14: 0xc08ec3c  jal         func_23B0F0
label_101e18:
    if (ctx->pc == 0x101E18u) {
        ctx->pc = 0x101E1Cu;
        goto label_101e1c;
    }
    ctx->pc = 0x101E14u;
    SET_GPR_U32(ctx, 31, 0x101E1Cu);
    ctx->pc = 0x23B0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B0F0u, 0x101E14u, 0x101E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101E1Cu;
label_101e1c:
    // 0x101e1c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x101e1cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_101e20:
    // 0x101e20: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x101e20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_101e24:
    // 0x101e24: 0xc119b68  jal         func_466DA0
label_101e28:
    if (ctx->pc == 0x101E28u) {
        ctx->pc = 0x101E2Cu;
        goto label_101e2c;
    }
    ctx->pc = 0x101E24u;
    SET_GPR_U32(ctx, 31, 0x101E2Cu);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x101E24u, 0x101E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101E2Cu;
label_101e2c:
    // 0x101e2c: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x101e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_101e30:
    // 0x101e30: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x101e30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_101e34:
    // 0x101e34: 0xc0400e0  jal         func_100380
label_101e38:
    if (ctx->pc == 0x101E38u) {
        ctx->pc = 0x101E3Cu;
        goto label_101e3c;
    }
    ctx->pc = 0x101E34u;
    SET_GPR_U32(ctx, 31, 0x101E3Cu);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x101E34u, 0x101E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101E3Cu;
label_101e3c:
    // 0x101e3c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x101e3cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_101e40:
    // 0x101e40: 0x12800005  beqz        $s4, . + 4 + (0x5 << 2)
label_101e44:
    if (ctx->pc == 0x101E44u) {
        ctx->pc = 0x101E48u;
        goto label_101e48;
    }
    ctx->pc = 0x101E40u;
    {
        const bool branch_taken_0x101e40 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x101e40) {
            ctx->pc = 0x101E58u;
            goto label_101e58;
        }
    }
    ctx->pc = 0x101E48u;
label_101e48:
    // 0x101e48: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x101e48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_101e4c:
    // 0x101e4c: 0xc050918  jal         func_142460
label_101e50:
    if (ctx->pc == 0x101E50u) {
        ctx->pc = 0x101E54u;
        goto label_101e54;
    }
    ctx->pc = 0x101E4Cu;
    SET_GPR_U32(ctx, 31, 0x101E54u);
    ctx->pc = 0x142460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x142460u, 0x101E4Cu, 0x101E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101E54u;
label_101e54:
    // 0x101e54: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x101e54u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_101e58:
    // 0x101e58: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x101e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_101e5c:
    // 0x101e5c: 0xac540038  sw          $s4, 0x38($v0)
    ctx->pc = 0x101e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 20));
label_101e60:
    // 0x101e60: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x101e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_101e64:
    // 0x101e64: 0x8c440038  lw          $a0, 0x38($v0)
    ctx->pc = 0x101e64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_101e68:
    // 0x101e68: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x101e68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_101e6c:
    // 0x101e6c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x101e6cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_101e70:
    // 0x101e70: 0x320f809  jalr        $t9
label_101e74:
    if (ctx->pc == 0x101E74u) {
        ctx->pc = 0x101E78u;
        goto label_101e78;
    }
    ctx->pc = 0x101E70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x101E78u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x101E70u, 0x101E78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x101E78u;
label_101e78:
    // 0x101e78: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x101e78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_101e7c:
    // 0x101e7c: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x101e7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_101e80:
    // 0x101e80: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x101e80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_101e84:
    // 0x101e84: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x101e84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_101e88:
    // 0x101e88: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x101e88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_101e8c:
    // 0x101e8c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x101e8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_101e90:
    // 0x101e90: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x101e90u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_101e94:
    // 0x101e94: 0x24040064  addiu       $a0, $zero, 0x64
    ctx->pc = 0x101e94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_101e98:
    // 0x101e98: 0xc119b68  jal         func_466DA0
label_101e9c:
    if (ctx->pc == 0x101E9Cu) {
        ctx->pc = 0x101EA0u;
        goto label_101ea0;
    }
    ctx->pc = 0x101E98u;
    SET_GPR_U32(ctx, 31, 0x101EA0u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x101E98u, 0x101EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101EA0u;
label_101ea0:
    // 0x101ea0: 0x24040064  addiu       $a0, $zero, 0x64
    ctx->pc = 0x101ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_101ea4:
    // 0x101ea4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x101ea4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_101ea8:
    // 0x101ea8: 0xc0400e0  jal         func_100380
label_101eac:
    if (ctx->pc == 0x101EACu) {
        ctx->pc = 0x101EB0u;
        goto label_101eb0;
    }
    ctx->pc = 0x101EA8u;
    SET_GPR_U32(ctx, 31, 0x101EB0u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x101EA8u, 0x101EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101EB0u;
label_101eb0:
    // 0x101eb0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x101eb0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_101eb4:
    // 0x101eb4: 0x12600005  beqz        $s3, . + 4 + (0x5 << 2)
label_101eb8:
    if (ctx->pc == 0x101EB8u) {
        ctx->pc = 0x101EBCu;
        goto label_101ebc;
    }
    ctx->pc = 0x101EB4u;
    {
        const bool branch_taken_0x101eb4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x101eb4) {
            ctx->pc = 0x101ECCu;
            goto label_101ecc;
        }
    }
    ctx->pc = 0x101EBCu;
label_101ebc:
    // 0x101ebc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x101ebcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_101ec0:
    // 0x101ec0: 0xc040ac0  jal         func_102B00
label_101ec4:
    if (ctx->pc == 0x101EC4u) {
        ctx->pc = 0x101EC8u;
        goto label_101ec8;
    }
    ctx->pc = 0x101EC0u;
    SET_GPR_U32(ctx, 31, 0x101EC8u);
    ctx->pc = 0x102B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102B00u, 0x101EC0u, 0x101EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101EC8u;
label_101ec8:
    // 0x101ec8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x101ec8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_101ecc:
    // 0x101ecc: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x101eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_101ed0:
    // 0x101ed0: 0xac530028  sw          $s3, 0x28($v0)
    ctx->pc = 0x101ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 19));
label_101ed4:
    // 0x101ed4: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x101ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_101ed8:
    // 0x101ed8: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x101ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_101edc:
    // 0x101edc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x101edcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_101ee0:
    // 0x101ee0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x101ee0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_101ee4:
    // 0x101ee4: 0x320f809  jalr        $t9
label_101ee8:
    if (ctx->pc == 0x101EE8u) {
        ctx->pc = 0x101EECu;
        goto label_101eec;
    }
    ctx->pc = 0x101EE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x101EECu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x101EE4u, 0x101EECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x101EECu;
label_101eec:
    // 0x101eec: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x101eecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_101ef0:
    // 0x101ef0: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x101ef0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_101ef4:
    // 0x101ef4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x101ef4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_101ef8:
    // 0x101ef8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x101ef8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_101efc:
    // 0x101efc: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x101efcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_101f00:
    // 0x101f00: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x101f00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_101f04:
    // 0x101f04: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x101f04u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_101f08:
    // 0x101f08: 0x24040050  addiu       $a0, $zero, 0x50
    ctx->pc = 0x101f08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_101f0c:
    // 0x101f0c: 0xc119b68  jal         func_466DA0
label_101f10:
    if (ctx->pc == 0x101F10u) {
        ctx->pc = 0x101F14u;
        goto label_101f14;
    }
    ctx->pc = 0x101F0Cu;
    SET_GPR_U32(ctx, 31, 0x101F14u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x101F0Cu, 0x101F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101F14u;
label_101f14:
    // 0x101f14: 0x24040050  addiu       $a0, $zero, 0x50
    ctx->pc = 0x101f14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_101f18:
    // 0x101f18: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x101f18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_101f1c:
    // 0x101f1c: 0xc0400e0  jal         func_100380
label_101f20:
    if (ctx->pc == 0x101F20u) {
        ctx->pc = 0x101F24u;
        goto label_101f24;
    }
    ctx->pc = 0x101F1Cu;
    SET_GPR_U32(ctx, 31, 0x101F24u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x101F1Cu, 0x101F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101F24u;
label_101f24:
    // 0x101f24: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x101f24u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_101f28:
    // 0x101f28: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
label_101f2c:
    if (ctx->pc == 0x101F2Cu) {
        ctx->pc = 0x101F30u;
        goto label_101f30;
    }
    ctx->pc = 0x101F28u;
    {
        const bool branch_taken_0x101f28 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x101f28) {
            ctx->pc = 0x101F40u;
            goto label_101f40;
        }
    }
    ctx->pc = 0x101F30u;
label_101f30:
    // 0x101f30: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x101f30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_101f34:
    // 0x101f34: 0xc046460  jal         func_119180
label_101f38:
    if (ctx->pc == 0x101F38u) {
        ctx->pc = 0x101F3Cu;
        goto label_101f3c;
    }
    ctx->pc = 0x101F34u;
    SET_GPR_U32(ctx, 31, 0x101F3Cu);
    ctx->pc = 0x119180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119180u, 0x101F34u, 0x101F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101F3Cu;
label_101f3c:
    // 0x101f3c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x101f3cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_101f40:
    // 0x101f40: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x101f40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_101f44:
    // 0x101f44: 0xac520034  sw          $s2, 0x34($v0)
    ctx->pc = 0x101f44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 18));
label_101f48:
    // 0x101f48: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x101f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_101f4c:
    // 0x101f4c: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x101f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_101f50:
    // 0x101f50: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x101f50u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_101f54:
    // 0x101f54: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x101f54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_101f58:
    // 0x101f58: 0x320f809  jalr        $t9
label_101f5c:
    if (ctx->pc == 0x101F5Cu) {
        ctx->pc = 0x101F60u;
        goto label_101f60;
    }
    ctx->pc = 0x101F58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x101F60u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x101F58u, 0x101F60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x101F60u;
label_101f60:
    // 0x101f60: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x101f60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_101f64:
    // 0x101f64: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x101f64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_101f68:
    // 0x101f68: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x101f68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_101f6c:
    // 0x101f6c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x101f6cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_101f70:
    // 0x101f70: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x101f70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_101f74:
    // 0x101f74: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x101f74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_101f78:
    // 0x101f78: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x101f78u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_101f7c:
    // 0x101f7c: 0x24040038  addiu       $a0, $zero, 0x38
    ctx->pc = 0x101f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
label_101f80:
    // 0x101f80: 0xc119b68  jal         func_466DA0
label_101f84:
    if (ctx->pc == 0x101F84u) {
        ctx->pc = 0x101F88u;
        goto label_101f88;
    }
    ctx->pc = 0x101F80u;
    SET_GPR_U32(ctx, 31, 0x101F88u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x101F80u, 0x101F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101F88u;
label_101f88:
    // 0x101f88: 0x24040038  addiu       $a0, $zero, 0x38
    ctx->pc = 0x101f88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
label_101f8c:
    // 0x101f8c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x101f8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_101f90:
    // 0x101f90: 0xc0400e0  jal         func_100380
label_101f94:
    if (ctx->pc == 0x101F94u) {
        ctx->pc = 0x101F98u;
        goto label_101f98;
    }
    ctx->pc = 0x101F90u;
    SET_GPR_U32(ctx, 31, 0x101F98u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x101F90u, 0x101F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101F98u;
label_101f98:
    // 0x101f98: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x101f98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_101f9c:
    // 0x101f9c: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
label_101fa0:
    if (ctx->pc == 0x101FA0u) {
        ctx->pc = 0x101FA4u;
        goto label_101fa4;
    }
    ctx->pc = 0x101F9Cu;
    {
        const bool branch_taken_0x101f9c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x101f9c) {
            ctx->pc = 0x101FB4u;
            goto label_101fb4;
        }
    }
    ctx->pc = 0x101FA4u;
label_101fa4:
    // 0x101fa4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x101fa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_101fa8:
    // 0x101fa8: 0xc042d7c  jal         func_10B5F0
label_101fac:
    if (ctx->pc == 0x101FACu) {
        ctx->pc = 0x101FB0u;
        goto label_101fb0;
    }
    ctx->pc = 0x101FA8u;
    SET_GPR_U32(ctx, 31, 0x101FB0u);
    ctx->pc = 0x10B5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B5F0u, 0x101FA8u, 0x101FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101FB0u;
label_101fb0:
    // 0x101fb0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x101fb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_101fb4:
    // 0x101fb4: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x101fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_101fb8:
    // 0x101fb8: 0xac510030  sw          $s1, 0x30($v0)
    ctx->pc = 0x101fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 17));
label_101fbc:
    // 0x101fbc: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x101fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_101fc0:
    // 0x101fc0: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x101fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_101fc4:
    // 0x101fc4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x101fc4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_101fc8:
    // 0x101fc8: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x101fc8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_101fcc:
    // 0x101fcc: 0x320f809  jalr        $t9
label_101fd0:
    if (ctx->pc == 0x101FD0u) {
        ctx->pc = 0x101FD4u;
        goto label_101fd4;
    }
    ctx->pc = 0x101FCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x101FD4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x101FCCu, 0x101FD4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x101FD4u;
label_101fd4:
    // 0x101fd4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x101fd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_101fd8:
    // 0x101fd8: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x101fd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_101fdc:
    // 0x101fdc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x101fdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_101fe0:
    // 0x101fe0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x101fe0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_101fe4:
    // 0x101fe4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x101fe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_101fe8:
    // 0x101fe8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x101fe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_101fec:
    // 0x101fec: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x101fecu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_101ff0:
    // 0x101ff0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x101ff0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_101ff4:
    // 0x101ff4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x101ff4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_101ff8:
    // 0x101ff8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x101ff8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_101ffc:
    // 0x101ffc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x101ffcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_102000:
    // 0x102000: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x102000u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_102004:
    // 0x102004: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x102004u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_102008:
    // 0x102008: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x102008u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_10200c:
    // 0x10200c: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x10200cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_102010:
    // 0x102010: 0x3e00008  jr          $ra
label_102014:
    if (ctx->pc == 0x102014u) {
        ctx->pc = 0x102018u;
        goto label_102018;
    }
    ctx->pc = 0x102010u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x102010u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x102018u;
label_102018:
    // 0x102018: 0x0  nop
    ctx->pc = 0x102018u;
    // NOP
label_10201c:
    // 0x10201c: 0x0  nop
    ctx->pc = 0x10201cu;
    // NOP
label_102020:
    // 0x102020: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x102020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_102024:
    // 0x102024: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x102024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_102028:
    // 0x102028: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x102028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_10202c:
    // 0x10202c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x10202cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
label_102030:
    // 0x102030: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x102030u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_102034:
    // 0x102034: 0xc08ec48  jal         func_23B120
label_102038:
    if (ctx->pc == 0x102038u) {
        ctx->pc = 0x10203Cu;
        goto label_10203c;
    }
    ctx->pc = 0x102034u;
    SET_GPR_U32(ctx, 31, 0x10203Cu);
    ctx->pc = 0x23B120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B120u, 0x102034u, 0x10203Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10203Cu;
label_10203c:
    // 0x10203c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x10203cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_102040:
    // 0x102040: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x102040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_102044:
    // 0x102044: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x102044u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_102048:
    // 0x102048: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x102048u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_10204c:
    // 0x10204c: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x10204cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_102050:
    // 0x102050: 0x320f809  jalr        $t9
label_102054:
    if (ctx->pc == 0x102054u) {
        ctx->pc = 0x102058u;
        goto label_102058;
    }
    ctx->pc = 0x102050u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x102058u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x102050u, 0x102058u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x102058u;
label_102058:
    // 0x102058: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x102058u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_10205c:
    // 0x10205c: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x10205cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_102060:
    // 0x102060: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x102060u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_102064:
    // 0x102064: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x102064u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_102068:
    // 0x102068: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x102068u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_10206c:
    // 0x10206c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x10206cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_102070:
    // 0x102070: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x102070u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_102074:
    // 0x102074: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x102074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_102078:
    // 0x102078: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x102078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_10207c:
    // 0x10207c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_102080:
    if (ctx->pc == 0x102080u) {
        ctx->pc = 0x102084u;
        goto label_102084;
    }
    ctx->pc = 0x10207Cu;
    {
        const bool branch_taken_0x10207c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10207c) {
            ctx->pc = 0x1020ACu;
            goto label_1020ac;
        }
    }
    ctx->pc = 0x102084u;
label_102084:
    // 0x102084: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x102084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_102088:
    // 0x102088: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x102088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_10208c:
    // 0x10208c: 0xc0408b0  jal         func_1022C0
label_102090:
    if (ctx->pc == 0x102090u) {
        ctx->pc = 0x102094u;
        goto label_102094;
    }
    ctx->pc = 0x10208Cu;
    SET_GPR_U32(ctx, 31, 0x102094u);
    ctx->pc = 0x1022C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1022C0u, 0x10208Cu, 0x102094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102094u;
label_102094:
    // 0x102094: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x102094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_102098:
    // 0x102098: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x102098u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_10209c:
    // 0x10209c: 0xc119c5c  jal         func_467170
label_1020a0:
    if (ctx->pc == 0x1020A0u) {
        ctx->pc = 0x1020A4u;
        goto label_1020a4;
    }
    ctx->pc = 0x10209Cu;
    SET_GPR_U32(ctx, 31, 0x1020A4u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x10209Cu, 0x1020A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1020A4u;
label_1020a4:
    // 0x1020a4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1020a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1020a8:
    // 0x1020a8: 0xac400030  sw          $zero, 0x30($v0)
    ctx->pc = 0x1020a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
label_1020ac:
    // 0x1020ac: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1020acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1020b0:
    // 0x1020b0: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x1020b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_1020b4:
    // 0x1020b4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1020b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1020b8:
    // 0x1020b8: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x1020b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_1020bc:
    // 0x1020bc: 0x320f809  jalr        $t9
label_1020c0:
    if (ctx->pc == 0x1020C0u) {
        ctx->pc = 0x1020C4u;
        goto label_1020c4;
    }
    ctx->pc = 0x1020BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1020C4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1020BCu, 0x1020C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1020C4u;
label_1020c4:
    // 0x1020c4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1020c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1020c8:
    // 0x1020c8: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x1020c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_1020cc:
    // 0x1020cc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1020ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_1020d0:
    // 0x1020d0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1020d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1020d4:
    // 0x1020d4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1020d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1020d8:
    // 0x1020d8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1020d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1020dc:
    // 0x1020dc: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x1020dcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1020e0:
    // 0x1020e0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1020e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1020e4:
    // 0x1020e4: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x1020e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_1020e8:
    // 0x1020e8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_1020ec:
    if (ctx->pc == 0x1020ECu) {
        ctx->pc = 0x1020F0u;
        goto label_1020f0;
    }
    ctx->pc = 0x1020E8u;
    {
        const bool branch_taken_0x1020e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1020e8) {
            ctx->pc = 0x102118u;
            goto label_102118;
        }
    }
    ctx->pc = 0x1020F0u;
label_1020f0:
    // 0x1020f0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1020f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1020f4:
    // 0x1020f4: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x1020f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_1020f8:
    // 0x1020f8: 0xc0408a0  jal         func_102280
label_1020fc:
    if (ctx->pc == 0x1020FCu) {
        ctx->pc = 0x102100u;
        goto label_102100;
    }
    ctx->pc = 0x1020F8u;
    SET_GPR_U32(ctx, 31, 0x102100u);
    ctx->pc = 0x102280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102280u, 0x1020F8u, 0x102100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102100u;
label_102100:
    // 0x102100: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x102100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_102104:
    // 0x102104: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x102104u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_102108:
    // 0x102108: 0xc119c5c  jal         func_467170
label_10210c:
    if (ctx->pc == 0x10210Cu) {
        ctx->pc = 0x102110u;
        goto label_102110;
    }
    ctx->pc = 0x102108u;
    SET_GPR_U32(ctx, 31, 0x102110u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x102108u, 0x102110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102110u;
label_102110:
    // 0x102110: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x102110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_102114:
    // 0x102114: 0xac400034  sw          $zero, 0x34($v0)
    ctx->pc = 0x102114u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 0));
label_102118:
    // 0x102118: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x102118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_10211c:
    // 0x10211c: 0x8c440038  lw          $a0, 0x38($v0)
    ctx->pc = 0x10211cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_102120:
    // 0x102120: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x102120u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_102124:
    // 0x102124: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x102124u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_102128:
    // 0x102128: 0x320f809  jalr        $t9
label_10212c:
    if (ctx->pc == 0x10212Cu) {
        ctx->pc = 0x102130u;
        goto label_102130;
    }
    ctx->pc = 0x102128u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x102130u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x102128u, 0x102130u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x102130u;
label_102130:
    // 0x102130: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x102130u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_102134:
    // 0x102134: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x102134u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_102138:
    // 0x102138: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x102138u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_10213c:
    // 0x10213c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x10213cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_102140:
    // 0x102140: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x102140u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_102144:
    // 0x102144: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x102144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_102148:
    // 0x102148: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x102148u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_10214c:
    // 0x10214c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x10214cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_102150:
    // 0x102150: 0x8c420038  lw          $v0, 0x38($v0)
    ctx->pc = 0x102150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_102154:
    // 0x102154: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_102158:
    if (ctx->pc == 0x102158u) {
        ctx->pc = 0x10215Cu;
        goto label_10215c;
    }
    ctx->pc = 0x102154u;
    {
        const bool branch_taken_0x102154 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x102154) {
            ctx->pc = 0x102184u;
            goto label_102184;
        }
    }
    ctx->pc = 0x10215Cu;
label_10215c:
    // 0x10215c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x10215cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_102160:
    // 0x102160: 0x8c440038  lw          $a0, 0x38($v0)
    ctx->pc = 0x102160u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_102164:
    // 0x102164: 0xc040894  jal         func_102250
label_102168:
    if (ctx->pc == 0x102168u) {
        ctx->pc = 0x10216Cu;
        goto label_10216c;
    }
    ctx->pc = 0x102164u;
    SET_GPR_U32(ctx, 31, 0x10216Cu);
    ctx->pc = 0x102250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102250u, 0x102164u, 0x10216Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10216Cu;
label_10216c:
    // 0x10216c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x10216cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_102170:
    // 0x102170: 0x8c440038  lw          $a0, 0x38($v0)
    ctx->pc = 0x102170u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_102174:
    // 0x102174: 0xc119c5c  jal         func_467170
label_102178:
    if (ctx->pc == 0x102178u) {
        ctx->pc = 0x10217Cu;
        goto label_10217c;
    }
    ctx->pc = 0x102174u;
    SET_GPR_U32(ctx, 31, 0x10217Cu);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x102174u, 0x10217Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10217Cu;
label_10217c:
    // 0x10217c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x10217cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_102180:
    // 0x102180: 0xac400038  sw          $zero, 0x38($v0)
    ctx->pc = 0x102180u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 0));
label_102184:
    // 0x102184: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x102184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_102188:
    // 0x102188: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x102188u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_10218c:
    // 0x10218c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x10218cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_102190:
    // 0x102190: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x102190u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_102194:
    // 0x102194: 0x320f809  jalr        $t9
label_102198:
    if (ctx->pc == 0x102198u) {
        ctx->pc = 0x10219Cu;
        goto label_10219c;
    }
    ctx->pc = 0x102194u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10219Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x102194u, 0x10219Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10219Cu;
label_10219c:
    // 0x10219c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x10219cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1021a0:
    // 0x1021a0: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x1021a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_1021a4:
    // 0x1021a4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1021a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_1021a8:
    // 0x1021a8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1021a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1021ac:
    // 0x1021ac: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1021acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1021b0:
    // 0x1021b0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1021b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1021b4:
    // 0x1021b4: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x1021b4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1021b8:
    // 0x1021b8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1021b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1021bc:
    // 0x1021bc: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x1021bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_1021c0:
    // 0x1021c0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_1021c4:
    if (ctx->pc == 0x1021C4u) {
        ctx->pc = 0x1021C8u;
        goto label_1021c8;
    }
    ctx->pc = 0x1021C0u;
    {
        const bool branch_taken_0x1021c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1021c0) {
            ctx->pc = 0x1021F0u;
            goto label_1021f0;
        }
    }
    ctx->pc = 0x1021C8u;
label_1021c8:
    // 0x1021c8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1021c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1021cc:
    // 0x1021cc: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x1021ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_1021d0:
    // 0x1021d0: 0xc040884  jal         func_102210
label_1021d4:
    if (ctx->pc == 0x1021D4u) {
        ctx->pc = 0x1021D8u;
        goto label_1021d8;
    }
    ctx->pc = 0x1021D0u;
    SET_GPR_U32(ctx, 31, 0x1021D8u);
    ctx->pc = 0x102210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102210u, 0x1021D0u, 0x1021D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1021D8u;
label_1021d8:
    // 0x1021d8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1021d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1021dc:
    // 0x1021dc: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x1021dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_1021e0:
    // 0x1021e0: 0xc119c5c  jal         func_467170
label_1021e4:
    if (ctx->pc == 0x1021E4u) {
        ctx->pc = 0x1021E8u;
        goto label_1021e8;
    }
    ctx->pc = 0x1021E0u;
    SET_GPR_U32(ctx, 31, 0x1021E8u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x1021E0u, 0x1021E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1021E8u;
label_1021e8:
    // 0x1021e8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1021e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1021ec:
    // 0x1021ec: 0xac400028  sw          $zero, 0x28($v0)
    ctx->pc = 0x1021ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
label_1021f0:
    // 0x1021f0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1021f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1021f4:
    // 0x1021f4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1021f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1021f8:
    // 0x1021f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1021f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1021fc:
    // 0x1021fc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1021fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_102200:
    // 0x102200: 0x3e00008  jr          $ra
label_102204:
    if (ctx->pc == 0x102204u) {
        ctx->pc = 0x102208u;
        goto label_102208;
    }
    ctx->pc = 0x102200u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x102200u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x102208u;
label_102208:
    // 0x102208: 0x0  nop
    ctx->pc = 0x102208u;
    // NOP
label_10220c:
    // 0x10220c: 0x0  nop
    ctx->pc = 0x10220cu;
    // NOP
    ctx->pc = 0x102210u;
}
