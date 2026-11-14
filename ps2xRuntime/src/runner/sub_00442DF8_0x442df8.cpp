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

// Function: sub_00442DF8
// Address: 0x442df8 - 0x443208
void sub_00442DF8_0x442df8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00442DF8_0x442df8");
#endif

    switch (ctx->pc) {
        case 0x442df8u: goto label_442df8;
        case 0x442dfcu: goto label_442dfc;
        case 0x442e00u: goto label_442e00;
        case 0x442e04u: goto label_442e04;
        case 0x442e08u: goto label_442e08;
        case 0x442e0cu: goto label_442e0c;
        case 0x442e10u: goto label_442e10;
        case 0x442e14u: goto label_442e14;
        case 0x442e18u: goto label_442e18;
        case 0x442e1cu: goto label_442e1c;
        case 0x442e20u: goto label_442e20;
        case 0x442e24u: goto label_442e24;
        case 0x442e28u: goto label_442e28;
        case 0x442e2cu: goto label_442e2c;
        case 0x442e30u: goto label_442e30;
        case 0x442e34u: goto label_442e34;
        case 0x442e38u: goto label_442e38;
        case 0x442e3cu: goto label_442e3c;
        case 0x442e40u: goto label_442e40;
        case 0x442e44u: goto label_442e44;
        case 0x442e48u: goto label_442e48;
        case 0x442e4cu: goto label_442e4c;
        case 0x442e50u: goto label_442e50;
        case 0x442e54u: goto label_442e54;
        case 0x442e58u: goto label_442e58;
        case 0x442e5cu: goto label_442e5c;
        case 0x442e60u: goto label_442e60;
        case 0x442e64u: goto label_442e64;
        case 0x442e68u: goto label_442e68;
        case 0x442e6cu: goto label_442e6c;
        case 0x442e70u: goto label_442e70;
        case 0x442e74u: goto label_442e74;
        case 0x442e78u: goto label_442e78;
        case 0x442e7cu: goto label_442e7c;
        case 0x442e80u: goto label_442e80;
        case 0x442e84u: goto label_442e84;
        case 0x442e88u: goto label_442e88;
        case 0x442e8cu: goto label_442e8c;
        case 0x442e90u: goto label_442e90;
        case 0x442e94u: goto label_442e94;
        case 0x442e98u: goto label_442e98;
        case 0x442e9cu: goto label_442e9c;
        case 0x442ea0u: goto label_442ea0;
        case 0x442ea4u: goto label_442ea4;
        case 0x442ea8u: goto label_442ea8;
        case 0x442eacu: goto label_442eac;
        case 0x442eb0u: goto label_442eb0;
        case 0x442eb4u: goto label_442eb4;
        case 0x442eb8u: goto label_442eb8;
        case 0x442ebcu: goto label_442ebc;
        case 0x442ec0u: goto label_442ec0;
        case 0x442ec4u: goto label_442ec4;
        case 0x442ec8u: goto label_442ec8;
        case 0x442eccu: goto label_442ecc;
        case 0x442ed0u: goto label_442ed0;
        case 0x442ed4u: goto label_442ed4;
        case 0x442ed8u: goto label_442ed8;
        case 0x442edcu: goto label_442edc;
        case 0x442ee0u: goto label_442ee0;
        case 0x442ee4u: goto label_442ee4;
        case 0x442ee8u: goto label_442ee8;
        case 0x442eecu: goto label_442eec;
        case 0x442ef0u: goto label_442ef0;
        case 0x442ef4u: goto label_442ef4;
        case 0x442ef8u: goto label_442ef8;
        case 0x442efcu: goto label_442efc;
        case 0x442f00u: goto label_442f00;
        case 0x442f04u: goto label_442f04;
        case 0x442f08u: goto label_442f08;
        case 0x442f0cu: goto label_442f0c;
        case 0x442f10u: goto label_442f10;
        case 0x442f14u: goto label_442f14;
        case 0x442f18u: goto label_442f18;
        case 0x442f1cu: goto label_442f1c;
        case 0x442f20u: goto label_442f20;
        case 0x442f24u: goto label_442f24;
        case 0x442f28u: goto label_442f28;
        case 0x442f2cu: goto label_442f2c;
        case 0x442f30u: goto label_442f30;
        case 0x442f34u: goto label_442f34;
        case 0x442f38u: goto label_442f38;
        case 0x442f3cu: goto label_442f3c;
        case 0x442f40u: goto label_442f40;
        case 0x442f44u: goto label_442f44;
        case 0x442f48u: goto label_442f48;
        case 0x442f4cu: goto label_442f4c;
        case 0x442f50u: goto label_442f50;
        case 0x442f54u: goto label_442f54;
        case 0x442f58u: goto label_442f58;
        case 0x442f5cu: goto label_442f5c;
        case 0x442f60u: goto label_442f60;
        case 0x442f64u: goto label_442f64;
        case 0x442f68u: goto label_442f68;
        case 0x442f6cu: goto label_442f6c;
        case 0x442f70u: goto label_442f70;
        case 0x442f74u: goto label_442f74;
        case 0x442f78u: goto label_442f78;
        case 0x442f7cu: goto label_442f7c;
        case 0x442f80u: goto label_442f80;
        case 0x442f84u: goto label_442f84;
        case 0x442f88u: goto label_442f88;
        case 0x442f8cu: goto label_442f8c;
        case 0x442f90u: goto label_442f90;
        case 0x442f94u: goto label_442f94;
        case 0x442f98u: goto label_442f98;
        case 0x442f9cu: goto label_442f9c;
        case 0x442fa0u: goto label_442fa0;
        case 0x442fa4u: goto label_442fa4;
        case 0x442fa8u: goto label_442fa8;
        case 0x442facu: goto label_442fac;
        case 0x442fb0u: goto label_442fb0;
        case 0x442fb4u: goto label_442fb4;
        case 0x442fb8u: goto label_442fb8;
        case 0x442fbcu: goto label_442fbc;
        case 0x442fc0u: goto label_442fc0;
        case 0x442fc4u: goto label_442fc4;
        case 0x442fc8u: goto label_442fc8;
        case 0x442fccu: goto label_442fcc;
        case 0x442fd0u: goto label_442fd0;
        case 0x442fd4u: goto label_442fd4;
        case 0x442fd8u: goto label_442fd8;
        case 0x442fdcu: goto label_442fdc;
        case 0x442fe0u: goto label_442fe0;
        case 0x442fe4u: goto label_442fe4;
        case 0x442fe8u: goto label_442fe8;
        case 0x442fecu: goto label_442fec;
        case 0x442ff0u: goto label_442ff0;
        case 0x442ff4u: goto label_442ff4;
        case 0x442ff8u: goto label_442ff8;
        case 0x442ffcu: goto label_442ffc;
        case 0x443000u: goto label_443000;
        case 0x443004u: goto label_443004;
        case 0x443008u: goto label_443008;
        case 0x44300cu: goto label_44300c;
        case 0x443010u: goto label_443010;
        case 0x443014u: goto label_443014;
        case 0x443018u: goto label_443018;
        case 0x44301cu: goto label_44301c;
        case 0x443020u: goto label_443020;
        case 0x443024u: goto label_443024;
        case 0x443028u: goto label_443028;
        case 0x44302cu: goto label_44302c;
        case 0x443030u: goto label_443030;
        case 0x443034u: goto label_443034;
        case 0x443038u: goto label_443038;
        case 0x44303cu: goto label_44303c;
        case 0x443040u: goto label_443040;
        case 0x443044u: goto label_443044;
        case 0x443048u: goto label_443048;
        case 0x44304cu: goto label_44304c;
        case 0x443050u: goto label_443050;
        case 0x443054u: goto label_443054;
        case 0x443058u: goto label_443058;
        case 0x44305cu: goto label_44305c;
        case 0x443060u: goto label_443060;
        case 0x443064u: goto label_443064;
        case 0x443068u: goto label_443068;
        case 0x44306cu: goto label_44306c;
        case 0x443070u: goto label_443070;
        case 0x443074u: goto label_443074;
        case 0x443078u: goto label_443078;
        case 0x44307cu: goto label_44307c;
        case 0x443080u: goto label_443080;
        case 0x443084u: goto label_443084;
        case 0x443088u: goto label_443088;
        case 0x44308cu: goto label_44308c;
        case 0x443090u: goto label_443090;
        case 0x443094u: goto label_443094;
        case 0x443098u: goto label_443098;
        case 0x44309cu: goto label_44309c;
        case 0x4430a0u: goto label_4430a0;
        case 0x4430a4u: goto label_4430a4;
        case 0x4430a8u: goto label_4430a8;
        case 0x4430acu: goto label_4430ac;
        case 0x4430b0u: goto label_4430b0;
        case 0x4430b4u: goto label_4430b4;
        case 0x4430b8u: goto label_4430b8;
        case 0x4430bcu: goto label_4430bc;
        case 0x4430c0u: goto label_4430c0;
        case 0x4430c4u: goto label_4430c4;
        case 0x4430c8u: goto label_4430c8;
        case 0x4430ccu: goto label_4430cc;
        case 0x4430d0u: goto label_4430d0;
        case 0x4430d4u: goto label_4430d4;
        case 0x4430d8u: goto label_4430d8;
        case 0x4430dcu: goto label_4430dc;
        case 0x4430e0u: goto label_4430e0;
        case 0x4430e4u: goto label_4430e4;
        case 0x4430e8u: goto label_4430e8;
        case 0x4430ecu: goto label_4430ec;
        case 0x4430f0u: goto label_4430f0;
        case 0x4430f4u: goto label_4430f4;
        case 0x4430f8u: goto label_4430f8;
        case 0x4430fcu: goto label_4430fc;
        case 0x443100u: goto label_443100;
        case 0x443104u: goto label_443104;
        case 0x443108u: goto label_443108;
        case 0x44310cu: goto label_44310c;
        case 0x443110u: goto label_443110;
        case 0x443114u: goto label_443114;
        case 0x443118u: goto label_443118;
        case 0x44311cu: goto label_44311c;
        case 0x443120u: goto label_443120;
        case 0x443124u: goto label_443124;
        case 0x443128u: goto label_443128;
        case 0x44312cu: goto label_44312c;
        case 0x443130u: goto label_443130;
        case 0x443134u: goto label_443134;
        case 0x443138u: goto label_443138;
        case 0x44313cu: goto label_44313c;
        case 0x443140u: goto label_443140;
        case 0x443144u: goto label_443144;
        case 0x443148u: goto label_443148;
        case 0x44314cu: goto label_44314c;
        case 0x443150u: goto label_443150;
        case 0x443154u: goto label_443154;
        case 0x443158u: goto label_443158;
        case 0x44315cu: goto label_44315c;
        case 0x443160u: goto label_443160;
        case 0x443164u: goto label_443164;
        case 0x443168u: goto label_443168;
        case 0x44316cu: goto label_44316c;
        case 0x443170u: goto label_443170;
        case 0x443174u: goto label_443174;
        case 0x443178u: goto label_443178;
        case 0x44317cu: goto label_44317c;
        case 0x443180u: goto label_443180;
        case 0x443184u: goto label_443184;
        case 0x443188u: goto label_443188;
        case 0x44318cu: goto label_44318c;
        case 0x443190u: goto label_443190;
        case 0x443194u: goto label_443194;
        case 0x443198u: goto label_443198;
        case 0x44319cu: goto label_44319c;
        case 0x4431a0u: goto label_4431a0;
        case 0x4431a4u: goto label_4431a4;
        case 0x4431a8u: goto label_4431a8;
        case 0x4431acu: goto label_4431ac;
        case 0x4431b0u: goto label_4431b0;
        case 0x4431b4u: goto label_4431b4;
        case 0x4431b8u: goto label_4431b8;
        case 0x4431bcu: goto label_4431bc;
        case 0x4431c0u: goto label_4431c0;
        case 0x4431c4u: goto label_4431c4;
        case 0x4431c8u: goto label_4431c8;
        case 0x4431ccu: goto label_4431cc;
        case 0x4431d0u: goto label_4431d0;
        case 0x4431d4u: goto label_4431d4;
        case 0x4431d8u: goto label_4431d8;
        case 0x4431dcu: goto label_4431dc;
        case 0x4431e0u: goto label_4431e0;
        case 0x4431e4u: goto label_4431e4;
        case 0x4431e8u: goto label_4431e8;
        case 0x4431ecu: goto label_4431ec;
        case 0x4431f0u: goto label_4431f0;
        case 0x4431f4u: goto label_4431f4;
        case 0x4431f8u: goto label_4431f8;
        case 0x4431fcu: goto label_4431fc;
        case 0x443200u: goto label_443200;
        case 0x443204u: goto label_443204;
        default: break;
    }

    ctx->pc = 0x442df8u;

