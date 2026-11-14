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

// Function: sub_0045FCD0
// Address: 0x45fcd0 - 0x460160
void sub_0045FCD0_0x45fcd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0045FCD0_0x45fcd0");
#endif

    switch (ctx->pc) {
        case 0x45fcd0u: goto label_45fcd0;
        case 0x45fcd4u: goto label_45fcd4;
        case 0x45fcd8u: goto label_45fcd8;
        case 0x45fcdcu: goto label_45fcdc;
        case 0x45fce0u: goto label_45fce0;
        case 0x45fce4u: goto label_45fce4;
        case 0x45fce8u: goto label_45fce8;
        case 0x45fcecu: goto label_45fcec;
        case 0x45fcf0u: goto label_45fcf0;
        case 0x45fcf4u: goto label_45fcf4;
        case 0x45fcf8u: goto label_45fcf8;
        case 0x45fcfcu: goto label_45fcfc;
        case 0x45fd00u: goto label_45fd00;
        case 0x45fd04u: goto label_45fd04;
        case 0x45fd08u: goto label_45fd08;
        case 0x45fd0cu: goto label_45fd0c;
        case 0x45fd10u: goto label_45fd10;
        case 0x45fd14u: goto label_45fd14;
        case 0x45fd18u: goto label_45fd18;
        case 0x45fd1cu: goto label_45fd1c;
        case 0x45fd20u: goto label_45fd20;
        case 0x45fd24u: goto label_45fd24;
        case 0x45fd28u: goto label_45fd28;
        case 0x45fd2cu: goto label_45fd2c;
        case 0x45fd30u: goto label_45fd30;
        case 0x45fd34u: goto label_45fd34;
        case 0x45fd38u: goto label_45fd38;
        case 0x45fd3cu: goto label_45fd3c;
        case 0x45fd40u: goto label_45fd40;
        case 0x45fd44u: goto label_45fd44;
        case 0x45fd48u: goto label_45fd48;
        case 0x45fd4cu: goto label_45fd4c;
        case 0x45fd50u: goto label_45fd50;
        case 0x45fd54u: goto label_45fd54;
        case 0x45fd58u: goto label_45fd58;
        case 0x45fd5cu: goto label_45fd5c;
        case 0x45fd60u: goto label_45fd60;
        case 0x45fd64u: goto label_45fd64;
        case 0x45fd68u: goto label_45fd68;
        case 0x45fd6cu: goto label_45fd6c;
        case 0x45fd70u: goto label_45fd70;
        case 0x45fd74u: goto label_45fd74;
        case 0x45fd78u: goto label_45fd78;
        case 0x45fd7cu: goto label_45fd7c;
        case 0x45fd80u: goto label_45fd80;
        case 0x45fd84u: goto label_45fd84;
        case 0x45fd88u: goto label_45fd88;
        case 0x45fd8cu: goto label_45fd8c;
        case 0x45fd90u: goto label_45fd90;
        case 0x45fd94u: goto label_45fd94;
        case 0x45fd98u: goto label_45fd98;
        case 0x45fd9cu: goto label_45fd9c;
        case 0x45fda0u: goto label_45fda0;
        case 0x45fda4u: goto label_45fda4;
        case 0x45fda8u: goto label_45fda8;
        case 0x45fdacu: goto label_45fdac;
        case 0x45fdb0u: goto label_45fdb0;
        case 0x45fdb4u: goto label_45fdb4;
        case 0x45fdb8u: goto label_45fdb8;
        case 0x45fdbcu: goto label_45fdbc;
        case 0x45fdc0u: goto label_45fdc0;
        case 0x45fdc4u: goto label_45fdc4;
        case 0x45fdc8u: goto label_45fdc8;
        case 0x45fdccu: goto label_45fdcc;
        case 0x45fdd0u: goto label_45fdd0;
        case 0x45fdd4u: goto label_45fdd4;
        case 0x45fdd8u: goto label_45fdd8;
        case 0x45fddcu: goto label_45fddc;
        case 0x45fde0u: goto label_45fde0;
        case 0x45fde4u: goto label_45fde4;
        case 0x45fde8u: goto label_45fde8;
        case 0x45fdecu: goto label_45fdec;
        case 0x45fdf0u: goto label_45fdf0;
        case 0x45fdf4u: goto label_45fdf4;
        case 0x45fdf8u: goto label_45fdf8;
        case 0x45fdfcu: goto label_45fdfc;
        case 0x45fe00u: goto label_45fe00;
        case 0x45fe04u: goto label_45fe04;
        case 0x45fe08u: goto label_45fe08;
        case 0x45fe0cu: goto label_45fe0c;
        case 0x45fe10u: goto label_45fe10;
        case 0x45fe14u: goto label_45fe14;
        case 0x45fe18u: goto label_45fe18;
        case 0x45fe1cu: goto label_45fe1c;
        case 0x45fe20u: goto label_45fe20;
        case 0x45fe24u: goto label_45fe24;
        case 0x45fe28u: goto label_45fe28;
        case 0x45fe2cu: goto label_45fe2c;
        case 0x45fe30u: goto label_45fe30;
        case 0x45fe34u: goto label_45fe34;
        case 0x45fe38u: goto label_45fe38;
        case 0x45fe3cu: goto label_45fe3c;
        case 0x45fe40u: goto label_45fe40;
        case 0x45fe44u: goto label_45fe44;
        case 0x45fe48u: goto label_45fe48;
        case 0x45fe4cu: goto label_45fe4c;
        case 0x45fe50u: goto label_45fe50;
        case 0x45fe54u: goto label_45fe54;
        case 0x45fe58u: goto label_45fe58;
        case 0x45fe5cu: goto label_45fe5c;
        case 0x45fe60u: goto label_45fe60;
        case 0x45fe64u: goto label_45fe64;
        case 0x45fe68u: goto label_45fe68;
        case 0x45fe6cu: goto label_45fe6c;
        case 0x45fe70u: goto label_45fe70;
        case 0x45fe74u: goto label_45fe74;
        case 0x45fe78u: goto label_45fe78;
        case 0x45fe7cu: goto label_45fe7c;
        case 0x45fe80u: goto label_45fe80;
        case 0x45fe84u: goto label_45fe84;
        case 0x45fe88u: goto label_45fe88;
        case 0x45fe8cu: goto label_45fe8c;
        case 0x45fe90u: goto label_45fe90;
        case 0x45fe94u: goto label_45fe94;
        case 0x45fe98u: goto label_45fe98;
        case 0x45fe9cu: goto label_45fe9c;
        case 0x45fea0u: goto label_45fea0;
        case 0x45fea4u: goto label_45fea4;
        case 0x45fea8u: goto label_45fea8;
        case 0x45feacu: goto label_45feac;
        case 0x45feb0u: goto label_45feb0;
        case 0x45feb4u: goto label_45feb4;
        case 0x45feb8u: goto label_45feb8;
        case 0x45febcu: goto label_45febc;
        case 0x45fec0u: goto label_45fec0;
        case 0x45fec4u: goto label_45fec4;
        case 0x45fec8u: goto label_45fec8;
        case 0x45feccu: goto label_45fecc;
        case 0x45fed0u: goto label_45fed0;
        case 0x45fed4u: goto label_45fed4;
        case 0x45fed8u: goto label_45fed8;
        case 0x45fedcu: goto label_45fedc;
        case 0x45fee0u: goto label_45fee0;
        case 0x45fee4u: goto label_45fee4;
        case 0x45fee8u: goto label_45fee8;
        case 0x45feecu: goto label_45feec;
        case 0x45fef0u: goto label_45fef0;
        case 0x45fef4u: goto label_45fef4;
        case 0x45fef8u: goto label_45fef8;
        case 0x45fefcu: goto label_45fefc;
        case 0x45ff00u: goto label_45ff00;
        case 0x45ff04u: goto label_45ff04;
        case 0x45ff08u: goto label_45ff08;
        case 0x45ff0cu: goto label_45ff0c;
        case 0x45ff10u: goto label_45ff10;
        case 0x45ff14u: goto label_45ff14;
        case 0x45ff18u: goto label_45ff18;
        case 0x45ff1cu: goto label_45ff1c;
        case 0x45ff20u: goto label_45ff20;
        case 0x45ff24u: goto label_45ff24;
        case 0x45ff28u: goto label_45ff28;
        case 0x45ff2cu: goto label_45ff2c;
        case 0x45ff30u: goto label_45ff30;
        case 0x45ff34u: goto label_45ff34;
        case 0x45ff38u: goto label_45ff38;
        case 0x45ff3cu: goto label_45ff3c;
        case 0x45ff40u: goto label_45ff40;
        case 0x45ff44u: goto label_45ff44;
        case 0x45ff48u: goto label_45ff48;
        case 0x45ff4cu: goto label_45ff4c;
        case 0x45ff50u: goto label_45ff50;
        case 0x45ff54u: goto label_45ff54;
        case 0x45ff58u: goto label_45ff58;
        case 0x45ff5cu: goto label_45ff5c;
        case 0x45ff60u: goto label_45ff60;
        case 0x45ff64u: goto label_45ff64;
        case 0x45ff68u: goto label_45ff68;
        case 0x45ff6cu: goto label_45ff6c;
        case 0x45ff70u: goto label_45ff70;
        case 0x45ff74u: goto label_45ff74;
        case 0x45ff78u: goto label_45ff78;
        case 0x45ff7cu: goto label_45ff7c;
        case 0x45ff80u: goto label_45ff80;
        case 0x45ff84u: goto label_45ff84;
        case 0x45ff88u: goto label_45ff88;
        case 0x45ff8cu: goto label_45ff8c;
        case 0x45ff90u: goto label_45ff90;
        case 0x45ff94u: goto label_45ff94;
        case 0x45ff98u: goto label_45ff98;
        case 0x45ff9cu: goto label_45ff9c;
        case 0x45ffa0u: goto label_45ffa0;
        case 0x45ffa4u: goto label_45ffa4;
        case 0x45ffa8u: goto label_45ffa8;
        case 0x45ffacu: goto label_45ffac;
        case 0x45ffb0u: goto label_45ffb0;
        case 0x45ffb4u: goto label_45ffb4;
        case 0x45ffb8u: goto label_45ffb8;
        case 0x45ffbcu: goto label_45ffbc;
        case 0x45ffc0u: goto label_45ffc0;
        case 0x45ffc4u: goto label_45ffc4;
        case 0x45ffc8u: goto label_45ffc8;
        case 0x45ffccu: goto label_45ffcc;
        case 0x45ffd0u: goto label_45ffd0;
        case 0x45ffd4u: goto label_45ffd4;
        case 0x45ffd8u: goto label_45ffd8;
        case 0x45ffdcu: goto label_45ffdc;
        case 0x45ffe0u: goto label_45ffe0;
        case 0x45ffe4u: goto label_45ffe4;
        case 0x45ffe8u: goto label_45ffe8;
        case 0x45ffecu: goto label_45ffec;
        case 0x45fff0u: goto label_45fff0;
        case 0x45fff4u: goto label_45fff4;
        case 0x45fff8u: goto label_45fff8;
        case 0x45fffcu: goto label_45fffc;
        case 0x460000u: goto label_460000;
        case 0x460004u: goto label_460004;
        case 0x460008u: goto label_460008;
        case 0x46000cu: goto label_46000c;
        case 0x460010u: goto label_460010;
        case 0x460014u: goto label_460014;
        case 0x460018u: goto label_460018;
        case 0x46001cu: goto label_46001c;
        case 0x460020u: goto label_460020;
        case 0x460024u: goto label_460024;
        case 0x460028u: goto label_460028;
        case 0x46002cu: goto label_46002c;
        case 0x460030u: goto label_460030;
        case 0x460034u: goto label_460034;
        case 0x460038u: goto label_460038;
        case 0x46003cu: goto label_46003c;
        case 0x460040u: goto label_460040;
        case 0x460044u: goto label_460044;
        case 0x460048u: goto label_460048;
        case 0x46004cu: goto label_46004c;
        case 0x460050u: goto label_460050;
        case 0x460054u: goto label_460054;
        case 0x460058u: goto label_460058;
        case 0x46005cu: goto label_46005c;
        case 0x460060u: goto label_460060;
        case 0x460064u: goto label_460064;
        case 0x460068u: goto label_460068;
        case 0x46006cu: goto label_46006c;
        case 0x460070u: goto label_460070;
        case 0x460074u: goto label_460074;
        case 0x460078u: goto label_460078;
        case 0x46007cu: goto label_46007c;
        case 0x460080u: goto label_460080;
        case 0x460084u: goto label_460084;
        case 0x460088u: goto label_460088;
        case 0x46008cu: goto label_46008c;
        case 0x460090u: goto label_460090;
        case 0x460094u: goto label_460094;
        case 0x460098u: goto label_460098;
        case 0x46009cu: goto label_46009c;
        case 0x4600a0u: goto label_4600a0;
        case 0x4600a4u: goto label_4600a4;
        case 0x4600a8u: goto label_4600a8;
        case 0x4600acu: goto label_4600ac;
        case 0x4600b0u: goto label_4600b0;
        case 0x4600b4u: goto label_4600b4;
        case 0x4600b8u: goto label_4600b8;
        case 0x4600bcu: goto label_4600bc;
        case 0x4600c0u: goto label_4600c0;
        case 0x4600c4u: goto label_4600c4;
        case 0x4600c8u: goto label_4600c8;
        case 0x4600ccu: goto label_4600cc;
        case 0x4600d0u: goto label_4600d0;
        case 0x4600d4u: goto label_4600d4;
        case 0x4600d8u: goto label_4600d8;
        case 0x4600dcu: goto label_4600dc;
        case 0x4600e0u: goto label_4600e0;
        case 0x4600e4u: goto label_4600e4;
        case 0x4600e8u: goto label_4600e8;
        case 0x4600ecu: goto label_4600ec;
        case 0x4600f0u: goto label_4600f0;
        case 0x4600f4u: goto label_4600f4;
        case 0x4600f8u: goto label_4600f8;
        case 0x4600fcu: goto label_4600fc;
        case 0x460100u: goto label_460100;
        case 0x460104u: goto label_460104;
        case 0x460108u: goto label_460108;
        case 0x46010cu: goto label_46010c;
        case 0x460110u: goto label_460110;
        case 0x460114u: goto label_460114;
        case 0x460118u: goto label_460118;
        case 0x46011cu: goto label_46011c;
        case 0x460120u: goto label_460120;
        case 0x460124u: goto label_460124;
        case 0x460128u: goto label_460128;
        case 0x46012cu: goto label_46012c;
        case 0x460130u: goto label_460130;
        case 0x460134u: goto label_460134;
        case 0x460138u: goto label_460138;
        case 0x46013cu: goto label_46013c;
        case 0x460140u: goto label_460140;
        case 0x460144u: goto label_460144;
        case 0x460148u: goto label_460148;
        case 0x46014cu: goto label_46014c;
        case 0x460150u: goto label_460150;
        case 0x460154u: goto label_460154;
        case 0x460158u: goto label_460158;
        case 0x46015cu: goto label_46015c;
        default: break;
    }

    ctx->pc = 0x45fcd0u;

