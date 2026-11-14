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

// Function: sub_00126E90
// Address: 0x126e90 - 0x127170
void sub_00126E90_0x126e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00126E90_0x126e90");
#endif

    switch (ctx->pc) {
        case 0x126e90u: goto label_126e90;
        case 0x126e94u: goto label_126e94;
        case 0x126e98u: goto label_126e98;
        case 0x126e9cu: goto label_126e9c;
        case 0x126ea0u: goto label_126ea0;
        case 0x126ea4u: goto label_126ea4;
        case 0x126ea8u: goto label_126ea8;
        case 0x126eacu: goto label_126eac;
        case 0x126eb0u: goto label_126eb0;
        case 0x126eb4u: goto label_126eb4;
        case 0x126eb8u: goto label_126eb8;
        case 0x126ebcu: goto label_126ebc;
        case 0x126ec0u: goto label_126ec0;
        case 0x126ec4u: goto label_126ec4;
        case 0x126ec8u: goto label_126ec8;
        case 0x126eccu: goto label_126ecc;
        case 0x126ed0u: goto label_126ed0;
        case 0x126ed4u: goto label_126ed4;
        case 0x126ed8u: goto label_126ed8;
        case 0x126edcu: goto label_126edc;
        case 0x126ee0u: goto label_126ee0;
        case 0x126ee4u: goto label_126ee4;
        case 0x126ee8u: goto label_126ee8;
        case 0x126eecu: goto label_126eec;
        case 0x126ef0u: goto label_126ef0;
        case 0x126ef4u: goto label_126ef4;
        case 0x126ef8u: goto label_126ef8;
        case 0x126efcu: goto label_126efc;
        case 0x126f00u: goto label_126f00;
        case 0x126f04u: goto label_126f04;
        case 0x126f08u: goto label_126f08;
        case 0x126f0cu: goto label_126f0c;
        case 0x126f10u: goto label_126f10;
        case 0x126f14u: goto label_126f14;
        case 0x126f18u: goto label_126f18;
        case 0x126f1cu: goto label_126f1c;
        case 0x126f20u: goto label_126f20;
        case 0x126f24u: goto label_126f24;
        case 0x126f28u: goto label_126f28;
        case 0x126f2cu: goto label_126f2c;
        case 0x126f30u: goto label_126f30;
        case 0x126f34u: goto label_126f34;
        case 0x126f38u: goto label_126f38;
        case 0x126f3cu: goto label_126f3c;
        case 0x126f40u: goto label_126f40;
        case 0x126f44u: goto label_126f44;
        case 0x126f48u: goto label_126f48;
        case 0x126f4cu: goto label_126f4c;
        case 0x126f50u: goto label_126f50;
        case 0x126f54u: goto label_126f54;
        case 0x126f58u: goto label_126f58;
        case 0x126f5cu: goto label_126f5c;
        case 0x126f60u: goto label_126f60;
        case 0x126f64u: goto label_126f64;
        case 0x126f68u: goto label_126f68;
        case 0x126f6cu: goto label_126f6c;
        case 0x126f70u: goto label_126f70;
        case 0x126f74u: goto label_126f74;
        case 0x126f78u: goto label_126f78;
        case 0x126f7cu: goto label_126f7c;
        case 0x126f80u: goto label_126f80;
        case 0x126f84u: goto label_126f84;
        case 0x126f88u: goto label_126f88;
        case 0x126f8cu: goto label_126f8c;
        case 0x126f90u: goto label_126f90;
        case 0x126f94u: goto label_126f94;
        case 0x126f98u: goto label_126f98;
        case 0x126f9cu: goto label_126f9c;
        case 0x126fa0u: goto label_126fa0;
        case 0x126fa4u: goto label_126fa4;
        case 0x126fa8u: goto label_126fa8;
        case 0x126facu: goto label_126fac;
        case 0x126fb0u: goto label_126fb0;
        case 0x126fb4u: goto label_126fb4;
        case 0x126fb8u: goto label_126fb8;
        case 0x126fbcu: goto label_126fbc;
        case 0x126fc0u: goto label_126fc0;
        case 0x126fc4u: goto label_126fc4;
        case 0x126fc8u: goto label_126fc8;
        case 0x126fccu: goto label_126fcc;
        case 0x126fd0u: goto label_126fd0;
        case 0x126fd4u: goto label_126fd4;
        case 0x126fd8u: goto label_126fd8;
        case 0x126fdcu: goto label_126fdc;
        case 0x126fe0u: goto label_126fe0;
        case 0x126fe4u: goto label_126fe4;
        case 0x126fe8u: goto label_126fe8;
        case 0x126fecu: goto label_126fec;
        case 0x126ff0u: goto label_126ff0;
        case 0x126ff4u: goto label_126ff4;
        case 0x126ff8u: goto label_126ff8;
        case 0x126ffcu: goto label_126ffc;
        case 0x127000u: goto label_127000;
        case 0x127004u: goto label_127004;
        case 0x127008u: goto label_127008;
        case 0x12700cu: goto label_12700c;
        case 0x127010u: goto label_127010;
        case 0x127014u: goto label_127014;
        case 0x127018u: goto label_127018;
        case 0x12701cu: goto label_12701c;
        case 0x127020u: goto label_127020;
        case 0x127024u: goto label_127024;
        case 0x127028u: goto label_127028;
        case 0x12702cu: goto label_12702c;
        case 0x127030u: goto label_127030;
        case 0x127034u: goto label_127034;
        case 0x127038u: goto label_127038;
        case 0x12703cu: goto label_12703c;
        case 0x127040u: goto label_127040;
        case 0x127044u: goto label_127044;
        case 0x127048u: goto label_127048;
        case 0x12704cu: goto label_12704c;
        case 0x127050u: goto label_127050;
        case 0x127054u: goto label_127054;
        case 0x127058u: goto label_127058;
        case 0x12705cu: goto label_12705c;
        case 0x127060u: goto label_127060;
        case 0x127064u: goto label_127064;
        case 0x127068u: goto label_127068;
        case 0x12706cu: goto label_12706c;
        case 0x127070u: goto label_127070;
        case 0x127074u: goto label_127074;
        case 0x127078u: goto label_127078;
        case 0x12707cu: goto label_12707c;
        case 0x127080u: goto label_127080;
        case 0x127084u: goto label_127084;
        case 0x127088u: goto label_127088;
        case 0x12708cu: goto label_12708c;
        case 0x127090u: goto label_127090;
        case 0x127094u: goto label_127094;
        case 0x127098u: goto label_127098;
        case 0x12709cu: goto label_12709c;
        case 0x1270a0u: goto label_1270a0;
        case 0x1270a4u: goto label_1270a4;
        case 0x1270a8u: goto label_1270a8;
        case 0x1270acu: goto label_1270ac;
        case 0x1270b0u: goto label_1270b0;
        case 0x1270b4u: goto label_1270b4;
        case 0x1270b8u: goto label_1270b8;
        case 0x1270bcu: goto label_1270bc;
        case 0x1270c0u: goto label_1270c0;
        case 0x1270c4u: goto label_1270c4;
        case 0x1270c8u: goto label_1270c8;
        case 0x1270ccu: goto label_1270cc;
        case 0x1270d0u: goto label_1270d0;
        case 0x1270d4u: goto label_1270d4;
        case 0x1270d8u: goto label_1270d8;
        case 0x1270dcu: goto label_1270dc;
        case 0x1270e0u: goto label_1270e0;
        case 0x1270e4u: goto label_1270e4;
        case 0x1270e8u: goto label_1270e8;
        case 0x1270ecu: goto label_1270ec;
        case 0x1270f0u: goto label_1270f0;
        case 0x1270f4u: goto label_1270f4;
        case 0x1270f8u: goto label_1270f8;
        case 0x1270fcu: goto label_1270fc;
        case 0x127100u: goto label_127100;
        case 0x127104u: goto label_127104;
        case 0x127108u: goto label_127108;
        case 0x12710cu: goto label_12710c;
        case 0x127110u: goto label_127110;
        case 0x127114u: goto label_127114;
        case 0x127118u: goto label_127118;
        case 0x12711cu: goto label_12711c;
        case 0x127120u: goto label_127120;
        case 0x127124u: goto label_127124;
        case 0x127128u: goto label_127128;
        case 0x12712cu: goto label_12712c;
        case 0x127130u: goto label_127130;
        case 0x127134u: goto label_127134;
        case 0x127138u: goto label_127138;
        case 0x12713cu: goto label_12713c;
        case 0x127140u: goto label_127140;
        case 0x127144u: goto label_127144;
        case 0x127148u: goto label_127148;
        case 0x12714cu: goto label_12714c;
        case 0x127150u: goto label_127150;
        case 0x127154u: goto label_127154;
        case 0x127158u: goto label_127158;
        case 0x12715cu: goto label_12715c;
        case 0x127160u: goto label_127160;
        case 0x127164u: goto label_127164;
        case 0x127168u: goto label_127168;
        case 0x12716cu: goto label_12716c;
        default: break;
    }

    ctx->pc = 0x126e90u;