label_442df8:
    // 0x442df8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x442df8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_442dfc:
    // 0x442dfc: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x442dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_442e00:
    // 0x442e00: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x442e00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_442e04:
    // 0x442e04: 0x2446d7c0  addiu       $a2, $v0, -0x2840
    ctx->pc = 0x442e04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956992));
label_442e08:
    // 0x442e08: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x442e08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_442e0c:
    // 0x442e0c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x442e0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_442e10:
    // 0x442e10: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x442e10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_442e14:
    // 0x442e14: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x442e14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_442e18:
    // 0x442e18: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x442e18u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_442e1c:
    // 0x442e1c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x442e1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_442e20:
    // 0x442e20: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x442e20u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_442e24:
    // 0x442e24: 0x8f83beb8  lw          $v1, -0x4148($gp)
    ctx->pc = 0x442e24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950584)));
label_442e28:
    // 0x442e28: 0x8cc20024  lw          $v0, 0x24($a2)
    ctx->pc = 0x442e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
label_442e2c:
    // 0x442e2c: 0x1222000d  beq         $s1, $v0, . + 4 + (0xD << 2)
label_442e30:
    if (ctx->pc == 0x442E30u) {
        ctx->pc = 0x442E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x442E2Cu;
        // 0x442e30: 0x2238021  addu        $s0, $s1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x442E34u;
        goto label_442e34;
    }
    ctx->pc = 0x442E2Cu;
    {
        const bool branch_taken_0x442e2c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x442E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x442E2Cu;
        // 0x442e30: 0x2238021  addu        $s0, $s1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x442e2c) {
            ctx->pc = 0x442E64u;
            goto label_442e64;
        }
    }
    ctx->pc = 0x442E34u;