label_45fcd0:
    // 0x45fcd0: 0x27bdfd30  addiu       $sp, $sp, -0x2D0
    ctx->pc = 0x45fcd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966576));
label_45fcd4:
    // 0x45fcd4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x45fcd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_45fcd8:
    // 0x45fcd8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x45fcd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_45fcdc:
    // 0x45fcdc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x45fcdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_45fce0:
    // 0x45fce0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x45fce0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_45fce4:
    // 0x45fce4: 0xafa402a0  sw          $a0, 0x2A0($sp)
    ctx->pc = 0x45fce4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 672), GPR_U32(ctx, 4));
label_45fce8:
    // 0x45fce8: 0xafa502b0  sw          $a1, 0x2B0($sp)
    ctx->pc = 0x45fce8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 688), GPR_U32(ctx, 5));
label_45fcec:
    // 0x45fcec: 0xafa602c0  sw          $a2, 0x2C0($sp)
    ctx->pc = 0x45fcecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 704), GPR_U32(ctx, 6));
label_45fcf0:
    // 0x45fcf0: 0x8fb202a0  lw          $s2, 0x2A0($sp)
    ctx->pc = 0x45fcf0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
label_45fcf4:
    // 0x45fcf4: 0x8fa202b0  lw          $v0, 0x2B0($sp)
    ctx->pc = 0x45fcf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 688)));