label_126e90:
    // 0x126e90: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x126e90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_126e94:
    // 0x126e94: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x126e94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_126e98:
    // 0x126e98: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x126e98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_126e9c:
    // 0x126e9c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x126e9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_126ea0:
    // 0x126ea0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x126ea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_126ea4:
    // 0x126ea4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x126ea4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_126ea8:
    // 0x126ea8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x126ea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_126eac:
    // 0x126eac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x126eacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_126eb0:
    // 0x126eb0: 0xafa40090  sw          $a0, 0x90($sp)
    ctx->pc = 0x126eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 4));
label_126eb4:
    // 0x126eb4: 0xc05548c  jal         func_155230
label_126eb8:
    if (ctx->pc == 0x126EB8u) {
        ctx->pc = 0x126EBCu;
        goto label_126ebc;
    }
    ctx->pc = 0x126EB4u;
    SET_GPR_U32(ctx, 31, 0x126EBCu);
    ctx->pc = 0x155230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155230u, 0x126EB4u, 0x126EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126EBCu;
label_126ebc:
    // 0x126ebc: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x126ebcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_126ec0:
    // 0x126ec0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x126ec0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_126ec4:
    // 0x126ec4: 0x2405001d  addiu       $a1, $zero, 0x1D
    ctx->pc = 0x126ec4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