label_442e34:
    // 0x442e34: 0x92220020  lbu         $v0, 0x20($s1)
    ctx->pc = 0x442e34u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 32)));
label_442e38:
    // 0x442e38: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x442e38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
label_442e3c:
    // 0x442e3c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_442e40:
    if (ctx->pc == 0x442E40u) {
        ctx->pc = 0x442E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x442E3Cu;
        // 0x442e40: 0x8e030058  lw          $v1, 0x58($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x442E44u;
        goto label_442e44;
    }
    ctx->pc = 0x442E3Cu;
    {
        const bool branch_taken_0x442e3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x442E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x442E3Cu;
        // 0x442e40: 0x8e030058  lw          $v1, 0x58($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x442e3c) {
            ctx->pc = 0x442E68u;
            goto label_442e68;
        }
    }
    ctx->pc = 0x442E44u;
label_442e44:
    // 0x442e44: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x442e44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_442e48:
    // 0x442e48: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_442e4c:
    if (ctx->pc == 0x442E4Cu) {
        ctx->pc = 0x442E50u;
        goto label_442e50;
    }
    ctx->pc = 0x442E48u;
    {
        const bool branch_taken_0x442e48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x442e48) {
            ctx->pc = 0x442E68u;
            goto label_442e68;
        }
    }
    ctx->pc = 0x442E50u;
label_442e50:
    // 0x442e50: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_442e54:
    if (ctx->pc == 0x442E54u) {
        ctx->pc = 0x442E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x442E50u;
        // 0x442e54: 0x8e62d7c0  lw          $v0, -0x2840($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294956992)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x442E58u;
        goto label_442e58;
    }
    ctx->pc = 0x442E50u;
    {
        const bool branch_taken_0x442e50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x442E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x442E50u;
        // 0x442e54: 0x8e62d7c0  lw          $v0, -0x2840($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294956992)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x442e50) {
            ctx->pc = 0x442E70u;
            goto label_442e70;
        }
    }
    ctx->pc = 0x442E58u;
label_442e58:
    // 0x442e58: 0x8cc20020  lw          $v0, 0x20($a2)
    ctx->pc = 0x442e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
label_442e5c:
    // 0x442e5c: 0x40f809  jalr        $v0
label_442e60:
    if (ctx->pc == 0x442E60u) {
        ctx->pc = 0x442E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x442E5Cu;
        // 0x442e60: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x442E64u;
        goto label_442e64;
    }
    ctx->pc = 0x442E5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x442E64u);
        ctx->pc = 0x442E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x442E5Cu;
        // 0x442e60: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x442E5Cu, 0x442E64u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x442E64u;
label_442e64:
    // 0x442e64: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x442e64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_442e68:
    // 0x442e68: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
label_442e6c:
    if (ctx->pc == 0x442E6Cu) {
        ctx->pc = 0x442E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x442E68u;
        // 0x442e6c: 0x8e62d7c0  lw          $v0, -0x2840($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294956992)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x442E70u;
        goto label_442e70;
    }
    ctx->pc = 0x442E68u;
    {
        const bool branch_taken_0x442e68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x442E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x442E68u;
        // 0x442e6c: 0x8e62d7c0  lw          $v0, -0x2840($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294956992)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x442e68) {
            ctx->pc = 0x442EC4u;
            goto label_442ec4;
        }
    }
    ctx->pc = 0x442E70u;
label_442e70:
    // 0x442e70: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
label_442e74:
    if (ctx->pc == 0x442E74u) {
        ctx->pc = 0x442E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x442E70u;
        // 0x442e74: 0x92220020  lbu         $v0, 0x20($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x442E78u;
        goto label_442e78;
    }
    ctx->pc = 0x442E70u;
    {
        const bool branch_taken_0x442e70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x442e70) {
            ctx->pc = 0x442E74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x442E70u;
            // 0x442e74: 0x92220020  lbu         $v0, 0x20($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x442EC8u;
            goto label_442ec8;
        }
    }
    ctx->pc = 0x442E78u;
label_442e78:
    // 0x442e78: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x442e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_442e7c:
    // 0x442e7c: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x442e7cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
label_442e80:
    // 0x442e80: 0x8e070010  lw          $a3, 0x10($s0)
    ctx->pc = 0x442e80u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_442e84:
    // 0x442e84: 0x3c05fff8  lui         $a1, 0xFFF8
    ctx->pc = 0x442e84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65528 << 16));
label_442e88:
    // 0x442e88: 0x21182  srl         $v0, $v0, 6
    ctx->pc = 0x442e88u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
label_442e8c:
    // 0x442e8c: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x442e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_442e90:
    // 0x442e90: 0x30483fff  andi        $t0, $v0, 0x3FFF
    ctx->pc = 0x442e90u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16383);
label_442e94:
    // 0x442e94: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x442e94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_442e98:
    // 0x442e98: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x442e98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_442e9c:
    // 0x442e9c: 0x34c6c000  ori         $a2, $a2, 0xC000
    ctx->pc = 0x442e9cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)49152);
label_442ea0:
    // 0x442ea0: 0x30423fff  andi        $v0, $v0, 0x3FFF
    ctx->pc = 0x442ea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16383);
label_442ea4:
    // 0x442ea4: 0x34a5001f  ori         $a1, $a1, 0x1F
    ctx->pc = 0x442ea4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)31);
label_442ea8:
    // 0x442ea8: 0x862024  and         $a0, $a0, $a2
    ctx->pc = 0x442ea8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
label_442eac:
    // 0x442eac: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x442eacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
label_442eb0:
    // 0x442eb0: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x442eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_442eb4:
    // 0x442eb4: 0x882025  or          $a0, $a0, $t0
    ctx->pc = 0x442eb4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 8));