label_45fcf8:
    // 0x45fcf8: 0xafa202a0  sw          $v0, 0x2A0($sp)
    ctx->pc = 0x45fcf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 672), GPR_U32(ctx, 2));
label_45fcfc:
    // 0x45fcfc: 0xafb202b0  sw          $s2, 0x2B0($sp)
    ctx->pc = 0x45fcfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 688), GPR_U32(ctx, 18));
label_45fd00:
    // 0x45fd00: 0x2411ffff  addiu       $s1, $zero, -0x1
    ctx->pc = 0x45fd00u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_45fd04:
    // 0x45fd04: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x45fd04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_45fd08:
    // 0x45fd08: 0xafa2029c  sw          $v0, 0x29C($sp)
    ctx->pc = 0x45fd08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 668), GPR_U32(ctx, 2));
label_45fd0c:
    // 0x45fd0c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x45fd0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_45fd10:
    // 0x45fd10: 0xafa20298  sw          $v0, 0x298($sp)
    ctx->pc = 0x45fd10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 664), GPR_U32(ctx, 2));
label_45fd14:
    // 0x45fd14: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x45fd14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_45fd18:
    // 0x45fd18: 0xc116654  jal         func_459950
label_45fd1c:
    if (ctx->pc == 0x45FD1Cu) {
        ctx->pc = 0x45FD20u;
        goto label_45fd20;
    }
    ctx->pc = 0x45FD18u;
    SET_GPR_U32(ctx, 31, 0x45FD20u);
    ctx->pc = 0x459950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x459950u, 0x45FD18u, 0x45FD20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45FD20u;
label_45fd20:
    // 0x45fd20: 0xff82bfc0  sd          $v0, -0x4040($gp)
    ctx->pc = 0x45fd20u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294950848), GPR_U64(ctx, 2));
label_45fd24:
    // 0x45fd24: 0xdf83bfc8  ld          $v1, -0x4038($gp)
    ctx->pc = 0x45fd24u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 28), 4294950856)));
label_45fd28:
    // 0x45fd28: 0xdf82bfc0  ld          $v0, -0x4040($gp)
    ctx->pc = 0x45fd28u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294950848)));
label_45fd2c:
    // 0x45fd2c: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x45fd2cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_45fd30:
    // 0x45fd30: 0x102000f8  beqz        $at, . + 4 + (0xF8 << 2)
label_45fd34:
    if (ctx->pc == 0x45FD34u) {
        ctx->pc = 0x45FD38u;
        goto label_45fd38;
    }
    ctx->pc = 0x45FD30u;
    {
        const bool branch_taken_0x45fd30 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x45fd30) {
            ctx->pc = 0x460114u;
            goto label_460114;
        }
    }
    ctx->pc = 0x45FD38u;
label_45fd38:
    // 0x45fd38: 0xdf82bfc0  ld          $v0, -0x4040($gp)
    ctx->pc = 0x45fd38u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294950848)));
label_45fd3c:
    // 0x45fd3c: 0xff82bfc8  sd          $v0, -0x4038($gp)
    ctx->pc = 0x45fd3cu;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294950856), GPR_U64(ctx, 2));
label_45fd40:
    // 0x45fd40: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x45fd40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_45fd44:
    // 0x45fd44: 0x27a5029c  addiu       $a1, $sp, 0x29C
    ctx->pc = 0x45fd44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 668));
label_45fd48:
    // 0x45fd48: 0x27a60298  addiu       $a2, $sp, 0x298
    ctx->pc = 0x45fd48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 664));
label_45fd4c:
    // 0x45fd4c: 0xc0c3c8e  jal         func_30F238
label_45fd50:
    if (ctx->pc == 0x45FD50u) {
        ctx->pc = 0x45FD54u;
        goto label_45fd54;
    }
    ctx->pc = 0x45FD4Cu;
    SET_GPR_U32(ctx, 31, 0x45FD54u);
    ctx->pc = 0x30F238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30F238u, 0x45FD4Cu, 0x45FD54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45FD54u;
label_45fd54:
    // 0x45fd54: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x45fd54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_45fd58:
    // 0x45fd58: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x45fd58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_45fd5c:
    // 0x45fd5c: 0x16020003  bne         $s0, $v0, . + 4 + (0x3 << 2)
label_45fd60:
    if (ctx->pc == 0x45FD60u) {
        ctx->pc = 0x45FD64u;
        goto label_45fd64;
    }
    ctx->pc = 0x45FD5Cu;
    {
        const bool branch_taken_0x45fd5c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x45fd5c) {
            ctx->pc = 0x45FD6Cu;
            goto label_45fd6c;
        }
    }
    ctx->pc = 0x45FD64u;
label_45fd64:
    // 0x45fd64: 0x8fa20298  lw          $v0, 0x298($sp)
    ctx->pc = 0x45fd64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
label_45fd68:
    // 0x45fd68: 0xaf82bfb4  sw          $v0, -0x404C($gp)
    ctx->pc = 0x45fd68u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950836), GPR_U32(ctx, 2));
label_45fd6c:
    // 0x45fd6c: 0x8f82bfa8  lw          $v0, -0x4058($gp)
    ctx->pc = 0x45fd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950824)));
label_45fd70:
    // 0x45fd70: 0x2c41000f  sltiu       $at, $v0, 0xF
    ctx->pc = 0x45fd70u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)15) ? 1 : 0);
label_45fd74:
    // 0x45fd74: 0x102000be  beqz        $at, . + 4 + (0xBE << 2)
label_45fd78:
    if (ctx->pc == 0x45FD78u) {
        ctx->pc = 0x45FD7Cu;
        goto label_45fd7c;
    }
    ctx->pc = 0x45FD74u;
    {
        const bool branch_taken_0x45fd74 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x45fd74) {
            ctx->pc = 0x460070u;
            goto label_460070;
        }
    }
    ctx->pc = 0x45FD7Cu;
label_45fd7c:
    // 0x45fd7c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x45fd7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_45fd80:
    // 0x45fd80: 0x24631a30  addiu       $v1, $v1, 0x1A30
    ctx->pc = 0x45fd80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6704));
label_45fd84:
    // 0x45fd84: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x45fd84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_45fd88:
    // 0x45fd88: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x45fd88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_45fd8c:
    // 0x45fd8c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x45fd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_45fd90:
    // 0x45fd90: 0x400008  jr          $v0
label_45fd94:
    if (ctx->pc == 0x45FD94u) {
        ctx->pc = 0x45FD98u;
        goto label_45fd98;
    }
    ctx->pc = 0x45FD90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x45FD98u: goto label_45fd98;
            case 0x45FEB4u: goto label_45feb4;
            case 0x45FEF8u: goto label_45fef8;
            case 0x45FF14u: goto label_45ff14;
            case 0x45FF30u: goto label_45ff30;
            case 0x45FF4Cu: goto label_45ff4c;
            case 0x45FF70u: goto label_45ff70;
            case 0x45FF8Cu: goto label_45ff8c;
            case 0x45FFA8u: goto label_45ffa8;
            case 0x45FFC4u: goto label_45ffc4;
            case 0x45FFE4u: goto label_45ffe4;
            case 0x460000u: goto label_460000;
            case 0x46001Cu: goto label_46001c;
            case 0x460038u: goto label_460038;
            case 0x460054u: goto label_460054;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45FD90u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x45FD98u;
label_45fd98:
    // 0x45fd98: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x45fd98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_45fd9c:
    // 0x45fd9c: 0x160200dd  bne         $s0, $v0, . + 4 + (0xDD << 2)