label_126ec8:
    // 0x126ec8: 0xc0553d4  jal         func_154F50
label_126ecc:
    if (ctx->pc == 0x126ECCu) {
        ctx->pc = 0x126ED0u;
        goto label_126ed0;
    }
    ctx->pc = 0x126EC8u;
    SET_GPR_U32(ctx, 31, 0x126ED0u);
    ctx->pc = 0x154F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154F50u, 0x126EC8u, 0x126ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126ED0u;
label_126ed0:
    // 0x126ed0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x126ed0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_126ed4:
    // 0x126ed4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x126ed4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_126ed8:
    // 0x126ed8: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x126ed8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_126edc:
    // 0x126edc: 0xc0553d4  jal         func_154F50
label_126ee0:
    if (ctx->pc == 0x126EE0u) {
        ctx->pc = 0x126EE4u;
        goto label_126ee4;
    }
    ctx->pc = 0x126EDCu;
    SET_GPR_U32(ctx, 31, 0x126EE4u);
    ctx->pc = 0x154F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154F50u, 0x126EDCu, 0x126EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126EE4u;
label_126ee4:
    // 0x126ee4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x126ee4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_126ee8:
    // 0x126ee8: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x126ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_126eec:
    // 0x126eec: 0xc049ec0  jal         func_127B00
label_126ef0:
    if (ctx->pc == 0x126EF0u) {
        ctx->pc = 0x126EF4u;
        goto label_126ef4;
    }
    ctx->pc = 0x126EECu;
    SET_GPR_U32(ctx, 31, 0x126EF4u);
    ctx->pc = 0x127B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127B00u, 0x126EECu, 0x126EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126EF4u;
label_126ef4:
    // 0x126ef4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x126ef4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_126ef8:
    // 0x126ef8: 0x1000006f  b           . + 4 + (0x6F << 2)
label_126efc:
    if (ctx->pc == 0x126EFCu) {
        ctx->pc = 0x126F00u;
        goto label_126f00;
    }
    ctx->pc = 0x126EF8u;
    {
        const bool branch_taken_0x126ef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x126ef8) {
            ctx->pc = 0x1270B8u;
            goto label_1270b8;
        }
    }
    ctx->pc = 0x126F00u;