label_442eb8:
    // 0x442eb8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x442eb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_442ebc:
    // 0x442ebc: 0xae040008  sw          $a0, 0x8($s0)
    ctx->pc = 0x442ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 4));
label_442ec0:
    // 0x442ec0: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x442ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_442ec4:
    // 0x442ec4: 0x92220020  lbu         $v0, 0x20($s1)
    ctx->pc = 0x442ec4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 32)));
label_442ec8:
    // 0x442ec8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x442ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_442ecc:
    // 0x442ecc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x442eccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_442ed0:
    // 0x442ed0: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x442ed0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
label_442ed4:
    // 0x442ed4: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
label_442ed8:
    if (ctx->pc == 0x442ED8u) {
        ctx->pc = 0x442ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x442ED4u;
        // 0x442ed8: 0x2664d7c0  addiu       $a0, $s3, -0x2840 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294956992));
        ctx->in_delay_slot = false;
        ctx->pc = 0x442EDCu;
        goto label_442edc;
    }
    ctx->pc = 0x442ED4u;
    {
        const bool branch_taken_0x442ed4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x442ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x442ED4u;
        // 0x442ed8: 0x2664d7c0  addiu       $a0, $s3, -0x2840 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294956992));
        ctx->in_delay_slot = false;
        if (branch_taken_0x442ed4) {
            ctx->pc = 0x442EF0u;
            goto label_442ef0;
        }
    }
    ctx->pc = 0x442EDCu;
label_442edc:
    // 0x442edc: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x442edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_442ee0:
    // 0x442ee0: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_442ee4:
    if (ctx->pc == 0x442EE4u) {
        ctx->pc = 0x442EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x442EE0u;
        // 0x442ee4: 0x8c820024  lw          $v0, 0x24($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x442EE8u;
        goto label_442ee8;
    }
    ctx->pc = 0x442EE0u;
    {
        const bool branch_taken_0x442ee0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x442ee0) {
            ctx->pc = 0x442EE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x442EE0u;
            // 0x442ee4: 0x8c820024  lw          $v0, 0x24($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x442EF4u;
            goto label_442ef4;
        }
    }
    ctx->pc = 0x442EE8u;
label_442ee8:
    // 0x442ee8: 0x100000bf  b           . + 4 + (0xBF << 2)
label_442eec:
    if (ctx->pc == 0x442EECu) {
        ctx->pc = 0x442EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x442EE8u;
        // 0x442eec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x442EF0u;
        goto label_442ef0;
    }
    ctx->pc = 0x442EE8u;
    {
        const bool branch_taken_0x442ee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x442EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x442EE8u;
        // 0x442eec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x442ee8) {
            ctx->pc = 0x4431E8u;
            goto label_4431e8;
        }
    }
    ctx->pc = 0x442EF0u;
label_442ef0:
    // 0x442ef0: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x442ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_442ef4:
    // 0x442ef4: 0x54510010  bnel        $v0, $s1, . + 4 + (0x10 << 2)
label_442ef8:
    if (ctx->pc == 0x442EF8u) {
        ctx->pc = 0x442EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x442EF4u;
        // 0x442ef8: 0x2665d7c0  addiu       $a1, $s3, -0x2840 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294956992));
        ctx->in_delay_slot = false;
        ctx->pc = 0x442EFCu;
        goto label_442efc;
    }
    ctx->pc = 0x442EF4u;
    {
        const bool branch_taken_0x442ef4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x442ef4) {
            ctx->pc = 0x442EF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x442EF4u;
            // 0x442ef8: 0x2665d7c0  addiu       $a1, $s3, -0x2840 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294956992));
            ctx->in_delay_slot = false;
            ctx->pc = 0x442F38u;
            goto label_442f38;
        }
    }
    ctx->pc = 0x442EFCu;
label_442efc:
    // 0x442efc: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x442efcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_442f00:
    // 0x442f00: 0x8f83bec0  lw          $v1, -0x4140($gp)
    ctx->pc = 0x442f00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950592)));
label_442f04:
    // 0x442f04: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x442f04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_442f08:
    // 0x442f08: 0x5062000b  beql        $v1, $v0, . + 4 + (0xB << 2)
label_442f0c:
    if (ctx->pc == 0x442F0Cu) {
        ctx->pc = 0x442F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x442F08u;
        // 0x442f0c: 0x2665d7c0  addiu       $a1, $s3, -0x2840 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294956992));
        ctx->in_delay_slot = false;
        ctx->pc = 0x442F10u;
        goto label_442f10;
    }
    ctx->pc = 0x442F08u;
    {
        const bool branch_taken_0x442f08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x442f08) {
            ctx->pc = 0x442F0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x442F08u;
            // 0x442f0c: 0x2665d7c0  addiu       $a1, $s3, -0x2840 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294956992));
            ctx->in_delay_slot = false;
            ctx->pc = 0x442F38u;
            goto label_442f38;
        }
    }
    ctx->pc = 0x442F10u;
label_442f10:
    // 0x442f10: 0x8c820028  lw          $v0, 0x28($a0)
    ctx->pc = 0x442f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_442f14:
    // 0x442f14: 0x54520008  bnel        $v0, $s2, . + 4 + (0x8 << 2)
label_442f18:
    if (ctx->pc == 0x442F18u) {
        ctx->pc = 0x442F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x442F14u;
        // 0x442f18: 0x2665d7c0  addiu       $a1, $s3, -0x2840 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294956992));
        ctx->in_delay_slot = false;
        ctx->pc = 0x442F1Cu;
        goto label_442f1c;
    }
    ctx->pc = 0x442F14u;
    {
        const bool branch_taken_0x442f14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x442f14) {
            ctx->pc = 0x442F18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x442F14u;
            // 0x442f18: 0x2665d7c0  addiu       $a1, $s3, -0x2840 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294956992));
            ctx->in_delay_slot = false;
            ctx->pc = 0x442F38u;
            goto label_442f38;
        }
    }
    ctx->pc = 0x442F1Cu;
label_442f1c:
    // 0x442f1c: 0x30a30007  andi        $v1, $a1, 0x7
    ctx->pc = 0x442f1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
label_442f20:
    // 0x442f20: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x442f20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_442f24:
    // 0x442f24: 0x146200b0  bne         $v1, $v0, . + 4 + (0xB0 << 2)
label_442f28:
    if (ctx->pc == 0x442F28u) {
        ctx->pc = 0x442F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x442F24u;
        // 0x442f28: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x442F2Cu;
        goto label_442f2c;
    }
    ctx->pc = 0x442F24u;
    {
        const bool branch_taken_0x442f24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x442F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x442F24u;
        // 0x442f28: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x442f24) {
            ctx->pc = 0x4431E8u;
            goto label_4431e8;
        }
    }
    ctx->pc = 0x442F2Cu;