label_45fda0:
    if (ctx->pc == 0x45FDA0u) {
        ctx->pc = 0x45FDA4u;
        goto label_45fda4;
    }
    ctx->pc = 0x45FD9Cu;
    {
        const bool branch_taken_0x45fd9c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x45fd9c) {
            ctx->pc = 0x460114u;
            goto label_460114;
        }
    }
    ctx->pc = 0x45FDA4u;
label_45fda4:
    // 0x45fda4: 0x8f83b18c  lw          $v1, -0x4E74($gp)
    ctx->pc = 0x45fda4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947212)));
label_45fda8:
    // 0x45fda8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x45fda8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_45fdac:
    // 0x45fdac: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
label_45fdb0:
    if (ctx->pc == 0x45FDB0u) {
        ctx->pc = 0x45FDB4u;
        goto label_45fdb4;
    }
    ctx->pc = 0x45FDACu;
    {
        const bool branch_taken_0x45fdac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x45fdac) {
            ctx->pc = 0x45FDDCu;
            goto label_45fddc;
        }
    }
    ctx->pc = 0x45FDB4u;
label_45fdb4:
    // 0x45fdb4: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x45fdb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_45fdb8:
    // 0x45fdb8: 0x8c434dd8  lw          $v1, 0x4DD8($v0)
    ctx->pc = 0x45fdb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 19928)));
label_45fdbc:
    // 0x45fdbc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x45fdbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_45fdc0:
    // 0x45fdc0: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
label_45fdc4:
    if (ctx->pc == 0x45FDC4u) {
        ctx->pc = 0x45FDC8u;
        goto label_45fdc8;
    }
    ctx->pc = 0x45FDC0u;
    {
        const bool branch_taken_0x45fdc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x45fdc0) {
            ctx->pc = 0x45FDDCu;
            goto label_45fddc;
        }
    }
    ctx->pc = 0x45FDC8u;
label_45fdc8:
    // 0x45fdc8: 0xc1180fc  jal         func_4603F0
label_45fdcc:
    if (ctx->pc == 0x45FDCCu) {
        ctx->pc = 0x45FDD0u;
        goto label_45fdd0;
    }
    ctx->pc = 0x45FDC8u;
    SET_GPR_U32(ctx, 31, 0x45FDD0u);
    ctx->pc = 0x4603F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4603F0u, 0x45FDC8u, 0x45FDD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45FDD0u;
label_45fdd0:
    // 0x45fdd0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x45fdd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_45fdd4:
    // 0x45fdd4: 0x100000d8  b           . + 4 + (0xD8 << 2)
label_45fdd8:
    if (ctx->pc == 0x45FDD8u) {
        ctx->pc = 0x45FDDCu;
        goto label_45fddc;
    }
    ctx->pc = 0x45FDD4u;
    {
        const bool branch_taken_0x45fdd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45fdd4) {
            ctx->pc = 0x460138u;
            goto label_460138;
        }
    }
    ctx->pc = 0x45FDDCu;
label_45fddc:
    // 0x45fddc: 0x8f82b18c  lw          $v0, -0x4E74($gp)
    ctx->pc = 0x45fddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947212)));
label_45fde0:
    // 0x45fde0: 0x401027  not         $v0, $v0
    ctx->pc = 0x45fde0u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 2) | GPR_U64(ctx, 0)));
label_45fde4:
    // 0x45fde4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x45fde4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_45fde8:
    // 0x45fde8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x45fde8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_45fdec:
    // 0x45fdec: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_45fdf0:
    if (ctx->pc == 0x45FDF0u) {
        ctx->pc = 0x45FDF4u;
        goto label_45fdf4;
    }
    ctx->pc = 0x45FDECu;
    {
        const bool branch_taken_0x45fdec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x45fdec) {
            ctx->pc = 0x45FE9Cu;
            goto label_45fe9c;
        }
    }
    ctx->pc = 0x45FDF4u;
label_45fdf4:
    // 0x45fdf4: 0x8f82b1c4  lw          $v0, -0x4E3C($gp)
    ctx->pc = 0x45fdf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947268)));
label_45fdf8:
    // 0x45fdf8: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_45fdfc:
    if (ctx->pc == 0x45FDFCu) {
        ctx->pc = 0x45FE00u;
        goto label_45fe00;
    }
    ctx->pc = 0x45FDF8u;
    {
        const bool branch_taken_0x45fdf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45fdf8) {
            ctx->pc = 0x45FE9Cu;
            goto label_45fe9c;
        }
    }
    ctx->pc = 0x45FE00u;
label_45fe00:
    // 0x45fe00: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x45fe00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_45fe04:
    // 0x45fe04: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x45fe04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_45fe08:
    // 0x45fe08: 0x27a60288  addiu       $a2, $sp, 0x288
    ctx->pc = 0x45fe08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 648));
label_45fe0c:
    // 0x45fe0c: 0xc115ee8  jal         func_457BA0
label_45fe10:
    if (ctx->pc == 0x45FE10u) {
        ctx->pc = 0x45FE14u;
        goto label_45fe14;
    }
    ctx->pc = 0x45FE0Cu;
    SET_GPR_U32(ctx, 31, 0x45FE14u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x45FE0Cu, 0x45FE14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45FE14u;
label_45fe14:
    // 0x45fe14: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_45fe18:
    if (ctx->pc == 0x45FE18u) {
        ctx->pc = 0x45FE1Cu;
        goto label_45fe1c;
    }
    ctx->pc = 0x45FE14u;
    {
        const bool branch_taken_0x45fe14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45fe14) {
            ctx->pc = 0x45FE9Cu;
            goto label_45fe9c;
        }
    }
    ctx->pc = 0x45FE1Cu;
label_45fe1c:
    // 0x45fe1c: 0x8fa20290  lw          $v0, 0x290($sp)
    ctx->pc = 0x45fe1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
label_45fe20:
    // 0x45fe20: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_45fe24:
    if (ctx->pc == 0x45FE24u) {
        ctx->pc = 0x45FE28u;
        goto label_45fe28;
    }
    ctx->pc = 0x45FE20u;
    {
        const bool branch_taken_0x45fe20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45fe20) {
            ctx->pc = 0x45FE9Cu;
            goto label_45fe9c;
        }
    }
    ctx->pc = 0x45FE28u;
label_45fe28:
    // 0x45fe28: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x45fe28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_45fe2c:
    // 0x45fe2c: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x45fe2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_45fe30:
    // 0x45fe30: 0x8fa6028c  lw          $a2, 0x28C($sp)
    ctx->pc = 0x45fe30u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 652)));
label_45fe34:
    // 0x45fe34: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x45fe34u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_45fe38:
    // 0x45fe38: 0x24e7ed20  addiu       $a3, $a3, -0x12E0
    ctx->pc = 0x45fe38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294962464));
label_45fe3c:
    // 0x45fe3c: 0x24080476  addiu       $t0, $zero, 0x476
    ctx->pc = 0x45fe3cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1142));
label_45fe40:
    // 0x45fe40: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x45fe40u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_45fe44:
    // 0x45fe44: 0x2529ee90  addiu       $t1, $t1, -0x1170
    ctx->pc = 0x45fe44u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294962832));
label_45fe48:
    // 0x45fe48: 0xc113940  jal         func_44E500
label_45fe4c:
    if (ctx->pc == 0x45FE4Cu) {
        ctx->pc = 0x45FE50u;
        goto label_45fe50;
    }
    ctx->pc = 0x45FE48u;
    SET_GPR_U32(ctx, 31, 0x45FE50u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x45FE48u, 0x45FE50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45FE50u;
label_45fe50:
    // 0x45fe50: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x45fe50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_45fe54:
    // 0x45fe54: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x45fe54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_45fe58:
    // 0x45fe58: 0x24a5eeb8  addiu       $a1, $a1, -0x1148
    ctx->pc = 0x45fe58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962872));
label_45fe5c:
    // 0x45fe5c: 0xc115c24  jal         func_457090