label_126f00:
    // 0x126f00: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x126f00u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_126f04:
    // 0x126f04: 0x2783ba08  addiu       $v1, $gp, -0x45F8
    ctx->pc = 0x126f04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294949384));
label_126f08:
    // 0x126f08: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x126f08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_126f0c:
    // 0x126f0c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x126f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_126f10:
    // 0x126f10: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x126f10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_126f14:
    // 0x126f14: 0x14830067  bne         $a0, $v1, . + 4 + (0x67 << 2)
label_126f18:
    if (ctx->pc == 0x126F18u) {
        ctx->pc = 0x126F1Cu;
        goto label_126f1c;
    }
    ctx->pc = 0x126F14u;
    {
        const bool branch_taken_0x126f14 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x126f14) {
            ctx->pc = 0x1270B4u;
            goto label_1270b4;
        }
    }
    ctx->pc = 0x126F1Cu;
label_126f1c:
    // 0x126f1c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x126f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_126f20:
    // 0x126f20: 0x2038804  sllv        $s1, $v1, $s0
    ctx->pc = 0x126f20u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 16) & 0x1F));
label_126f24:
    // 0x126f24: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x126f24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_126f28:
    // 0x126f28: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x126f28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_126f2c:
    // 0x126f2c: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x126f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_126f30:
    // 0x126f30: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x126f30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_126f34:
    // 0x126f34: 0x2463b490  addiu       $v1, $v1, -0x4B70
    ctx->pc = 0x126f34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947984));
label_126f38:
    // 0x126f38: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x126f38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_126f3c:
    // 0x126f3c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x126f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_126f40:
    // 0x126f40: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x126f40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_126f44:
    // 0x126f44: 0x10830015  beq         $a0, $v1, . + 4 + (0x15 << 2)
label_126f48:
    if (ctx->pc == 0x126F48u) {
        ctx->pc = 0x126F4Cu;
        goto label_126f4c;
    }
    ctx->pc = 0x126F44u;
    {
        const bool branch_taken_0x126f44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x126f44) {
            ctx->pc = 0x126F9Cu;
            goto label_126f9c;
        }
    }
    ctx->pc = 0x126F4Cu;
label_126f4c:
    // 0x126f4c: 0x2201827  not         $v1, $s1
    ctx->pc = 0x126f4cu;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 17) | GPR_U64(ctx, 0)));
label_126f50:
    // 0x126f50: 0x8f82b9e8  lw          $v0, -0x4618($gp)
    ctx->pc = 0x126f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949352)));
label_126f54:
    // 0x126f54: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x126f54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_126f58:
    // 0x126f58: 0xaf82b9e8  sw          $v0, -0x4618($gp)
    ctx->pc = 0x126f58u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949352), GPR_U32(ctx, 2));
label_126f5c:
    // 0x126f5c: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x126f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_126f60:
    // 0x126f60: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x126f60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_126f64:
    // 0x126f64: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x126f64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_126f68:
    // 0x126f68: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x126f68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_126f6c:
    // 0x126f6c: 0x2442b490  addiu       $v0, $v0, -0x4B70
    ctx->pc = 0x126f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947984));
label_126f70:
    // 0x126f70: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x126f70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_126f74:
    // 0x126f74: 0x8fa40090  lw          $a0, 0x90($sp)
    ctx->pc = 0x126f74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_126f78:
    // 0x126f78: 0xc049fbc  jal         func_127EF0
label_126f7c:
    if (ctx->pc == 0x126F7Cu) {
        ctx->pc = 0x126F80u;
        goto label_126f80;
    }
    ctx->pc = 0x126F78u;
    SET_GPR_U32(ctx, 31, 0x126F80u);
    ctx->pc = 0x127EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127EF0u, 0x126F78u, 0x126F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126F80u;
label_126f80:
    // 0x126f80: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x126f80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_126f84:
    // 0x126f84: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x126f84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_126f88:
    // 0x126f88: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
label_126f8c:
    if (ctx->pc == 0x126F8Cu) {
        ctx->pc = 0x126F90u;
        goto label_126f90;
    }
    ctx->pc = 0x126F88u;
    {
        const bool branch_taken_0x126f88 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x126f88) {
            ctx->pc = 0x126F9Cu;
            goto label_126f9c;
        }
    }
    ctx->pc = 0x126F90u;