label_442f2c:
    // 0x442f2c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x442f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_442f30:
    // 0x442f30: 0x105100ac  beq         $v0, $s1, . + 4 + (0xAC << 2)
label_442f34:
    if (ctx->pc == 0x442F34u) {
        ctx->pc = 0x442F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x442F30u;
        // 0x442f34: 0x2665d7c0  addiu       $a1, $s3, -0x2840 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294956992));
        ctx->in_delay_slot = false;
        ctx->pc = 0x442F38u;
        goto label_442f38;
    }
    ctx->pc = 0x442F30u;
    {
        const bool branch_taken_0x442f30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x442F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x442F30u;
        // 0x442f34: 0x2665d7c0  addiu       $a1, $s3, -0x2840 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294956992));
        ctx->in_delay_slot = false;
        if (branch_taken_0x442f30) {
            ctx->pc = 0x4431E4u;
            goto label_4431e4;
        }
    }
    ctx->pc = 0x442F38u;
label_442f38:
    // 0x442f38: 0x8e040058  lw          $a0, 0x58($s0)
    ctx->pc = 0x442f38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_442f3c:
    // 0x442f3c: 0xacb10024  sw          $s1, 0x24($a1)
    ctx->pc = 0x442f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 17));
label_442f40:
    // 0x442f40: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
label_442f44:
    if (ctx->pc == 0x442F44u) {
        ctx->pc = 0x442F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x442F40u;
        // 0x442f44: 0xacb20028  sw          $s2, 0x28($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x442F48u;
        goto label_442f48;
    }
    ctx->pc = 0x442F40u;
    {
        const bool branch_taken_0x442f40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x442F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x442F40u;
        // 0x442f44: 0xacb20028  sw          $s2, 0x28($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x442f40) {
            ctx->pc = 0x442F90u;
            goto label_442f90;
        }
    }
    ctx->pc = 0x442F48u;
label_442f48:
    // 0x442f48: 0x8e62d7c0  lw          $v0, -0x2840($s3)
    ctx->pc = 0x442f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294956992)));
label_442f4c:
    // 0x442f4c: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
label_442f50:
    if (ctx->pc == 0x442F50u) {
        ctx->pc = 0x442F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x442F4Cu;
        // 0x442f50: 0x92020017  lbu         $v0, 0x17($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 23)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x442F54u;
        goto label_442f54;
    }
    ctx->pc = 0x442F4Cu;
    {
        const bool branch_taken_0x442f4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x442f4c) {
            ctx->pc = 0x442F50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x442F4Cu;
            // 0x442f50: 0x92020017  lbu         $v0, 0x17($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 23)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x442F94u;
            goto label_442f94;
        }
    }
    ctx->pc = 0x442F54u;
label_442f54:
    // 0x442f54: 0x16400008  bnez        $s2, . + 4 + (0x8 << 2)
label_442f58:
    if (ctx->pc == 0x442F58u) {
        ctx->pc = 0x442F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x442F54u;
        // 0x442f58: 0x8ca20014  lw          $v0, 0x14($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x442F5Cu;
        goto label_442f5c;
    }
    ctx->pc = 0x442F54u;
    {
        const bool branch_taken_0x442f54 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x442F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x442F54u;
        // 0x442f58: 0x8ca20014  lw          $v0, 0x14($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x442f54) {
            ctx->pc = 0x442F78u;
            goto label_442f78;
        }
    }
    ctx->pc = 0x442F5Cu;
label_442f5c:
    // 0x442f5c: 0x3c03aaaa  lui         $v1, 0xAAAA
    ctx->pc = 0x442f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)43690 << 16));
label_442f60:
    // 0x442f60: 0x3463aaab  ori         $v1, $v1, 0xAAAB
    ctx->pc = 0x442f60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43691);
label_442f64:
    // 0x442f64: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x442f64u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_442f68:
    // 0x442f68: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x442f68u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_442f6c:
    // 0x442f6c: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x442f6cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_442f70:
    // 0x442f70: 0x10000007  b           . + 4 + (0x7 << 2)
label_442f74:
    if (ctx->pc == 0x442F74u) {
        ctx->pc = 0x442F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x442F70u;
        // 0x442f74: 0xaca2002c  sw          $v0, 0x2C($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x442F78u;
        goto label_442f78;
    }
    ctx->pc = 0x442F70u;
    {
        const bool branch_taken_0x442f70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x442F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x442F70u;
        // 0x442f74: 0xaca2002c  sw          $v0, 0x2C($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x442f70) {
            ctx->pc = 0x442F90u;
            goto label_442f90;
        }
    }
    ctx->pc = 0x442F78u;
label_442f78:
    // 0x442f78: 0x3c03aaaa  lui         $v1, 0xAAAA
    ctx->pc = 0x442f78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)43690 << 16));
label_442f7c:
    // 0x442f7c: 0x3463aaab  ori         $v1, $v1, 0xAAAB
    ctx->pc = 0x442f7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43691);
label_442f80:
    // 0x442f80: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x442f80u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_442f84:
    // 0x442f84: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x442f84u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_442f88:
    // 0x442f88: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x442f88u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_442f8c:
    // 0x442f8c: 0xaca20030  sw          $v0, 0x30($a1)
    ctx->pc = 0x442f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 2));
label_442f90:
    // 0x442f90: 0x92020017  lbu         $v0, 0x17($s0)
    ctx->pc = 0x442f90u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 23)));
label_442f94:
    // 0x442f94: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_442f98:
    if (ctx->pc == 0x442F98u) {
        ctx->pc = 0x442F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x442F94u;
        // 0x442f98: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x442F9Cu;
        goto label_442f9c;
    }
    ctx->pc = 0x442F94u;
    {
        const bool branch_taken_0x442f94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x442F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x442F94u;
        // 0x442f98: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x442f94) {
            ctx->pc = 0x442FB8u;
            goto label_442fb8;
        }
    }
    ctx->pc = 0x442F9Cu;
label_442f9c:
    // 0x442f9c: 0x8f82af04  lw          $v0, -0x50FC($gp)
    ctx->pc = 0x442f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946564)));
label_442fa0:
    // 0x442fa0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_442fa4:
    if (ctx->pc == 0x442FA4u) {
        ctx->pc = 0x442FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x442FA0u;
        // 0x442fa4: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x442FA8u;
        goto label_442fa8;
    }
    ctx->pc = 0x442FA0u;
    {
        const bool branch_taken_0x442fa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x442FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x442FA0u;
        // 0x442fa4: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x442fa0) {
            ctx->pc = 0x442FB8u;
            goto label_442fb8;
        }
    }
    ctx->pc = 0x442FA8u;
label_442fa8:
    // 0x442fa8: 0x8e62d7c0  lw          $v0, -0x2840($s3)
    ctx->pc = 0x442fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294956992)));