label_45fe60:
    if (ctx->pc == 0x45FE60u) {
        ctx->pc = 0x45FE64u;
        goto label_45fe64;
    }
    ctx->pc = 0x45FE5Cu;
    SET_GPR_U32(ctx, 31, 0x45FE64u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x45FE5Cu, 0x45FE64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45FE64u;
label_45fe64:
    // 0x45fe64: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x45fe64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_45fe68:
    // 0x45fe68: 0x8fa20290  lw          $v0, 0x290($sp)
    ctx->pc = 0x45fe68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
label_45fe6c:
    // 0x45fe6c: 0x40f809  jalr        $v0
label_45fe70:
    if (ctx->pc == 0x45FE70u) {
        ctx->pc = 0x45FE74u;
        goto label_45fe74;
    }
    ctx->pc = 0x45FE6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x45FE74u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45FE6Cu, 0x45FE74u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x45FE74u;
label_45fe74:
    // 0x45fe74: 0xaf82b1c4  sw          $v0, -0x4E3C($gp)
    ctx->pc = 0x45fe74u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947268), GPR_U32(ctx, 2));
label_45fe78:
    // 0x45fe78: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x45fe78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_45fe7c:
    // 0x45fe7c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_45fe80:
    if (ctx->pc == 0x45FE80u) {
        ctx->pc = 0x45FE84u;
        goto label_45fe84;
    }
    ctx->pc = 0x45FE7Cu;
    {
        const bool branch_taken_0x45fe7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45fe7c) {
            ctx->pc = 0x45FE8Cu;
            goto label_45fe8c;
        }
    }
    ctx->pc = 0x45FE84u;
label_45fe84:
    // 0x45fe84: 0xd  break       0
    ctx->pc = 0x45fe84u;
    runtime->handleBreak(rdram, ctx);
label_45fe88:
    // 0x45fe88: 0x0  nop
    ctx->pc = 0x45fe88u;
    // NOP
label_45fe8c:
    // 0x45fe8c: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x45fe8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_45fe90:
    // 0x45fe90: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x45fe90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_45fe94:
    // 0x45fe94: 0xc11392c  jal         func_44E4B0
label_45fe98:
    if (ctx->pc == 0x45FE98u) {
        ctx->pc = 0x45FE9Cu;
        goto label_45fe9c;
    }
    ctx->pc = 0x45FE94u;
    SET_GPR_U32(ctx, 31, 0x45FE9Cu);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x45FE94u, 0x45FE9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45FE9Cu;
label_45fe9c:
    // 0x45fe9c: 0x8f82b18c  lw          $v0, -0x4E74($gp)
    ctx->pc = 0x45fe9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947212)));
label_45fea0:
    // 0x45fea0: 0xaf82bfa8  sw          $v0, -0x4058($gp)
    ctx->pc = 0x45fea0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950824), GPR_U32(ctx, 2));
label_45fea4:
    // 0x45fea4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x45fea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_45fea8:
    // 0x45fea8: 0xaf82b18c  sw          $v0, -0x4E74($gp)
    ctx->pc = 0x45fea8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947212), GPR_U32(ctx, 2));
label_45feac:
    // 0x45feac: 0x10000099  b           . + 4 + (0x99 << 2)
label_45feb0:
    if (ctx->pc == 0x45FEB0u) {
        ctx->pc = 0x45FEB4u;
        goto label_45feb4;
    }
    ctx->pc = 0x45FEACu;
    {
        const bool branch_taken_0x45feac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45feac) {
            ctx->pc = 0x460114u;
            goto label_460114;
        }
    }
    ctx->pc = 0x45FEB4u;
label_45feb4:
    // 0x45feb4: 0x8f83b18c  lw          $v1, -0x4E74($gp)
    ctx->pc = 0x45feb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947212)));
label_45feb8:
    // 0x45feb8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x45feb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_45febc:
    // 0x45febc: 0x14620095  bne         $v1, $v0, . + 4 + (0x95 << 2)
label_45fec0:
    if (ctx->pc == 0x45FEC0u) {
        ctx->pc = 0x45FEC4u;
        goto label_45fec4;
    }
    ctx->pc = 0x45FEBCu;
    {
        const bool branch_taken_0x45febc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x45febc) {
            ctx->pc = 0x460114u;
            goto label_460114;
        }
    }
    ctx->pc = 0x45FEC4u;
label_45fec4:
    // 0x45fec4: 0x8fa402a0  lw          $a0, 0x2A0($sp)
    ctx->pc = 0x45fec4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
label_45fec8:
    // 0x45fec8: 0x8fa502b0  lw          $a1, 0x2B0($sp)
    ctx->pc = 0x45fec8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 688)));
label_45fecc:
    // 0x45fecc: 0x3c060062  lui         $a2, 0x62
    ctx->pc = 0x45feccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)98 << 16));
label_45fed0:
    // 0x45fed0: 0x24c64dd8  addiu       $a2, $a2, 0x4DD8
    ctx->pc = 0x45fed0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19928));
label_45fed4:
    // 0x45fed4: 0x3c070062  lui         $a3, 0x62
    ctx->pc = 0x45fed4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)98 << 16));
label_45fed8:
    // 0x45fed8: 0x24e74ddc  addiu       $a3, $a3, 0x4DDC
    ctx->pc = 0x45fed8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 19932));
label_45fedc:
    // 0x45fedc: 0x3c080062  lui         $t0, 0x62
    ctx->pc = 0x45fedcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)98 << 16));
label_45fee0:
    // 0x45fee0: 0x25084de0  addiu       $t0, $t0, 0x4DE0
    ctx->pc = 0x45fee0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 19936));
label_45fee4:
    // 0x45fee4: 0xc0c3cd6  jal         func_30F358
label_45fee8:
    if (ctx->pc == 0x45FEE8u) {
        ctx->pc = 0x45FEECu;
        goto label_45feec;
    }
    ctx->pc = 0x45FEE4u;
    SET_GPR_U32(ctx, 31, 0x45FEECu);
    ctx->pc = 0x30F358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30F358u, 0x45FEE4u, 0x45FEECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45FEECu;
label_45feec:
    // 0x45feec: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x45feecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_45fef0:
    // 0x45fef0: 0x10000088  b           . + 4 + (0x88 << 2)
label_45fef4:
    if (ctx->pc == 0x45FEF4u) {
        ctx->pc = 0x45FEF8u;
        goto label_45fef8;
    }
    ctx->pc = 0x45FEF0u;
    {
        const bool branch_taken_0x45fef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45fef0) {
            ctx->pc = 0x460114u;
            goto label_460114;
        }
    }
    ctx->pc = 0x45FEF8u;
label_45fef8:
    // 0x45fef8: 0x8fa4029c  lw          $a0, 0x29C($sp)
    ctx->pc = 0x45fef8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 668)));
label_45fefc:
    // 0x45fefc: 0x8fa50298  lw          $a1, 0x298($sp)
    ctx->pc = 0x45fefcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
label_45ff00:
    // 0x45ff00: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x45ff00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_45ff04:
    // 0x45ff04: 0xc11820c  jal         func_460830
label_45ff08:
    if (ctx->pc == 0x45FF08u) {
        ctx->pc = 0x45FF0Cu;
        goto label_45ff0c;
    }
    ctx->pc = 0x45FF04u;
    SET_GPR_U32(ctx, 31, 0x45FF0Cu);
    ctx->pc = 0x460830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x460830u, 0x45FF04u, 0x45FF0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45FF0Cu;
label_45ff0c:
    // 0x45ff0c: 0x10000081  b           . + 4 + (0x81 << 2)
label_45ff10:
    if (ctx->pc == 0x45FF10u) {
        ctx->pc = 0x45FF14u;
        goto label_45ff14;
    }
    ctx->pc = 0x45FF0Cu;
    {
        const bool branch_taken_0x45ff0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45ff0c) {
            ctx->pc = 0x460114u;
            goto label_460114;
        }
    }
    ctx->pc = 0x45FF14u;
label_45ff14:
    // 0x45ff14: 0x8fa4029c  lw          $a0, 0x29C($sp)
    ctx->pc = 0x45ff14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 668)));
label_45ff18:
    // 0x45ff18: 0x8fa50298  lw          $a1, 0x298($sp)
    ctx->pc = 0x45ff18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