label_126f90:
    // 0x126f90: 0x8f83b9e8  lw          $v1, -0x4618($gp)
    ctx->pc = 0x126f90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949352)));
label_126f94:
    // 0x126f94: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x126f94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
label_126f98:
    // 0x126f98: 0xaf83b9e8  sw          $v1, -0x4618($gp)
    ctx->pc = 0x126f98u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949352), GPR_U32(ctx, 3));
label_126f9c:
    // 0x126f9c: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x126f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_126fa0:
    // 0x126fa0: 0x8c64b490  lw          $a0, -0x4B70($v1)
    ctx->pc = 0x126fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294947984)));
label_126fa4:
    // 0x126fa4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x126fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_126fa8:
    // 0x126fa8: 0x10830042  beq         $a0, $v1, . + 4 + (0x42 << 2)
label_126fac:
    if (ctx->pc == 0x126FACu) {
        ctx->pc = 0x126FB0u;
        goto label_126fb0;
    }
    ctx->pc = 0x126FA8u;
    {
        const bool branch_taken_0x126fa8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x126fa8) {
            ctx->pc = 0x1270B4u;
            goto label_1270b4;
        }
    }
    ctx->pc = 0x126FB0u;
label_126fb0:
    // 0x126fb0: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x126fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_126fb4:
    // 0x126fb4: 0x8c64b490  lw          $a0, -0x4B70($v1)
    ctx->pc = 0x126fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294947984)));
label_126fb8:
    // 0x126fb8: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x126fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_126fbc:
    // 0x126fbc: 0x8c63b49c  lw          $v1, -0x4B64($v1)
    ctx->pc = 0x126fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294947996)));
label_126fc0:
    // 0x126fc0: 0x1483003c  bne         $a0, $v1, . + 4 + (0x3C << 2)
label_126fc4:
    if (ctx->pc == 0x126FC4u) {
        ctx->pc = 0x126FC8u;
        goto label_126fc8;
    }
    ctx->pc = 0x126FC0u;
    {
        const bool branch_taken_0x126fc0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x126fc0) {
            ctx->pc = 0x1270B4u;
            goto label_1270b4;
        }
    }
    ctx->pc = 0x126FC8u;
label_126fc8:
    // 0x126fc8: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x126fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_126fcc:
    // 0x126fcc: 0x8c64b490  lw          $a0, -0x4B70($v1)
    ctx->pc = 0x126fccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294947984)));
label_126fd0:
    // 0x126fd0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x126fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_126fd4:
    // 0x126fd4: 0x10830037  beq         $a0, $v1, . + 4 + (0x37 << 2)
label_126fd8:
    if (ctx->pc == 0x126FD8u) {
        ctx->pc = 0x126FDCu;
        goto label_126fdc;
    }
    ctx->pc = 0x126FD4u;
    {
        const bool branch_taken_0x126fd4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x126fd4) {
            ctx->pc = 0x1270B4u;
            goto label_1270b4;
        }
    }
    ctx->pc = 0x126FDCu;
label_126fdc:
    // 0x126fdc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x126fdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_126fe0:
    // 0x126fe0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x126fe0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_126fe4:
    // 0x126fe4: 0x8f390050  lw          $t9, 0x50($t9)
    ctx->pc = 0x126fe4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 80)));
label_126fe8:
    // 0x126fe8: 0x320f809  jalr        $t9
label_126fec:
    if (ctx->pc == 0x126FECu) {
        ctx->pc = 0x126FF0u;
        goto label_126ff0;
    }
    ctx->pc = 0x126FE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x126FF0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x126FE8u, 0x126FF0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x126FF0u;
label_126ff0:
    // 0x126ff0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x126ff0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_126ff4:
    // 0x126ff4: 0x1460002f  bnez        $v1, . + 4 + (0x2F << 2)
label_126ff8:
    if (ctx->pc == 0x126FF8u) {
        ctx->pc = 0x126FFCu;
        goto label_126ffc;
    }
    ctx->pc = 0x126FF4u;
    {
        const bool branch_taken_0x126ff4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x126ff4) {
            ctx->pc = 0x1270B4u;
            goto label_1270b4;
        }
    }
    ctx->pc = 0x126FFCu;
label_126ffc:
    // 0x126ffc: 0x8f84bbdc  lw          $a0, -0x4424($gp)
    ctx->pc = 0x126ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949852)));