label_442fac:
    // 0x442fac: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_442fb0:
    if (ctx->pc == 0x442FB0u) {
        ctx->pc = 0x442FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x442FACu;
        // 0x442fb0: 0xaf80be28  sw          $zero, -0x41D8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294950440), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x442FB4u;
        goto label_442fb4;
    }
    ctx->pc = 0x442FACu;
    {
        const bool branch_taken_0x442fac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x442fac) {
            ctx->pc = 0x442FB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x442FACu;
            // 0x442fb0: 0xaf80be28  sw          $zero, -0x41D8($gp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 28), 4294950440), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x442FB4u;
            goto label_442fb4;
        }
    }
    ctx->pc = 0x442FB4u;
label_442fb4:
    // 0x442fb4: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x442fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_442fb8:
    // 0x442fb8: 0x2405001f  addiu       $a1, $zero, 0x1F
    ctx->pc = 0x442fb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_442fbc:
    // 0x442fbc: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x442fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_442fc0:
    // 0x442fc0: 0xc10a322  jal         func_428C88
label_442fc4:
    if (ctx->pc == 0x442FC4u) {
        ctx->pc = 0x442FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x442FC0u;
        // 0x442fc4: 0x52280a  movz        $a1, $v0, $s2 (Delay Slot)
        if (GPR_U64(ctx, 18) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x442FC8u;
        goto label_442fc8;
    }
    ctx->pc = 0x442FC0u;
    SET_GPR_U32(ctx, 31, 0x442FC8u);
    ctx->pc = 0x442FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x442FC0u;
    // 0x442fc4: 0x52280a  movz        $a1, $v0, $s2 (Delay Slot)
    if (GPR_U64(ctx, 18) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x428C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x428C88u, 0x442FC0u, 0x442FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x442FC8u;
label_442fc8:
    // 0x442fc8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x442fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_442fcc:
    // 0x442fcc: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x442fccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_442fd0:
    // 0x442fd0: 0x34638004  ori         $v1, $v1, 0x8004
    ctx->pc = 0x442fd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32772);
label_442fd4:
    // 0x442fd4: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x442fd4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
label_442fd8:
    // 0x442fd8: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x442fd8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
label_442fdc:
    // 0x442fdc: 0x34c68005  ori         $a2, $a2, 0x8005
    ctx->pc = 0x442fdcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32773);
label_442fe0:
    // 0x442fe0: 0x72300b  movn        $a2, $v1, $s2
    ctx->pc = 0x442fe0u;
    if (GPR_U64(ctx, 18) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
label_442fe4:
    // 0x442fe4: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x442fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_442fe8:
    // 0x442fe8: 0x70661b89  pcpyld      $v1, $v1, $a2
    ctx->pc = 0x442fe8u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 6)));
label_442fec:
    // 0x442fec: 0x8f82be20  lw          $v0, -0x41E0($gp)
    ctx->pc = 0x442fecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
label_442ff0:
    // 0x442ff0: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x442ff0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
label_442ff4:
    // 0x442ff4: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x442ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_442ff8:
    // 0x442ff8: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x442ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
label_442ffc:
    // 0x442ffc: 0x2404003f  addiu       $a0, $zero, 0x3F
    ctx->pc = 0x442ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_443000:
    // 0x443000: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x443000u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_443004:
    // 0x443004: 0x70831b89  pcpyld      $v1, $a0, $v1
    ctx->pc = 0x443004u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
label_443008:
    // 0x443008: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x443008u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
label_44300c:
    // 0x44300c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x44300cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_443010:
    // 0x443010: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x443010u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
label_443014:
    // 0x443014: 0x9e040008  lwu         $a0, 0x8($s0)
    ctx->pc = 0x443014u;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_443018:
    // 0x443018: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x443018u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_44301c:
    // 0x44301c: 0x9e02000c  lwu         $v0, 0xC($s0)
    ctx->pc = 0x44301cu;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_443020:
    // 0x443020: 0x92230020  lbu         $v1, 0x20($s1)
    ctx->pc = 0x443020u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 32)));
label_443024:
    // 0x443024: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x443024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_443028:
    // 0x443028: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x443028u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
label_44302c:
    // 0x44302c: 0x14650012  bne         $v1, $a1, . + 4 + (0x12 << 2)
label_443030:
    if (ctx->pc == 0x443030u) {
        ctx->pc = 0x443030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44302Cu;
        // 0x443030: 0x823025  or          $a2, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x443034u;
        goto label_443034;
    }
    ctx->pc = 0x44302Cu;
    {
        const bool branch_taken_0x44302c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x443030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44302Cu;
        // 0x443030: 0x823025  or          $a2, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44302c) {
            ctx->pc = 0x443078u;
            goto label_443078;
        }
    }
    ctx->pc = 0x443034u;
label_443034:
    // 0x443034: 0x8f82ae94  lw          $v0, -0x516C($gp)
    ctx->pc = 0x443034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946452)));
label_443038:
    // 0x443038: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x443038u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_44303c:
    // 0x44303c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_443040:
    if (ctx->pc == 0x443040u) {
        ctx->pc = 0x443040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44303Cu;
        // 0x443040: 0x3c020062  lui         $v0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x443044u;
        goto label_443044;
    }
    ctx->pc = 0x44303Cu;
    {
        const bool branch_taken_0x44303c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x443040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x44303Cu;
        // 0x443040: 0x3c020062  lui         $v0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44303c) {
            ctx->pc = 0x443050u;
            goto label_443050;
        }
    }
    ctx->pc = 0x443044u;
label_443044:
    // 0x443044: 0x10000004  b           . + 4 + (0x4 << 2)
label_443048:
    if (ctx->pc == 0x443048u) {
        ctx->pc = 0x443048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x443044u;
        // 0x443048: 0xdc443340  ld          $a0, 0x3340($v0) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 13120)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44304Cu;
        goto label_44304c;
    }
    ctx->pc = 0x443044u;
    {
        const bool branch_taken_0x443044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x443048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x443044u;
        // 0x443048: 0xdc443340  ld          $a0, 0x3340($v0) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 13120)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x443044) {
            ctx->pc = 0x443058u;
            goto label_443058;
        }
    }
    ctx->pc = 0x44304Cu;
label_44304c:
    // 0x44304c: 0x0  nop
    ctx->pc = 0x44304cu;
    // NOP
label_443050:
    // 0x443050: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x443050u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_443054:
    // 0x443054: 0xdc4431d0  ld          $a0, 0x31D0($v0)
    ctx->pc = 0x443054u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 12752)));
label_443058:
    // 0x443058: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x443058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_44305c:
    // 0x44305c: 0x308401ff  andi        $a0, $a0, 0x1FF
    ctx->pc = 0x44305cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)511);
label_443060:
    // 0x443060: 0x42178  dsll        $a0, $a0, 5
    ctx->pc = 0x443060u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 5);