label_45ff1c:
    // 0x45ff1c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x45ff1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_45ff20:
    // 0x45ff20: 0xc1182ac  jal         func_460AB0
label_45ff24:
    if (ctx->pc == 0x45FF24u) {
        ctx->pc = 0x45FF28u;
        goto label_45ff28;
    }
    ctx->pc = 0x45FF20u;
    SET_GPR_U32(ctx, 31, 0x45FF28u);
    ctx->pc = 0x460AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x460AB0u, 0x45FF20u, 0x45FF28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45FF28u;
label_45ff28:
    // 0x45ff28: 0x1000007a  b           . + 4 + (0x7A << 2)
label_45ff2c:
    if (ctx->pc == 0x45FF2Cu) {
        ctx->pc = 0x45FF30u;
        goto label_45ff30;
    }
    ctx->pc = 0x45FF28u;
    {
        const bool branch_taken_0x45ff28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45ff28) {
            ctx->pc = 0x460114u;
            goto label_460114;
        }
    }
    ctx->pc = 0x45FF30u;
label_45ff30:
    // 0x45ff30: 0x8fa4029c  lw          $a0, 0x29C($sp)
    ctx->pc = 0x45ff30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 668)));
label_45ff34:
    // 0x45ff34: 0x8fa50298  lw          $a1, 0x298($sp)
    ctx->pc = 0x45ff34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
label_45ff38:
    // 0x45ff38: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x45ff38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_45ff3c:
    // 0x45ff3c: 0xc118344  jal         func_460D10
label_45ff40:
    if (ctx->pc == 0x45FF40u) {
        ctx->pc = 0x45FF44u;
        goto label_45ff44;
    }
    ctx->pc = 0x45FF3Cu;
    SET_GPR_U32(ctx, 31, 0x45FF44u);
    ctx->pc = 0x460D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x460D10u, 0x45FF3Cu, 0x45FF44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45FF44u;
label_45ff44:
    // 0x45ff44: 0x10000073  b           . + 4 + (0x73 << 2)
label_45ff48:
    if (ctx->pc == 0x45FF48u) {
        ctx->pc = 0x45FF4Cu;
        goto label_45ff4c;
    }
    ctx->pc = 0x45FF44u;
    {
        const bool branch_taken_0x45ff44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45ff44) {
            ctx->pc = 0x460114u;
            goto label_460114;
        }
    }
    ctx->pc = 0x45FF4Cu;
label_45ff4c:
    // 0x45ff4c: 0x8fa4029c  lw          $a0, 0x29C($sp)
    ctx->pc = 0x45ff4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 668)));
label_45ff50:
    // 0x45ff50: 0x8fa50298  lw          $a1, 0x298($sp)
    ctx->pc = 0x45ff50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
label_45ff54:
    // 0x45ff54: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x45ff54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_45ff58:
    // 0x45ff58: 0x3c070062  lui         $a3, 0x62
    ctx->pc = 0x45ff58u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)98 << 16));
label_45ff5c:
    // 0x45ff5c: 0x24e74e9c  addiu       $a3, $a3, 0x4E9C
    ctx->pc = 0x45ff5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 20124));
label_45ff60:
    // 0x45ff60: 0xc1187f0  jal         func_461FC0
label_45ff64:
    if (ctx->pc == 0x45FF64u) {
        ctx->pc = 0x45FF68u;
        goto label_45ff68;
    }
    ctx->pc = 0x45FF60u;
    SET_GPR_U32(ctx, 31, 0x45FF68u);
    ctx->pc = 0x461FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x461FC0u, 0x45FF60u, 0x45FF68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45FF68u;
label_45ff68:
    // 0x45ff68: 0x1000006a  b           . + 4 + (0x6A << 2)
label_45ff6c:
    if (ctx->pc == 0x45FF6Cu) {
        ctx->pc = 0x45FF70u;
        goto label_45ff70;
    }
    ctx->pc = 0x45FF68u;
    {
        const bool branch_taken_0x45ff68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45ff68) {
            ctx->pc = 0x460114u;
            goto label_460114;
        }
    }
    ctx->pc = 0x45FF70u;
label_45ff70:
    // 0x45ff70: 0x8fa4029c  lw          $a0, 0x29C($sp)
    ctx->pc = 0x45ff70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 668)));
label_45ff74:
    // 0x45ff74: 0x8fa50298  lw          $a1, 0x298($sp)
    ctx->pc = 0x45ff74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
label_45ff78:
    // 0x45ff78: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x45ff78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_45ff7c:
    // 0x45ff7c: 0xc1183dc  jal         func_460F70
label_45ff80:
    if (ctx->pc == 0x45FF80u) {
        ctx->pc = 0x45FF84u;
        goto label_45ff84;
    }
    ctx->pc = 0x45FF7Cu;
    SET_GPR_U32(ctx, 31, 0x45FF84u);
    ctx->pc = 0x460F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x460F70u, 0x45FF7Cu, 0x45FF84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45FF84u;
label_45ff84:
    // 0x45ff84: 0x10000063  b           . + 4 + (0x63 << 2)
label_45ff88:
    if (ctx->pc == 0x45FF88u) {
        ctx->pc = 0x45FF8Cu;
        goto label_45ff8c;
    }
    ctx->pc = 0x45FF84u;
    {
        const bool branch_taken_0x45ff84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45ff84) {
            ctx->pc = 0x460114u;
            goto label_460114;
        }
    }
    ctx->pc = 0x45FF8Cu;
label_45ff8c:
    // 0x45ff8c: 0x8fa4029c  lw          $a0, 0x29C($sp)
    ctx->pc = 0x45ff8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 668)));
label_45ff90:
    // 0x45ff90: 0x8fa50298  lw          $a1, 0x298($sp)
    ctx->pc = 0x45ff90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
label_45ff94:
    // 0x45ff94: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x45ff94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_45ff98:
    // 0x45ff98: 0xc11855c  jal         func_461570
label_45ff9c:
    if (ctx->pc == 0x45FF9Cu) {
        ctx->pc = 0x45FFA0u;
        goto label_45ffa0;
    }
    ctx->pc = 0x45FF98u;
    SET_GPR_U32(ctx, 31, 0x45FFA0u);
    ctx->pc = 0x461570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x461570u, 0x45FF98u, 0x45FFA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45FFA0u;
label_45ffa0:
    // 0x45ffa0: 0x1000005c  b           . + 4 + (0x5C << 2)
label_45ffa4:
    if (ctx->pc == 0x45FFA4u) {
        ctx->pc = 0x45FFA8u;
        goto label_45ffa8;
    }
    ctx->pc = 0x45FFA0u;
    {
        const bool branch_taken_0x45ffa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45ffa0) {
            ctx->pc = 0x460114u;
            goto label_460114;
        }
    }
    ctx->pc = 0x45FFA8u;
label_45ffa8:
    // 0x45ffa8: 0x8fa4029c  lw          $a0, 0x29C($sp)
    ctx->pc = 0x45ffa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 668)));
label_45ffac:
    // 0x45ffac: 0x8fa50298  lw          $a1, 0x298($sp)
    ctx->pc = 0x45ffacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
label_45ffb0:
    // 0x45ffb0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x45ffb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_45ffb4:
    // 0x45ffb4: 0xc1185fc  jal         func_4617F0
label_45ffb8:
    if (ctx->pc == 0x45FFB8u) {
        ctx->pc = 0x45FFBCu;
        goto label_45ffbc;
    }
    ctx->pc = 0x45FFB4u;
    SET_GPR_U32(ctx, 31, 0x45FFBCu);
    ctx->pc = 0x4617F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4617F0u, 0x45FFB4u, 0x45FFBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45FFBCu;
label_45ffbc:
    // 0x45ffbc: 0x10000055  b           . + 4 + (0x55 << 2)
label_45ffc0:
    if (ctx->pc == 0x45FFC0u) {
        ctx->pc = 0x45FFC4u;
        goto label_45ffc4;
    }
    ctx->pc = 0x45FFBCu;
    {
        const bool branch_taken_0x45ffbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45ffbc) {
            ctx->pc = 0x460114u;
            goto label_460114;
        }
    }
    ctx->pc = 0x45FFC4u;