label_127000:
    // 0x127000: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x127000u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_127004:
    // 0x127004: 0x24a52308  addiu       $a1, $a1, 0x2308
    ctx->pc = 0x127004u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8968));
label_127008:
    // 0x127008: 0xc08e57c  jal         func_2395F0
label_12700c:
    if (ctx->pc == 0x12700Cu) {
        ctx->pc = 0x127010u;
        goto label_127010;
    }
    ctx->pc = 0x127008u;
    SET_GPR_U32(ctx, 31, 0x127010u);
    ctx->pc = 0x2395F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2395F0u, 0x127008u, 0x127010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127010u;
label_127010:
    // 0x127010: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x127010u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_127014:
    // 0x127014: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x127014u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_127018:
    // 0x127018: 0xc0406d0  jal         func_101B40
label_12701c:
    if (ctx->pc == 0x12701Cu) {
        ctx->pc = 0x127020u;
        goto label_127020;
    }
    ctx->pc = 0x127018u;
    SET_GPR_U32(ctx, 31, 0x127020u);
    ctx->pc = 0x101B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101B40u, 0x127018u, 0x127020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127020u;
label_127020:
    // 0x127020: 0x8f84bbdc  lw          $a0, -0x4424($gp)
    ctx->pc = 0x127020u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949852)));
label_127024:
    // 0x127024: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x127024u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_127028:
    // 0x127028: 0x24a52400  addiu       $a1, $a1, 0x2400
    ctx->pc = 0x127028u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9216));
label_12702c:
    // 0x12702c: 0xc08e57c  jal         func_2395F0
label_127030:
    if (ctx->pc == 0x127030u) {
        ctx->pc = 0x127034u;
        goto label_127034;
    }
    ctx->pc = 0x12702Cu;
    SET_GPR_U32(ctx, 31, 0x127034u);
    ctx->pc = 0x2395F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2395F0u, 0x12702Cu, 0x127034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127034u;
label_127034:
    // 0x127034: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x127034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_127038:
    // 0x127038: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x127038u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12703c:
    // 0x12703c: 0xc0406d0  jal         func_101B40
label_127040:
    if (ctx->pc == 0x127040u) {
        ctx->pc = 0x127044u;
        goto label_127044;
    }
    ctx->pc = 0x12703Cu;
    SET_GPR_U32(ctx, 31, 0x127044u);
    ctx->pc = 0x101B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101B40u, 0x12703Cu, 0x127044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127044u;
label_127044:
    // 0x127044: 0xc04a418  jal         func_129060
label_127048:
    if (ctx->pc == 0x127048u) {
        ctx->pc = 0x12704Cu;
        goto label_12704c;
    }
    ctx->pc = 0x127044u;
    SET_GPR_U32(ctx, 31, 0x12704Cu);
    ctx->pc = 0x129060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129060u, 0x127044u, 0x12704Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12704Cu;
label_12704c:
    // 0x12704c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x12704cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_127050:
    // 0x127050: 0x27858b58  addiu       $a1, $gp, -0x74A8
    ctx->pc = 0x127050u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937432));
label_127054:
    // 0x127054: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x127054u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_127058:
    // 0x127058: 0xc119600  jal         func_465800
label_12705c:
    if (ctx->pc == 0x12705Cu) {
        ctx->pc = 0x127060u;
        goto label_127060;
    }
    ctx->pc = 0x127058u;
    SET_GPR_U32(ctx, 31, 0x127060u);
    ctx->pc = 0x465800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x465800u, 0x127058u, 0x127060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127060u;
label_127060:
    // 0x127060: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x127060u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_127064:
    // 0x127064: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x127064u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_127068:
    // 0x127068: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x127068u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_12706c:
    // 0x12706c: 0x34460101  ori         $a2, $v0, 0x101
    ctx->pc = 0x12706cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)257);
label_127070:
    // 0x127070: 0x3c070013  lui         $a3, 0x13
    ctx->pc = 0x127070u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)19 << 16));
label_127074:
    // 0x127074: 0x24e79350  addiu       $a3, $a3, -0x6CB0
    ctx->pc = 0x127074u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294939472));
label_127078:
    // 0x127078: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x127078u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12707c:
    // 0x12707c: 0xc08d218  jal         func_234860