label_443064:
    // 0x443064: 0x2403c000  addiu       $v1, $zero, -0x4000
    ctx->pc = 0x443064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950912));
label_443068:
    // 0x443068: 0x30423fff  andi        $v0, $v0, 0x3FFF
    ctx->pc = 0x443068u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16383);
label_44306c:
    // 0x44306c: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x44306cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
label_443070:
    // 0x443070: 0x44102d  daddu       $v0, $v0, $a0
    ctx->pc = 0x443070u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 4));
label_443074:
    // 0x443074: 0x623025  or          $a2, $v1, $v0
    ctx->pc = 0x443074u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_443078:
    // 0x443078: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x443078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_44307c:
    // 0x44307c: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x44307cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_443080:
    // 0x443080: 0x52180b  movn        $v1, $v0, $s2
    ctx->pc = 0x443080u;
    if (GPR_U64(ctx, 18) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
label_443084:
    // 0x443084: 0x70661b89  pcpyld      $v1, $v1, $a2
    ctx->pc = 0x443084u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 6)));
label_443088:
    // 0x443088: 0x8f87be20  lw          $a3, -0x41E0($gp)
    ctx->pc = 0x443088u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
label_44308c:
    // 0x44308c: 0x7ce30000  sq          $v1, 0x0($a3)
    ctx->pc = 0x44308cu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 3));
label_443090:
    // 0x443090: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x443090u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
label_443094:
    // 0x443094: 0x1640001a  bnez        $s2, . + 4 + (0x1A << 2)
label_443098:
    if (ctx->pc == 0x443098u) {
        ctx->pc = 0x443098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x443094u;
        // 0x443098: 0xaf87be20  sw          $a3, -0x41E0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x44309Cu;
        goto label_44309c;
    }
    ctx->pc = 0x443094u;
    {
        const bool branch_taken_0x443094 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x443098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x443094u;
        // 0x443098: 0xaf87be20  sw          $a3, -0x41E0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x443094) {
            ctx->pc = 0x443100u;
            goto label_443100;
        }
    }
    ctx->pc = 0x44309Cu;
label_44309c:
    // 0x44309c: 0xdf84ae68  ld          $a0, -0x5198($gp)
    ctx->pc = 0x44309cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 28), 4294946408)));
label_4430a0:
    // 0x4430a0: 0x2402f000  addiu       $v0, $zero, -0x1000
    ctx->pc = 0x4430a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963200));
label_4430a4:
    // 0x4430a4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x4430a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_4430a8:
    // 0x4430a8: 0x3442ffe7  ori         $v0, $v0, 0xFFE7
    ctx->pc = 0x4430a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65511);
label_4430ac:
    // 0x4430ac: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x4430acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_4430b0:
    // 0x4430b0: 0x3442fde3  ori         $v0, $v0, 0xFDE3
    ctx->pc = 0x4430b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64995);
label_4430b4:
    // 0x4430b4: 0x96050014  lhu         $a1, 0x14($s0)
    ctx->pc = 0x4430b4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
label_4430b8:
    // 0x4430b8: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x4430b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_4430bc:
    // 0x4430bc: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4430bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_4430c0:
    // 0x4430c0: 0xff84ae68  sd          $a0, -0x5198($gp)
    ctx->pc = 0x4430c0u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294946408), GPR_U64(ctx, 4));
label_4430c4:
    // 0x4430c4: 0x51b02  srl         $v1, $a1, 12
    ctx->pc = 0x4430c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 12));
label_4430c8:
    // 0x4430c8: 0x30a50fff  andi        $a1, $a1, 0xFFF
    ctx->pc = 0x4430c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4095);
label_4430cc:
    // 0x4430cc: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x4430ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
label_4430d0:
    // 0x4430d0: 0x92020016  lbu         $v0, 0x16($s0)
    ctx->pc = 0x4430d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 22)));
label_4430d4:
    // 0x4430d4: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x4430d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
label_4430d8:
    // 0x4430d8: 0x31cf8  dsll        $v1, $v1, 19
    ctx->pc = 0x4430d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 19);
label_4430dc:
    // 0x4430dc: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x4430dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_4430e0:
    // 0x4430e0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4430e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_4430e4:
    // 0x4430e4: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x4430e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_4430e8:
    // 0x4430e8: 0x70c41b89  pcpyld      $v1, $a2, $a0
    ctx->pc = 0x4430e8u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 4)));
label_4430ec:
    // 0x4430ec: 0xff84ae68  sd          $a0, -0x5198($gp)
    ctx->pc = 0x4430ecu;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294946408), GPR_U64(ctx, 4));
label_4430f0:
    // 0x4430f0: 0x7ce30000  sq          $v1, 0x0($a3)
    ctx->pc = 0x4430f0u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 3));
label_4430f4:
    // 0x4430f4: 0x24e20010  addiu       $v0, $a3, 0x10
    ctx->pc = 0x4430f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
label_4430f8:
    // 0x4430f8: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x4430f8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
label_4430fc:
    // 0x4430fc: 0x0  nop
    ctx->pc = 0x4430fcu;
    // NOP
label_443100:
    // 0x443100: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x443100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_443104:
    // 0x443104: 0x8e65d7c0  lw          $a1, -0x2840($s3)
    ctx->pc = 0x443104u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294956992)));
label_443108:
    // 0x443108: 0x30423fff  andi        $v0, $v0, 0x3FFF
    ctx->pc = 0x443108u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16383);
label_44310c:
    // 0x44310c: 0x2223c  dsll32      $a0, $v0, 8
    ctx->pc = 0x44310cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 8));
label_443110:
    // 0x443110: 0x21d38  dsll        $v1, $v0, 20
    ctx->pc = 0x443110u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 20);
label_443114:
    // 0x443114: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x443114u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_443118:
    // 0x443118: 0x10a00019  beqz        $a1, . + 4 + (0x19 << 2)
label_44311c:
    if (ctx->pc == 0x44311Cu) {
        ctx->pc = 0x44311Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x443118u;
        // 0x44311c: 0x443825  or          $a3, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x443120u;
        goto label_443120;
    }
    ctx->pc = 0x443118u;
    {
        const bool branch_taken_0x443118 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x44311Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x443118u;
        // 0x44311c: 0x443825  or          $a3, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x443118) {
            ctx->pc = 0x443180u;
            goto label_443180;
        }
    }
    ctx->pc = 0x443120u;
label_443120:
    // 0x443120: 0x9e02001c  lwu         $v0, 0x1C($s0)
    ctx->pc = 0x443120u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_443124:
    // 0x443124: 0x24040035  addiu       $a0, $zero, 0x35
    ctx->pc = 0x443124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