label_45ffc4:
    // 0x45ffc4: 0x8fa4029c  lw          $a0, 0x29C($sp)
    ctx->pc = 0x45ffc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 668)));
label_45ffc8:
    // 0x45ffc8: 0x8fa50298  lw          $a1, 0x298($sp)
    ctx->pc = 0x45ffc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
label_45ffcc:
    // 0x45ffcc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x45ffccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_45ffd0:
    // 0x45ffd0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x45ffd0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_45ffd4:
    // 0x45ffd4: 0xc1187f0  jal         func_461FC0
label_45ffd8:
    if (ctx->pc == 0x45FFD8u) {
        ctx->pc = 0x45FFDCu;
        goto label_45ffdc;
    }
    ctx->pc = 0x45FFD4u;
    SET_GPR_U32(ctx, 31, 0x45FFDCu);
    ctx->pc = 0x461FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x461FC0u, 0x45FFD4u, 0x45FFDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45FFDCu;
label_45ffdc:
    // 0x45ffdc: 0x1000004d  b           . + 4 + (0x4D << 2)
label_45ffe0:
    if (ctx->pc == 0x45FFE0u) {
        ctx->pc = 0x45FFE4u;
        goto label_45ffe4;
    }
    ctx->pc = 0x45FFDCu;
    {
        const bool branch_taken_0x45ffdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45ffdc) {
            ctx->pc = 0x460114u;
            goto label_460114;
        }
    }
    ctx->pc = 0x45FFE4u;
label_45ffe4:
    // 0x45ffe4: 0x8fa4029c  lw          $a0, 0x29C($sp)
    ctx->pc = 0x45ffe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 668)));
label_45ffe8:
    // 0x45ffe8: 0x8fa50298  lw          $a1, 0x298($sp)
    ctx->pc = 0x45ffe8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
label_45ffec:
    // 0x45ffec: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x45ffecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_45fff0:
    // 0x45fff0: 0xc1186d0  jal         func_461B40
label_45fff4:
    if (ctx->pc == 0x45FFF4u) {
        ctx->pc = 0x45FFF8u;
        goto label_45fff8;
    }
    ctx->pc = 0x45FFF0u;
    SET_GPR_U32(ctx, 31, 0x45FFF8u);
    ctx->pc = 0x461B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x461B40u, 0x45FFF0u, 0x45FFF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45FFF8u;
label_45fff8:
    // 0x45fff8: 0x10000046  b           . + 4 + (0x46 << 2)
label_45fffc:
    if (ctx->pc == 0x45FFFCu) {
        ctx->pc = 0x460000u;
        goto label_460000;
    }
    ctx->pc = 0x45FFF8u;
    {
        const bool branch_taken_0x45fff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45fff8) {
            ctx->pc = 0x460114u;
            goto label_460114;
        }
    }
    ctx->pc = 0x460000u;
label_460000:
    // 0x460000: 0x8fa4029c  lw          $a0, 0x29C($sp)
    ctx->pc = 0x460000u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 668)));
label_460004:
    // 0x460004: 0x8fa50298  lw          $a1, 0x298($sp)
    ctx->pc = 0x460004u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
label_460008:
    // 0x460008: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x460008u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_46000c:
    // 0x46000c: 0xc1189d8  jal         func_462760
label_460010:
    if (ctx->pc == 0x460010u) {
        ctx->pc = 0x460014u;
        goto label_460014;
    }
    ctx->pc = 0x46000Cu;
    SET_GPR_U32(ctx, 31, 0x460014u);
    ctx->pc = 0x462760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x462760u, 0x46000Cu, 0x460014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x460014u;
label_460014:
    // 0x460014: 0x1000003f  b           . + 4 + (0x3F << 2)
label_460018:
    if (ctx->pc == 0x460018u) {
        ctx->pc = 0x46001Cu;
        goto label_46001c;
    }
    ctx->pc = 0x460014u;
    {
        const bool branch_taken_0x460014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x460014) {
            ctx->pc = 0x460114u;
            goto label_460114;
        }
    }
    ctx->pc = 0x46001Cu;
label_46001c:
    // 0x46001c: 0x8fa4029c  lw          $a0, 0x29C($sp)
    ctx->pc = 0x46001cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 668)));
label_460020:
    // 0x460020: 0x8fa50298  lw          $a1, 0x298($sp)
    ctx->pc = 0x460020u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
label_460024:
    // 0x460024: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x460024u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_460028:
    // 0x460028: 0xc118f48  jal         func_463D20
label_46002c:
    if (ctx->pc == 0x46002Cu) {
        ctx->pc = 0x460030u;
        goto label_460030;
    }
    ctx->pc = 0x460028u;
    SET_GPR_U32(ctx, 31, 0x460030u);
    ctx->pc = 0x463D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x463D20u, 0x460028u, 0x460030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x460030u;
label_460030:
    // 0x460030: 0x10000038  b           . + 4 + (0x38 << 2)
label_460034:
    if (ctx->pc == 0x460034u) {
        ctx->pc = 0x460038u;
        goto label_460038;
    }
    ctx->pc = 0x460030u;
    {
        const bool branch_taken_0x460030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x460030) {
            ctx->pc = 0x460114u;
            goto label_460114;
        }
    }
    ctx->pc = 0x460038u;
label_460038:
    // 0x460038: 0x8fa4029c  lw          $a0, 0x29C($sp)
    ctx->pc = 0x460038u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 668)));
label_46003c:
    // 0x46003c: 0x8fa50298  lw          $a1, 0x298($sp)
    ctx->pc = 0x46003cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
label_460040:
    // 0x460040: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x460040u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_460044:
    // 0x460044: 0xc118e98  jal         func_463A60
label_460048:
    if (ctx->pc == 0x460048u) {
        ctx->pc = 0x46004Cu;
        goto label_46004c;
    }
    ctx->pc = 0x460044u;
    SET_GPR_U32(ctx, 31, 0x46004Cu);
    ctx->pc = 0x463A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x463A60u, 0x460044u, 0x46004Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46004Cu;
label_46004c:
    // 0x46004c: 0x10000031  b           . + 4 + (0x31 << 2)
label_460050:
    if (ctx->pc == 0x460050u) {
        ctx->pc = 0x460054u;
        goto label_460054;
    }
    ctx->pc = 0x46004Cu;
    {
        const bool branch_taken_0x46004c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x46004c) {
            ctx->pc = 0x460114u;
            goto label_460114;
        }
    }
    ctx->pc = 0x460054u;
label_460054:
    // 0x460054: 0x8fa4029c  lw          $a0, 0x29C($sp)
    ctx->pc = 0x460054u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 668)));
label_460058:
    // 0x460058: 0x8fa50298  lw          $a1, 0x298($sp)
    ctx->pc = 0x460058u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
label_46005c:
    // 0x46005c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x46005cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_460060:
    // 0x460060: 0xc118b88  jal         func_462E20
label_460064:
    if (ctx->pc == 0x460064u) {
        ctx->pc = 0x460068u;
        goto label_460068;
    }
    ctx->pc = 0x460060u;
    SET_GPR_U32(ctx, 31, 0x460068u);
    ctx->pc = 0x462E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x462E20u, 0x460060u, 0x460068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x460068u;
label_460068:
    // 0x460068: 0x1000002a  b           . + 4 + (0x2A << 2)
label_46006c:
    if (ctx->pc == 0x46006Cu) {
        ctx->pc = 0x460070u;
        goto label_460070;
    }
    ctx->pc = 0x460068u;
    {
        const bool branch_taken_0x460068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x460068) {
            ctx->pc = 0x460114u;
            goto label_460114;
        }
    }
    ctx->pc = 0x460070u;
label_460070:
    // 0x460070: 0x8f82b1c8  lw          $v0, -0x4E38($gp)
    ctx->pc = 0x460070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947272)));
label_460074:
    // 0x460074: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_460078:
    if (ctx->pc == 0x460078u) {
        ctx->pc = 0x46007Cu;
        goto label_46007c;
    }
    ctx->pc = 0x460074u;
    {
        const bool branch_taken_0x460074 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x460074) {
            ctx->pc = 0x460114u;
            goto label_460114;
        }
    }
    ctx->pc = 0x46007Cu;