label_127080:
    if (ctx->pc == 0x127080u) {
        ctx->pc = 0x127084u;
        goto label_127084;
    }
    ctx->pc = 0x12707Cu;
    SET_GPR_U32(ctx, 31, 0x127084u);
    ctx->pc = 0x234860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x234860u, 0x12707Cu, 0x127084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127084u;
label_127084:
    // 0x127084: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x127084u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_127088:
    // 0x127088: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x127088u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12708c:
    // 0x12708c: 0xc0562ac  jal         func_158AB0
label_127090:
    if (ctx->pc == 0x127090u) {
        ctx->pc = 0x127094u;
        goto label_127094;
    }
    ctx->pc = 0x12708Cu;
    SET_GPR_U32(ctx, 31, 0x127094u);
    ctx->pc = 0x158AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158AB0u, 0x12708Cu, 0x127094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127094u;
label_127094:
    // 0x127094: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x127094u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_127098:
    // 0x127098: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x127098u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_12709c:
    // 0x12709c: 0xc0406a0  jal         func_101A80
label_1270a0:
    if (ctx->pc == 0x1270A0u) {
        ctx->pc = 0x1270A4u;
        goto label_1270a4;
    }
    ctx->pc = 0x12709Cu;
    SET_GPR_U32(ctx, 31, 0x1270A4u);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x12709Cu, 0x1270A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1270A4u;
label_1270a4:
    // 0x1270a4: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1270a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1270a8:
    // 0x1270a8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1270a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1270ac:
    // 0x1270ac: 0xc0406a0  jal         func_101A80
label_1270b0:
    if (ctx->pc == 0x1270B0u) {
        ctx->pc = 0x1270B4u;
        goto label_1270b4;
    }
    ctx->pc = 0x1270ACu;
    SET_GPR_U32(ctx, 31, 0x1270B4u);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x1270ACu, 0x1270B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1270B4u;
label_1270b4:
    // 0x1270b4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1270b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1270b8:
    // 0x1270b8: 0x2e030002  sltiu       $v1, $s0, 0x2
    ctx->pc = 0x1270b8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1270bc:
    // 0x1270bc: 0x1460ff90  bnez        $v1, . + 4 + (-0x70 << 2)
label_1270c0:
    if (ctx->pc == 0x1270C0u) {
        ctx->pc = 0x1270C4u;
        goto label_1270c4;
    }
    ctx->pc = 0x1270BCu;
    {
        const bool branch_taken_0x1270bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1270bc) {
            ctx->pc = 0x126F00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_126f00;
        }
    }
    ctx->pc = 0x1270C4u;
label_1270c4:
    // 0x1270c4: 0x8f84b9e8  lw          $a0, -0x4618($gp)
    ctx->pc = 0x1270c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949352)));
label_1270c8:
    // 0x1270c8: 0x8f838b20  lw          $v1, -0x74E0($gp)
    ctx->pc = 0x1270c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937376)));
label_1270cc:
    // 0x1270cc: 0x1083001d  beq         $a0, $v1, . + 4 + (0x1D << 2)
label_1270d0:
    if (ctx->pc == 0x1270D0u) {
        ctx->pc = 0x1270D4u;
        goto label_1270d4;
    }
    ctx->pc = 0x1270CCu;
    {
        const bool branch_taken_0x1270cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1270cc) {
            ctx->pc = 0x127144u;
            goto label_127144;
        }
    }
    ctx->pc = 0x1270D4u;
label_1270d4:
    // 0x1270d4: 0x8f82b9e8  lw          $v0, -0x4618($gp)
    ctx->pc = 0x1270d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949352)));
label_1270d8:
    // 0x1270d8: 0xaf828b20  sw          $v0, -0x74E0($gp)
    ctx->pc = 0x1270d8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937376), GPR_U32(ctx, 2));
label_1270dc:
    // 0x1270dc: 0x8f84b9dc  lw          $a0, -0x4624($gp)
    ctx->pc = 0x1270dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949340)));
label_1270e0:
    // 0x1270e0: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x1270e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1270e4:
    // 0x1270e4: 0xc0553d4  jal         func_154F50