label_443128:
    // 0x443128: 0x9e050018  lwu         $a1, 0x18($s0)
    ctx->pc = 0x443128u;
    SET_GPR_ZE32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_44312c:
    // 0x44312c: 0x24030034  addiu       $v1, $zero, 0x34
    ctx->pc = 0x44312cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_443130:
    // 0x443130: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x443130u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_443134:
    // 0x443134: 0x92180b  movn        $v1, $a0, $s2
    ctx->pc = 0x443134u;
    if (GPR_U64(ctx, 18) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
label_443138:
    // 0x443138: 0xa23025  or          $a2, $a1, $v0
    ctx->pc = 0x443138u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_44313c:
    // 0x44313c: 0xc7302d  daddu       $a2, $a2, $a3
    ctx->pc = 0x44313cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 7));
label_443140:
    // 0x443140: 0x70661b89  pcpyld      $v1, $v1, $a2
    ctx->pc = 0x443140u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 6)));
label_443144:
    // 0x443144: 0x8f82be20  lw          $v0, -0x41E0($gp)
    ctx->pc = 0x443144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
label_443148:
    // 0x443148: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x443148u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
label_44314c:
    // 0x44314c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x44314cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_443150:
    // 0x443150: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x443150u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
label_443154:
    // 0x443154: 0x9e060020  lwu         $a2, 0x20($s0)
    ctx->pc = 0x443154u;
    SET_GPR_ZE32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_443158:
    // 0x443158: 0x24050037  addiu       $a1, $zero, 0x37
    ctx->pc = 0x443158u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
label_44315c:
    // 0x44315c: 0x24040036  addiu       $a0, $zero, 0x36
    ctx->pc = 0x44315cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
label_443160:
    // 0x443160: 0x9e030024  lwu         $v1, 0x24($s0)
    ctx->pc = 0x443160u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_443164:
    // 0x443164: 0xb2200b  movn        $a0, $a1, $s2
    ctx->pc = 0x443164u;
    if (GPR_U64(ctx, 18) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 5));
label_443168:
    // 0x443168: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x443168u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_44316c:
    // 0x44316c: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x44316cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
label_443170:
    // 0x443170: 0xc7302d  daddu       $a2, $a2, $a3
    ctx->pc = 0x443170u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 7));
label_443174:
    // 0x443174: 0x70861b89  pcpyld      $v1, $a0, $a2
    ctx->pc = 0x443174u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 6)));
label_443178:
    // 0x443178: 0x10000017  b           . + 4 + (0x17 << 2)
label_44317c:
    if (ctx->pc == 0x44317Cu) {
        ctx->pc = 0x44317Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x443178u;
        // 0x44317c: 0x7c430000  sq          $v1, 0x0($v0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x443180u;
        goto label_443180;
    }
    ctx->pc = 0x443178u;
    {
        const bool branch_taken_0x443178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x44317Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x443178u;
        // 0x44317c: 0x7c430000  sq          $v1, 0x0($v0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x443178) {
            ctx->pc = 0x4431D8u;
            goto label_4431d8;
        }
    }
    ctx->pc = 0x443180u;
label_443180:
    // 0x443180: 0x9e02001c  lwu         $v0, 0x1C($s0)
    ctx->pc = 0x443180u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_443184:
    // 0x443184: 0x24040035  addiu       $a0, $zero, 0x35
    ctx->pc = 0x443184u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
label_443188:
    // 0x443188: 0x9e050018  lwu         $a1, 0x18($s0)
    ctx->pc = 0x443188u;
    SET_GPR_ZE32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_44318c:
    // 0x44318c: 0x24030034  addiu       $v1, $zero, 0x34
    ctx->pc = 0x44318cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_443190:
    // 0x443190: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x443190u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_443194:
    // 0x443194: 0x92180b  movn        $v1, $a0, $s2
    ctx->pc = 0x443194u;
    if (GPR_U64(ctx, 18) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
label_443198:
    // 0x443198: 0xa23025  or          $a2, $a1, $v0
    ctx->pc = 0x443198u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_44319c:
    // 0x44319c: 0x70661b89  pcpyld      $v1, $v1, $a2
    ctx->pc = 0x44319cu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 6)));
label_4431a0:
    // 0x4431a0: 0x8f82be20  lw          $v0, -0x41E0($gp)
    ctx->pc = 0x4431a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
label_4431a4:
    // 0x4431a4: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x4431a4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
label_4431a8:
    // 0x4431a8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x4431a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_4431ac:
    // 0x4431ac: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x4431acu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
label_4431b0:
    // 0x4431b0: 0x9e060020  lwu         $a2, 0x20($s0)
    ctx->pc = 0x4431b0u;
    SET_GPR_ZE32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_4431b4:
    // 0x4431b4: 0x24050037  addiu       $a1, $zero, 0x37
    ctx->pc = 0x4431b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
label_4431b8:
    // 0x4431b8: 0x24040036  addiu       $a0, $zero, 0x36
    ctx->pc = 0x4431b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
label_4431bc:
    // 0x4431bc: 0x9e030024  lwu         $v1, 0x24($s0)
    ctx->pc = 0x4431bcu;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_4431c0:
    // 0x4431c0: 0xb2200b  movn        $a0, $a1, $s2
    ctx->pc = 0x4431c0u;
    if (GPR_U64(ctx, 18) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 5));
label_4431c4:
    // 0x4431c4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x4431c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_4431c8:
    // 0x4431c8: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x4431c8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
label_4431cc:
    // 0x4431cc: 0x70861b89  pcpyld      $v1, $a0, $a2
    ctx->pc = 0x4431ccu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 6)));
label_4431d0:
    // 0x4431d0: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x4431d0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
label_4431d4:
    // 0x4431d4: 0x0  nop
    ctx->pc = 0x4431d4u;
    // NOP
label_4431d8:
    // 0x4431d8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x4431d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_4431dc:
    // 0x4431dc: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x4431dcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
label_4431e0:
    // 0x4431e0: 0xaf80af04  sw          $zero, -0x50FC($gp)
    ctx->pc = 0x4431e0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946564), GPR_U32(ctx, 0));
label_4431e4:
    // 0x4431e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4431e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4431e8:
    // 0x4431e8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x4431e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4431ec:
    // 0x4431ec: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x4431ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4431f0:
    // 0x4431f0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4431f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4431f4:
    // 0x4431f4: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x4431f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4431f8:
    // 0x4431f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4431f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4431fc:
    // 0x4431fc: 0x3e00008  jr          $ra
label_443200:
    if (ctx->pc == 0x443200u) {
        ctx->pc = 0x443200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4431FCu;
        // 0x443200: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x443204u;
        goto label_443204;
    }
    ctx->pc = 0x4431FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x443200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4431FCu;
        // 0x443200: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4431FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x443204u;
label_443204:
    // 0x443204: 0x0  nop
    ctx->pc = 0x443204u;
    // NOP
    ctx->pc = 0x443208u;
}