label_46007c:
    // 0x46007c: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x46007cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_460080:
    // 0x460080: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x460080u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_460084:
    // 0x460084: 0x27a60278  addiu       $a2, $sp, 0x278
    ctx->pc = 0x460084u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 632));
label_460088:
    // 0x460088: 0xc115ee8  jal         func_457BA0
label_46008c:
    if (ctx->pc == 0x46008Cu) {
        ctx->pc = 0x460090u;
        goto label_460090;
    }
    ctx->pc = 0x460088u;
    SET_GPR_U32(ctx, 31, 0x460090u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x460088u, 0x460090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x460090u;
label_460090:
    // 0x460090: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_460094:
    if (ctx->pc == 0x460094u) {
        ctx->pc = 0x460098u;
        goto label_460098;
    }
    ctx->pc = 0x460090u;
    {
        const bool branch_taken_0x460090 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x460090) {
            ctx->pc = 0x460114u;
            goto label_460114;
        }
    }
    ctx->pc = 0x460098u;
label_460098:
    // 0x460098: 0x8fa20280  lw          $v0, 0x280($sp)
    ctx->pc = 0x460098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_46009c:
    // 0x46009c: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_4600a0:
    if (ctx->pc == 0x4600A0u) {
        ctx->pc = 0x4600A4u;
        goto label_4600a4;
    }
    ctx->pc = 0x46009Cu;
    {
        const bool branch_taken_0x46009c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x46009c) {
            ctx->pc = 0x460114u;
            goto label_460114;
        }
    }
    ctx->pc = 0x4600A4u;
label_4600a4:
    // 0x4600a4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x4600a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_4600a8:
    // 0x4600a8: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x4600a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_4600ac:
    // 0x4600ac: 0x8fa6027c  lw          $a2, 0x27C($sp)
    ctx->pc = 0x4600acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 636)));
label_4600b0:
    // 0x4600b0: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x4600b0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_4600b4:
    // 0x4600b4: 0x24e7ed20  addiu       $a3, $a3, -0x12E0
    ctx->pc = 0x4600b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294962464));
label_4600b8:
    // 0x4600b8: 0x240804c0  addiu       $t0, $zero, 0x4C0
    ctx->pc = 0x4600b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1216));
label_4600bc:
    // 0x4600bc: 0x2789b1cc  addiu       $t1, $gp, -0x4E34
    ctx->pc = 0x4600bcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 28), 4294947276));
label_4600c0:
    // 0x4600c0: 0xc113940  jal         func_44E500
label_4600c4:
    if (ctx->pc == 0x4600C4u) {
        ctx->pc = 0x4600C8u;
        goto label_4600c8;
    }
    ctx->pc = 0x4600C0u;
    SET_GPR_U32(ctx, 31, 0x4600C8u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x4600C0u, 0x4600C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4600C8u;
label_4600c8:
    // 0x4600c8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x4600c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_4600cc:
    // 0x4600cc: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x4600ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_4600d0:
    // 0x4600d0: 0x24a5eed0  addiu       $a1, $a1, -0x1130
    ctx->pc = 0x4600d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962896));
label_4600d4:
    // 0x4600d4: 0xc115c24  jal         func_457090
label_4600d8:
    if (ctx->pc == 0x4600D8u) {
        ctx->pc = 0x4600DCu;
        goto label_4600dc;
    }
    ctx->pc = 0x4600D4u;
    SET_GPR_U32(ctx, 31, 0x4600DCu);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x4600D4u, 0x4600DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4600DCu;
label_4600dc:
    // 0x4600dc: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x4600dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_4600e0:
    // 0x4600e0: 0x8fa20280  lw          $v0, 0x280($sp)
    ctx->pc = 0x4600e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
label_4600e4:
    // 0x4600e4: 0x40f809  jalr        $v0
label_4600e8:
    if (ctx->pc == 0x4600E8u) {
        ctx->pc = 0x4600ECu;
        goto label_4600ec;
    }
    ctx->pc = 0x4600E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4600ECu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4600E4u, 0x4600ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4600ECu;
label_4600ec:
    // 0x4600ec: 0xaf82b1c8  sw          $v0, -0x4E38($gp)
    ctx->pc = 0x4600ecu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947272), GPR_U32(ctx, 2));
label_4600f0:
    // 0x4600f0: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x4600f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_4600f4:
    // 0x4600f4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_4600f8:
    if (ctx->pc == 0x4600F8u) {
        ctx->pc = 0x4600FCu;
        goto label_4600fc;
    }
    ctx->pc = 0x4600F4u;
    {
        const bool branch_taken_0x4600f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4600f4) {
            ctx->pc = 0x460104u;
            goto label_460104;
        }
    }
    ctx->pc = 0x4600FCu;
label_4600fc:
    // 0x4600fc: 0xd  break       0
    ctx->pc = 0x4600fcu;
    runtime->handleBreak(rdram, ctx);
label_460100:
    // 0x460100: 0x0  nop
    ctx->pc = 0x460100u;
    // NOP
label_460104:
    // 0x460104: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x460104u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_460108:
    // 0x460108: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x460108u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_46010c:
    // 0x46010c: 0xc11392c  jal         func_44E4B0
label_460110:
    if (ctx->pc == 0x460110u) {
        ctx->pc = 0x460114u;
        goto label_460114;
    }
    ctx->pc = 0x46010Cu;
    SET_GPR_U32(ctx, 31, 0x460114u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x46010Cu, 0x460114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x460114u;
label_460114:
    // 0x460114: 0x8fa202c0  lw          $v0, 0x2C0($sp)
    ctx->pc = 0x460114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
label_460118:
    // 0x460118: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_46011c:
    if (ctx->pc == 0x46011Cu) {
        ctx->pc = 0x460120u;
        goto label_460120;
    }
    ctx->pc = 0x460118u;
    {
        const bool branch_taken_0x460118 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x460118) {
            ctx->pc = 0x460134u;
            goto label_460134;
        }
    }
    ctx->pc = 0x460120u;
label_460120:
    // 0x460120: 0x8fa402c0  lw          $a0, 0x2C0($sp)
    ctx->pc = 0x460120u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 704)));
label_460124:
    // 0x460124: 0x3c050062  lui         $a1, 0x62
    ctx->pc = 0x460124u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)98 << 16));
label_460128:
    // 0x460128: 0x24a54dd8  addiu       $a1, $a1, 0x4DD8
    ctx->pc = 0x460128u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19928));
label_46012c:
    // 0x46012c: 0xc117bf0  jal         func_45EFC0
label_460130:
    if (ctx->pc == 0x460130u) {
        ctx->pc = 0x460134u;
        goto label_460134;
    }
    ctx->pc = 0x46012Cu;
    SET_GPR_U32(ctx, 31, 0x460134u);
    ctx->pc = 0x45EFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45EFC0u, 0x46012Cu, 0x460134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x460134u;
label_460134:
    // 0x460134: 0x8f82bfa8  lw          $v0, -0x4058($gp)
    ctx->pc = 0x460134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950824)));
label_460138:
    // 0x460138: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x460138u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_46013c:
    // 0x46013c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x46013cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_460140:
    // 0x460140: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x460140u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_460144:
    // 0x460144: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x460144u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_460148:
    // 0x460148: 0x27bd02d0  addiu       $sp, $sp, 0x2D0
    ctx->pc = 0x460148u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
label_46014c:
    // 0x46014c: 0x3e00008  jr          $ra
label_460150:
    if (ctx->pc == 0x460150u) {
        ctx->pc = 0x460154u;
        goto label_460154;
    }
    ctx->pc = 0x46014Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46014Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x460154u;
label_460154:
    // 0x460154: 0x0  nop
    ctx->pc = 0x460154u;
    // NOP
label_460158:
    // 0x460158: 0x0  nop
    ctx->pc = 0x460158u;
    // NOP
label_46015c:
    // 0x46015c: 0x0  nop
    ctx->pc = 0x46015cu;
    // NOP
    ctx->pc = 0x460160u;
}