label_1270e8:
    if (ctx->pc == 0x1270E8u) {
        ctx->pc = 0x1270ECu;
        goto label_1270ec;
    }
    ctx->pc = 0x1270E4u;
    SET_GPR_U32(ctx, 31, 0x1270ECu);
    ctx->pc = 0x154F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154F50u, 0x1270E4u, 0x1270ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1270ECu;
label_1270ec:
    // 0x1270ec: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1270ecu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1270f0:
    // 0x1270f0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1270f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1270f4:
    // 0x1270f4: 0x8f858b20  lw          $a1, -0x74E0($gp)
    ctx->pc = 0x1270f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937376)));
label_1270f8:
    // 0x1270f8: 0xc062380  jal         func_188E00
label_1270fc:
    if (ctx->pc == 0x1270FCu) {
        ctx->pc = 0x127100u;
        goto label_127100;
    }
    ctx->pc = 0x1270F8u;
    SET_GPR_U32(ctx, 31, 0x127100u);
    ctx->pc = 0x188E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188E00u, 0x1270F8u, 0x127100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127100u;
label_127100:
    // 0x127100: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x127100u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_127104:
    // 0x127104: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x127104u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_127108:
    // 0x127108: 0x8f390050  lw          $t9, 0x50($t9)
    ctx->pc = 0x127108u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 80)));
label_12710c:
    // 0x12710c: 0x320f809  jalr        $t9
label_127110:
    if (ctx->pc == 0x127110u) {
        ctx->pc = 0x127114u;
        goto label_127114;
    }
    ctx->pc = 0x12710Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x127114u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12710Cu, 0x127114u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x127114u;
label_127114:
    // 0x127114: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_127118:
    if (ctx->pc == 0x127118u) {
        ctx->pc = 0x12711Cu;
        goto label_12711c;
    }
    ctx->pc = 0x127114u;
    {
        const bool branch_taken_0x127114 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x127114) {
            ctx->pc = 0x127144u;
            goto label_127144;
        }
    }
    ctx->pc = 0x12711Cu;
label_12711c:
    // 0x12711c: 0x8f83b9e8  lw          $v1, -0x4618($gp)
    ctx->pc = 0x12711cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949352)));
label_127120:
    // 0x127120: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_127124:
    if (ctx->pc == 0x127124u) {
        ctx->pc = 0x127128u;
        goto label_127128;
    }
    ctx->pc = 0x127120u;
    {
        const bool branch_taken_0x127120 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x127120) {
            ctx->pc = 0x127144u;
            goto label_127144;
        }
    }
    ctx->pc = 0x127128u;
label_127128:
    // 0x127128: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x127128u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12712c:
    // 0x12712c: 0xc08d230  jal         func_2348C0
label_127130:
    if (ctx->pc == 0x127130u) {
        ctx->pc = 0x127134u;
        goto label_127134;
    }
    ctx->pc = 0x12712Cu;
    SET_GPR_U32(ctx, 31, 0x127134u);
    ctx->pc = 0x2348C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2348C0u, 0x12712Cu, 0x127134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127134u;
label_127134:
    // 0x127134: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x127134u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_127138:
    // 0x127138: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x127138u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12713c:
    // 0x12713c: 0xc0562ac  jal         func_158AB0
label_127140:
    if (ctx->pc == 0x127140u) {
        ctx->pc = 0x127144u;
        goto label_127144;
    }
    ctx->pc = 0x12713Cu;
    SET_GPR_U32(ctx, 31, 0x127144u);
    ctx->pc = 0x158AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158AB0u, 0x12713Cu, 0x127144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127144u;
label_127144:
    // 0x127144: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x127144u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_127148:
    // 0x127148: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x127148u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_12714c:
    // 0x12714c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x12714cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_127150:
    // 0x127150: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x127150u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_127154:
    // 0x127154: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x127154u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_127158:
    // 0x127158: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x127158u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_12715c:
    // 0x12715c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x12715cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_127160:
    // 0x127160: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x127160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_127164:
    // 0x127164: 0x3e00008  jr          $ra
label_127168:
    if (ctx->pc == 0x127168u) {
        ctx->pc = 0x12716Cu;
        goto label_12716c;
    }
    ctx->pc = 0x127164u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x127164u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12716Cu;
label_12716c:
    // 0x12716c: 0x0  nop
    ctx->pc = 0x12716cu;
    // NOP
    ctx->pc = 0x127170u;
}
