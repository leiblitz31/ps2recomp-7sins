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

// Function: sub_00403E08
// Address: 0x403e08 - 0x406e00
void sub_00403E08_0x403e08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00403E08_0x403e08");
#endif

    switch (ctx->pc) {
        case 0x403f68u: goto label_403f68;
        case 0x404070u: goto label_404070;
        case 0x404080u: goto label_404080;
        case 0x4040b8u: goto label_4040b8;
        case 0x4040c8u: goto label_4040c8;
        case 0x4040fcu: goto label_4040fc;
        case 0x40410cu: goto label_40410c;
        case 0x404120u: goto label_404120;
        case 0x404144u: goto label_404144;
        case 0x404154u: goto label_404154;
        case 0x40417cu: goto label_40417c;
        case 0x40418cu: goto label_40418c;
        case 0x4041b4u: goto label_4041b4;
        case 0x4041c4u: goto label_4041c4;
        case 0x4041ecu: goto label_4041ec;
        case 0x4041fcu: goto label_4041fc;
        case 0x404224u: goto label_404224;
        case 0x404234u: goto label_404234;
        case 0x404338u: goto label_404338;
        case 0x404438u: goto label_404438;
        case 0x404544u: goto label_404544;
        case 0x404554u: goto label_404554;
        case 0x404590u: goto label_404590;
        case 0x4045a0u: goto label_4045a0;
        case 0x4045d8u: goto label_4045d8;
        case 0x4045e8u: goto label_4045e8;
        case 0x404600u: goto label_404600;
        case 0x404628u: goto label_404628;
        case 0x404638u: goto label_404638;
        case 0x404664u: goto label_404664;
        case 0x404674u: goto label_404674;
        case 0x4046a0u: goto label_4046a0;
        case 0x4046b0u: goto label_4046b0;
        case 0x4046dcu: goto label_4046dc;
        case 0x4046ecu: goto label_4046ec;
        case 0x404714u: goto label_404714;
        case 0x404724u: goto label_404724;
        case 0x404860u: goto label_404860;
        case 0x404928u: goto label_404928;
        case 0x404a0cu: goto label_404a0c;
        case 0x404a1cu: goto label_404a1c;
        case 0x404a54u: goto label_404a54;
        case 0x404a64u: goto label_404a64;
        case 0x404a98u: goto label_404a98;
        case 0x404aa8u: goto label_404aa8;
        case 0x404ac0u: goto label_404ac0;
        case 0x404ae4u: goto label_404ae4;
        case 0x404af4u: goto label_404af4;
        case 0x404b1cu: goto label_404b1c;
        case 0x404b2cu: goto label_404b2c;
        case 0x404b54u: goto label_404b54;
        case 0x404b64u: goto label_404b64;
        case 0x404b8cu: goto label_404b8c;
        case 0x404b9cu: goto label_404b9c;
        case 0x404bc4u: goto label_404bc4;
        case 0x404bd4u: goto label_404bd4;
        case 0x404d10u: goto label_404d10;
        case 0x404e2cu: goto label_404e2c;
        case 0x404e3cu: goto label_404e3c;
        case 0x404e78u: goto label_404e78;
        case 0x404e88u: goto label_404e88;
        case 0x404ec0u: goto label_404ec0;
        case 0x404ed0u: goto label_404ed0;
        case 0x404ee8u: goto label_404ee8;
        case 0x404f10u: goto label_404f10;
        case 0x404f20u: goto label_404f20;
        case 0x404f4cu: goto label_404f4c;
        case 0x404f5cu: goto label_404f5c;
        case 0x404f88u: goto label_404f88;
        case 0x404f98u: goto label_404f98;
        case 0x404fc4u: goto label_404fc4;
        case 0x404fd4u: goto label_404fd4;
        case 0x404ffcu: goto label_404ffc;
        case 0x40500cu: goto label_40500c;
        case 0x405058u: goto label_405058;
        case 0x405138u: goto label_405138;
        case 0x405148u: goto label_405148;
        case 0x405180u: goto label_405180;
        case 0x405190u: goto label_405190;
        case 0x4051c4u: goto label_4051c4;
        case 0x4051d4u: goto label_4051d4;
        case 0x4051e8u: goto label_4051e8;
        case 0x40520cu: goto label_40520c;
        case 0x40521cu: goto label_40521c;
        case 0x405244u: goto label_405244;
        case 0x405254u: goto label_405254;
        case 0x40527cu: goto label_40527c;
        case 0x40528cu: goto label_40528c;
        case 0x4052b4u: goto label_4052b4;
        case 0x4052c4u: goto label_4052c4;
        case 0x4052ecu: goto label_4052ec;
        case 0x4052fcu: goto label_4052fc;
        case 0x405468u: goto label_405468;
        case 0x4055d8u: goto label_4055d8;
        case 0x405728u: goto label_405728;
        case 0x405738u: goto label_405738;
        case 0x405774u: goto label_405774;
        case 0x405784u: goto label_405784;
        case 0x4057bcu: goto label_4057bc;
        case 0x4057ccu: goto label_4057cc;
        case 0x4057e0u: goto label_4057e0;
        case 0x405808u: goto label_405808;
        case 0x405818u: goto label_405818;
        case 0x405844u: goto label_405844;
        case 0x405854u: goto label_405854;
        case 0x405880u: goto label_405880;
        case 0x405890u: goto label_405890;
        case 0x4058bcu: goto label_4058bc;
        case 0x4058ccu: goto label_4058cc;
        case 0x4058f4u: goto label_4058f4;
        case 0x405904u: goto label_405904;
        case 0x405a88u: goto label_405a88;
        case 0x405c28u: goto label_405c28;
        case 0x405d58u: goto label_405d58;
        case 0x405d68u: goto label_405d68;
        case 0x405da0u: goto label_405da0;
        case 0x405db0u: goto label_405db0;
        case 0x405de4u: goto label_405de4;
        case 0x405df4u: goto label_405df4;
        case 0x405e08u: goto label_405e08;
        case 0x405e2cu: goto label_405e2c;
        case 0x405e3cu: goto label_405e3c;
        case 0x405e64u: goto label_405e64;
        case 0x405e74u: goto label_405e74;
        case 0x405e9cu: goto label_405e9c;
        case 0x405eacu: goto label_405eac;
        case 0x405ed4u: goto label_405ed4;
        case 0x405ee4u: goto label_405ee4;
        case 0x405f0cu: goto label_405f0c;
        case 0x405f1cu: goto label_405f1c;
        case 0x406080u: goto label_406080;
        case 0x4061d0u: goto label_4061d0;
        case 0x40638cu: goto label_40638c;
        case 0x40639cu: goto label_40639c;
        case 0x4063d8u: goto label_4063d8;
        case 0x4063e8u: goto label_4063e8;
        case 0x406420u: goto label_406420;
        case 0x406430u: goto label_406430;
        case 0x406448u: goto label_406448;
        case 0x406470u: goto label_406470;
        case 0x406480u: goto label_406480;
        case 0x4064acu: goto label_4064ac;
        case 0x4064bcu: goto label_4064bc;
        case 0x4064e8u: goto label_4064e8;
        case 0x4064f8u: goto label_4064f8;
        case 0x406524u: goto label_406524;
        case 0x406534u: goto label_406534;
        case 0x40655cu: goto label_40655c;
        case 0x40656cu: goto label_40656c;
        case 0x4066f0u: goto label_4066f0;
        case 0x4068d8u: goto label_4068d8;
        case 0x406ab8u: goto label_406ab8;
        case 0x406ac8u: goto label_406ac8;
        case 0x406b00u: goto label_406b00;
        case 0x406b10u: goto label_406b10;
        case 0x406b44u: goto label_406b44;
        case 0x406b54u: goto label_406b54;
        case 0x406b68u: goto label_406b68;
        case 0x406b8cu: goto label_406b8c;
        case 0x406b9cu: goto label_406b9c;
        case 0x406bc4u: goto label_406bc4;
        case 0x406bd4u: goto label_406bd4;
        case 0x406bfcu: goto label_406bfc;
        case 0x406c0cu: goto label_406c0c;
        case 0x406c34u: goto label_406c34;
        case 0x406c44u: goto label_406c44;
        case 0x406c6cu: goto label_406c6c;
        case 0x406c7cu: goto label_406c7c;
        case 0x406cd0u: goto label_406cd0;
        case 0x406d60u: goto label_406d60;
        default: break;
    }

    ctx->pc = 0x403e08u;

    // 0x403e08: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x403e08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x403e0c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x403e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x403e10: 0x7fb500a0  sq          $s5, 0xA0($sp)
    ctx->pc = 0x403e10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 21));
    // 0x403e14: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x403e14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
    // 0x403e18: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x403e18u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x403e1c: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x403e1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
    // 0x403e20: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x403e20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x403e24: 0x4207a  dsrl        $a0, $a0, 1
    ctx->pc = 0x403e24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> 1);
    // 0x403e28: 0x7fb200d0  sq          $s2, 0xD0($sp)
    ctx->pc = 0x403e28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 18));
    // 0x403e2c: 0x7fb300c0  sq          $s3, 0xC0($sp)
    ctx->pc = 0x403e2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 19));
    // 0x403e30: 0x7fb400b0  sq          $s4, 0xB0($sp)
    ctx->pc = 0x403e30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 20));
    // 0x403e34: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x403e34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
    // 0x403e38: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x403e38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x403e3c: 0x7fbe0070  sq          $fp, 0x70($sp)
    ctx->pc = 0x403e3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 30));
    // 0x403e40: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x403e40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x403e44: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x403e44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x403e48: 0xdca20008  ld          $v0, 0x8($a1)
    ctx->pc = 0x403e48u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x403e4c: 0xffa20028  sd          $v0, 0x28($sp)
    ctx->pc = 0x403e4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 2));
    // 0x403e50: 0x90a20013  lbu         $v0, 0x13($a1)
    ctx->pc = 0x403e50u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 19)));
    // 0x403e54: 0xffa40010  sd          $a0, 0x10($sp)
    ctx->pc = 0x403e54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 4));
    // 0x403e58: 0x92a50209  lbu         $a1, 0x209($s5)
    ctx->pc = 0x403e58u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 521)));
    // 0x403e5c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x403e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x403e60: 0x24450007  addiu       $a1, $v0, 0x7
    ctx->pc = 0x403e60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
    // 0x403e64: 0x92a6029d  lbu         $a2, 0x29D($s5)
    ctx->pc = 0x403e64u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 669)));
    // 0x403e68: 0x2442000e  addiu       $v0, $v0, 0xE
    ctx->pc = 0x403e68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14));
    // 0x403e6c: 0x65182a  slt         $v1, $v1, $a1
    ctx->pc = 0x403e6cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x403e70: 0x8fa90020  lw          $t1, 0x20($sp)
    ctx->pc = 0x403e70u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x403e74: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x403e74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x403e78: 0xa3100b  movn        $v0, $a1, $v1
    ctx->pc = 0x403e78u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x403e7c: 0x210fa  dsrl        $v0, $v0, 3
    ctx->pc = 0x403e7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 3);
    // 0x403e80: 0x31240008  andi        $a0, $t1, 0x8
    ctx->pc = 0x403e80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)8);
    // 0x403e84: 0x8ea701b8  lw          $a3, 0x1B8($s5)
    ctx->pc = 0x403e84u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 440)));
    // 0x403e88: 0xafa70004  sw          $a3, 0x4($sp)
    ctx->pc = 0x403e88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 7));
    // 0x403e8c: 0x8ea801bc  lw          $t0, 0x1BC($s5)
    ctx->pc = 0x403e8cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 444)));
    // 0x403e90: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x403e90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
    // 0x403e94: 0xafa80008  sw          $t0, 0x8($sp)
    ctx->pc = 0x403e94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 8));
    // 0x403e98: 0x108000f3  beqz        $a0, . + 4 + (0xF3 << 2)
    ctx->pc = 0x403E98u;
    {
        const bool branch_taken_0x403e98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x403E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403E98u;
        // 0x403e9c: 0xafa8000c  sw          $t0, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x403e98) {
            ctx->pc = 0x404268u;
            goto label_404268;
        }
    }
    ctx->pc = 0x403EA0u;
    // 0x403ea0: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x403ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x403ea4: 0x112200f0  beq         $t1, $v0, . + 4 + (0xF0 << 2)
    ctx->pc = 0x403EA4u;
    {
        const bool branch_taken_0x403ea4 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 2));
        ctx->pc = 0x403EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403EA4u;
        // 0x403ea8: 0x25020001  addiu       $v0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x403ea4) {
            ctx->pc = 0x404268u;
            goto label_404268;
        }
    }
    ctx->pc = 0x403EACu;
    // 0x403eac: 0xdfa30028  ld          $v1, 0x28($sp)
    ctx->pc = 0x403eacu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x403eb0: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x403eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x403eb4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x403eb4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x403eb8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x403eb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x403ebc: 0x1060004b  beqz        $v1, . + 4 + (0x4B << 2)
    ctx->pc = 0x403EBCu;
    {
        const bool branch_taken_0x403ebc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x403EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403EBCu;
        // 0x403ec0: 0x92a9029c  lbu         $t1, 0x29C($s5) (Delay Slot)
        SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 668)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x403ebc) {
            ctx->pc = 0x403FECu;
            goto label_403fec;
        }
    }
    ctx->pc = 0x403EC4u;
    // 0x403ec4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x403ec4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x403ec8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x403ec8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x403ecc: 0x18600019  blez        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x403ECCu;
    {
        const bool branch_taken_0x403ecc = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x403ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403ECCu;
        // 0x403ed0: 0x30650003  andi        $a1, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x403ecc) {
            ctx->pc = 0x403F34u;
            goto label_403f34;
        }
    }
    ctx->pc = 0x403ED4u;
    // 0x403ed4: 0x10a00023  beqz        $a1, . + 4 + (0x23 << 2)
    ctx->pc = 0x403ED4u;
    {
        const bool branch_taken_0x403ed4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x403ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403ED4u;
        // 0x403ed8: 0x28a20002  slti        $v0, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x403ed4) {
            ctx->pc = 0x403F64u;
            goto label_403f64;
        }
    }
    ctx->pc = 0x403EDCu;
    // 0x403edc: 0x54400016  bnel        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x403EDCu;
    {
        const bool branch_taken_0x403edc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x403edc) {
            ctx->pc = 0x403EE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x403EDCu;
            // 0x403ee0: 0x90c50000  lbu         $a1, 0x0($a2) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x403F38u;
            goto label_403f38;
        }
    }
    ctx->pc = 0x403EE4u;
    // 0x403ee4: 0x28a20003  slti        $v0, $a1, 0x3
    ctx->pc = 0x403ee4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x403ee8: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x403EE8u;
    {
        const bool branch_taken_0x403ee8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x403ee8) {
            ctx->pc = 0x403EECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x403EE8u;
            // 0x403eec: 0x90c50000  lbu         $a1, 0x0($a2) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x403F14u;
            goto label_403f14;
        }
    }
    ctx->pc = 0x403EF0u;
    // 0x403ef0: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x403ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x403ef4: 0x90830001  lbu         $v1, 0x1($a0)
    ctx->pc = 0x403ef4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x403ef8: 0x28620080  slti        $v0, $v1, 0x80
    ctx->pc = 0x403ef8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x403efc: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x403EFCu;
    {
        const bool branch_taken_0x403efc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x403F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403EFCu;
        // 0x403f00: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x403efc) {
            ctx->pc = 0x403F08u;
            goto label_403f08;
        }
    }
    ctx->pc = 0x403F04u;
    // 0x403f04: 0x1032023  subu        $a0, $t0, $v1
    ctx->pc = 0x403f04u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
label_403f08:
    // 0x403f08: 0x64e70001  daddiu      $a3, $a3, 0x1
    ctx->pc = 0x403f08u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 7) + (int64_t)(int32_t)1);
    // 0x403f0c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x403f0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x403f10: 0x90c50000  lbu         $a1, 0x0($a2)
    ctx->pc = 0x403f10u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_403f14:
    // 0x403f14: 0x28a20080  slti        $v0, $a1, 0x80
    ctx->pc = 0x403f14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x403f18: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x403F18u;
    {
        const bool branch_taken_0x403f18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x403F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403F18u;
        // 0x403f1c: 0x1051023  subu        $v0, $t0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x403f18) {
            ctx->pc = 0x403F28u;
            goto label_403f28;
        }
    }
    ctx->pc = 0x403F20u;
    // 0x403f20: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x403F20u;
    {
        const bool branch_taken_0x403f20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x403F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403F20u;
        // 0x403f24: 0xa4202d  daddu       $a0, $a1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x403f20) {
            ctx->pc = 0x403F2Cu;
            goto label_403f2c;
        }
    }
    ctx->pc = 0x403F28u;
label_403f28:
    // 0x403f28: 0x82202d  daddu       $a0, $a0, $v0
    ctx->pc = 0x403f28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 2));
label_403f2c:
    // 0x403f2c: 0x64e70001  daddiu      $a3, $a3, 0x1
    ctx->pc = 0x403f2cu;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 7) + (int64_t)(int32_t)1);
    // 0x403f30: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x403f30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_403f34:
    // 0x403f34: 0x90c50000  lbu         $a1, 0x0($a2)
    ctx->pc = 0x403f34u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_403f38:
    // 0x403f38: 0x28a20080  slti        $v0, $a1, 0x80
    ctx->pc = 0x403f38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x403f3c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x403F3Cu;
    {
        const bool branch_taken_0x403f3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x403F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403F3Cu;
        // 0x403f40: 0x1051023  subu        $v0, $t0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x403f3c) {
            ctx->pc = 0x403F4Cu;
            goto label_403f4c;
        }
    }
    ctx->pc = 0x403F44u;
    // 0x403f44: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x403F44u;
    {
        const bool branch_taken_0x403f44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x403F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403F44u;
        // 0x403f48: 0xa4202d  daddu       $a0, $a1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x403f44) {
            ctx->pc = 0x403F50u;
            goto label_403f50;
        }
    }
    ctx->pc = 0x403F4Cu;
label_403f4c:
    // 0x403f4c: 0x82202d  daddu       $a0, $a0, $v0
    ctx->pc = 0x403f4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 2));
label_403f50:
    // 0x403f50: 0xdfa50028  ld          $a1, 0x28($sp)
    ctx->pc = 0x403f50u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x403f54: 0x64e70001  daddiu      $a3, $a3, 0x1
    ctx->pc = 0x403f54u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 7) + (int64_t)(int32_t)1);
    // 0x403f58: 0xe5102b  sltu        $v0, $a3, $a1
    ctx->pc = 0x403f58u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x403f5c: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x403F5Cu;
    {
        const bool branch_taken_0x403f5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x403F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403F5Cu;
        // 0x403f60: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x403f5c) {
            ctx->pc = 0x403FECu;
            goto label_403fec;
        }
    }
    ctx->pc = 0x403F64u;
label_403f64:
    // 0x403f64: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x403f64u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_403f68:
    // 0x403f68: 0x90650000  lbu         $a1, 0x0($v1)
    ctx->pc = 0x403f68u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x403f6c: 0x28a20080  slti        $v0, $a1, 0x80
    ctx->pc = 0x403f6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x403f70: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x403F70u;
    {
        const bool branch_taken_0x403f70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x403F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403F70u;
        // 0x403f74: 0x1051023  subu        $v0, $t0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x403f70) {
            ctx->pc = 0x403F80u;
            goto label_403f80;
        }
    }
    ctx->pc = 0x403F78u;
    // 0x403f78: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x403F78u;
    {
        const bool branch_taken_0x403f78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x403F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403F78u;
        // 0x403f7c: 0xa4202d  daddu       $a0, $a1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x403f78) {
            ctx->pc = 0x403F84u;
            goto label_403f84;
        }
    }
    ctx->pc = 0x403F80u;
label_403f80:
    // 0x403f80: 0x82202d  daddu       $a0, $a0, $v0
    ctx->pc = 0x403f80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 2));
label_403f84:
    // 0x403f84: 0x90650001  lbu         $a1, 0x1($v1)
    ctx->pc = 0x403f84u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x403f88: 0x28a20080  slti        $v0, $a1, 0x80
    ctx->pc = 0x403f88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x403f8c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x403F8Cu;
    {
        const bool branch_taken_0x403f8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x403F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403F8Cu;
        // 0x403f90: 0x1051023  subu        $v0, $t0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x403f8c) {
            ctx->pc = 0x403F9Cu;
            goto label_403f9c;
        }
    }
    ctx->pc = 0x403F94u;
    // 0x403f94: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x403F94u;
    {
        const bool branch_taken_0x403f94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x403F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403F94u;
        // 0x403f98: 0xa4202d  daddu       $a0, $a1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x403f94) {
            ctx->pc = 0x403FA0u;
            goto label_403fa0;
        }
    }
    ctx->pc = 0x403F9Cu;
label_403f9c:
    // 0x403f9c: 0x82202d  daddu       $a0, $a0, $v0
    ctx->pc = 0x403f9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 2));
label_403fa0:
    // 0x403fa0: 0x90650002  lbu         $a1, 0x2($v1)
    ctx->pc = 0x403fa0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x403fa4: 0x28a20080  slti        $v0, $a1, 0x80
    ctx->pc = 0x403fa4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x403fa8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x403FA8u;
    {
        const bool branch_taken_0x403fa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x403FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403FA8u;
        // 0x403fac: 0x1051023  subu        $v0, $t0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x403fa8) {
            ctx->pc = 0x403FB8u;
            goto label_403fb8;
        }
    }
    ctx->pc = 0x403FB0u;
    // 0x403fb0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x403FB0u;
    {
        const bool branch_taken_0x403fb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x403FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403FB0u;
        // 0x403fb4: 0xa4202d  daddu       $a0, $a1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x403fb0) {
            ctx->pc = 0x403FBCu;
            goto label_403fbc;
        }
    }
    ctx->pc = 0x403FB8u;
label_403fb8:
    // 0x403fb8: 0x82202d  daddu       $a0, $a0, $v0
    ctx->pc = 0x403fb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 2));
label_403fbc:
    // 0x403fbc: 0x90650003  lbu         $a1, 0x3($v1)
    ctx->pc = 0x403fbcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x403fc0: 0x28a20080  slti        $v0, $a1, 0x80
    ctx->pc = 0x403fc0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x403fc4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x403FC4u;
    {
        const bool branch_taken_0x403fc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x403FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403FC4u;
        // 0x403fc8: 0x1051023  subu        $v0, $t0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x403fc4) {
            ctx->pc = 0x403FD4u;
            goto label_403fd4;
        }
    }
    ctx->pc = 0x403FCCu;
    // 0x403fcc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x403FCCu;
    {
        const bool branch_taken_0x403fcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x403FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403FCCu;
        // 0x403fd0: 0xa4202d  daddu       $a0, $a1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x403fcc) {
            ctx->pc = 0x403FD8u;
            goto label_403fd8;
        }
    }
    ctx->pc = 0x403FD4u;
label_403fd4:
    // 0x403fd4: 0x82202d  daddu       $a0, $a0, $v0
    ctx->pc = 0x403fd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 2));
label_403fd8:
    // 0x403fd8: 0xdfa60028  ld          $a2, 0x28($sp)
    ctx->pc = 0x403fd8u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x403fdc: 0x64e70004  daddiu      $a3, $a3, 0x4
    ctx->pc = 0x403fdcu;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 7) + (int64_t)(int32_t)4);
    // 0x403fe0: 0xe6102b  sltu        $v0, $a3, $a2
    ctx->pc = 0x403fe0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x403fe4: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x403FE4u;
    {
        const bool branch_taken_0x403fe4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x403FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403FE4u;
        // 0x403fe8: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x403fe4) {
            ctx->pc = 0x403F68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_403f68;
        }
    }
    ctx->pc = 0x403FECu;
label_403fec:
    // 0x403fec: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x403fecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x403ff0: 0x5522009d  bnel        $t1, $v0, . + 4 + (0x9D << 2)
    ctx->pc = 0x403FF0u;
    {
        const bool branch_taken_0x403ff0 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 2));
        if (branch_taken_0x403ff0) {
            ctx->pc = 0x403FF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x403FF0u;
            // 0x403ff4: 0xffa40010  sd          $a0, 0x10($sp) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x404268u;
            goto label_404268;
        }
    }
    ctx->pc = 0x403FF8u;
    // 0x403ff8: 0x8ea702ac  lw          $a3, 0x2AC($s5)
    ctx->pc = 0x403ff8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 684)));
    // 0x403ffc: 0x41aba  dsrl        $v1, $a0, 10
    ctx->pc = 0x403ffcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) >> 10);
    // 0x404000: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x404000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x404004: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x404004u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x404008: 0x212ba  dsrl        $v0, $v0, 10
    ctx->pc = 0x404008u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 10);
    // 0x40400c: 0x8fa80030  lw          $t0, 0x30($sp)
    ctx->pc = 0x40400cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x404010: 0x629024  and         $s2, $v1, $v0
    ctx->pc = 0x404010u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x404014: 0x3091ffff  andi        $s1, $a0, 0xFFFF
    ctx->pc = 0x404014u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x404018: 0x1100007d  beqz        $t0, . + 4 + (0x7D << 2)
    ctx->pc = 0x404018u;
    {
        const bool branch_taken_0x404018 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x40401Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404018u;
        // 0x40401c: 0xafa70034  sw          $a3, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x404018) {
            ctx->pc = 0x404210u;
            goto label_404210;
        }
    }
    ctx->pc = 0x404020u;
    // 0x404020: 0x8eb702a0  lw          $s7, 0x2A0($s5)
    ctx->pc = 0x404020u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 672)));
    // 0x404024: 0x81023  negu        $v0, $t0
    ctx->pc = 0x404024u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 8)));
    // 0x404028: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x404028u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x40402c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x40402cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x404030: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x404030u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x404034: 0x1060003a  beqz        $v1, . + 4 + (0x3A << 2)
    ctx->pc = 0x404034u;
    {
        const bool branch_taken_0x404034 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x404038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404034u;
        // 0x404038: 0x2e0982d  daddu       $s3, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x404034) {
            ctx->pc = 0x404120u;
            goto label_404120;
        }
    }
    ctx->pc = 0x40403Cu;
    // 0x40403c: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x40403cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x404040: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x404040u;
    {
        const bool branch_taken_0x404040 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x404044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404040u;
        // 0x404044: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x404040) {
            ctx->pc = 0x4040D8u;
            goto label_4040d8;
        }
    }
    ctx->pc = 0x404048u;
    // 0x404048: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x404048u;
    {
        const bool branch_taken_0x404048 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x404048) {
            ctx->pc = 0x40404Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x404048u;
            // 0x40404c: 0x92620000  lbu         $v0, 0x0($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x404098u;
            goto label_404098;
        }
    }
    ctx->pc = 0x404050u;
    // 0x404050: 0x92e20000  lbu         $v0, 0x0($s7)
    ctx->pc = 0x404050u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x404054: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x404054u;
    {
        const bool branch_taken_0x404054 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x404058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404054u;
        // 0x404058: 0x8fa90030  lw          $t1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x404054) {
            ctx->pc = 0x404088u;
            goto label_404088;
        }
    }
    ctx->pc = 0x40405Cu;
    // 0x40405c: 0x8ea502a4  lw          $a1, 0x2A4($s5)
    ctx->pc = 0x40405cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 676)));
    // 0x404060: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x404060u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x404064: 0x94b00000  lhu         $s0, 0x0($a1)
    ctx->pc = 0x404064u;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x404068: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x404068u;
    SET_GPR_U32(ctx, 31, 0x404070u);
    ctx->pc = 0x40406Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x404068u;
    // 0x40406c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x404068u, 0x404070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x404070u;
label_404070:
    // 0x404070: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x404070u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x404074: 0x28a3a  dsrl        $s1, $v0, 8
    ctx->pc = 0x404074u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) >> 8);
    // 0x404078: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x404078u;
    SET_GPR_U32(ctx, 31, 0x404080u);
    ctx->pc = 0x40407Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x404078u;
    // 0x40407c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x404078u, 0x404080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x404080u;
label_404080:
    // 0x404080: 0x2923a  dsrl        $s2, $v0, 8
    ctx->pc = 0x404080u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) >> 8);
    // 0x404084: 0x8fa90030  lw          $t1, 0x30($sp)
    ctx->pc = 0x404084u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_404088:
    // 0x404088: 0x26f30001  addiu       $s3, $s7, 0x1
    ctx->pc = 0x404088u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x40408c: 0x24140002  addiu       $s4, $zero, 0x2
    ctx->pc = 0x40408cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x404090: 0x2536ffff  addiu       $s6, $t1, -0x1
    ctx->pc = 0x404090u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x404094: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x404094u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_404098:
    // 0x404098: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x404098u;
    {
        const bool branch_taken_0x404098 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x404098) {
            ctx->pc = 0x40409Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x404098u;
            // 0x40409c: 0x26940002  addiu       $s4, $s4, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4040D0u;
            goto label_4040d0;
        }
    }
    ctx->pc = 0x4040A0u;
    // 0x4040a0: 0x8ea502a4  lw          $a1, 0x2A4($s5)
    ctx->pc = 0x4040a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 676)));
    // 0x4040a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4040a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4040a8: 0x2852821  addu        $a1, $s4, $a1
    ctx->pc = 0x4040a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
    // 0x4040ac: 0x94b00000  lhu         $s0, 0x0($a1)
    ctx->pc = 0x4040acu;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4040b0: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x4040B0u;
    SET_GPR_U32(ctx, 31, 0x4040B8u);
    ctx->pc = 0x4040B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4040B0u;
    // 0x4040b4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x4040B0u, 0x4040B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4040B8u;
label_4040b8:
    // 0x4040b8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4040b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4040bc: 0x28a3a  dsrl        $s1, $v0, 8
    ctx->pc = 0x4040bcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) >> 8);
    // 0x4040c0: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x4040C0u;
    SET_GPR_U32(ctx, 31, 0x4040C8u);
    ctx->pc = 0x4040C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4040C0u;
    // 0x4040c4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x4040C0u, 0x4040C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4040C8u;
label_4040c8:
    // 0x4040c8: 0x2923a  dsrl        $s2, $v0, 8
    ctx->pc = 0x4040c8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) >> 8);
    // 0x4040cc: 0x26940002  addiu       $s4, $s4, 0x2
    ctx->pc = 0x4040ccu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
label_4040d0:
    // 0x4040d0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x4040d0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x4040d4: 0x26d6ffff  addiu       $s6, $s6, -0x1
    ctx->pc = 0x4040d4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
label_4040d8:
    // 0x4040d8: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x4040d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4040dc: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x4040DCu;
    {
        const bool branch_taken_0x4040dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4040dc) {
            ctx->pc = 0x4040E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4040DCu;
            // 0x4040e0: 0x26940002  addiu       $s4, $s4, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x404114u;
            goto label_404114;
        }
    }
    ctx->pc = 0x4040E4u;
    // 0x4040e4: 0x8ea502a4  lw          $a1, 0x2A4($s5)
    ctx->pc = 0x4040e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 676)));
    // 0x4040e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4040e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4040ec: 0x2852821  addu        $a1, $s4, $a1
    ctx->pc = 0x4040ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
    // 0x4040f0: 0x94b00000  lhu         $s0, 0x0($a1)
    ctx->pc = 0x4040f0u;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4040f4: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x4040F4u;
    SET_GPR_U32(ctx, 31, 0x4040FCu);
    ctx->pc = 0x4040F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4040F4u;
    // 0x4040f8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x4040F4u, 0x4040FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4040FCu;
label_4040fc:
    // 0x4040fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4040fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x404100: 0x28a3a  dsrl        $s1, $v0, 8
    ctx->pc = 0x404100u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) >> 8);
    // 0x404104: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x404104u;
    SET_GPR_U32(ctx, 31, 0x40410Cu);
    ctx->pc = 0x404108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x404104u;
    // 0x404108: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x404104u, 0x40410Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40410Cu;
label_40410c:
    // 0x40410c: 0x2923a  dsrl        $s2, $v0, 8
    ctx->pc = 0x40410cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) >> 8);
    // 0x404110: 0x26940002  addiu       $s4, $s4, 0x2
    ctx->pc = 0x404110u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
label_404114:
    // 0x404114: 0x26d6ffff  addiu       $s6, $s6, -0x1
    ctx->pc = 0x404114u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
    // 0x404118: 0x12c0003d  beqz        $s6, . + 4 + (0x3D << 2)
    ctx->pc = 0x404118u;
    {
        const bool branch_taken_0x404118 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x40411Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404118u;
        // 0x40411c: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x404118) {
            ctx->pc = 0x404210u;
            goto label_404210;
        }
    }
    ctx->pc = 0x404120u;
label_404120:
    // 0x404120: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x404120u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x404124: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x404124u;
    {
        const bool branch_taken_0x404124 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x404124) {
            ctx->pc = 0x404128u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x404124u;
            // 0x404128: 0x92620001  lbu         $v0, 0x1($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x40415Cu;
            goto label_40415c;
        }
    }
    ctx->pc = 0x40412Cu;
    // 0x40412c: 0x8ea502a4  lw          $a1, 0x2A4($s5)
    ctx->pc = 0x40412cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 676)));
    // 0x404130: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x404130u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x404134: 0x2852821  addu        $a1, $s4, $a1
    ctx->pc = 0x404134u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
    // 0x404138: 0x94b00000  lhu         $s0, 0x0($a1)
    ctx->pc = 0x404138u;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x40413c: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x40413Cu;
    SET_GPR_U32(ctx, 31, 0x404144u);
    ctx->pc = 0x404140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40413Cu;
    // 0x404140: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x40413Cu, 0x404144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x404144u;
label_404144:
    // 0x404144: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x404144u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x404148: 0x28a3a  dsrl        $s1, $v0, 8
    ctx->pc = 0x404148u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) >> 8);
    // 0x40414c: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x40414Cu;
    SET_GPR_U32(ctx, 31, 0x404154u);
    ctx->pc = 0x404150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40414Cu;
    // 0x404150: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x40414Cu, 0x404154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x404154u;
label_404154:
    // 0x404154: 0x2923a  dsrl        $s2, $v0, 8
    ctx->pc = 0x404154u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) >> 8);
    // 0x404158: 0x92620001  lbu         $v0, 0x1($s3)
    ctx->pc = 0x404158u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
label_40415c:
    // 0x40415c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x40415Cu;
    {
        const bool branch_taken_0x40415c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x404160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40415Cu;
        // 0x404160: 0x26830002  addiu       $v1, $s4, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40415c) {
            ctx->pc = 0x404190u;
            goto label_404190;
        }
    }
    ctx->pc = 0x404164u;
    // 0x404164: 0x8ea502a4  lw          $a1, 0x2A4($s5)
    ctx->pc = 0x404164u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 676)));
    // 0x404168: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x404168u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40416c: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x40416cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x404170: 0x94b00000  lhu         $s0, 0x0($a1)
    ctx->pc = 0x404170u;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x404174: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x404174u;
    SET_GPR_U32(ctx, 31, 0x40417Cu);
    ctx->pc = 0x404178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x404174u;
    // 0x404178: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x404174u, 0x40417Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40417Cu;
label_40417c:
    // 0x40417c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x40417cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x404180: 0x28a3a  dsrl        $s1, $v0, 8
    ctx->pc = 0x404180u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) >> 8);
    // 0x404184: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x404184u;
    SET_GPR_U32(ctx, 31, 0x40418Cu);
    ctx->pc = 0x404188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x404184u;
    // 0x404188: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x404184u, 0x40418Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40418Cu;
label_40418c:
    // 0x40418c: 0x2923a  dsrl        $s2, $v0, 8
    ctx->pc = 0x40418cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) >> 8);
label_404190:
    // 0x404190: 0x92620002  lbu         $v0, 0x2($s3)
    ctx->pc = 0x404190u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x404194: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x404194u;
    {
        const bool branch_taken_0x404194 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x404198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404194u;
        // 0x404198: 0x26830004  addiu       $v1, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x404194) {
            ctx->pc = 0x4041C8u;
            goto label_4041c8;
        }
    }
    ctx->pc = 0x40419Cu;
    // 0x40419c: 0x8ea502a4  lw          $a1, 0x2A4($s5)
    ctx->pc = 0x40419cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 676)));
    // 0x4041a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4041a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4041a4: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x4041a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x4041a8: 0x94b00000  lhu         $s0, 0x0($a1)
    ctx->pc = 0x4041a8u;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4041ac: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x4041ACu;
    SET_GPR_U32(ctx, 31, 0x4041B4u);
    ctx->pc = 0x4041B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4041ACu;
    // 0x4041b0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x4041ACu, 0x4041B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4041B4u;
label_4041b4:
    // 0x4041b4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4041b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4041b8: 0x28a3a  dsrl        $s1, $v0, 8
    ctx->pc = 0x4041b8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) >> 8);
    // 0x4041bc: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x4041BCu;
    SET_GPR_U32(ctx, 31, 0x4041C4u);
    ctx->pc = 0x4041C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4041BCu;
    // 0x4041c0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x4041BCu, 0x4041C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4041C4u;
label_4041c4:
    // 0x4041c4: 0x2923a  dsrl        $s2, $v0, 8
    ctx->pc = 0x4041c4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) >> 8);
label_4041c8:
    // 0x4041c8: 0x92620003  lbu         $v0, 0x3($s3)
    ctx->pc = 0x4041c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 3)));
    // 0x4041cc: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x4041CCu;
    {
        const bool branch_taken_0x4041cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4041D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4041CCu;
        // 0x4041d0: 0x26830006  addiu       $v1, $s4, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4041cc) {
            ctx->pc = 0x404200u;
            goto label_404200;
        }
    }
    ctx->pc = 0x4041D4u;
    // 0x4041d4: 0x8ea502a4  lw          $a1, 0x2A4($s5)
    ctx->pc = 0x4041d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 676)));
    // 0x4041d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4041d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4041dc: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x4041dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x4041e0: 0x94b00000  lhu         $s0, 0x0($a1)
    ctx->pc = 0x4041e0u;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4041e4: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x4041E4u;
    SET_GPR_U32(ctx, 31, 0x4041ECu);
    ctx->pc = 0x4041E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4041E4u;
    // 0x4041e8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x4041E4u, 0x4041ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4041ECu;
label_4041ec:
    // 0x4041ec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4041ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4041f0: 0x28a3a  dsrl        $s1, $v0, 8
    ctx->pc = 0x4041f0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) >> 8);
    // 0x4041f4: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x4041F4u;
    SET_GPR_U32(ctx, 31, 0x4041FCu);
    ctx->pc = 0x4041F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4041F4u;
    // 0x4041f8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x4041F4u, 0x4041FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4041FCu;
label_4041fc:
    // 0x4041fc: 0x2923a  dsrl        $s2, $v0, 8
    ctx->pc = 0x4041fcu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) >> 8);
label_404200:
    // 0x404200: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x404200u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x404204: 0x26d6fffc  addiu       $s6, $s6, -0x4
    ctx->pc = 0x404204u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967292));
    // 0x404208: 0x16c0ffc5  bnez        $s6, . + 4 + (-0x3B << 2)
    ctx->pc = 0x404208u;
    {
        const bool branch_taken_0x404208 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x40420Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404208u;
        // 0x40420c: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x404208) {
            ctx->pc = 0x404120u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_404120;
        }
    }
    ctx->pc = 0x404210u;
label_404210:
    // 0x404210: 0x8fa20034  lw          $v0, 0x34($sp)
    ctx->pc = 0x404210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x404214: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x404214u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x404218: 0x94500000  lhu         $s0, 0x0($v0)
    ctx->pc = 0x404218u;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x40421c: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x40421Cu;
    SET_GPR_U32(ctx, 31, 0x404224u);
    ctx->pc = 0x404220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40421Cu;
    // 0x404220: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x40421Cu, 0x404224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x404224u;
label_404224:
    // 0x404224: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x404224u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x404228: 0x288fa  dsrl        $s1, $v0, 3
    ctx->pc = 0x404228u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) >> 3);
    // 0x40422c: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x40422Cu;
    SET_GPR_U32(ctx, 31, 0x404234u);
    ctx->pc = 0x404230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40422Cu;
    // 0x404230: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x40422Cu, 0x404234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x404234u;
label_404234:
    // 0x404234: 0x290fa  dsrl        $s2, $v0, 3
    ctx->pc = 0x404234u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) >> 3);
    // 0x404238: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x404238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x40423c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x40423cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x404240: 0x212ba  dsrl        $v0, $v0, 10
    ctx->pc = 0x404240u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 10);
    // 0x404244: 0x52102b  sltu        $v0, $v0, $s2
    ctx->pc = 0x404244u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x404248: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x404248u;
    {
        const bool branch_taken_0x404248 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x40424Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404248u;
        // 0x40424c: 0x1212b8  dsll        $v0, $s2, 10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << 10);
        ctx->in_delay_slot = false;
        if (branch_taken_0x404248) {
            ctx->pc = 0x404260u;
            goto label_404260;
        }
    }
    ctx->pc = 0x404250u;
    // 0x404250: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x404250u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x404254: 0x4207a  dsrl        $a0, $a0, 1
    ctx->pc = 0x404254u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> 1);
    // 0x404258: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x404258u;
    {
        const bool branch_taken_0x404258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40425Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404258u;
        // 0x40425c: 0xffa40010  sd          $a0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x404258) {
            ctx->pc = 0x404268u;
            goto label_404268;
        }
    }
    ctx->pc = 0x404260u;
label_404260:
    // 0x404260: 0x51202d  daddu       $a0, $v0, $s1
    ctx->pc = 0x404260u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 17));
    // 0x404264: 0xffa40010  sd          $a0, 0x10($sp)
    ctx->pc = 0x404264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 4));
label_404268:
    // 0x404268: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x404268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x40426c: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x40426cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x404270: 0x5462008b  bnel        $v1, $v0, . + 4 + (0x8B << 2)
    ctx->pc = 0x404270u;
    {
        const bool branch_taken_0x404270 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x404270) {
            ctx->pc = 0x404274u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x404270u;
            // 0x404274: 0x30620010  andi        $v0, $v1, 0x10 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4044A0u;
            goto label_4044a0;
        }
    }
    ctx->pc = 0x404278u;
    // 0x404278: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x404278u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x40427c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x40427cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x404280: 0x8ea501c0  lw          $a1, 0x1C0($s5)
    ctx->pc = 0x404280u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 448)));
    // 0x404284: 0x24890001  addiu       $t1, $a0, 0x1
    ctx->pc = 0x404284u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x404288: 0xdfa60018  ld          $a2, 0x18($sp)
    ctx->pc = 0x404288u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x40428c: 0xafa90040  sw          $t1, 0x40($sp)
    ctx->pc = 0x40428cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 9));
    // 0x404290: 0x10c00039  beqz        $a2, . + 4 + (0x39 << 2)
    ctx->pc = 0x404290u;
    {
        const bool branch_taken_0x404290 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x404294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404290u;
        // 0x404294: 0x24aa0001  addiu       $t2, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x404290) {
            ctx->pc = 0x404378u;
            goto label_404378;
        }
    }
    ctx->pc = 0x404298u;
    // 0x404298: 0x140202d  daddu       $a0, $t2, $zero
    ctx->pc = 0x404298u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40429c: 0x120402d  daddu       $t0, $t1, $zero
    ctx->pc = 0x40429cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4042a0: 0x18c00019  blez        $a2, . + 4 + (0x19 << 2)
    ctx->pc = 0x4042A0u;
    {
        const bool branch_taken_0x4042a0 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x4042A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4042A0u;
        // 0x4042a4: 0x30c30003  andi        $v1, $a2, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4042a0) {
            ctx->pc = 0x404308u;
            goto label_404308;
        }
    }
    ctx->pc = 0x4042A8u;
    // 0x4042a8: 0x10600021  beqz        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x4042A8u;
    {
        const bool branch_taken_0x4042a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4042ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4042A8u;
        // 0x4042ac: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4042a8) {
            ctx->pc = 0x404330u;
            goto label_404330;
        }
    }
    ctx->pc = 0x4042B0u;
    // 0x4042b0: 0x54400016  bnel        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x4042B0u;
    {
        const bool branch_taken_0x4042b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4042b0) {
            ctx->pc = 0x4042B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4042B0u;
            // 0x4042b4: 0x91020000  lbu         $v0, 0x0($t0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x40430Cu;
            goto label_40430c;
        }
    }
    ctx->pc = 0x4042B8u;
    // 0x4042b8: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x4042b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x4042bc: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x4042BCu;
    {
        const bool branch_taken_0x4042bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4042bc) {
            ctx->pc = 0x4042C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4042BCu;
            // 0x4042c0: 0x91020000  lbu         $v0, 0x0($t0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4042F0u;
            goto label_4042f0;
        }
    }
    ctx->pc = 0x4042C4u;
    // 0x4042c4: 0x8fa7000c  lw          $a3, 0xC($sp)
    ctx->pc = 0x4042c4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x4042c8: 0x24aa0002  addiu       $t2, $a1, 0x2
    ctx->pc = 0x4042c8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x4042cc: 0x8fa9000c  lw          $t1, 0xC($sp)
    ctx->pc = 0x4042ccu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x4042d0: 0x140202d  daddu       $a0, $t2, $zero
    ctx->pc = 0x4042d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4042d4: 0x90e20001  lbu         $v0, 0x1($a3)
    ctx->pc = 0x4042d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
    // 0x4042d8: 0x25280002  addiu       $t0, $t1, 0x2
    ctx->pc = 0x4042d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
    // 0x4042dc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x4042dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4042e0: 0xa0a20001  sb          $v0, 0x1($a1)
    ctx->pc = 0x4042e0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x4042e4: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x4042e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x4042e8: 0x24490002  addiu       $t1, $v0, 0x2
    ctx->pc = 0x4042e8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4042ec: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x4042ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_4042f0:
    // 0x4042f0: 0x64e70001  daddiu      $a3, $a3, 0x1
    ctx->pc = 0x4042f0u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 7) + (int64_t)(int32_t)1);
    // 0x4042f4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x4042f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x4042f8: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x4042f8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x4042fc: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x4042fcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x404300: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x404300u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x404304: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x404304u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_404308:
    // 0x404308: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x404308u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_40430c:
    // 0x40430c: 0x64e70001  daddiu      $a3, $a3, 0x1
    ctx->pc = 0x40430cu;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 7) + (int64_t)(int32_t)1);
    // 0x404310: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x404310u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x404314: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x404314u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x404318: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x404318u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x40431c: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x40431cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x404320: 0xdfa30018  ld          $v1, 0x18($sp)
    ctx->pc = 0x404320u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x404324: 0xe3302b  sltu        $a2, $a3, $v1
    ctx->pc = 0x404324u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x404328: 0x10c00013  beqz        $a2, . + 4 + (0x13 << 2)
    ctx->pc = 0x404328u;
    {
        const bool branch_taken_0x404328 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x40432Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404328u;
        // 0x40432c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x404328) {
            ctx->pc = 0x404378u;
            goto label_404378;
        }
    }
    ctx->pc = 0x404330u;
label_404330:
    // 0x404330: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x404330u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x404334: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x404334u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_404338:
    // 0x404338: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x404338u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x40433c: 0x64e70004  daddiu      $a3, $a3, 0x4
    ctx->pc = 0x40433cu;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 7) + (int64_t)(int32_t)4);
    // 0x404340: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x404340u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x404344: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x404344u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x404348: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x404348u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x40434c: 0x90820001  lbu         $v0, 0x1($a0)
    ctx->pc = 0x40434cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x404350: 0xdfa80018  ld          $t0, 0x18($sp)
    ctx->pc = 0x404350u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x404354: 0xa0a20001  sb          $v0, 0x1($a1)
    ctx->pc = 0x404354u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x404358: 0xe8302b  sltu        $a2, $a3, $t0
    ctx->pc = 0x404358u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x40435c: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x40435cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x404360: 0xa0a30002  sb          $v1, 0x2($a1)
    ctx->pc = 0x404360u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x404364: 0x90820003  lbu         $v0, 0x3($a0)
    ctx->pc = 0x404364u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x404368: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x404368u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x40436c: 0xa0a20003  sb          $v0, 0x3($a1)
    ctx->pc = 0x40436cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x404370: 0x14c0fff1  bnez        $a2, . + 4 + (-0xF << 2)
    ctx->pc = 0x404370u;
    {
        const bool branch_taken_0x404370 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x404374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404370u;
        // 0x404374: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x404370) {
            ctx->pc = 0x404338u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_404338;
        }
    }
    ctx->pc = 0x404378u;
label_404378:
    // 0x404378: 0xdfa30028  ld          $v1, 0x28($sp)
    ctx->pc = 0x404378u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x40437c: 0xe3102b  sltu        $v0, $a3, $v1
    ctx->pc = 0x40437cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x404380: 0x10400044  beqz        $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x404380u;
    {
        const bool branch_taken_0x404380 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x404384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404380u;
        // 0x404384: 0x67102f  dsubu       $v0, $v1, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) - GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x404380) {
            ctx->pc = 0x404494u;
            goto label_404494;
        }
    }
    ctx->pc = 0x404388u;
    // 0x404388: 0xdfa60028  ld          $a2, 0x28($sp)
    ctx->pc = 0x404388u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x40438c: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x40438cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x404390: 0x140202d  daddu       $a0, $t2, $zero
    ctx->pc = 0x404390u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x404394: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x404394u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x404398: 0xe6102a  slt         $v0, $a3, $a2
    ctx->pc = 0x404398u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x40439c: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x40439Cu;
    {
        const bool branch_taken_0x40439c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4043A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40439Cu;
        // 0x4043a0: 0x120402d  daddu       $t0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40439c) {
            ctx->pc = 0x404400u;
            goto label_404400;
        }
    }
    ctx->pc = 0x4043A4u;
    // 0x4043a4: 0x10600021  beqz        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x4043A4u;
    {
        const bool branch_taken_0x4043a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4043A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4043A4u;
        // 0x4043a8: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4043a4) {
            ctx->pc = 0x40442Cu;
            goto label_40442c;
        }
    }
    ctx->pc = 0x4043ACu;
    // 0x4043ac: 0x54400015  bnel        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x4043ACu;
    {
        const bool branch_taken_0x4043ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4043ac) {
            ctx->pc = 0x4043B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4043ACu;
            // 0x4043b0: 0x91020000  lbu         $v0, 0x0($t0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x404404u;
            goto label_404404;
        }
    }
    ctx->pc = 0x4043B4u;
    // 0x4043b4: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x4043b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x4043b8: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x4043B8u;
    {
        const bool branch_taken_0x4043b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4043b8) {
            ctx->pc = 0x4043BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4043B8u;
            // 0x4043bc: 0x91020000  lbu         $v0, 0x0($t0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4043E4u;
            goto label_4043e4;
        }
    }
    ctx->pc = 0x4043C0u;
    // 0x4043c0: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x4043c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4043c4: 0x25280001  addiu       $t0, $t1, 0x1
    ctx->pc = 0x4043c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x4043c8: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x4043c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4043cc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x4043ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x4043d0: 0x25440001  addiu       $a0, $t2, 0x1
    ctx->pc = 0x4043d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x4043d4: 0x64e70001  daddiu      $a3, $a3, 0x1
    ctx->pc = 0x4043d4u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 7) + (int64_t)(int32_t)1);
    // 0x4043d8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x4043d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4043dc: 0xa1420000  sb          $v0, 0x0($t2)
    ctx->pc = 0x4043dcu;
    WRITE8(ADD32(GPR_U32(ctx, 10), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x4043e0: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x4043e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_4043e4:
    // 0x4043e4: 0x64e70001  daddiu      $a3, $a3, 0x1
    ctx->pc = 0x4043e4u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 7) + (int64_t)(int32_t)1);
    // 0x4043e8: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x4043e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4043ec: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x4043ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x4043f0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x4043f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x4043f4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x4043f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4043f8: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x4043f8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x4043fc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x4043fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_404400:
    // 0x404400: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x404400u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_404404:
    // 0x404404: 0x64e70001  daddiu      $a3, $a3, 0x1
    ctx->pc = 0x404404u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 7) + (int64_t)(int32_t)1);
    // 0x404408: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x404408u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x40440c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x40440cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x404410: 0xdfa60028  ld          $a2, 0x28($sp)
    ctx->pc = 0x404410u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x404414: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x404414u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x404418: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x404418u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x40441c: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x40441cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x404420: 0xe6482b  sltu        $t1, $a3, $a2
    ctx->pc = 0x404420u;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x404424: 0x1120001b  beqz        $t1, . + 4 + (0x1B << 2)
    ctx->pc = 0x404424u;
    {
        const bool branch_taken_0x404424 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x404428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404424u;
        // 0x404428: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x404424) {
            ctx->pc = 0x404494u;
            goto label_404494;
        }
    }
    ctx->pc = 0x40442Cu;
label_40442c:
    // 0x40442c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x40442cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x404430: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x404430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x404434: 0x0  nop
    ctx->pc = 0x404434u;
    // NOP
label_404438:
    // 0x404438: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x404438u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x40443c: 0x64e70004  daddiu      $a3, $a3, 0x4
    ctx->pc = 0x40443cu;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 7) + (int64_t)(int32_t)4);
    // 0x404440: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x404440u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x404444: 0xdfa80028  ld          $t0, 0x28($sp)
    ctx->pc = 0x404444u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x404448: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x404448u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x40444c: 0xa0c30000  sb          $v1, 0x0($a2)
    ctx->pc = 0x40444cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x404450: 0xe8482b  sltu        $t1, $a3, $t0
    ctx->pc = 0x404450u;
    SET_GPR_U64(ctx, 9, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x404454: 0x90a30001  lbu         $v1, 0x1($a1)
    ctx->pc = 0x404454u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x404458: 0x90820001  lbu         $v0, 0x1($a0)
    ctx->pc = 0x404458u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x40445c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x40445cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x404460: 0xa0c20001  sb          $v0, 0x1($a2)
    ctx->pc = 0x404460u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x404464: 0x90a20002  lbu         $v0, 0x2($a1)
    ctx->pc = 0x404464u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x404468: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x404468u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x40446c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x40446cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x404470: 0xa0c30002  sb          $v1, 0x2($a2)
    ctx->pc = 0x404470u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x404474: 0x90820003  lbu         $v0, 0x3($a0)
    ctx->pc = 0x404474u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x404478: 0x90a30003  lbu         $v1, 0x3($a1)
    ctx->pc = 0x404478u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
    // 0x40447c: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x40447cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x404480: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x404480u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x404484: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x404484u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x404488: 0xa0c20003  sb          $v0, 0x3($a2)
    ctx->pc = 0x404488u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x40448c: 0x1520ffea  bnez        $t1, . + 4 + (-0x16 << 2)
    ctx->pc = 0x40448Cu;
    {
        const bool branch_taken_0x40448c = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x404490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40448Cu;
        // 0x404490: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40448c) {
            ctx->pc = 0x404438u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_404438;
        }
    }
    ctx->pc = 0x404494u;
label_404494:
    // 0x404494: 0x8ea901c0  lw          $t1, 0x1C0($s5)
    ctx->pc = 0x404494u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 448)));
    // 0x404498: 0x100001e1  b           . + 4 + (0x1E1 << 2)
    ctx->pc = 0x404498u;
    {
        const bool branch_taken_0x404498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40449Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404498u;
        // 0x40449c: 0xafa90008  sw          $t1, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x404498) {
            ctx->pc = 0x404C20u;
            goto label_404c20;
        }
    }
    ctx->pc = 0x4044A0u;
label_4044a0:
    // 0x4044a0: 0x104001df  beqz        $v0, . + 4 + (0x1DF << 2)
    ctx->pc = 0x4044A0u;
    {
        const bool branch_taken_0x4044a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4044A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4044A0u;
        // 0x4044a4: 0x8fa4000c  lw          $a0, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4044a0) {
            ctx->pc = 0x404C20u;
            goto label_404c20;
        }
    }
    ctx->pc = 0x4044A8u;
    // 0x4044a8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x4044a8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4044ac: 0x92a3029c  lbu         $v1, 0x29C($s5)
    ctx->pc = 0x4044acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 668)));
    // 0x4044b0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4044b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4044b4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x4044b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x4044b8: 0xdfad0010  ld          $t5, 0x10($sp)
    ctx->pc = 0x4044b8u;
    SET_GPR_U64(ctx, 13, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4044bc: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x4044bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x4044c0: 0x8ea501c0  lw          $a1, 0x1C0($s5)
    ctx->pc = 0x4044c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 448)));
    // 0x4044c4: 0x146200a4  bne         $v1, $v0, . + 4 + (0xA4 << 2)
    ctx->pc = 0x4044C4u;
    {
        const bool branch_taken_0x4044c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x4044C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4044C4u;
        // 0x4044c8: 0xafa50044  sw          $a1, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4044c4) {
            ctx->pc = 0x404758u;
            goto label_404758;
        }
    }
    ctx->pc = 0x4044CCu;
    // 0x4044cc: 0x8ea602b0  lw          $a2, 0x2B0($s5)
    ctx->pc = 0x4044ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 688)));
    // 0x4044d0: 0xd1aba  dsrl        $v1, $t5, 10
    ctx->pc = 0x4044d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 13) >> 10);
    // 0x4044d4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4044d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4044d8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x4044d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x4044dc: 0x212ba  dsrl        $v0, $v0, 10
    ctx->pc = 0x4044dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 10);
    // 0x4044e0: 0x8fa70030  lw          $a3, 0x30($sp)
    ctx->pc = 0x4044e0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4044e4: 0x629024  and         $s2, $v1, $v0
    ctx->pc = 0x4044e4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4044e8: 0x31b1ffff  andi        $s1, $t5, 0xFFFF
    ctx->pc = 0x4044e8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)65535);
    // 0x4044ec: 0x10e00084  beqz        $a3, . + 4 + (0x84 << 2)
    ctx->pc = 0x4044ECu;
    {
        const bool branch_taken_0x4044ec = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x4044F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4044ECu;
        // 0x4044f0: 0xafa60038  sw          $a2, 0x38($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4044ec) {
            ctx->pc = 0x404700u;
            goto label_404700;
        }
    }
    ctx->pc = 0x4044F4u;
    // 0x4044f4: 0x8ebe02a0  lw          $fp, 0x2A0($s5)
    ctx->pc = 0x4044f4u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 672)));
    // 0x4044f8: 0x71023  negu        $v0, $a3
    ctx->pc = 0x4044f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 7)));
    // 0x4044fc: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x4044fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x404500: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x404500u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x404504: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x404504u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x404508: 0x1060003d  beqz        $v1, . + 4 + (0x3D << 2)
    ctx->pc = 0x404508u;
    {
        const bool branch_taken_0x404508 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x40450Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404508u;
        // 0x40450c: 0x3c0982d  daddu       $s3, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x404508) {
            ctx->pc = 0x404600u;
            goto label_404600;
        }
    }
    ctx->pc = 0x404510u;
    // 0x404510: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x404510u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x404514: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x404514u;
    {
        const bool branch_taken_0x404514 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x404518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404514u;
        // 0x404518: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x404514) {
            ctx->pc = 0x4045B0u;
            goto label_4045b0;
        }
    }
    ctx->pc = 0x40451Cu;
    // 0x40451c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x40451Cu;
    {
        const bool branch_taken_0x40451c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x404520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40451Cu;
        // 0x404520: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40451c) {
            ctx->pc = 0x404568u;
            goto label_404568;
        }
    }
    ctx->pc = 0x404524u;
    // 0x404524: 0x93c20000  lbu         $v0, 0x0($fp)
    ctx->pc = 0x404524u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x404528: 0x1448000c  bne         $v0, $t0, . + 4 + (0xC << 2)
    ctx->pc = 0x404528u;
    {
        const bool branch_taken_0x404528 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 8));
        ctx->pc = 0x40452Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404528u;
        // 0x40452c: 0x8fa90030  lw          $t1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x404528) {
            ctx->pc = 0x40455Cu;
            goto label_40455c;
        }
    }
    ctx->pc = 0x404530u;
    // 0x404530: 0x8ea502a8  lw          $a1, 0x2A8($s5)
    ctx->pc = 0x404530u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 680)));
    // 0x404534: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x404534u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x404538: 0x94b00000  lhu         $s0, 0x0($a1)
    ctx->pc = 0x404538u;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x40453c: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x40453Cu;
    SET_GPR_U32(ctx, 31, 0x404544u);
    ctx->pc = 0x404540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40453Cu;
    // 0x404540: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x40453Cu, 0x404544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x404544u;
label_404544:
    // 0x404544: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x404544u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x404548: 0x28a3a  dsrl        $s1, $v0, 8
    ctx->pc = 0x404548u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) >> 8);
    // 0x40454c: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x40454Cu;
    SET_GPR_U32(ctx, 31, 0x404554u);
    ctx->pc = 0x404550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40454Cu;
    // 0x404550: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x40454Cu, 0x404554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x404554u;
label_404554:
    // 0x404554: 0x2923a  dsrl        $s2, $v0, 8
    ctx->pc = 0x404554u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) >> 8);
    // 0x404558: 0x8fa90030  lw          $t1, 0x30($sp)
    ctx->pc = 0x404558u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_40455c:
    // 0x40455c: 0x27d30001  addiu       $s3, $fp, 0x1
    ctx->pc = 0x40455cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x404560: 0x24160002  addiu       $s6, $zero, 0x2
    ctx->pc = 0x404560u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x404564: 0x2537ffff  addiu       $s7, $t1, -0x1
    ctx->pc = 0x404564u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
label_404568:
    // 0x404568: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x404568u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x40456c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x40456cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x404570: 0x5443000d  bnel        $v0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x404570u;
    {
        const bool branch_taken_0x404570 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x404570) {
            ctx->pc = 0x404574u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x404570u;
            // 0x404574: 0x26d60002  addiu       $s6, $s6, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4045A8u;
            goto label_4045a8;
        }
    }
    ctx->pc = 0x404578u;
    // 0x404578: 0x8ea502a8  lw          $a1, 0x2A8($s5)
    ctx->pc = 0x404578u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 680)));
    // 0x40457c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x40457cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x404580: 0x2c52821  addu        $a1, $s6, $a1
    ctx->pc = 0x404580u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 5)));
    // 0x404584: 0x94b00000  lhu         $s0, 0x0($a1)
    ctx->pc = 0x404584u;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x404588: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x404588u;
    SET_GPR_U32(ctx, 31, 0x404590u);
    ctx->pc = 0x40458Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x404588u;
    // 0x40458c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x404588u, 0x404590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x404590u;
label_404590:
    // 0x404590: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x404590u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x404594: 0x28a3a  dsrl        $s1, $v0, 8
    ctx->pc = 0x404594u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) >> 8);
    // 0x404598: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x404598u;
    SET_GPR_U32(ctx, 31, 0x4045A0u);
    ctx->pc = 0x40459Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x404598u;
    // 0x40459c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x404598u, 0x4045A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4045A0u;
label_4045a0:
    // 0x4045a0: 0x2923a  dsrl        $s2, $v0, 8
    ctx->pc = 0x4045a0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) >> 8);
    // 0x4045a4: 0x26d60002  addiu       $s6, $s6, 0x2
    ctx->pc = 0x4045a4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 2));
label_4045a8:
    // 0x4045a8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x4045a8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x4045ac: 0x26f7ffff  addiu       $s7, $s7, -0x1
    ctx->pc = 0x4045acu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967295));
label_4045b0:
    // 0x4045b0: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x4045b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4045b4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x4045b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4045b8: 0x5444000d  bnel        $v0, $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x4045B8u;
    {
        const bool branch_taken_0x4045b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x4045b8) {
            ctx->pc = 0x4045BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4045B8u;
            // 0x4045bc: 0x26d60002  addiu       $s6, $s6, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4045F0u;
            goto label_4045f0;
        }
    }
    ctx->pc = 0x4045C0u;
    // 0x4045c0: 0x8ea502a8  lw          $a1, 0x2A8($s5)
    ctx->pc = 0x4045c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 680)));
    // 0x4045c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4045c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4045c8: 0x2c52821  addu        $a1, $s6, $a1
    ctx->pc = 0x4045c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 5)));
    // 0x4045cc: 0x94b00000  lhu         $s0, 0x0($a1)
    ctx->pc = 0x4045ccu;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4045d0: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x4045D0u;
    SET_GPR_U32(ctx, 31, 0x4045D8u);
    ctx->pc = 0x4045D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4045D0u;
    // 0x4045d4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x4045D0u, 0x4045D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4045D8u;
label_4045d8:
    // 0x4045d8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4045d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4045dc: 0x28a3a  dsrl        $s1, $v0, 8
    ctx->pc = 0x4045dcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) >> 8);
    // 0x4045e0: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x4045E0u;
    SET_GPR_U32(ctx, 31, 0x4045E8u);
    ctx->pc = 0x4045E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4045E0u;
    // 0x4045e4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x4045E0u, 0x4045E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4045E8u;
label_4045e8:
    // 0x4045e8: 0x2923a  dsrl        $s2, $v0, 8
    ctx->pc = 0x4045e8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) >> 8);
    // 0x4045ec: 0x26d60002  addiu       $s6, $s6, 0x2
    ctx->pc = 0x4045ecu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 2));
label_4045f0:
    // 0x4045f0: 0x26f7ffff  addiu       $s7, $s7, -0x1
    ctx->pc = 0x4045f0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967295));
    // 0x4045f4: 0x12e00042  beqz        $s7, . + 4 + (0x42 << 2)
    ctx->pc = 0x4045F4u;
    {
        const bool branch_taken_0x4045f4 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x4045F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4045F4u;
        // 0x4045f8: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4045f4) {
            ctx->pc = 0x404700u;
            goto label_404700;
        }
    }
    ctx->pc = 0x4045FCu;
    // 0x4045fc: 0x0  nop
    ctx->pc = 0x4045fcu;
    // NOP
label_404600:
    // 0x404600: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x404600u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x404604: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x404604u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x404608: 0x5445000d  bnel        $v0, $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x404608u;
    {
        const bool branch_taken_0x404608 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x404608) {
            ctx->pc = 0x40460Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x404608u;
            // 0x40460c: 0x92620001  lbu         $v0, 0x1($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x404640u;
            goto label_404640;
        }
    }
    ctx->pc = 0x404610u;
    // 0x404610: 0x8ea502a8  lw          $a1, 0x2A8($s5)
    ctx->pc = 0x404610u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 680)));
    // 0x404614: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x404614u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x404618: 0x2c52821  addu        $a1, $s6, $a1
    ctx->pc = 0x404618u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 5)));
    // 0x40461c: 0x94b00000  lhu         $s0, 0x0($a1)
    ctx->pc = 0x40461cu;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x404620: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x404620u;
    SET_GPR_U32(ctx, 31, 0x404628u);
    ctx->pc = 0x404624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x404620u;
    // 0x404624: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x404620u, 0x404628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x404628u;
label_404628:
    // 0x404628: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x404628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40462c: 0x28a3a  dsrl        $s1, $v0, 8
    ctx->pc = 0x40462cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) >> 8);
    // 0x404630: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x404630u;
    SET_GPR_U32(ctx, 31, 0x404638u);
    ctx->pc = 0x404634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x404630u;
    // 0x404634: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x404630u, 0x404638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x404638u;
label_404638:
    // 0x404638: 0x2923a  dsrl        $s2, $v0, 8
    ctx->pc = 0x404638u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) >> 8);
    // 0x40463c: 0x92620001  lbu         $v0, 0x1($s3)
    ctx->pc = 0x40463cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
label_404640:
    // 0x404640: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x404640u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x404644: 0x1446000c  bne         $v0, $a2, . + 4 + (0xC << 2)
    ctx->pc = 0x404644u;
    {
        const bool branch_taken_0x404644 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        ctx->pc = 0x404648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404644u;
        // 0x404648: 0x26c30002  addiu       $v1, $s6, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x404644) {
            ctx->pc = 0x404678u;
            goto label_404678;
        }
    }
    ctx->pc = 0x40464Cu;
    // 0x40464c: 0x8ea502a8  lw          $a1, 0x2A8($s5)
    ctx->pc = 0x40464cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 680)));
    // 0x404650: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x404650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x404654: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x404654u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x404658: 0x94b00000  lhu         $s0, 0x0($a1)
    ctx->pc = 0x404658u;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x40465c: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x40465Cu;
    SET_GPR_U32(ctx, 31, 0x404664u);
    ctx->pc = 0x404660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40465Cu;
    // 0x404660: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x40465Cu, 0x404664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x404664u;
label_404664:
    // 0x404664: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x404664u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x404668: 0x28a3a  dsrl        $s1, $v0, 8
    ctx->pc = 0x404668u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) >> 8);
    // 0x40466c: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x40466Cu;
    SET_GPR_U32(ctx, 31, 0x404674u);
    ctx->pc = 0x404670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40466Cu;
    // 0x404670: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x40466Cu, 0x404674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x404674u;
label_404674:
    // 0x404674: 0x2923a  dsrl        $s2, $v0, 8
    ctx->pc = 0x404674u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) >> 8);
label_404678:
    // 0x404678: 0x92620002  lbu         $v0, 0x2($s3)
    ctx->pc = 0x404678u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x40467c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x40467cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x404680: 0x1447000c  bne         $v0, $a3, . + 4 + (0xC << 2)
    ctx->pc = 0x404680u;
    {
        const bool branch_taken_0x404680 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        ctx->pc = 0x404684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404680u;
        // 0x404684: 0x26c30004  addiu       $v1, $s6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x404680) {
            ctx->pc = 0x4046B4u;
            goto label_4046b4;
        }
    }
    ctx->pc = 0x404688u;
    // 0x404688: 0x8ea502a8  lw          $a1, 0x2A8($s5)
    ctx->pc = 0x404688u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 680)));
    // 0x40468c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x40468cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x404690: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x404690u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x404694: 0x94b00000  lhu         $s0, 0x0($a1)
    ctx->pc = 0x404694u;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x404698: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x404698u;
    SET_GPR_U32(ctx, 31, 0x4046A0u);
    ctx->pc = 0x40469Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x404698u;
    // 0x40469c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x404698u, 0x4046A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4046A0u;
label_4046a0:
    // 0x4046a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4046a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4046a4: 0x28a3a  dsrl        $s1, $v0, 8
    ctx->pc = 0x4046a4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) >> 8);
    // 0x4046a8: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x4046A8u;
    SET_GPR_U32(ctx, 31, 0x4046B0u);
    ctx->pc = 0x4046ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4046A8u;
    // 0x4046ac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x4046A8u, 0x4046B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4046B0u;
label_4046b0:
    // 0x4046b0: 0x2923a  dsrl        $s2, $v0, 8
    ctx->pc = 0x4046b0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) >> 8);
label_4046b4:
    // 0x4046b4: 0x92620003  lbu         $v0, 0x3($s3)
    ctx->pc = 0x4046b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 3)));
    // 0x4046b8: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x4046b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4046bc: 0x1448000c  bne         $v0, $t0, . + 4 + (0xC << 2)
    ctx->pc = 0x4046BCu;
    {
        const bool branch_taken_0x4046bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 8));
        ctx->pc = 0x4046C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4046BCu;
        // 0x4046c0: 0x26c30006  addiu       $v1, $s6, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4046bc) {
            ctx->pc = 0x4046F0u;
            goto label_4046f0;
        }
    }
    ctx->pc = 0x4046C4u;
    // 0x4046c4: 0x8ea502a8  lw          $a1, 0x2A8($s5)
    ctx->pc = 0x4046c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 680)));
    // 0x4046c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4046c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4046cc: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x4046ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x4046d0: 0x94b00000  lhu         $s0, 0x0($a1)
    ctx->pc = 0x4046d0u;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4046d4: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x4046D4u;
    SET_GPR_U32(ctx, 31, 0x4046DCu);
    ctx->pc = 0x4046D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4046D4u;
    // 0x4046d8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x4046D4u, 0x4046DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4046DCu;
label_4046dc:
    // 0x4046dc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4046dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4046e0: 0x28a3a  dsrl        $s1, $v0, 8
    ctx->pc = 0x4046e0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) >> 8);
    // 0x4046e4: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x4046E4u;
    SET_GPR_U32(ctx, 31, 0x4046ECu);
    ctx->pc = 0x4046E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4046E4u;
    // 0x4046e8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x4046E4u, 0x4046ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4046ECu;
label_4046ec:
    // 0x4046ec: 0x2923a  dsrl        $s2, $v0, 8
    ctx->pc = 0x4046ecu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) >> 8);
label_4046f0:
    // 0x4046f0: 0x26d60008  addiu       $s6, $s6, 0x8
    ctx->pc = 0x4046f0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
    // 0x4046f4: 0x26f7fffc  addiu       $s7, $s7, -0x4
    ctx->pc = 0x4046f4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967292));
    // 0x4046f8: 0x16e0ffc1  bnez        $s7, . + 4 + (-0x3F << 2)
    ctx->pc = 0x4046F8u;
    {
        const bool branch_taken_0x4046f8 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        ctx->pc = 0x4046FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4046F8u;
        // 0x4046fc: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4046f8) {
            ctx->pc = 0x404600u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_404600;
        }
    }
    ctx->pc = 0x404700u;
label_404700:
    // 0x404700: 0x8fa90038  lw          $t1, 0x38($sp)
    ctx->pc = 0x404700u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x404704: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x404704u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x404708: 0x95300002  lhu         $s0, 0x2($t1)
    ctx->pc = 0x404708u;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 2)));
    // 0x40470c: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x40470Cu;
    SET_GPR_U32(ctx, 31, 0x404714u);
    ctx->pc = 0x404710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40470Cu;
    // 0x404710: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x40470Cu, 0x404714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x404714u;
label_404714:
    // 0x404714: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x404714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x404718: 0x288fa  dsrl        $s1, $v0, 3
    ctx->pc = 0x404718u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) >> 3);
    // 0x40471c: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x40471Cu;
    SET_GPR_U32(ctx, 31, 0x404724u);
    ctx->pc = 0x404720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40471Cu;
    // 0x404720: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x40471Cu, 0x404724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x404724u;
label_404724:
    // 0x404724: 0x290fa  dsrl        $s2, $v0, 3
    ctx->pc = 0x404724u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) >> 3);
    // 0x404728: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x404728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x40472c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x40472cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x404730: 0x212ba  dsrl        $v0, $v0, 10
    ctx->pc = 0x404730u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 10);
    // 0x404734: 0x52102b  sltu        $v0, $v0, $s2
    ctx->pc = 0x404734u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x404738: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x404738u;
    {
        const bool branch_taken_0x404738 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x40473Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404738u;
        // 0x40473c: 0x8fa20044  lw          $v0, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x404738) {
            ctx->pc = 0x404750u;
            goto label_404750;
        }
    }
    ctx->pc = 0x404740u;
    // 0x404740: 0x240dffff  addiu       $t5, $zero, -0x1
    ctx->pc = 0x404740u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x404744: 0xd687a  dsrl        $t5, $t5, 1
    ctx->pc = 0x404744u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) >> 1);
    // 0x404748: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x404748u;
    {
        const bool branch_taken_0x404748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40474Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404748u;
        // 0x40474c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x404748) {
            ctx->pc = 0x404760u;
            goto label_404760;
        }
    }
    ctx->pc = 0x404750u;
label_404750:
    // 0x404750: 0x1212b8  dsll        $v0, $s2, 10
    ctx->pc = 0x404750u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << 10);
    // 0x404754: 0x51682d  daddu       $t5, $v0, $s1
    ctx->pc = 0x404754u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 17));
label_404758:
    // 0x404758: 0x8fa20044  lw          $v0, 0x44($sp)
    ctx->pc = 0x404758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x40475c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x40475cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_404760:
    // 0x404760: 0xdfa30018  ld          $v1, 0x18($sp)
    ctx->pc = 0x404760u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x404764: 0x8fab0040  lw          $t3, 0x40($sp)
    ctx->pc = 0x404764u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x404768: 0x10600069  beqz        $v1, . + 4 + (0x69 << 2)
    ctx->pc = 0x404768u;
    {
        const bool branch_taken_0x404768 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x40476Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404768u;
        // 0x40476c: 0x244a0001  addiu       $t2, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x404768) {
            ctx->pc = 0x404910u;
            goto label_404910;
        }
    }
    ctx->pc = 0x404770u;
    // 0x404770: 0xdfa40018  ld          $a0, 0x18($sp)
    ctx->pc = 0x404770u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x404774: 0x240c0100  addiu       $t4, $zero, 0x100
    ctx->pc = 0x404774u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x404778: 0x140302d  daddu       $a2, $t2, $zero
    ctx->pc = 0x404778u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40477c: 0x160482d  daddu       $t1, $t3, $zero
    ctx->pc = 0x40477cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x404780: 0x18800024  blez        $a0, . + 4 + (0x24 << 2)
    ctx->pc = 0x404780u;
    {
        const bool branch_taken_0x404780 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x404784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404780u;
        // 0x404784: 0x30630003  andi        $v1, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x404780) {
            ctx->pc = 0x404814u;
            goto label_404814;
        }
    }
    ctx->pc = 0x404788u;
    // 0x404788: 0x10600033  beqz        $v1, . + 4 + (0x33 << 2)
    ctx->pc = 0x404788u;
    {
        const bool branch_taken_0x404788 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x40478Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404788u;
        // 0x40478c: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x404788) {
            ctx->pc = 0x404858u;
            goto label_404858;
        }
    }
    ctx->pc = 0x404790u;
    // 0x404790: 0x54400021  bnel        $v0, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x404790u;
    {
        const bool branch_taken_0x404790 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x404790) {
            ctx->pc = 0x404794u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x404790u;
            // 0x404794: 0x91230000  lbu         $v1, 0x0($t1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x404818u;
            goto label_404818;
        }
    }
    ctx->pc = 0x404798u;
    // 0x404798: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x404798u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x40479c: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x40479Cu;
    {
        const bool branch_taken_0x40479c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4047A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40479Cu;
        // 0x4047a0: 0x91230000  lbu         $v1, 0x0($t1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40479c) {
            ctx->pc = 0x4047E0u;
            goto label_4047e0;
        }
    }
    ctx->pc = 0x4047A4u;
    // 0x4047a4: 0x8fa70044  lw          $a3, 0x44($sp)
    ctx->pc = 0x4047a4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x4047a8: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x4047a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4047ac: 0x28a20080  slti        $v0, $a1, 0x80
    ctx->pc = 0x4047acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x4047b0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4047B0u;
    {
        const bool branch_taken_0x4047b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4047B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4047B0u;
        // 0x4047b4: 0xa0e30001  sb          $v1, 0x1($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 1), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4047b0) {
            ctx->pc = 0x4047C0u;
            goto label_4047c0;
        }
    }
    ctx->pc = 0x4047B8u;
    // 0x4047b8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x4047B8u;
    {
        const bool branch_taken_0x4047b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4047BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4047B8u;
        // 0x4047bc: 0xb4a02d  daddu       $s4, $a1, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4047b8) {
            ctx->pc = 0x4047C8u;
            goto label_4047c8;
        }
    }
    ctx->pc = 0x4047C0u;
label_4047c0:
    // 0x4047c0: 0x1851023  subu        $v0, $t4, $a1
    ctx->pc = 0x4047c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 5)));
    // 0x4047c4: 0x282a02d  daddu       $s4, $s4, $v0
    ctx->pc = 0x4047c4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 2));
label_4047c8:
    // 0x4047c8: 0x65080001  daddiu      $t0, $t0, 0x1
    ctx->pc = 0x4047c8u;
    SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 8) + (int64_t)(int32_t)1);
    // 0x4047cc: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x4047ccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x4047d0: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x4047d0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x4047d4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x4047d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x4047d8: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x4047d8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x4047dc: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x4047dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
label_4047e0:
    // 0x4047e0: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x4047e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4047e4: 0x28a20080  slti        $v0, $a1, 0x80
    ctx->pc = 0x4047e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x4047e8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4047E8u;
    {
        const bool branch_taken_0x4047e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4047ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4047E8u;
        // 0x4047ec: 0xa0c30000  sb          $v1, 0x0($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4047e8) {
            ctx->pc = 0x4047F8u;
            goto label_4047f8;
        }
    }
    ctx->pc = 0x4047F0u;
    // 0x4047f0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x4047F0u;
    {
        const bool branch_taken_0x4047f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4047F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4047F0u;
        // 0x4047f4: 0xb4a02d  daddu       $s4, $a1, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4047f0) {
            ctx->pc = 0x404800u;
            goto label_404800;
        }
    }
    ctx->pc = 0x4047F8u;
label_4047f8:
    // 0x4047f8: 0x1851023  subu        $v0, $t4, $a1
    ctx->pc = 0x4047f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 5)));
    // 0x4047fc: 0x282a02d  daddu       $s4, $s4, $v0
    ctx->pc = 0x4047fcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 2));
label_404800:
    // 0x404800: 0x65080001  daddiu      $t0, $t0, 0x1
    ctx->pc = 0x404800u;
    SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 8) + (int64_t)(int32_t)1);
    // 0x404804: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x404804u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x404808: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x404808u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x40480c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x40480cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x404810: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x404810u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_404814:
    // 0x404814: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x404814u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
label_404818:
    // 0x404818: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x404818u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40481c: 0x28a20080  slti        $v0, $a1, 0x80
    ctx->pc = 0x40481cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x404820: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x404820u;
    {
        const bool branch_taken_0x404820 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x404824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404820u;
        // 0x404824: 0xa0c30000  sb          $v1, 0x0($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x404820) {
            ctx->pc = 0x404830u;
            goto label_404830;
        }
    }
    ctx->pc = 0x404828u;
    // 0x404828: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x404828u;
    {
        const bool branch_taken_0x404828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40482Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404828u;
        // 0x40482c: 0xb4a02d  daddu       $s4, $a1, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x404828) {
            ctx->pc = 0x404838u;
            goto label_404838;
        }
    }
    ctx->pc = 0x404830u;
label_404830:
    // 0x404830: 0x1851023  subu        $v0, $t4, $a1
    ctx->pc = 0x404830u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 5)));
    // 0x404834: 0x282a02d  daddu       $s4, $s4, $v0
    ctx->pc = 0x404834u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 2));
label_404838:
    // 0x404838: 0xdfa30018  ld          $v1, 0x18($sp)
    ctx->pc = 0x404838u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x40483c: 0x65080001  daddiu      $t0, $t0, 0x1
    ctx->pc = 0x40483cu;
    SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 8) + (int64_t)(int32_t)1);
    // 0x404840: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x404840u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x404844: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x404844u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x404848: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x404848u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x40484c: 0x103102b  sltu        $v0, $t0, $v1
    ctx->pc = 0x40484cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x404850: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x404850u;
    {
        const bool branch_taken_0x404850 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x404854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404850u;
        // 0x404854: 0x254a0001  addiu       $t2, $t2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x404850) {
            ctx->pc = 0x404910u;
            goto label_404910;
        }
    }
    ctx->pc = 0x404858u;
label_404858:
    // 0x404858: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x404858u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40485c: 0x120302d  daddu       $a2, $t1, $zero
    ctx->pc = 0x40485cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_404860:
    // 0x404860: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x404860u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x404864: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x404864u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x404868: 0x28a20080  slti        $v0, $a1, 0x80
    ctx->pc = 0x404868u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x40486c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x40486Cu;
    {
        const bool branch_taken_0x40486c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x404870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40486Cu;
        // 0x404870: 0xa0e30000  sb          $v1, 0x0($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40486c) {
            ctx->pc = 0x40487Cu;
            goto label_40487c;
        }
    }
    ctx->pc = 0x404874u;
    // 0x404874: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x404874u;
    {
        const bool branch_taken_0x404874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x404878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404874u;
        // 0x404878: 0xb4a02d  daddu       $s4, $a1, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x404874) {
            ctx->pc = 0x404884u;
            goto label_404884;
        }
    }
    ctx->pc = 0x40487Cu;
label_40487c:
    // 0x40487c: 0x1851023  subu        $v0, $t4, $a1
    ctx->pc = 0x40487cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 5)));
    // 0x404880: 0x282a02d  daddu       $s4, $s4, $v0
    ctx->pc = 0x404880u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 2));
label_404884:
    // 0x404884: 0x90c30001  lbu         $v1, 0x1($a2)
    ctx->pc = 0x404884u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x404888: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x404888u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40488c: 0x28a20080  slti        $v0, $a1, 0x80
    ctx->pc = 0x40488cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x404890: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x404890u;
    {
        const bool branch_taken_0x404890 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x404894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404890u;
        // 0x404894: 0xa0e30001  sb          $v1, 0x1($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 1), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x404890) {
            ctx->pc = 0x4048A0u;
            goto label_4048a0;
        }
    }
    ctx->pc = 0x404898u;
    // 0x404898: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x404898u;
    {
        const bool branch_taken_0x404898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40489Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404898u;
        // 0x40489c: 0xb4a02d  daddu       $s4, $a1, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x404898) {
            ctx->pc = 0x4048A8u;
            goto label_4048a8;
        }
    }
    ctx->pc = 0x4048A0u;
label_4048a0:
    // 0x4048a0: 0x1851023  subu        $v0, $t4, $a1
    ctx->pc = 0x4048a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 5)));
    // 0x4048a4: 0x282a02d  daddu       $s4, $s4, $v0
    ctx->pc = 0x4048a4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 2));
label_4048a8:
    // 0x4048a8: 0x90c30002  lbu         $v1, 0x2($a2)
    ctx->pc = 0x4048a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x4048ac: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x4048acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4048b0: 0x28a20080  slti        $v0, $a1, 0x80
    ctx->pc = 0x4048b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x4048b4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4048B4u;
    {
        const bool branch_taken_0x4048b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4048B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4048B4u;
        // 0x4048b8: 0xa0e30002  sb          $v1, 0x2($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 2), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4048b4) {
            ctx->pc = 0x4048C4u;
            goto label_4048c4;
        }
    }
    ctx->pc = 0x4048BCu;
    // 0x4048bc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x4048BCu;
    {
        const bool branch_taken_0x4048bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4048C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4048BCu;
        // 0x4048c0: 0xb4a02d  daddu       $s4, $a1, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4048bc) {
            ctx->pc = 0x4048CCu;
            goto label_4048cc;
        }
    }
    ctx->pc = 0x4048C4u;
label_4048c4:
    // 0x4048c4: 0x1851023  subu        $v0, $t4, $a1
    ctx->pc = 0x4048c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 5)));
    // 0x4048c8: 0x282a02d  daddu       $s4, $s4, $v0
    ctx->pc = 0x4048c8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 2));
label_4048cc:
    // 0x4048cc: 0x90c30003  lbu         $v1, 0x3($a2)
    ctx->pc = 0x4048ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3)));
    // 0x4048d0: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x4048d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4048d4: 0x28a20080  slti        $v0, $a1, 0x80
    ctx->pc = 0x4048d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x4048d8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4048D8u;
    {
        const bool branch_taken_0x4048d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4048DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4048D8u;
        // 0x4048dc: 0xa0e30003  sb          $v1, 0x3($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 3), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4048d8) {
            ctx->pc = 0x4048E8u;
            goto label_4048e8;
        }
    }
    ctx->pc = 0x4048E0u;
    // 0x4048e0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x4048E0u;
    {
        const bool branch_taken_0x4048e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4048E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4048E0u;
        // 0x4048e4: 0xb4a02d  daddu       $s4, $a1, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4048e0) {
            ctx->pc = 0x4048F0u;
            goto label_4048f0;
        }
    }
    ctx->pc = 0x4048E8u;
label_4048e8:
    // 0x4048e8: 0x1851023  subu        $v0, $t4, $a1
    ctx->pc = 0x4048e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 5)));
    // 0x4048ec: 0x282a02d  daddu       $s4, $s4, $v0
    ctx->pc = 0x4048ecu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 2));
label_4048f0:
    // 0x4048f0: 0xdfa40018  ld          $a0, 0x18($sp)
    ctx->pc = 0x4048f0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4048f4: 0x65080004  daddiu      $t0, $t0, 0x4
    ctx->pc = 0x4048f4u;
    SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 8) + (int64_t)(int32_t)4);
    // 0x4048f8: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x4048f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x4048fc: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x4048fcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x404900: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x404900u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x404904: 0x104102b  sltu        $v0, $t0, $a0
    ctx->pc = 0x404904u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x404908: 0x1440ffd5  bnez        $v0, . + 4 + (-0x2B << 2)
    ctx->pc = 0x404908u;
    {
        const bool branch_taken_0x404908 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x40490Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404908u;
        // 0x40490c: 0x254a0004  addiu       $t2, $t2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x404908) {
            ctx->pc = 0x404860u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_404860;
        }
    }
    ctx->pc = 0x404910u;
label_404910:
    // 0x404910: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x404910u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x404914: 0x140382d  daddu       $a3, $t2, $zero
    ctx->pc = 0x404914u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x404918: 0x160302d  daddu       $a2, $t3, $zero
    ctx->pc = 0x404918u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40491c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x40491Cu;
    {
        const bool branch_taken_0x40491c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x404920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40491Cu;
        // 0x404920: 0x24090100  addiu       $t1, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40491c) {
            ctx->pc = 0x404934u;
            goto label_404934;
        }
    }
    ctx->pc = 0x404924u;
    // 0x404924: 0x0  nop
    ctx->pc = 0x404924u;
    // NOP
label_404928:
    // 0x404928: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x404928u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x40492c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x40492cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x404930: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x404930u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_404934:
    // 0x404934: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x404934u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x404938: 0xdca20008  ld          $v0, 0x8($a1)
    ctx->pc = 0x404938u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x40493c: 0x102102b  sltu        $v0, $t0, $v0
    ctx->pc = 0x40493cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x404940: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x404940u;
    {
        const bool branch_taken_0x404940 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x404940) {
            ctx->pc = 0x404944u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x404940u;
            // 0x404944: 0x92a3029c  lbu         $v1, 0x29C($s5) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 668)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x404984u;
            goto label_404984;
        }
    }
    ctx->pc = 0x404948u;
    // 0x404948: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x404948u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x40494c: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x40494cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x404950: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x404950u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x404954: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x404954u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x404958: 0x28a30080  slti        $v1, $a1, 0x80
    ctx->pc = 0x404958u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x40495c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x40495Cu;
    {
        const bool branch_taken_0x40495c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x404960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40495Cu;
        // 0x404960: 0xa0e20000  sb          $v0, 0x0($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40495c) {
            ctx->pc = 0x40496Cu;
            goto label_40496c;
        }
    }
    ctx->pc = 0x404964u;
    // 0x404964: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x404964u;
    {
        const bool branch_taken_0x404964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x404968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404964u;
        // 0x404968: 0xb4a02d  daddu       $s4, $a1, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x404964) {
            ctx->pc = 0x404974u;
            goto label_404974;
        }
    }
    ctx->pc = 0x40496Cu;
label_40496c:
    // 0x40496c: 0x1251023  subu        $v0, $t1, $a1
    ctx->pc = 0x40496cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    // 0x404970: 0x282a02d  daddu       $s4, $s4, $v0
    ctx->pc = 0x404970u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 2));
label_404974:
    // 0x404974: 0x1b4102b  sltu        $v0, $t5, $s4
    ctx->pc = 0x404974u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x404978: 0x5040ffeb  beql        $v0, $zero, . + 4 + (-0x15 << 2)
    ctx->pc = 0x404978u;
    {
        const bool branch_taken_0x404978 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x404978) {
            ctx->pc = 0x40497Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x404978u;
            // 0x40497c: 0x65080001  daddiu      $t0, $t0, 0x1 (Delay Slot)
            SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 8) + (int64_t)(int32_t)1);
            ctx->in_delay_slot = false;
            ctx->pc = 0x404928u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_404928;
        }
    }
    ctx->pc = 0x404980u;
    // 0x404980: 0x92a3029c  lbu         $v1, 0x29C($s5)
    ctx->pc = 0x404980u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 668)));
label_404984:
    // 0x404984: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x404984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x404988: 0x1462009f  bne         $v1, $v0, . + 4 + (0x9F << 2)
    ctx->pc = 0x404988u;
    {
        const bool branch_taken_0x404988 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x40498Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404988u;
        // 0x40498c: 0xdfa30010  ld          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x404988) {
            ctx->pc = 0x404C08u;
            goto label_404c08;
        }
    }
    ctx->pc = 0x404990u;
    // 0x404990: 0x8ea602b0  lw          $a2, 0x2B0($s5)
    ctx->pc = 0x404990u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 688)));
    // 0x404994: 0x141aba  dsrl        $v1, $s4, 10
    ctx->pc = 0x404994u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) >> 10);
    // 0x404998: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x404998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x40499c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x40499cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x4049a0: 0x212ba  dsrl        $v0, $v0, 10
    ctx->pc = 0x4049a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 10);
    // 0x4049a4: 0x8fa70030  lw          $a3, 0x30($sp)
    ctx->pc = 0x4049a4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4049a8: 0x629024  and         $s2, $v1, $v0
    ctx->pc = 0x4049a8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4049ac: 0x3291ffff  andi        $s1, $s4, 0xFFFF
    ctx->pc = 0x4049acu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)65535);
    // 0x4049b0: 0x10e0007f  beqz        $a3, . + 4 + (0x7F << 2)
    ctx->pc = 0x4049B0u;
    {
        const bool branch_taken_0x4049b0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x4049B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4049B0u;
        // 0x4049b4: 0xafa60038  sw          $a2, 0x38($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4049b0) {
            ctx->pc = 0x404BB0u;
            goto label_404bb0;
        }
    }
    ctx->pc = 0x4049B8u;
    // 0x4049b8: 0x8eb702a0  lw          $s7, 0x2A0($s5)
    ctx->pc = 0x4049b8u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 672)));
    // 0x4049bc: 0x71023  negu        $v0, $a3
    ctx->pc = 0x4049bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 7)));
    // 0x4049c0: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x4049c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x4049c4: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x4049c4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4049c8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x4049c8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4049cc: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x4049ccu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4049d0: 0x1060003b  beqz        $v1, . + 4 + (0x3B << 2)
    ctx->pc = 0x4049D0u;
    {
        const bool branch_taken_0x4049d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4049D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4049D0u;
        // 0x4049d4: 0x2e0982d  daddu       $s3, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4049d0) {
            ctx->pc = 0x404AC0u;
            goto label_404ac0;
        }
    }
    ctx->pc = 0x4049D8u;
    // 0x4049d8: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x4049d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x4049dc: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x4049DCu;
    {
        const bool branch_taken_0x4049dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4049E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4049DCu;
        // 0x4049e0: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4049dc) {
            ctx->pc = 0x404A74u;
            goto label_404a74;
        }
    }
    ctx->pc = 0x4049E4u;
    // 0x4049e4: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x4049E4u;
    {
        const bool branch_taken_0x4049e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4049e4) {
            ctx->pc = 0x4049E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4049E4u;
            // 0x4049e8: 0x92620000  lbu         $v0, 0x0($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x404A34u;
            goto label_404a34;
        }
    }
    ctx->pc = 0x4049ECu;
    // 0x4049ec: 0x92e20000  lbu         $v0, 0x0($s7)
    ctx->pc = 0x4049ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x4049f0: 0x145e000c  bne         $v0, $fp, . + 4 + (0xC << 2)
    ctx->pc = 0x4049F0u;
    {
        const bool branch_taken_0x4049f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 30));
        ctx->pc = 0x4049F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4049F0u;
        // 0x4049f4: 0x8fa80030  lw          $t0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4049f0) {
            ctx->pc = 0x404A24u;
            goto label_404a24;
        }
    }
    ctx->pc = 0x4049F8u;
    // 0x4049f8: 0x8ea502a8  lw          $a1, 0x2A8($s5)
    ctx->pc = 0x4049f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 680)));
    // 0x4049fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4049fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x404a00: 0x94b00000  lhu         $s0, 0x0($a1)
    ctx->pc = 0x404a00u;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x404a04: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x404A04u;
    SET_GPR_U32(ctx, 31, 0x404A0Cu);
    ctx->pc = 0x404A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x404A04u;
    // 0x404a08: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x404A04u, 0x404A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x404A0Cu;
label_404a0c:
    // 0x404a0c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x404a0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x404a10: 0x28a3a  dsrl        $s1, $v0, 8
    ctx->pc = 0x404a10u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) >> 8);
    // 0x404a14: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x404A14u;
    SET_GPR_U32(ctx, 31, 0x404A1Cu);
    ctx->pc = 0x404A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x404A14u;
    // 0x404a18: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x404A14u, 0x404A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x404A1Cu;
label_404a1c:
    // 0x404a1c: 0x2923a  dsrl        $s2, $v0, 8
    ctx->pc = 0x404a1cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) >> 8);
    // 0x404a20: 0x8fa80030  lw          $t0, 0x30($sp)
    ctx->pc = 0x404a20u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_404a24:
    // 0x404a24: 0x26f30001  addiu       $s3, $s7, 0x1
    ctx->pc = 0x404a24u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x404a28: 0x24140002  addiu       $s4, $zero, 0x2
    ctx->pc = 0x404a28u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x404a2c: 0x2516ffff  addiu       $s6, $t0, -0x1
    ctx->pc = 0x404a2cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x404a30: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x404a30u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_404a34:
    // 0x404a34: 0x545e000d  bnel        $v0, $fp, . + 4 + (0xD << 2)
    ctx->pc = 0x404A34u;
    {
        const bool branch_taken_0x404a34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 30));
        if (branch_taken_0x404a34) {
            ctx->pc = 0x404A38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x404A34u;
            // 0x404a38: 0x26940002  addiu       $s4, $s4, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x404A6Cu;
            goto label_404a6c;
        }
    }
    ctx->pc = 0x404A3Cu;
    // 0x404a3c: 0x8ea502a8  lw          $a1, 0x2A8($s5)
    ctx->pc = 0x404a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 680)));
    // 0x404a40: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x404a40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x404a44: 0x2852821  addu        $a1, $s4, $a1
    ctx->pc = 0x404a44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
    // 0x404a48: 0x94b00000  lhu         $s0, 0x0($a1)
    ctx->pc = 0x404a48u;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x404a4c: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x404A4Cu;
    SET_GPR_U32(ctx, 31, 0x404A54u);
    ctx->pc = 0x404A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x404A4Cu;
    // 0x404a50: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x404A4Cu, 0x404A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x404A54u;
label_404a54:
    // 0x404a54: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x404a54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x404a58: 0x28a3a  dsrl        $s1, $v0, 8
    ctx->pc = 0x404a58u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) >> 8);
    // 0x404a5c: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x404A5Cu;
    SET_GPR_U32(ctx, 31, 0x404A64u);
    ctx->pc = 0x404A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x404A5Cu;
    // 0x404a60: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x404A5Cu, 0x404A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x404A64u;
label_404a64:
    // 0x404a64: 0x2923a  dsrl        $s2, $v0, 8
    ctx->pc = 0x404a64u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) >> 8);
    // 0x404a68: 0x26940002  addiu       $s4, $s4, 0x2
    ctx->pc = 0x404a68u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
label_404a6c:
    // 0x404a6c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x404a6cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x404a70: 0x26d6ffff  addiu       $s6, $s6, -0x1
    ctx->pc = 0x404a70u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
label_404a74:
    // 0x404a74: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x404a74u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x404a78: 0x545e000d  bnel        $v0, $fp, . + 4 + (0xD << 2)
    ctx->pc = 0x404A78u;
    {
        const bool branch_taken_0x404a78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 30));
        if (branch_taken_0x404a78) {
            ctx->pc = 0x404A7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x404A78u;
            // 0x404a7c: 0x26940002  addiu       $s4, $s4, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x404AB0u;
            goto label_404ab0;
        }
    }
    ctx->pc = 0x404A80u;
    // 0x404a80: 0x8ea502a8  lw          $a1, 0x2A8($s5)
    ctx->pc = 0x404a80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 680)));
    // 0x404a84: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x404a84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x404a88: 0x2852821  addu        $a1, $s4, $a1
    ctx->pc = 0x404a88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
    // 0x404a8c: 0x94b00000  lhu         $s0, 0x0($a1)
    ctx->pc = 0x404a8cu;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x404a90: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x404A90u;
    SET_GPR_U32(ctx, 31, 0x404A98u);
    ctx->pc = 0x404A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x404A90u;
    // 0x404a94: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x404A90u, 0x404A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x404A98u;
label_404a98:
    // 0x404a98: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x404a98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x404a9c: 0x28a3a  dsrl        $s1, $v0, 8
    ctx->pc = 0x404a9cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) >> 8);
    // 0x404aa0: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x404AA0u;
    SET_GPR_U32(ctx, 31, 0x404AA8u);
    ctx->pc = 0x404AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x404AA0u;
    // 0x404aa4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x404AA0u, 0x404AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x404AA8u;
label_404aa8:
    // 0x404aa8: 0x2923a  dsrl        $s2, $v0, 8
    ctx->pc = 0x404aa8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) >> 8);
    // 0x404aac: 0x26940002  addiu       $s4, $s4, 0x2
    ctx->pc = 0x404aacu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
label_404ab0:
    // 0x404ab0: 0x26d6ffff  addiu       $s6, $s6, -0x1
    ctx->pc = 0x404ab0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
    // 0x404ab4: 0x12c0003e  beqz        $s6, . + 4 + (0x3E << 2)
    ctx->pc = 0x404AB4u;
    {
        const bool branch_taken_0x404ab4 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x404AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404AB4u;
        // 0x404ab8: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x404ab4) {
            ctx->pc = 0x404BB0u;
            goto label_404bb0;
        }
    }
    ctx->pc = 0x404ABCu;
    // 0x404abc: 0x0  nop
    ctx->pc = 0x404abcu;
    // NOP
label_404ac0:
    // 0x404ac0: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x404ac0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x404ac4: 0x545e000d  bnel        $v0, $fp, . + 4 + (0xD << 2)
    ctx->pc = 0x404AC4u;
    {
        const bool branch_taken_0x404ac4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 30));
        if (branch_taken_0x404ac4) {
            ctx->pc = 0x404AC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x404AC4u;
            // 0x404ac8: 0x92620001  lbu         $v0, 0x1($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x404AFCu;
            goto label_404afc;
        }
    }
    ctx->pc = 0x404ACCu;
    // 0x404acc: 0x8ea502a8  lw          $a1, 0x2A8($s5)
    ctx->pc = 0x404accu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 680)));
    // 0x404ad0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x404ad0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x404ad4: 0x2852821  addu        $a1, $s4, $a1
    ctx->pc = 0x404ad4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
    // 0x404ad8: 0x94b00000  lhu         $s0, 0x0($a1)
    ctx->pc = 0x404ad8u;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x404adc: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x404ADCu;
    SET_GPR_U32(ctx, 31, 0x404AE4u);
    ctx->pc = 0x404AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x404ADCu;
    // 0x404ae0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x404ADCu, 0x404AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x404AE4u;
label_404ae4:
    // 0x404ae4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x404ae4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x404ae8: 0x28a3a  dsrl        $s1, $v0, 8
    ctx->pc = 0x404ae8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) >> 8);
    // 0x404aec: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x404AECu;
    SET_GPR_U32(ctx, 31, 0x404AF4u);
    ctx->pc = 0x404AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x404AECu;
    // 0x404af0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x404AECu, 0x404AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x404AF4u;
label_404af4:
    // 0x404af4: 0x2923a  dsrl        $s2, $v0, 8
    ctx->pc = 0x404af4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) >> 8);
    // 0x404af8: 0x92620001  lbu         $v0, 0x1($s3)
    ctx->pc = 0x404af8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
label_404afc:
    // 0x404afc: 0x145e000c  bne         $v0, $fp, . + 4 + (0xC << 2)
    ctx->pc = 0x404AFCu;
    {
        const bool branch_taken_0x404afc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 30));
        ctx->pc = 0x404B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404AFCu;
        // 0x404b00: 0x26830002  addiu       $v1, $s4, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x404afc) {
            ctx->pc = 0x404B30u;
            goto label_404b30;
        }
    }
    ctx->pc = 0x404B04u;
    // 0x404b04: 0x8ea502a8  lw          $a1, 0x2A8($s5)
    ctx->pc = 0x404b04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 680)));
    // 0x404b08: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x404b08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x404b0c: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x404b0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x404b10: 0x94b00000  lhu         $s0, 0x0($a1)
    ctx->pc = 0x404b10u;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x404b14: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x404B14u;
    SET_GPR_U32(ctx, 31, 0x404B1Cu);
    ctx->pc = 0x404B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x404B14u;
    // 0x404b18: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x404B14u, 0x404B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x404B1Cu;
label_404b1c:
    // 0x404b1c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x404b1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x404b20: 0x28a3a  dsrl        $s1, $v0, 8
    ctx->pc = 0x404b20u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) >> 8);
    // 0x404b24: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x404B24u;
    SET_GPR_U32(ctx, 31, 0x404B2Cu);
    ctx->pc = 0x404B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x404B24u;
    // 0x404b28: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x404B24u, 0x404B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x404B2Cu;
label_404b2c:
    // 0x404b2c: 0x2923a  dsrl        $s2, $v0, 8
    ctx->pc = 0x404b2cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) >> 8);
label_404b30:
    // 0x404b30: 0x92620002  lbu         $v0, 0x2($s3)
    ctx->pc = 0x404b30u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x404b34: 0x145e000c  bne         $v0, $fp, . + 4 + (0xC << 2)
    ctx->pc = 0x404B34u;
    {
        const bool branch_taken_0x404b34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 30));
        ctx->pc = 0x404B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404B34u;
        // 0x404b38: 0x26830004  addiu       $v1, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x404b34) {
            ctx->pc = 0x404B68u;
            goto label_404b68;
        }
    }
    ctx->pc = 0x404B3Cu;
    // 0x404b3c: 0x8ea502a8  lw          $a1, 0x2A8($s5)
    ctx->pc = 0x404b3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 680)));
    // 0x404b40: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x404b40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x404b44: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x404b44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x404b48: 0x94b00000  lhu         $s0, 0x0($a1)
    ctx->pc = 0x404b48u;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x404b4c: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x404B4Cu;
    SET_GPR_U32(ctx, 31, 0x404B54u);
    ctx->pc = 0x404B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x404B4Cu;
    // 0x404b50: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x404B4Cu, 0x404B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x404B54u;
label_404b54:
    // 0x404b54: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x404b54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x404b58: 0x28a3a  dsrl        $s1, $v0, 8
    ctx->pc = 0x404b58u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) >> 8);
    // 0x404b5c: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x404B5Cu;
    SET_GPR_U32(ctx, 31, 0x404B64u);
    ctx->pc = 0x404B60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x404B5Cu;
    // 0x404b60: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x404B5Cu, 0x404B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x404B64u;
label_404b64:
    // 0x404b64: 0x2923a  dsrl        $s2, $v0, 8
    ctx->pc = 0x404b64u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) >> 8);
label_404b68:
    // 0x404b68: 0x92620003  lbu         $v0, 0x3($s3)
    ctx->pc = 0x404b68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 3)));
    // 0x404b6c: 0x145e000c  bne         $v0, $fp, . + 4 + (0xC << 2)
    ctx->pc = 0x404B6Cu;
    {
        const bool branch_taken_0x404b6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 30));
        ctx->pc = 0x404B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404B6Cu;
        // 0x404b70: 0x26830006  addiu       $v1, $s4, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x404b6c) {
            ctx->pc = 0x404BA0u;
            goto label_404ba0;
        }
    }
    ctx->pc = 0x404B74u;
    // 0x404b74: 0x8ea502a8  lw          $a1, 0x2A8($s5)
    ctx->pc = 0x404b74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 680)));
    // 0x404b78: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x404b78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x404b7c: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x404b7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x404b80: 0x94b00000  lhu         $s0, 0x0($a1)
    ctx->pc = 0x404b80u;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x404b84: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x404B84u;
    SET_GPR_U32(ctx, 31, 0x404B8Cu);
    ctx->pc = 0x404B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x404B84u;
    // 0x404b88: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x404B84u, 0x404B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x404B8Cu;
label_404b8c:
    // 0x404b8c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x404b8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x404b90: 0x28a3a  dsrl        $s1, $v0, 8
    ctx->pc = 0x404b90u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) >> 8);
    // 0x404b94: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x404B94u;
    SET_GPR_U32(ctx, 31, 0x404B9Cu);
    ctx->pc = 0x404B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x404B94u;
    // 0x404b98: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x404B94u, 0x404B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x404B9Cu;
label_404b9c:
    // 0x404b9c: 0x2923a  dsrl        $s2, $v0, 8
    ctx->pc = 0x404b9cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) >> 8);
label_404ba0:
    // 0x404ba0: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x404ba0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x404ba4: 0x26d6fffc  addiu       $s6, $s6, -0x4
    ctx->pc = 0x404ba4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967292));
    // 0x404ba8: 0x16c0ffc5  bnez        $s6, . + 4 + (-0x3B << 2)
    ctx->pc = 0x404BA8u;
    {
        const bool branch_taken_0x404ba8 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x404BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404BA8u;
        // 0x404bac: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x404ba8) {
            ctx->pc = 0x404AC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_404ac0;
        }
    }
    ctx->pc = 0x404BB0u;
label_404bb0:
    // 0x404bb0: 0x8fa90038  lw          $t1, 0x38($sp)
    ctx->pc = 0x404bb0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x404bb4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x404bb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x404bb8: 0x95300002  lhu         $s0, 0x2($t1)
    ctx->pc = 0x404bb8u;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 2)));
    // 0x404bbc: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x404BBCu;
    SET_GPR_U32(ctx, 31, 0x404BC4u);
    ctx->pc = 0x404BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x404BBCu;
    // 0x404bc0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x404BBCu, 0x404BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x404BC4u;
label_404bc4:
    // 0x404bc4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x404bc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x404bc8: 0x288fa  dsrl        $s1, $v0, 3
    ctx->pc = 0x404bc8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) >> 3);
    // 0x404bcc: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x404BCCu;
    SET_GPR_U32(ctx, 31, 0x404BD4u);
    ctx->pc = 0x404BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x404BCCu;
    // 0x404bd0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x404BCCu, 0x404BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x404BD4u;
label_404bd4:
    // 0x404bd4: 0x290fa  dsrl        $s2, $v0, 3
    ctx->pc = 0x404bd4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) >> 3);
    // 0x404bd8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x404bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x404bdc: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x404bdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x404be0: 0x212ba  dsrl        $v0, $v0, 10
    ctx->pc = 0x404be0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 10);
    // 0x404be4: 0x52102b  sltu        $v0, $v0, $s2
    ctx->pc = 0x404be4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x404be8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x404BE8u;
    {
        const bool branch_taken_0x404be8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x404BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404BE8u;
        // 0x404bec: 0xdfa30010  ld          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x404be8) {
            ctx->pc = 0x404C00u;
            goto label_404c00;
        }
    }
    ctx->pc = 0x404BF0u;
    // 0x404bf0: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x404bf0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x404bf4: 0x14a07a  dsrl        $s4, $s4, 1
    ctx->pc = 0x404bf4u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) >> 1);
    // 0x404bf8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x404BF8u;
    {
        const bool branch_taken_0x404bf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x404BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404BF8u;
        // 0x404bfc: 0x283102b  sltu        $v0, $s4, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x404bf8) {
            ctx->pc = 0x404C0Cu;
            goto label_404c0c;
        }
    }
    ctx->pc = 0x404C00u;
label_404c00:
    // 0x404c00: 0x1212b8  dsll        $v0, $s2, 10
    ctx->pc = 0x404c00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << 10);
    // 0x404c04: 0x51a02d  daddu       $s4, $v0, $s1
    ctx->pc = 0x404c04u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 17));
label_404c08:
    // 0x404c08: 0x283102b  sltu        $v0, $s4, $v1
    ctx->pc = 0x404c08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_404c0c:
    // 0x404c0c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x404C0Cu;
    {
        const bool branch_taken_0x404c0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x404C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404C0Cu;
        // 0x404c10: 0x8fa50020  lw          $a1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x404c0c) {
            ctx->pc = 0x404C24u;
            goto label_404c24;
        }
    }
    ctx->pc = 0x404C14u;
    // 0x404c14: 0x8ea401c0  lw          $a0, 0x1C0($s5)
    ctx->pc = 0x404c14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 448)));
    // 0x404c18: 0xffb40010  sd          $s4, 0x10($sp)
    ctx->pc = 0x404c18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 20));
    // 0x404c1c: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x404c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
label_404c20:
    // 0x404c20: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x404c20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_404c24:
    // 0x404c24: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x404c24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x404c28: 0x14a20053  bne         $a1, $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x404C28u;
    {
        const bool branch_taken_0x404c28 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x404C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404C28u;
        // 0x404c2c: 0x8fa30020  lw          $v1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x404c28) {
            ctx->pc = 0x404D78u;
            goto label_404d78;
        }
    }
    ctx->pc = 0x404C30u;
    // 0x404c30: 0x8fa6000c  lw          $a2, 0xC($sp)
    ctx->pc = 0x404c30u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x404c34: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x404c34u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x404c38: 0x8fa90004  lw          $t1, 0x4($sp)
    ctx->pc = 0x404c38u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x404c3c: 0x8ea801c4  lw          $t0, 0x1C4($s5)
    ctx->pc = 0x404c3cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 452)));
    // 0x404c40: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x404c40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x404c44: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x404c44u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x404c48: 0xdfa30028  ld          $v1, 0x28($sp)
    ctx->pc = 0x404c48u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x404c4c: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x404c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x404c50: 0x25020001  addiu       $v0, $t0, 0x1
    ctx->pc = 0x404c50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x404c54: 0x10600045  beqz        $v1, . + 4 + (0x45 << 2)
    ctx->pc = 0x404C54u;
    {
        const bool branch_taken_0x404c54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x404C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404C54u;
        // 0x404c58: 0xafa9003c  sw          $t1, 0x3C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x404c54) {
            ctx->pc = 0x404D6Cu;
            goto label_404d6c;
        }
    }
    ctx->pc = 0x404C5Cu;
    // 0x404c5c: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x404c5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x404c60: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x404c60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x404c64: 0xdfa90028  ld          $t1, 0x28($sp)
    ctx->pc = 0x404c64u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x404c68: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x404c68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x404c6c: 0x1920001d  blez        $t1, . + 4 + (0x1D << 2)
    ctx->pc = 0x404C6Cu;
    {
        const bool branch_taken_0x404c6c = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x404C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404C6Cu;
        // 0x404c70: 0x8fa40040  lw          $a0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x404c6c) {
            ctx->pc = 0x404CE4u;
            goto label_404ce4;
        }
    }
    ctx->pc = 0x404C74u;
    // 0x404c74: 0x50600027  beql        $v1, $zero, . + 4 + (0x27 << 2)
    ctx->pc = 0x404C74u;
    {
        const bool branch_taken_0x404c74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x404c74) {
            ctx->pc = 0x404C78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x404C74u;
            // 0x404c78: 0x90a20000  lbu         $v0, 0x0($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x404D14u;
            goto label_404d14;
        }
    }
    ctx->pc = 0x404C7Cu;
    // 0x404c7c: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x404c7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x404c80: 0x54400019  bnel        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x404C80u;
    {
        const bool branch_taken_0x404c80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x404c80) {
            ctx->pc = 0x404C84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x404C80u;
            // 0x404c84: 0x90820000  lbu         $v0, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x404CE8u;
            goto label_404ce8;
        }
    }
    ctx->pc = 0x404C88u;
    // 0x404c88: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x404c88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x404c8c: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x404C8Cu;
    {
        const bool branch_taken_0x404c8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x404c8c) {
            ctx->pc = 0x404C90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x404C8Cu;
            // 0x404c90: 0x90820000  lbu         $v0, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x404CC8u;
            goto label_404cc8;
        }
    }
    ctx->pc = 0x404C94u;
    // 0x404c94: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x404c94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x404c98: 0x25060002  addiu       $a2, $t0, 0x2
    ctx->pc = 0x404c98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
    // 0x404c9c: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x404c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x404ca0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x404ca0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x404ca4: 0x90620001  lbu         $v0, 0x1($v1)
    ctx->pc = 0x404ca4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x404ca8: 0x90830001  lbu         $v1, 0x1($a0)
    ctx->pc = 0x404ca8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x404cac: 0x8fa5000c  lw          $a1, 0xC($sp)
    ctx->pc = 0x404cacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x404cb0: 0x8fa90004  lw          $t1, 0x4($sp)
    ctx->pc = 0x404cb0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x404cb4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x404cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x404cb8: 0x24a40002  addiu       $a0, $a1, 0x2
    ctx->pc = 0x404cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x404cbc: 0xa1020001  sb          $v0, 0x1($t0)
    ctx->pc = 0x404cbcu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x404cc0: 0x25250002  addiu       $a1, $t1, 0x2
    ctx->pc = 0x404cc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
    // 0x404cc4: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x404cc4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_404cc8:
    // 0x404cc8: 0x64e70001  daddiu      $a3, $a3, 0x1
    ctx->pc = 0x404cc8u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 7) + (int64_t)(int32_t)1);
    // 0x404ccc: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x404cccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x404cd0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x404cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x404cd4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x404cd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x404cd8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x404cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x404cdc: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x404cdcu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x404ce0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x404ce0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_404ce4:
    // 0x404ce4: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x404ce4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_404ce8:
    // 0x404ce8: 0x64e70001  daddiu      $a3, $a3, 0x1
    ctx->pc = 0x404ce8u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 7) + (int64_t)(int32_t)1);
    // 0x404cec: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x404cecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x404cf0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x404cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x404cf4: 0xdfa90028  ld          $t1, 0x28($sp)
    ctx->pc = 0x404cf4u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x404cf8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x404cf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x404cfc: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x404cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x404d00: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x404d00u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x404d04: 0xe9402b  sltu        $t0, $a3, $t1
    ctx->pc = 0x404d04u;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x404d08: 0x11000018  beqz        $t0, . + 4 + (0x18 << 2)
    ctx->pc = 0x404D08u;
    {
        const bool branch_taken_0x404d08 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x404D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404D08u;
        // 0x404d0c: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x404d08) {
            ctx->pc = 0x404D6Cu;
            goto label_404d6c;
        }
    }
    ctx->pc = 0x404D10u;
label_404d10:
    // 0x404d10: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x404d10u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_404d14:
    // 0x404d14: 0x64e70004  daddiu      $a3, $a3, 0x4
    ctx->pc = 0x404d14u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 7) + (int64_t)(int32_t)4);
    // 0x404d18: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x404d18u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x404d1c: 0xdfa90028  ld          $t1, 0x28($sp)
    ctx->pc = 0x404d1cu;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x404d20: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x404d20u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x404d24: 0xa0c30000  sb          $v1, 0x0($a2)
    ctx->pc = 0x404d24u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x404d28: 0xe9402b  sltu        $t0, $a3, $t1
    ctx->pc = 0x404d28u;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x404d2c: 0x90a30001  lbu         $v1, 0x1($a1)
    ctx->pc = 0x404d2cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x404d30: 0x90820001  lbu         $v0, 0x1($a0)
    ctx->pc = 0x404d30u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x404d34: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x404d34u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x404d38: 0xa0c20001  sb          $v0, 0x1($a2)
    ctx->pc = 0x404d38u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x404d3c: 0x90a20002  lbu         $v0, 0x2($a1)
    ctx->pc = 0x404d3cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x404d40: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x404d40u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x404d44: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x404d44u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x404d48: 0xa0c30002  sb          $v1, 0x2($a2)
    ctx->pc = 0x404d48u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x404d4c: 0x90820003  lbu         $v0, 0x3($a0)
    ctx->pc = 0x404d4cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x404d50: 0x90a30003  lbu         $v1, 0x3($a1)
    ctx->pc = 0x404d50u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
    // 0x404d54: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x404d54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x404d58: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x404d58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x404d5c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x404d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x404d60: 0xa0c20003  sb          $v0, 0x3($a2)
    ctx->pc = 0x404d60u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x404d64: 0x1500ffea  bnez        $t0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x404D64u;
    {
        const bool branch_taken_0x404d64 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x404D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404D64u;
        // 0x404d68: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x404d64) {
            ctx->pc = 0x404D10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_404d10;
        }
    }
    ctx->pc = 0x404D6Cu;
label_404d6c:
    // 0x404d6c: 0x8ea201c4  lw          $v0, 0x1C4($s5)
    ctx->pc = 0x404d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 452)));
    // 0x404d70: 0x10000175  b           . + 4 + (0x175 << 2)
    ctx->pc = 0x404D70u;
    {
        const bool branch_taken_0x404d70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x404D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404D70u;
        // 0x404d74: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x404d70) {
            ctx->pc = 0x405348u;
            goto label_405348;
        }
    }
    ctx->pc = 0x404D78u;
label_404d78:
    // 0x404d78: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x404d78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x404d7c: 0x10400172  beqz        $v0, . + 4 + (0x172 << 2)
    ctx->pc = 0x404D7Cu;
    {
        const bool branch_taken_0x404d7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x404D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404D7Cu;
        // 0x404d80: 0x8fa4000c  lw          $a0, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x404d7c) {
            ctx->pc = 0x405348u;
            goto label_405348;
        }
    }
    ctx->pc = 0x404D84u;
    // 0x404d84: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x404d84u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x404d88: 0x92a3029c  lbu         $v1, 0x29C($s5)
    ctx->pc = 0x404d88u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 668)));
    // 0x404d8c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x404d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x404d90: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x404d90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x404d94: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x404d94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x404d98: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x404d98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x404d9c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x404d9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x404da0: 0xdfa80010  ld          $t0, 0x10($sp)
    ctx->pc = 0x404da0u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x404da4: 0x8ea501c4  lw          $a1, 0x1C4($s5)
    ctx->pc = 0x404da4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 452)));
    // 0x404da8: 0xafa6003c  sw          $a2, 0x3C($sp)
    ctx->pc = 0x404da8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 6));
    // 0x404dac: 0x146200a4  bne         $v1, $v0, . + 4 + (0xA4 << 2)
    ctx->pc = 0x404DACu;
    {
        const bool branch_taken_0x404dac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x404DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404DACu;
        // 0x404db0: 0xafa50048  sw          $a1, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x404dac) {
            ctx->pc = 0x405040u;
            goto label_405040;
        }
    }
    ctx->pc = 0x404DB4u;
    // 0x404db4: 0x81aba  dsrl        $v1, $t0, 10
    ctx->pc = 0x404db4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) >> 10);
    // 0x404db8: 0x3111ffff  andi        $s1, $t0, 0xFFFF
    ctx->pc = 0x404db8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x404dbc: 0x8ea702b0  lw          $a3, 0x2B0($s5)
    ctx->pc = 0x404dbcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 688)));
    // 0x404dc0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x404dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x404dc4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x404dc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x404dc8: 0x212ba  dsrl        $v0, $v0, 10
    ctx->pc = 0x404dc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 10);
    // 0x404dcc: 0x8fa80030  lw          $t0, 0x30($sp)
    ctx->pc = 0x404dccu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x404dd0: 0x629024  and         $s2, $v1, $v0
    ctx->pc = 0x404dd0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x404dd4: 0x11000084  beqz        $t0, . + 4 + (0x84 << 2)
    ctx->pc = 0x404DD4u;
    {
        const bool branch_taken_0x404dd4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x404DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404DD4u;
        // 0x404dd8: 0xafa70038  sw          $a3, 0x38($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x404dd4) {
            ctx->pc = 0x404FE8u;
            goto label_404fe8;
        }
    }
    ctx->pc = 0x404DDCu;
    // 0x404ddc: 0x8eb702a0  lw          $s7, 0x2A0($s5)
    ctx->pc = 0x404ddcu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 672)));
    // 0x404de0: 0x81023  negu        $v0, $t0
    ctx->pc = 0x404de0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 8)));
    // 0x404de4: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x404de4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x404de8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x404de8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x404dec: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x404decu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x404df0: 0x1060003d  beqz        $v1, . + 4 + (0x3D << 2)
    ctx->pc = 0x404DF0u;
    {
        const bool branch_taken_0x404df0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x404DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404DF0u;
        // 0x404df4: 0x2e0982d  daddu       $s3, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x404df0) {
            ctx->pc = 0x404EE8u;
            goto label_404ee8;
        }
    }
    ctx->pc = 0x404DF8u;
    // 0x404df8: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x404df8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x404dfc: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x404DFCu;
    {
        const bool branch_taken_0x404dfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x404E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404DFCu;
        // 0x404e00: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x404dfc) {
            ctx->pc = 0x404E98u;
            goto label_404e98;
        }
    }
    ctx->pc = 0x404E04u;
    // 0x404e04: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x404E04u;
    {
        const bool branch_taken_0x404e04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x404E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404E04u;
        // 0x404e08: 0x24090002  addiu       $t1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x404e04) {
            ctx->pc = 0x404E50u;
            goto label_404e50;
        }
    }
    ctx->pc = 0x404E0Cu;
    // 0x404e0c: 0x92e20000  lbu         $v0, 0x0($s7)
    ctx->pc = 0x404e0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x404e10: 0x1449000c  bne         $v0, $t1, . + 4 + (0xC << 2)
    ctx->pc = 0x404E10u;
    {
        const bool branch_taken_0x404e10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 9));
        ctx->pc = 0x404E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404E10u;
        // 0x404e14: 0x8fa20030  lw          $v0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x404e10) {
            ctx->pc = 0x404E44u;
            goto label_404e44;
        }
    }
    ctx->pc = 0x404E18u;
    // 0x404e18: 0x8ea502a8  lw          $a1, 0x2A8($s5)
    ctx->pc = 0x404e18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 680)));
    // 0x404e1c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x404e1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x404e20: 0x94b00000  lhu         $s0, 0x0($a1)
    ctx->pc = 0x404e20u;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x404e24: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x404E24u;
    SET_GPR_U32(ctx, 31, 0x404E2Cu);
    ctx->pc = 0x404E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x404E24u;
    // 0x404e28: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x404E24u, 0x404E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x404E2Cu;
label_404e2c:
    // 0x404e2c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x404e2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x404e30: 0x28a3a  dsrl        $s1, $v0, 8
    ctx->pc = 0x404e30u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) >> 8);
    // 0x404e34: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x404E34u;
    SET_GPR_U32(ctx, 31, 0x404E3Cu);
    ctx->pc = 0x404E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x404E34u;
    // 0x404e38: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x404E34u, 0x404E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x404E3Cu;
label_404e3c:
    // 0x404e3c: 0x2923a  dsrl        $s2, $v0, 8
    ctx->pc = 0x404e3cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) >> 8);
    // 0x404e40: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x404e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_404e44:
    // 0x404e44: 0x26f30001  addiu       $s3, $s7, 0x1
    ctx->pc = 0x404e44u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x404e48: 0x24140002  addiu       $s4, $zero, 0x2
    ctx->pc = 0x404e48u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x404e4c: 0x2456ffff  addiu       $s6, $v0, -0x1
    ctx->pc = 0x404e4cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_404e50:
    // 0x404e50: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x404e50u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x404e54: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x404e54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x404e58: 0x5443000d  bnel        $v0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x404E58u;
    {
        const bool branch_taken_0x404e58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x404e58) {
            ctx->pc = 0x404E5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x404E58u;
            // 0x404e5c: 0x26940002  addiu       $s4, $s4, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x404E90u;
            goto label_404e90;
        }
    }
    ctx->pc = 0x404E60u;
    // 0x404e60: 0x8ea502a8  lw          $a1, 0x2A8($s5)
    ctx->pc = 0x404e60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 680)));
    // 0x404e64: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x404e64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x404e68: 0x2852821  addu        $a1, $s4, $a1
    ctx->pc = 0x404e68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
    // 0x404e6c: 0x94b00000  lhu         $s0, 0x0($a1)
    ctx->pc = 0x404e6cu;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x404e70: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x404E70u;
    SET_GPR_U32(ctx, 31, 0x404E78u);
    ctx->pc = 0x404E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x404E70u;
    // 0x404e74: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x404E70u, 0x404E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x404E78u;
label_404e78:
    // 0x404e78: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x404e78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x404e7c: 0x28a3a  dsrl        $s1, $v0, 8
    ctx->pc = 0x404e7cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) >> 8);
    // 0x404e80: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x404E80u;
    SET_GPR_U32(ctx, 31, 0x404E88u);
    ctx->pc = 0x404E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x404E80u;
    // 0x404e84: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x404E80u, 0x404E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x404E88u;
label_404e88:
    // 0x404e88: 0x2923a  dsrl        $s2, $v0, 8
    ctx->pc = 0x404e88u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) >> 8);
    // 0x404e8c: 0x26940002  addiu       $s4, $s4, 0x2
    ctx->pc = 0x404e8cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
label_404e90:
    // 0x404e90: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x404e90u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x404e94: 0x26d6ffff  addiu       $s6, $s6, -0x1
    ctx->pc = 0x404e94u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
label_404e98:
    // 0x404e98: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x404e98u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x404e9c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x404e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x404ea0: 0x5444000d  bnel        $v0, $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x404EA0u;
    {
        const bool branch_taken_0x404ea0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x404ea0) {
            ctx->pc = 0x404EA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x404EA0u;
            // 0x404ea4: 0x26940002  addiu       $s4, $s4, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x404ED8u;
            goto label_404ed8;
        }
    }
    ctx->pc = 0x404EA8u;
    // 0x404ea8: 0x8ea502a8  lw          $a1, 0x2A8($s5)
    ctx->pc = 0x404ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 680)));
    // 0x404eac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x404eacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x404eb0: 0x2852821  addu        $a1, $s4, $a1
    ctx->pc = 0x404eb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
    // 0x404eb4: 0x94b00000  lhu         $s0, 0x0($a1)
    ctx->pc = 0x404eb4u;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x404eb8: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x404EB8u;
    SET_GPR_U32(ctx, 31, 0x404EC0u);
    ctx->pc = 0x404EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x404EB8u;
    // 0x404ebc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x404EB8u, 0x404EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x404EC0u;
label_404ec0:
    // 0x404ec0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x404ec0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x404ec4: 0x28a3a  dsrl        $s1, $v0, 8
    ctx->pc = 0x404ec4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) >> 8);
    // 0x404ec8: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x404EC8u;
    SET_GPR_U32(ctx, 31, 0x404ED0u);
    ctx->pc = 0x404ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x404EC8u;
    // 0x404ecc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x404EC8u, 0x404ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x404ED0u;
label_404ed0:
    // 0x404ed0: 0x2923a  dsrl        $s2, $v0, 8
    ctx->pc = 0x404ed0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) >> 8);
    // 0x404ed4: 0x26940002  addiu       $s4, $s4, 0x2
    ctx->pc = 0x404ed4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
label_404ed8:
    // 0x404ed8: 0x26d6ffff  addiu       $s6, $s6, -0x1
    ctx->pc = 0x404ed8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
    // 0x404edc: 0x12c00042  beqz        $s6, . + 4 + (0x42 << 2)
    ctx->pc = 0x404EDCu;
    {
        const bool branch_taken_0x404edc = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x404EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404EDCu;
        // 0x404ee0: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x404edc) {
            ctx->pc = 0x404FE8u;
            goto label_404fe8;
        }
    }
    ctx->pc = 0x404EE4u;
    // 0x404ee4: 0x0  nop
    ctx->pc = 0x404ee4u;
    // NOP
label_404ee8:
    // 0x404ee8: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x404ee8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x404eec: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x404eecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x404ef0: 0x5445000d  bnel        $v0, $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x404EF0u;
    {
        const bool branch_taken_0x404ef0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x404ef0) {
            ctx->pc = 0x404EF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x404EF0u;
            // 0x404ef4: 0x92620001  lbu         $v0, 0x1($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x404F28u;
            goto label_404f28;
        }
    }
    ctx->pc = 0x404EF8u;
    // 0x404ef8: 0x8ea502a8  lw          $a1, 0x2A8($s5)
    ctx->pc = 0x404ef8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 680)));
    // 0x404efc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x404efcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x404f00: 0x2852821  addu        $a1, $s4, $a1
    ctx->pc = 0x404f00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
    // 0x404f04: 0x94b00000  lhu         $s0, 0x0($a1)
    ctx->pc = 0x404f04u;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x404f08: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x404F08u;
    SET_GPR_U32(ctx, 31, 0x404F10u);
    ctx->pc = 0x404F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x404F08u;
    // 0x404f0c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x404F08u, 0x404F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x404F10u;
label_404f10:
    // 0x404f10: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x404f10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x404f14: 0x28a3a  dsrl        $s1, $v0, 8
    ctx->pc = 0x404f14u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) >> 8);
    // 0x404f18: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x404F18u;
    SET_GPR_U32(ctx, 31, 0x404F20u);
    ctx->pc = 0x404F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x404F18u;
    // 0x404f1c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x404F18u, 0x404F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x404F20u;
label_404f20:
    // 0x404f20: 0x2923a  dsrl        $s2, $v0, 8
    ctx->pc = 0x404f20u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) >> 8);
    // 0x404f24: 0x92620001  lbu         $v0, 0x1($s3)
    ctx->pc = 0x404f24u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
label_404f28:
    // 0x404f28: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x404f28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x404f2c: 0x1446000c  bne         $v0, $a2, . + 4 + (0xC << 2)
    ctx->pc = 0x404F2Cu;
    {
        const bool branch_taken_0x404f2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        ctx->pc = 0x404F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404F2Cu;
        // 0x404f30: 0x26830002  addiu       $v1, $s4, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x404f2c) {
            ctx->pc = 0x404F60u;
            goto label_404f60;
        }
    }
    ctx->pc = 0x404F34u;
    // 0x404f34: 0x8ea502a8  lw          $a1, 0x2A8($s5)
    ctx->pc = 0x404f34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 680)));
    // 0x404f38: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x404f38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x404f3c: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x404f3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x404f40: 0x94b00000  lhu         $s0, 0x0($a1)
    ctx->pc = 0x404f40u;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x404f44: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x404F44u;
    SET_GPR_U32(ctx, 31, 0x404F4Cu);
    ctx->pc = 0x404F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x404F44u;
    // 0x404f48: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x404F44u, 0x404F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x404F4Cu;
label_404f4c:
    // 0x404f4c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x404f4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x404f50: 0x28a3a  dsrl        $s1, $v0, 8
    ctx->pc = 0x404f50u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) >> 8);
    // 0x404f54: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x404F54u;
    SET_GPR_U32(ctx, 31, 0x404F5Cu);
    ctx->pc = 0x404F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x404F54u;
    // 0x404f58: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x404F54u, 0x404F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x404F5Cu;
label_404f5c:
    // 0x404f5c: 0x2923a  dsrl        $s2, $v0, 8
    ctx->pc = 0x404f5cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) >> 8);
label_404f60:
    // 0x404f60: 0x92620002  lbu         $v0, 0x2($s3)
    ctx->pc = 0x404f60u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x404f64: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x404f64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x404f68: 0x1447000c  bne         $v0, $a3, . + 4 + (0xC << 2)
    ctx->pc = 0x404F68u;
    {
        const bool branch_taken_0x404f68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        ctx->pc = 0x404F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404F68u;
        // 0x404f6c: 0x26830004  addiu       $v1, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x404f68) {
            ctx->pc = 0x404F9Cu;
            goto label_404f9c;
        }
    }
    ctx->pc = 0x404F70u;
    // 0x404f70: 0x8ea502a8  lw          $a1, 0x2A8($s5)
    ctx->pc = 0x404f70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 680)));
    // 0x404f74: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x404f74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x404f78: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x404f78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x404f7c: 0x94b00000  lhu         $s0, 0x0($a1)
    ctx->pc = 0x404f7cu;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x404f80: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x404F80u;
    SET_GPR_U32(ctx, 31, 0x404F88u);
    ctx->pc = 0x404F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x404F80u;
    // 0x404f84: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x404F80u, 0x404F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x404F88u;
label_404f88:
    // 0x404f88: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x404f88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x404f8c: 0x28a3a  dsrl        $s1, $v0, 8
    ctx->pc = 0x404f8cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) >> 8);
    // 0x404f90: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x404F90u;
    SET_GPR_U32(ctx, 31, 0x404F98u);
    ctx->pc = 0x404F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x404F90u;
    // 0x404f94: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x404F90u, 0x404F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x404F98u;
label_404f98:
    // 0x404f98: 0x2923a  dsrl        $s2, $v0, 8
    ctx->pc = 0x404f98u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) >> 8);
label_404f9c:
    // 0x404f9c: 0x92620003  lbu         $v0, 0x3($s3)
    ctx->pc = 0x404f9cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 3)));
    // 0x404fa0: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x404fa0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x404fa4: 0x1448000c  bne         $v0, $t0, . + 4 + (0xC << 2)
    ctx->pc = 0x404FA4u;
    {
        const bool branch_taken_0x404fa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 8));
        ctx->pc = 0x404FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404FA4u;
        // 0x404fa8: 0x26830006  addiu       $v1, $s4, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x404fa4) {
            ctx->pc = 0x404FD8u;
            goto label_404fd8;
        }
    }
    ctx->pc = 0x404FACu;
    // 0x404fac: 0x8ea502a8  lw          $a1, 0x2A8($s5)
    ctx->pc = 0x404facu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 680)));
    // 0x404fb0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x404fb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x404fb4: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x404fb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x404fb8: 0x94b00000  lhu         $s0, 0x0($a1)
    ctx->pc = 0x404fb8u;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x404fbc: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x404FBCu;
    SET_GPR_U32(ctx, 31, 0x404FC4u);
    ctx->pc = 0x404FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x404FBCu;
    // 0x404fc0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x404FBCu, 0x404FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x404FC4u;
label_404fc4:
    // 0x404fc4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x404fc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x404fc8: 0x28a3a  dsrl        $s1, $v0, 8
    ctx->pc = 0x404fc8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) >> 8);
    // 0x404fcc: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x404FCCu;
    SET_GPR_U32(ctx, 31, 0x404FD4u);
    ctx->pc = 0x404FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x404FCCu;
    // 0x404fd0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x404FCCu, 0x404FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x404FD4u;
label_404fd4:
    // 0x404fd4: 0x2923a  dsrl        $s2, $v0, 8
    ctx->pc = 0x404fd4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) >> 8);
label_404fd8:
    // 0x404fd8: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x404fd8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x404fdc: 0x26d6fffc  addiu       $s6, $s6, -0x4
    ctx->pc = 0x404fdcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967292));
    // 0x404fe0: 0x16c0ffc1  bnez        $s6, . + 4 + (-0x3F << 2)
    ctx->pc = 0x404FE0u;
    {
        const bool branch_taken_0x404fe0 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x404FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x404FE0u;
        // 0x404fe4: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x404fe0) {
            ctx->pc = 0x404EE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_404ee8;
        }
    }
    ctx->pc = 0x404FE8u;
label_404fe8:
    // 0x404fe8: 0x8fa90038  lw          $t1, 0x38($sp)
    ctx->pc = 0x404fe8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x404fec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x404fecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x404ff0: 0x95300004  lhu         $s0, 0x4($t1)
    ctx->pc = 0x404ff0u;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x404ff4: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x404FF4u;
    SET_GPR_U32(ctx, 31, 0x404FFCu);
    ctx->pc = 0x404FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x404FF4u;
    // 0x404ff8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x404FF4u, 0x404FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x404FFCu;
label_404ffc:
    // 0x404ffc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x404ffcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x405000: 0x288fa  dsrl        $s1, $v0, 3
    ctx->pc = 0x405000u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) >> 3);
    // 0x405004: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x405004u;
    SET_GPR_U32(ctx, 31, 0x40500Cu);
    ctx->pc = 0x405008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x405004u;
    // 0x405008: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x405004u, 0x40500Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40500Cu;
label_40500c:
    // 0x40500c: 0x290fa  dsrl        $s2, $v0, 3
    ctx->pc = 0x40500cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) >> 3);
    // 0x405010: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x405010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x405014: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x405014u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x405018: 0x212ba  dsrl        $v0, $v0, 10
    ctx->pc = 0x405018u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 10);
    // 0x40501c: 0x52102b  sltu        $v0, $v0, $s2
    ctx->pc = 0x40501cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x405020: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x405020u;
    {
        const bool branch_taken_0x405020 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x405024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405020u;
        // 0x405024: 0x8fa20048  lw          $v0, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x405020) {
            ctx->pc = 0x405038u;
            goto label_405038;
        }
    }
    ctx->pc = 0x405028u;
    // 0x405028: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x405028u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x40502c: 0x8407a  dsrl        $t0, $t0, 1
    ctx->pc = 0x40502cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) >> 1);
    // 0x405030: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x405030u;
    {
        const bool branch_taken_0x405030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x405034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405030u;
        // 0x405034: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x405030) {
            ctx->pc = 0x405048u;
            goto label_405048;
        }
    }
    ctx->pc = 0x405038u;
label_405038:
    // 0x405038: 0x1212b8  dsll        $v0, $s2, 10
    ctx->pc = 0x405038u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << 10);
    // 0x40503c: 0x51402d  daddu       $t0, $v0, $s1
    ctx->pc = 0x40503cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 17));
label_405040:
    // 0x405040: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x405040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x405044: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x405044u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_405048:
    // 0x405048: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x405048u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x40504c: 0x24090100  addiu       $t1, $zero, 0x100
    ctx->pc = 0x40504cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x405050: 0x8fa5003c  lw          $a1, 0x3C($sp)
    ctx->pc = 0x405050u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x405054: 0x24460001  addiu       $a2, $v0, 0x1
    ctx->pc = 0x405054u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_405058:
    // 0x405058: 0xdfa30028  ld          $v1, 0x28($sp)
    ctx->pc = 0x405058u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x40505c: 0xe3102b  sltu        $v0, $a3, $v1
    ctx->pc = 0x40505cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x405060: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x405060u;
    {
        const bool branch_taken_0x405060 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x405060) {
            ctx->pc = 0x405064u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x405060u;
            // 0x405064: 0x92a3029c  lbu         $v1, 0x29C($s5) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 668)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4050B0u;
            goto label_4050b0;
        }
    }
    ctx->pc = 0x405068u;
    // 0x405068: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x405068u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x40506c: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x40506cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x405070: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x405070u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x405074: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x405074u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x405078: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x405078u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x40507c: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x40507cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x405080: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x405080u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x405084: 0x28620080  slti        $v0, $v1, 0x80
    ctx->pc = 0x405084u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x405088: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x405088u;
    {
        const bool branch_taken_0x405088 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x40508Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405088u;
        // 0x40508c: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x405088) {
            ctx->pc = 0x405098u;
            goto label_405098;
        }
    }
    ctx->pc = 0x405090u;
    // 0x405090: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x405090u;
    {
        const bool branch_taken_0x405090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x405094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405090u;
        // 0x405094: 0x7ef02d  daddu       $fp, $v1, $fp (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x405090) {
            ctx->pc = 0x4050A0u;
            goto label_4050a0;
        }
    }
    ctx->pc = 0x405098u;
label_405098:
    // 0x405098: 0x1231023  subu        $v0, $t1, $v1
    ctx->pc = 0x405098u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x40509c: 0x3c2f02d  daddu       $fp, $fp, $v0
    ctx->pc = 0x40509cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 2));
label_4050a0:
    // 0x4050a0: 0x11e102b  sltu        $v0, $t0, $fp
    ctx->pc = 0x4050a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 30)) ? 1 : 0);
    // 0x4050a4: 0x5040ffec  beql        $v0, $zero, . + 4 + (-0x14 << 2)
    ctx->pc = 0x4050A4u;
    {
        const bool branch_taken_0x4050a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4050a4) {
            ctx->pc = 0x4050A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4050A4u;
            // 0x4050a8: 0x64e70001  daddiu      $a3, $a3, 0x1 (Delay Slot)
            SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 7) + (int64_t)(int32_t)1);
            ctx->in_delay_slot = false;
            ctx->pc = 0x405058u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_405058;
        }
    }
    ctx->pc = 0x4050ACu;
    // 0x4050ac: 0x92a3029c  lbu         $v1, 0x29C($s5)
    ctx->pc = 0x4050acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 668)));
label_4050b0:
    // 0x4050b0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4050b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4050b4: 0x5462009e  bnel        $v1, $v0, . + 4 + (0x9E << 2)
    ctx->pc = 0x4050B4u;
    {
        const bool branch_taken_0x4050b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x4050b4) {
            ctx->pc = 0x4050B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4050B4u;
            // 0x4050b8: 0xdfa80010  ld          $t0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x405330u;
            goto label_405330;
        }
    }
    ctx->pc = 0x4050BCu;
    // 0x4050bc: 0x8ea402ac  lw          $a0, 0x2AC($s5)
    ctx->pc = 0x4050bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 684)));
    // 0x4050c0: 0x1e1aba  dsrl        $v1, $fp, 10
    ctx->pc = 0x4050c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 30) >> 10);
    // 0x4050c4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4050c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4050c8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x4050c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x4050cc: 0x212ba  dsrl        $v0, $v0, 10
    ctx->pc = 0x4050ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 10);
    // 0x4050d0: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x4050d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4050d4: 0x629024  and         $s2, $v1, $v0
    ctx->pc = 0x4050d4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4050d8: 0x33d1ffff  andi        $s1, $fp, 0xFFFF
    ctx->pc = 0x4050d8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)65535);
    // 0x4050dc: 0x10a0007e  beqz        $a1, . + 4 + (0x7E << 2)
    ctx->pc = 0x4050DCu;
    {
        const bool branch_taken_0x4050dc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4050E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4050DCu;
        // 0x4050e0: 0xafa40034  sw          $a0, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4050dc) {
            ctx->pc = 0x4052D8u;
            goto label_4052d8;
        }
    }
    ctx->pc = 0x4050E4u;
    // 0x4050e4: 0x8eb702a0  lw          $s7, 0x2A0($s5)
    ctx->pc = 0x4050e4u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 672)));
    // 0x4050e8: 0x51023  negu        $v0, $a1
    ctx->pc = 0x4050e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
    // 0x4050ec: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x4050ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x4050f0: 0x241e0002  addiu       $fp, $zero, 0x2
    ctx->pc = 0x4050f0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4050f4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x4050f4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4050f8: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x4050f8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4050fc: 0x1060003a  beqz        $v1, . + 4 + (0x3A << 2)
    ctx->pc = 0x4050FCu;
    {
        const bool branch_taken_0x4050fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x405100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4050FCu;
        // 0x405100: 0x2e0982d  daddu       $s3, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4050fc) {
            ctx->pc = 0x4051E8u;
            goto label_4051e8;
        }
    }
    ctx->pc = 0x405104u;
    // 0x405104: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x405104u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x405108: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x405108u;
    {
        const bool branch_taken_0x405108 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x40510Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405108u;
        // 0x40510c: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x405108) {
            ctx->pc = 0x4051A0u;
            goto label_4051a0;
        }
    }
    ctx->pc = 0x405110u;
    // 0x405110: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x405110u;
    {
        const bool branch_taken_0x405110 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x405110) {
            ctx->pc = 0x405114u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x405110u;
            // 0x405114: 0x92620000  lbu         $v0, 0x0($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x405160u;
            goto label_405160;
        }
    }
    ctx->pc = 0x405118u;
    // 0x405118: 0x92e20000  lbu         $v0, 0x0($s7)
    ctx->pc = 0x405118u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x40511c: 0x145e000c  bne         $v0, $fp, . + 4 + (0xC << 2)
    ctx->pc = 0x40511Cu;
    {
        const bool branch_taken_0x40511c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 30));
        ctx->pc = 0x405120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40511Cu;
        // 0x405120: 0x8fa60030  lw          $a2, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40511c) {
            ctx->pc = 0x405150u;
            goto label_405150;
        }
    }
    ctx->pc = 0x405124u;
    // 0x405124: 0x8ea502a4  lw          $a1, 0x2A4($s5)
    ctx->pc = 0x405124u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 676)));
    // 0x405128: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x405128u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40512c: 0x94b00000  lhu         $s0, 0x0($a1)
    ctx->pc = 0x40512cu;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x405130: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x405130u;
    SET_GPR_U32(ctx, 31, 0x405138u);
    ctx->pc = 0x405134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x405130u;
    // 0x405134: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x405130u, 0x405138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x405138u;
label_405138:
    // 0x405138: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x405138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40513c: 0x28a3a  dsrl        $s1, $v0, 8
    ctx->pc = 0x40513cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) >> 8);
    // 0x405140: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x405140u;
    SET_GPR_U32(ctx, 31, 0x405148u);
    ctx->pc = 0x405144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x405140u;
    // 0x405144: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x405140u, 0x405148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x405148u;
label_405148:
    // 0x405148: 0x2923a  dsrl        $s2, $v0, 8
    ctx->pc = 0x405148u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) >> 8);
    // 0x40514c: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x40514cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_405150:
    // 0x405150: 0x26f30001  addiu       $s3, $s7, 0x1
    ctx->pc = 0x405150u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x405154: 0x24140002  addiu       $s4, $zero, 0x2
    ctx->pc = 0x405154u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x405158: 0x24d6ffff  addiu       $s6, $a2, -0x1
    ctx->pc = 0x405158u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x40515c: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x40515cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_405160:
    // 0x405160: 0x545e000d  bnel        $v0, $fp, . + 4 + (0xD << 2)
    ctx->pc = 0x405160u;
    {
        const bool branch_taken_0x405160 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 30));
        if (branch_taken_0x405160) {
            ctx->pc = 0x405164u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x405160u;
            // 0x405164: 0x26940002  addiu       $s4, $s4, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x405198u;
            goto label_405198;
        }
    }
    ctx->pc = 0x405168u;
    // 0x405168: 0x8ea502a4  lw          $a1, 0x2A4($s5)
    ctx->pc = 0x405168u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 676)));
    // 0x40516c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x40516cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x405170: 0x2852821  addu        $a1, $s4, $a1
    ctx->pc = 0x405170u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
    // 0x405174: 0x94b00000  lhu         $s0, 0x0($a1)
    ctx->pc = 0x405174u;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x405178: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x405178u;
    SET_GPR_U32(ctx, 31, 0x405180u);
    ctx->pc = 0x40517Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x405178u;
    // 0x40517c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x405178u, 0x405180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x405180u;
label_405180:
    // 0x405180: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x405180u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x405184: 0x28a3a  dsrl        $s1, $v0, 8
    ctx->pc = 0x405184u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) >> 8);
    // 0x405188: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x405188u;
    SET_GPR_U32(ctx, 31, 0x405190u);
    ctx->pc = 0x40518Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x405188u;
    // 0x40518c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x405188u, 0x405190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x405190u;
label_405190:
    // 0x405190: 0x2923a  dsrl        $s2, $v0, 8
    ctx->pc = 0x405190u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) >> 8);
    // 0x405194: 0x26940002  addiu       $s4, $s4, 0x2
    ctx->pc = 0x405194u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
label_405198:
    // 0x405198: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x405198u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x40519c: 0x26d6ffff  addiu       $s6, $s6, -0x1
    ctx->pc = 0x40519cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
label_4051a0:
    // 0x4051a0: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x4051a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4051a4: 0x545e000d  bnel        $v0, $fp, . + 4 + (0xD << 2)
    ctx->pc = 0x4051A4u;
    {
        const bool branch_taken_0x4051a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 30));
        if (branch_taken_0x4051a4) {
            ctx->pc = 0x4051A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4051A4u;
            // 0x4051a8: 0x26940002  addiu       $s4, $s4, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4051DCu;
            goto label_4051dc;
        }
    }
    ctx->pc = 0x4051ACu;
    // 0x4051ac: 0x8ea502a4  lw          $a1, 0x2A4($s5)
    ctx->pc = 0x4051acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 676)));
    // 0x4051b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4051b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4051b4: 0x2852821  addu        $a1, $s4, $a1
    ctx->pc = 0x4051b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
    // 0x4051b8: 0x94b00000  lhu         $s0, 0x0($a1)
    ctx->pc = 0x4051b8u;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4051bc: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x4051BCu;
    SET_GPR_U32(ctx, 31, 0x4051C4u);
    ctx->pc = 0x4051C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4051BCu;
    // 0x4051c0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x4051BCu, 0x4051C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4051C4u;
label_4051c4:
    // 0x4051c4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4051c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4051c8: 0x28a3a  dsrl        $s1, $v0, 8
    ctx->pc = 0x4051c8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) >> 8);
    // 0x4051cc: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x4051CCu;
    SET_GPR_U32(ctx, 31, 0x4051D4u);
    ctx->pc = 0x4051D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4051CCu;
    // 0x4051d0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x4051CCu, 0x4051D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4051D4u;
label_4051d4:
    // 0x4051d4: 0x2923a  dsrl        $s2, $v0, 8
    ctx->pc = 0x4051d4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) >> 8);
    // 0x4051d8: 0x26940002  addiu       $s4, $s4, 0x2
    ctx->pc = 0x4051d8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
label_4051dc:
    // 0x4051dc: 0x26d6ffff  addiu       $s6, $s6, -0x1
    ctx->pc = 0x4051dcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
    // 0x4051e0: 0x12c0003d  beqz        $s6, . + 4 + (0x3D << 2)
    ctx->pc = 0x4051E0u;
    {
        const bool branch_taken_0x4051e0 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x4051E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4051E0u;
        // 0x4051e4: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4051e0) {
            ctx->pc = 0x4052D8u;
            goto label_4052d8;
        }
    }
    ctx->pc = 0x4051E8u;
label_4051e8:
    // 0x4051e8: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x4051e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4051ec: 0x545e000d  bnel        $v0, $fp, . + 4 + (0xD << 2)
    ctx->pc = 0x4051ECu;
    {
        const bool branch_taken_0x4051ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 30));
        if (branch_taken_0x4051ec) {
            ctx->pc = 0x4051F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4051ECu;
            // 0x4051f0: 0x92620001  lbu         $v0, 0x1($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x405224u;
            goto label_405224;
        }
    }
    ctx->pc = 0x4051F4u;
    // 0x4051f4: 0x8ea502a4  lw          $a1, 0x2A4($s5)
    ctx->pc = 0x4051f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 676)));
    // 0x4051f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4051f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4051fc: 0x2852821  addu        $a1, $s4, $a1
    ctx->pc = 0x4051fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
    // 0x405200: 0x94b00000  lhu         $s0, 0x0($a1)
    ctx->pc = 0x405200u;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x405204: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x405204u;
    SET_GPR_U32(ctx, 31, 0x40520Cu);
    ctx->pc = 0x405208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x405204u;
    // 0x405208: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x405204u, 0x40520Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40520Cu;
label_40520c:
    // 0x40520c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x40520cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x405210: 0x28a3a  dsrl        $s1, $v0, 8
    ctx->pc = 0x405210u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) >> 8);
    // 0x405214: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x405214u;
    SET_GPR_U32(ctx, 31, 0x40521Cu);
    ctx->pc = 0x405218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x405214u;
    // 0x405218: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x405214u, 0x40521Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40521Cu;
label_40521c:
    // 0x40521c: 0x2923a  dsrl        $s2, $v0, 8
    ctx->pc = 0x40521cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) >> 8);
    // 0x405220: 0x92620001  lbu         $v0, 0x1($s3)
    ctx->pc = 0x405220u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
label_405224:
    // 0x405224: 0x145e000c  bne         $v0, $fp, . + 4 + (0xC << 2)
    ctx->pc = 0x405224u;
    {
        const bool branch_taken_0x405224 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 30));
        ctx->pc = 0x405228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405224u;
        // 0x405228: 0x26830002  addiu       $v1, $s4, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x405224) {
            ctx->pc = 0x405258u;
            goto label_405258;
        }
    }
    ctx->pc = 0x40522Cu;
    // 0x40522c: 0x8ea502a4  lw          $a1, 0x2A4($s5)
    ctx->pc = 0x40522cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 676)));
    // 0x405230: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x405230u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x405234: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x405234u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x405238: 0x94b00000  lhu         $s0, 0x0($a1)
    ctx->pc = 0x405238u;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x40523c: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x40523Cu;
    SET_GPR_U32(ctx, 31, 0x405244u);
    ctx->pc = 0x405240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40523Cu;
    // 0x405240: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x40523Cu, 0x405244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x405244u;
label_405244:
    // 0x405244: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x405244u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x405248: 0x28a3a  dsrl        $s1, $v0, 8
    ctx->pc = 0x405248u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) >> 8);
    // 0x40524c: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x40524Cu;
    SET_GPR_U32(ctx, 31, 0x405254u);
    ctx->pc = 0x405250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40524Cu;
    // 0x405250: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x40524Cu, 0x405254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x405254u;
label_405254:
    // 0x405254: 0x2923a  dsrl        $s2, $v0, 8
    ctx->pc = 0x405254u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) >> 8);
label_405258:
    // 0x405258: 0x92620002  lbu         $v0, 0x2($s3)
    ctx->pc = 0x405258u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x40525c: 0x145e000c  bne         $v0, $fp, . + 4 + (0xC << 2)
    ctx->pc = 0x40525Cu;
    {
        const bool branch_taken_0x40525c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 30));
        ctx->pc = 0x405260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40525Cu;
        // 0x405260: 0x26830004  addiu       $v1, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40525c) {
            ctx->pc = 0x405290u;
            goto label_405290;
        }
    }
    ctx->pc = 0x405264u;
    // 0x405264: 0x8ea502a4  lw          $a1, 0x2A4($s5)
    ctx->pc = 0x405264u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 676)));
    // 0x405268: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x405268u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40526c: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x40526cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x405270: 0x94b00000  lhu         $s0, 0x0($a1)
    ctx->pc = 0x405270u;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x405274: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x405274u;
    SET_GPR_U32(ctx, 31, 0x40527Cu);
    ctx->pc = 0x405278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x405274u;
    // 0x405278: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x405274u, 0x40527Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40527Cu;
label_40527c:
    // 0x40527c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x40527cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x405280: 0x28a3a  dsrl        $s1, $v0, 8
    ctx->pc = 0x405280u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) >> 8);
    // 0x405284: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x405284u;
    SET_GPR_U32(ctx, 31, 0x40528Cu);
    ctx->pc = 0x405288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x405284u;
    // 0x405288: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x405284u, 0x40528Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40528Cu;
label_40528c:
    // 0x40528c: 0x2923a  dsrl        $s2, $v0, 8
    ctx->pc = 0x40528cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) >> 8);
label_405290:
    // 0x405290: 0x92620003  lbu         $v0, 0x3($s3)
    ctx->pc = 0x405290u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 3)));
    // 0x405294: 0x145e000c  bne         $v0, $fp, . + 4 + (0xC << 2)
    ctx->pc = 0x405294u;
    {
        const bool branch_taken_0x405294 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 30));
        ctx->pc = 0x405298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405294u;
        // 0x405298: 0x26830006  addiu       $v1, $s4, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x405294) {
            ctx->pc = 0x4052C8u;
            goto label_4052c8;
        }
    }
    ctx->pc = 0x40529Cu;
    // 0x40529c: 0x8ea502a4  lw          $a1, 0x2A4($s5)
    ctx->pc = 0x40529cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 676)));
    // 0x4052a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4052a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4052a4: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x4052a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x4052a8: 0x94b00000  lhu         $s0, 0x0($a1)
    ctx->pc = 0x4052a8u;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4052ac: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x4052ACu;
    SET_GPR_U32(ctx, 31, 0x4052B4u);
    ctx->pc = 0x4052B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4052ACu;
    // 0x4052b0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x4052ACu, 0x4052B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4052B4u;
label_4052b4:
    // 0x4052b4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4052b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4052b8: 0x28a3a  dsrl        $s1, $v0, 8
    ctx->pc = 0x4052b8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) >> 8);
    // 0x4052bc: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x4052BCu;
    SET_GPR_U32(ctx, 31, 0x4052C4u);
    ctx->pc = 0x4052C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4052BCu;
    // 0x4052c0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x4052BCu, 0x4052C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4052C4u;
label_4052c4:
    // 0x4052c4: 0x2923a  dsrl        $s2, $v0, 8
    ctx->pc = 0x4052c4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) >> 8);
label_4052c8:
    // 0x4052c8: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x4052c8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x4052cc: 0x26d6fffc  addiu       $s6, $s6, -0x4
    ctx->pc = 0x4052ccu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967292));
    // 0x4052d0: 0x16c0ffc5  bnez        $s6, . + 4 + (-0x3B << 2)
    ctx->pc = 0x4052D0u;
    {
        const bool branch_taken_0x4052d0 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x4052D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4052D0u;
        // 0x4052d4: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4052d0) {
            ctx->pc = 0x4051E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4051e8;
        }
    }
    ctx->pc = 0x4052D8u;
label_4052d8:
    // 0x4052d8: 0x8fa70034  lw          $a3, 0x34($sp)
    ctx->pc = 0x4052d8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x4052dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4052dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4052e0: 0x94f00004  lhu         $s0, 0x4($a3)
    ctx->pc = 0x4052e0u;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x4052e4: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x4052E4u;
    SET_GPR_U32(ctx, 31, 0x4052ECu);
    ctx->pc = 0x4052E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4052E4u;
    // 0x4052e8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x4052E4u, 0x4052ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4052ECu;
label_4052ec:
    // 0x4052ec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4052ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4052f0: 0x288fa  dsrl        $s1, $v0, 3
    ctx->pc = 0x4052f0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) >> 3);
    // 0x4052f4: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x4052F4u;
    SET_GPR_U32(ctx, 31, 0x4052FCu);
    ctx->pc = 0x4052F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4052F4u;
    // 0x4052f8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x4052F4u, 0x4052FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4052FCu;
label_4052fc:
    // 0x4052fc: 0x290fa  dsrl        $s2, $v0, 3
    ctx->pc = 0x4052fcu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) >> 3);
    // 0x405300: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x405300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x405304: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x405304u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x405308: 0x212ba  dsrl        $v0, $v0, 10
    ctx->pc = 0x405308u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 10);
    // 0x40530c: 0x52102b  sltu        $v0, $v0, $s2
    ctx->pc = 0x40530cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x405310: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x405310u;
    {
        const bool branch_taken_0x405310 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x405314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405310u;
        // 0x405314: 0xdfa80010  ld          $t0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x405310) {
            ctx->pc = 0x405328u;
            goto label_405328;
        }
    }
    ctx->pc = 0x405318u;
    // 0x405318: 0x241effff  addiu       $fp, $zero, -0x1
    ctx->pc = 0x405318u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x40531c: 0x1ef07a  dsrl        $fp, $fp, 1
    ctx->pc = 0x40531cu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) >> 1);
    // 0x405320: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x405320u;
    {
        const bool branch_taken_0x405320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x405324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405320u;
        // 0x405324: 0x3c8102b  sltu        $v0, $fp, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x405320) {
            ctx->pc = 0x405334u;
            goto label_405334;
        }
    }
    ctx->pc = 0x405328u;
label_405328:
    // 0x405328: 0x1212b8  dsll        $v0, $s2, 10
    ctx->pc = 0x405328u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << 10);
    // 0x40532c: 0x51f02d  daddu       $fp, $v0, $s1
    ctx->pc = 0x40532cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 17));
label_405330:
    // 0x405330: 0x3c8102b  sltu        $v0, $fp, $t0
    ctx->pc = 0x405330u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
label_405334:
    // 0x405334: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x405334u;
    {
        const bool branch_taken_0x405334 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x405338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405334u;
        // 0x405338: 0x8fa30020  lw          $v1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x405334) {
            ctx->pc = 0x40534Cu;
            goto label_40534c;
        }
    }
    ctx->pc = 0x40533Cu;
    // 0x40533c: 0x8ea901c4  lw          $t1, 0x1C4($s5)
    ctx->pc = 0x40533cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 452)));
    // 0x405340: 0xffbe0010  sd          $fp, 0x10($sp)
    ctx->pc = 0x405340u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
    // 0x405344: 0xafa90008  sw          $t1, 0x8($sp)
    ctx->pc = 0x405344u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 9));
label_405348:
    // 0x405348: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x405348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_40534c:
    // 0x40534c: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x40534cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x405350: 0x146200c8  bne         $v1, $v0, . + 4 + (0xC8 << 2)
    ctx->pc = 0x405350u;
    {
        const bool branch_taken_0x405350 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x405354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405350u;
        // 0x405354: 0x8fa50020  lw          $a1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x405350) {
            ctx->pc = 0x405674u;
            goto label_405674;
        }
    }
    ctx->pc = 0x405358u;
    // 0x405358: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x405358u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x40535c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x40535cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x405360: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x405360u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x405364: 0x8ea601c8  lw          $a2, 0x1C8($s5)
    ctx->pc = 0x405364u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 456)));
    // 0x405368: 0x248c0001  addiu       $t4, $a0, 0x1
    ctx->pc = 0x405368u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x40536c: 0x24ad0001  addiu       $t5, $a1, 0x1
    ctx->pc = 0x40536cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x405370: 0xdfa70018  ld          $a3, 0x18($sp)
    ctx->pc = 0x405370u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x405374: 0x24ce0001  addiu       $t6, $a2, 0x1
    ctx->pc = 0x405374u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x405378: 0xafac0040  sw          $t4, 0x40($sp)
    ctx->pc = 0x405378u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 12));
    // 0x40537c: 0x10e00058  beqz        $a3, . + 4 + (0x58 << 2)
    ctx->pc = 0x40537Cu;
    {
        const bool branch_taken_0x40537c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x405380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40537Cu;
        // 0x405380: 0xafad003c  sw          $t5, 0x3C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40537c) {
            ctx->pc = 0x4054E0u;
            goto label_4054e0;
        }
    }
    ctx->pc = 0x405384u;
    // 0x405384: 0xdfa80018  ld          $t0, 0x18($sp)
    ctx->pc = 0x405384u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x405388: 0x1a0282d  daddu       $a1, $t5, $zero
    ctx->pc = 0x405388u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40538c: 0x1c0202d  daddu       $a0, $t6, $zero
    ctx->pc = 0x40538cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x405390: 0x180382d  daddu       $a3, $t4, $zero
    ctx->pc = 0x405390u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x405394: 0x19000022  blez        $t0, . + 4 + (0x22 << 2)
    ctx->pc = 0x405394u;
    {
        const bool branch_taken_0x405394 = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x405398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405394u;
        // 0x405398: 0x31030003  andi        $v1, $t0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x405394) {
            ctx->pc = 0x405420u;
            goto label_405420;
        }
    }
    ctx->pc = 0x40539Cu;
    // 0x40539c: 0x1060002f  beqz        $v1, . + 4 + (0x2F << 2)
    ctx->pc = 0x40539Cu;
    {
        const bool branch_taken_0x40539c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4053A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40539Cu;
        // 0x4053a0: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x40539c) {
            ctx->pc = 0x40545Cu;
            goto label_40545c;
        }
    }
    ctx->pc = 0x4053A4u;
    // 0x4053a4: 0x5440001f  bnel        $v0, $zero, . + 4 + (0x1F << 2)
    ctx->pc = 0x4053A4u;
    {
        const bool branch_taken_0x4053a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4053a4) {
            ctx->pc = 0x4053A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4053A4u;
            // 0x4053a8: 0x90a20000  lbu         $v0, 0x0($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x405424u;
            goto label_405424;
        }
    }
    ctx->pc = 0x4053ACu;
    // 0x4053ac: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x4053acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x4053b0: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x4053B0u;
    {
        const bool branch_taken_0x4053b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4053b0) {
            ctx->pc = 0x4053B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4053B0u;
            // 0x4053b4: 0x90a20000  lbu         $v0, 0x0($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4053F4u;
            goto label_4053f4;
        }
    }
    ctx->pc = 0x4053B8u;
    // 0x4053b8: 0x8fa90004  lw          $t1, 0x4($sp)
    ctx->pc = 0x4053b8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x4053bc: 0x24ce0002  addiu       $t6, $a2, 0x2
    ctx->pc = 0x4053bcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x4053c0: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x4053c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x4053c4: 0x91220001  lbu         $v0, 0x1($t1)
    ctx->pc = 0x4053c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 1)));
    // 0x4053c8: 0x25250002  addiu       $a1, $t1, 0x2
    ctx->pc = 0x4053c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
    // 0x4053cc: 0x90830001  lbu         $v1, 0x1($a0)
    ctx->pc = 0x4053ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x4053d0: 0x24870002  addiu       $a3, $a0, 0x2
    ctx->pc = 0x4053d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x4053d4: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x4053d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x4053d8: 0xa0682d  daddu       $t5, $a1, $zero
    ctx->pc = 0x4053d8u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4053dc: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x4053dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4053e0: 0xe0602d  daddu       $t4, $a3, $zero
    ctx->pc = 0x4053e0u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4053e4: 0xa0c30001  sb          $v1, 0x1($a2)
    ctx->pc = 0x4053e4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x4053e8: 0x1c0202d  daddu       $a0, $t6, $zero
    ctx->pc = 0x4053e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4053ec: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x4053ecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4053f0: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x4053f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_4053f4:
    // 0x4053f4: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x4053f4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x4053f8: 0x90e30000  lbu         $v1, 0x0($a3)
    ctx->pc = 0x4053f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4053fc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x4053fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x405400: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x405400u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x405404: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x405404u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x405408: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x405408u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x40540c: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x40540cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x405410: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x405410u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x405414: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x405414u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
    // 0x405418: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x405418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x40541c: 0x65290001  daddiu      $t1, $t1, 0x1
    ctx->pc = 0x40541cu;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 9) + (int64_t)(int32_t)1);
label_405420:
    // 0x405420: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x405420u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_405424:
    // 0x405424: 0x65290001  daddiu      $t1, $t1, 0x1
    ctx->pc = 0x405424u;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 9) + (int64_t)(int32_t)1);
    // 0x405428: 0x90e30000  lbu         $v1, 0x0($a3)
    ctx->pc = 0x405428u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x40542c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x40542cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x405430: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x405430u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x405434: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x405434u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x405438: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x405438u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x40543c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x40543cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x405440: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x405440u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x405444: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x405444u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x405448: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x405448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x40544c: 0xdfa60018  ld          $a2, 0x18($sp)
    ctx->pc = 0x40544cu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x405450: 0x126402b  sltu        $t0, $t1, $a2
    ctx->pc = 0x405450u;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x405454: 0x11000022  beqz        $t0, . + 4 + (0x22 << 2)
    ctx->pc = 0x405454u;
    {
        const bool branch_taken_0x405454 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x405458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405454u;
        // 0x405458: 0x25ce0001  addiu       $t6, $t6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x405454) {
            ctx->pc = 0x4054E0u;
            goto label_4054e0;
        }
    }
    ctx->pc = 0x40545Cu;
label_40545c:
    // 0x40545c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x40545cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x405460: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x405460u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x405464: 0x0  nop
    ctx->pc = 0x405464u;
    // NOP
label_405468:
    // 0x405468: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x405468u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x40546c: 0x65290004  daddiu      $t1, $t1, 0x4
    ctx->pc = 0x40546cu;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 9) + (int64_t)(int32_t)4);
    // 0x405470: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x405470u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x405474: 0x25ad0004  addiu       $t5, $t5, 0x4
    ctx->pc = 0x405474u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4));
    // 0x405478: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x405478u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x40547c: 0x258c0004  addiu       $t4, $t4, 0x4
    ctx->pc = 0x40547cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x405480: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x405480u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x405484: 0x25ce0004  addiu       $t6, $t6, 0x4
    ctx->pc = 0x405484u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4));
    // 0x405488: 0xa0c30000  sb          $v1, 0x0($a2)
    ctx->pc = 0x405488u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x40548c: 0x90a20001  lbu         $v0, 0x1($a1)
    ctx->pc = 0x40548cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x405490: 0x90830001  lbu         $v1, 0x1($a0)
    ctx->pc = 0x405490u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x405494: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x405494u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x405498: 0xdfa70018  ld          $a3, 0x18($sp)
    ctx->pc = 0x405498u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x40549c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x40549cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4054a0: 0xa0c30001  sb          $v1, 0x1($a2)
    ctx->pc = 0x4054a0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x4054a4: 0x127402b  sltu        $t0, $t1, $a3
    ctx->pc = 0x4054a4u;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x4054a8: 0x90a20002  lbu         $v0, 0x2($a1)
    ctx->pc = 0x4054a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x4054ac: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x4054acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x4054b0: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x4054b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x4054b4: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x4054b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4054b8: 0xa0c30002  sb          $v1, 0x2($a2)
    ctx->pc = 0x4054b8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x4054bc: 0x90a20003  lbu         $v0, 0x3($a1)
    ctx->pc = 0x4054bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
    // 0x4054c0: 0x90830003  lbu         $v1, 0x3($a0)
    ctx->pc = 0x4054c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x4054c4: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x4054c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x4054c8: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x4054c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x4054cc: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x4054ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x4054d0: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x4054d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4054d4: 0xa0c30003  sb          $v1, 0x3($a2)
    ctx->pc = 0x4054d4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x4054d8: 0x1500ffe3  bnez        $t0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x4054D8u;
    {
        const bool branch_taken_0x4054d8 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x4054DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4054D8u;
        // 0x4054dc: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4054d8) {
            ctx->pc = 0x405468u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_405468;
        }
    }
    ctx->pc = 0x4054E0u;
label_4054e0:
    // 0x4054e0: 0xdfa80028  ld          $t0, 0x28($sp)
    ctx->pc = 0x4054e0u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4054e4: 0x128102b  sltu        $v0, $t1, $t0
    ctx->pc = 0x4054e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x4054e8: 0x1040005f  beqz        $v0, . + 4 + (0x5F << 2)
    ctx->pc = 0x4054E8u;
    {
        const bool branch_taken_0x4054e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4054ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4054E8u;
        // 0x4054ec: 0x109102f  dsubu       $v0, $t0, $t1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) - GPR_U64(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4054e8) {
            ctx->pc = 0x405668u;
            goto label_405668;
        }
    }
    ctx->pc = 0x4054F0u;
    // 0x4054f0: 0x1c0282d  daddu       $a1, $t6, $zero
    ctx->pc = 0x4054f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4054f4: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x4054f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x4054f8: 0x180302d  daddu       $a2, $t4, $zero
    ctx->pc = 0x4054f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4054fc: 0x1a0502d  daddu       $t2, $t5, $zero
    ctx->pc = 0x4054fcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x405500: 0x128102a  slt         $v0, $t1, $t0
    ctx->pc = 0x405500u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x405504: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x405504u;
    {
        const bool branch_taken_0x405504 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x405508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405504u;
        // 0x405508: 0x8fab0040  lw          $t3, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x405504) {
            ctx->pc = 0x40558Cu;
            goto label_40558c;
        }
    }
    ctx->pc = 0x40550Cu;
    // 0x40550c: 0x1060002e  beqz        $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x40550Cu;
    {
        const bool branch_taken_0x40550c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x405510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40550Cu;
        // 0x405510: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x40550c) {
            ctx->pc = 0x4055C8u;
            goto label_4055c8;
        }
    }
    ctx->pc = 0x405514u;
    // 0x405514: 0x5440001e  bnel        $v0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x405514u;
    {
        const bool branch_taken_0x405514 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x405514) {
            ctx->pc = 0x405518u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x405514u;
            // 0x405518: 0x91640000  lbu         $a0, 0x0($t3) (Delay Slot)
            SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x405590u;
            goto label_405590;
        }
    }
    ctx->pc = 0x40551Cu;
    // 0x40551c: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x40551cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x405520: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x405520u;
    {
        const bool branch_taken_0x405520 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x405520) {
            ctx->pc = 0x405524u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x405520u;
            // 0x405524: 0x91420000  lbu         $v0, 0x0($t2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x405560u;
            goto label_405560;
        }
    }
    ctx->pc = 0x405528u;
    // 0x405528: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x405528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x40552c: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x40552cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x405530: 0x91a20000  lbu         $v0, 0x0($t5)
    ctx->pc = 0x405530u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x405534: 0x25aa0001  addiu       $t2, $t5, 0x1
    ctx->pc = 0x405534u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x405538: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x405538u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x40553c: 0x25860001  addiu       $a2, $t4, 0x1
    ctx->pc = 0x40553cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x405540: 0x91830000  lbu         $v1, 0x0($t4)
    ctx->pc = 0x405540u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x405544: 0x25c50001  addiu       $a1, $t6, 0x1
    ctx->pc = 0x405544u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
    // 0x405548: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x405548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x40554c: 0x65290001  daddiu      $t1, $t1, 0x1
    ctx->pc = 0x40554cu;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 9) + (int64_t)(int32_t)1);
    // 0x405550: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x405550u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x405554: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x405554u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x405558: 0xa1c30000  sb          $v1, 0x0($t6)
    ctx->pc = 0x405558u;
    WRITE8(ADD32(GPR_U32(ctx, 14), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x40555c: 0x91420000  lbu         $v0, 0x0($t2)
    ctx->pc = 0x40555cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
label_405560:
    // 0x405560: 0x65290001  daddiu      $t1, $t1, 0x1
    ctx->pc = 0x405560u;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 9) + (int64_t)(int32_t)1);
    // 0x405564: 0x91640000  lbu         $a0, 0x0($t3)
    ctx->pc = 0x405564u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x405568: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x405568u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x40556c: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x40556cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x405570: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x405570u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x405574: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x405574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x405578: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x405578u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x40557c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x40557cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x405580: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x405580u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x405584: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x405584u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x405588: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x405588u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_40558c:
    // 0x40558c: 0x91640000  lbu         $a0, 0x0($t3)
    ctx->pc = 0x40558cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
label_405590:
    // 0x405590: 0x65290001  daddiu      $t1, $t1, 0x1
    ctx->pc = 0x405590u;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 9) + (int64_t)(int32_t)1);
    // 0x405594: 0x91420000  lbu         $v0, 0x0($t2)
    ctx->pc = 0x405594u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x405598: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x405598u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x40559c: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x40559cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4055a0: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x4055a0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x4055a4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x4055a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x4055a8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x4055a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x4055ac: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x4055acu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x4055b0: 0xdfa40028  ld          $a0, 0x28($sp)
    ctx->pc = 0x4055b0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4055b4: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x4055b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4055b8: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x4055b8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x4055bc: 0x124602b  sltu        $t4, $t1, $a0
    ctx->pc = 0x4055bcu;
    SET_GPR_U64(ctx, 12, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x4055c0: 0x11800029  beqz        $t4, . + 4 + (0x29 << 2)
    ctx->pc = 0x4055C0u;
    {
        const bool branch_taken_0x4055c0 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x4055C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4055C0u;
        // 0x4055c4: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4055c0) {
            ctx->pc = 0x405668u;
            goto label_405668;
        }
    }
    ctx->pc = 0x4055C8u;
label_4055c8:
    // 0x4055c8: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x4055c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4055cc: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x4055ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4055d0: 0x140302d  daddu       $a2, $t2, $zero
    ctx->pc = 0x4055d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4055d4: 0x160282d  daddu       $a1, $t3, $zero
    ctx->pc = 0x4055d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_4055d8:
    // 0x4055d8: 0xdfa30028  ld          $v1, 0x28($sp)
    ctx->pc = 0x4055d8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4055dc: 0x65290004  daddiu      $t1, $t1, 0x4
    ctx->pc = 0x4055dcu;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 9) + (int64_t)(int32_t)4);
    // 0x4055e0: 0x90a40000  lbu         $a0, 0x0($a1)
    ctx->pc = 0x4055e0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4055e4: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x4055e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4055e8: 0x123602b  sltu        $t4, $t1, $v1
    ctx->pc = 0x4055e8u;
    SET_GPR_U64(ctx, 12, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x4055ec: 0x90e30000  lbu         $v1, 0x0($a3)
    ctx->pc = 0x4055ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4055f0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x4055f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x4055f4: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x4055f4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x4055f8: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x4055f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4055fc: 0xa1030000  sb          $v1, 0x0($t0)
    ctx->pc = 0x4055fcu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x405600: 0x90a40001  lbu         $a0, 0x1($a1)
    ctx->pc = 0x405600u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x405604: 0x90c20001  lbu         $v0, 0x1($a2)
    ctx->pc = 0x405604u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x405608: 0x90e30001  lbu         $v1, 0x1($a3)
    ctx->pc = 0x405608u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
    // 0x40560c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x40560cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x405610: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x405610u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x405614: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x405614u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x405618: 0xa1030001  sb          $v1, 0x1($t0)
    ctx->pc = 0x405618u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x40561c: 0x90a40002  lbu         $a0, 0x2($a1)
    ctx->pc = 0x40561cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x405620: 0x90c20002  lbu         $v0, 0x2($a2)
    ctx->pc = 0x405620u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x405624: 0x90e30002  lbu         $v1, 0x2($a3)
    ctx->pc = 0x405624u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x405628: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x405628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x40562c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x40562cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x405630: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x405630u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x405634: 0xa1030002  sb          $v1, 0x2($t0)
    ctx->pc = 0x405634u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x405638: 0x90c20003  lbu         $v0, 0x3($a2)
    ctx->pc = 0x405638u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3)));
    // 0x40563c: 0x90a40003  lbu         $a0, 0x3($a1)
    ctx->pc = 0x40563cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
    // 0x405640: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x405640u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x405644: 0x90e30003  lbu         $v1, 0x3($a3)
    ctx->pc = 0x405644u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 3)));
    // 0x405648: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x405648u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x40564c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x40564cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x405650: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x405650u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x405654: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x405654u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x405658: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x405658u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x40565c: 0xa1030003  sb          $v1, 0x3($t0)
    ctx->pc = 0x40565cu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x405660: 0x1580ffdd  bnez        $t4, . + 4 + (-0x23 << 2)
    ctx->pc = 0x405660u;
    {
        const bool branch_taken_0x405660 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x405664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405660u;
        // 0x405664: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x405660) {
            ctx->pc = 0x4055D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4055d8;
        }
    }
    ctx->pc = 0x405668u;
label_405668:
    // 0x405668: 0x8ea401c8  lw          $a0, 0x1C8($s5)
    ctx->pc = 0x405668u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 456)));
    // 0x40566c: 0x1000023e  b           . + 4 + (0x23E << 2)
    ctx->pc = 0x40566Cu;
    {
        const bool branch_taken_0x40566c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x405670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40566Cu;
        // 0x405670: 0xafa40008  sw          $a0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40566c) {
            ctx->pc = 0x405F68u;
            goto label_405f68;
        }
    }
    ctx->pc = 0x405674u;
label_405674:
    // 0x405674: 0x30a20040  andi        $v0, $a1, 0x40
    ctx->pc = 0x405674u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)64);
    // 0x405678: 0x1040023b  beqz        $v0, . + 4 + (0x23B << 2)
    ctx->pc = 0x405678u;
    {
        const bool branch_taken_0x405678 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x40567Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405678u;
        // 0x40567c: 0x8fa6000c  lw          $a2, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x405678) {
            ctx->pc = 0x405F68u;
            goto label_405f68;
        }
    }
    ctx->pc = 0x405680u;
    // 0x405680: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x405680u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x405684: 0x8fa70004  lw          $a3, 0x4($sp)
    ctx->pc = 0x405684u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x405688: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x405688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x40568c: 0x92a3029c  lbu         $v1, 0x29C($s5)
    ctx->pc = 0x40568cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 668)));
    // 0x405690: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x405690u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x405694: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x405694u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x405698: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x405698u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x40569c: 0xafa7003c  sw          $a3, 0x3C($sp)
    ctx->pc = 0x40569cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 7));
    // 0x4056a0: 0xdfad0010  ld          $t5, 0x10($sp)
    ctx->pc = 0x4056a0u;
    SET_GPR_U64(ctx, 13, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4056a4: 0x8ea801c8  lw          $t0, 0x1C8($s5)
    ctx->pc = 0x4056a4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 456)));
    // 0x4056a8: 0x146200a3  bne         $v1, $v0, . + 4 + (0xA3 << 2)
    ctx->pc = 0x4056A8u;
    {
        const bool branch_taken_0x4056a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x4056ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4056A8u;
        // 0x4056ac: 0xafa8004c  sw          $t0, 0x4C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4056a8) {
            ctx->pc = 0x405938u;
            goto label_405938;
        }
    }
    ctx->pc = 0x4056B0u;
    // 0x4056b0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4056b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4056b4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x4056b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x4056b8: 0x212ba  dsrl        $v0, $v0, 10
    ctx->pc = 0x4056b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 10);
    // 0x4056bc: 0xd1aba  dsrl        $v1, $t5, 10
    ctx->pc = 0x4056bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 13) >> 10);
    // 0x4056c0: 0x629024  and         $s2, $v1, $v0
    ctx->pc = 0x4056c0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4056c4: 0x8ea902b0  lw          $t1, 0x2B0($s5)
    ctx->pc = 0x4056c4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 688)));
    // 0x4056c8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x4056c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4056cc: 0x31b1ffff  andi        $s1, $t5, 0xFFFF
    ctx->pc = 0x4056ccu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)65535);
    // 0x4056d0: 0x10400083  beqz        $v0, . + 4 + (0x83 << 2)
    ctx->pc = 0x4056D0u;
    {
        const bool branch_taken_0x4056d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4056D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4056D0u;
        // 0x4056d4: 0xafa90038  sw          $t1, 0x38($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4056d0) {
            ctx->pc = 0x4058E0u;
            goto label_4058e0;
        }
    }
    ctx->pc = 0x4056D8u;
    // 0x4056d8: 0x8ebe02a0  lw          $fp, 0x2A0($s5)
    ctx->pc = 0x4056d8u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 672)));
    // 0x4056dc: 0x21023  negu        $v0, $v0
    ctx->pc = 0x4056dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x4056e0: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x4056e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x4056e4: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x4056e4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4056e8: 0x8fb70030  lw          $s7, 0x30($sp)
    ctx->pc = 0x4056e8u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4056ec: 0x1060003c  beqz        $v1, . + 4 + (0x3C << 2)
    ctx->pc = 0x4056ECu;
    {
        const bool branch_taken_0x4056ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4056F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4056ECu;
        // 0x4056f0: 0x3c0982d  daddu       $s3, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4056ec) {
            ctx->pc = 0x4057E0u;
            goto label_4057e0;
        }
    }
    ctx->pc = 0x4056F4u;
    // 0x4056f4: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x4056f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x4056f8: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x4056F8u;
    {
        const bool branch_taken_0x4056f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4056FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4056F8u;
        // 0x4056fc: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4056f8) {
            ctx->pc = 0x405794u;
            goto label_405794;
        }
    }
    ctx->pc = 0x405700u;
    // 0x405700: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x405700u;
    {
        const bool branch_taken_0x405700 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x405704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405700u;
        // 0x405704: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x405700) {
            ctx->pc = 0x40574Cu;
            goto label_40574c;
        }
    }
    ctx->pc = 0x405708u;
    // 0x405708: 0x93c20000  lbu         $v0, 0x0($fp)
    ctx->pc = 0x405708u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x40570c: 0x1443000c  bne         $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x40570Cu;
    {
        const bool branch_taken_0x40570c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x405710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40570Cu;
        // 0x405710: 0x8fa40030  lw          $a0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40570c) {
            ctx->pc = 0x405740u;
            goto label_405740;
        }
    }
    ctx->pc = 0x405714u;
    // 0x405714: 0x8ea502a8  lw          $a1, 0x2A8($s5)
    ctx->pc = 0x405714u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 680)));
    // 0x405718: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x405718u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40571c: 0x94b00000  lhu         $s0, 0x0($a1)
    ctx->pc = 0x40571cu;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x405720: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x405720u;
    SET_GPR_U32(ctx, 31, 0x405728u);
    ctx->pc = 0x405724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x405720u;
    // 0x405724: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x405720u, 0x405728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x405728u;
label_405728:
    // 0x405728: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x405728u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40572c: 0x28a3a  dsrl        $s1, $v0, 8
    ctx->pc = 0x40572cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) >> 8);
    // 0x405730: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x405730u;
    SET_GPR_U32(ctx, 31, 0x405738u);
    ctx->pc = 0x405734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x405730u;
    // 0x405734: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x405730u, 0x405738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x405738u;
label_405738:
    // 0x405738: 0x2923a  dsrl        $s2, $v0, 8
    ctx->pc = 0x405738u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) >> 8);
    // 0x40573c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x40573cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_405740:
    // 0x405740: 0x27d30001  addiu       $s3, $fp, 0x1
    ctx->pc = 0x405740u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x405744: 0x24160002  addiu       $s6, $zero, 0x2
    ctx->pc = 0x405744u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x405748: 0x2497ffff  addiu       $s7, $a0, -0x1
    ctx->pc = 0x405748u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_40574c:
    // 0x40574c: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x40574cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x405750: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x405750u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x405754: 0x5445000d  bnel        $v0, $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x405754u;
    {
        const bool branch_taken_0x405754 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x405754) {
            ctx->pc = 0x405758u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x405754u;
            // 0x405758: 0x26d60002  addiu       $s6, $s6, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x40578Cu;
            goto label_40578c;
        }
    }
    ctx->pc = 0x40575Cu;
    // 0x40575c: 0x8ea502a8  lw          $a1, 0x2A8($s5)
    ctx->pc = 0x40575cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 680)));
    // 0x405760: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x405760u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x405764: 0x2c52821  addu        $a1, $s6, $a1
    ctx->pc = 0x405764u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 5)));
    // 0x405768: 0x94b00000  lhu         $s0, 0x0($a1)
    ctx->pc = 0x405768u;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x40576c: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x40576Cu;
    SET_GPR_U32(ctx, 31, 0x405774u);
    ctx->pc = 0x405770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40576Cu;
    // 0x405770: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x40576Cu, 0x405774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x405774u;
label_405774:
    // 0x405774: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x405774u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x405778: 0x28a3a  dsrl        $s1, $v0, 8
    ctx->pc = 0x405778u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) >> 8);
    // 0x40577c: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x40577Cu;
    SET_GPR_U32(ctx, 31, 0x405784u);
    ctx->pc = 0x405780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40577Cu;
    // 0x405780: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x40577Cu, 0x405784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x405784u;
label_405784:
    // 0x405784: 0x2923a  dsrl        $s2, $v0, 8
    ctx->pc = 0x405784u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) >> 8);
    // 0x405788: 0x26d60002  addiu       $s6, $s6, 0x2
    ctx->pc = 0x405788u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 2));
label_40578c:
    // 0x40578c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x40578cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x405790: 0x26f7ffff  addiu       $s7, $s7, -0x1
    ctx->pc = 0x405790u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967295));
label_405794:
    // 0x405794: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x405794u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x405798: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x405798u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x40579c: 0x5446000d  bnel        $v0, $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x40579Cu;
    {
        const bool branch_taken_0x40579c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x40579c) {
            ctx->pc = 0x4057A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x40579Cu;
            // 0x4057a0: 0x26d60002  addiu       $s6, $s6, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4057D4u;
            goto label_4057d4;
        }
    }
    ctx->pc = 0x4057A4u;
    // 0x4057a4: 0x8ea502a8  lw          $a1, 0x2A8($s5)
    ctx->pc = 0x4057a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 680)));
    // 0x4057a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4057a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4057ac: 0x2c52821  addu        $a1, $s6, $a1
    ctx->pc = 0x4057acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 5)));
    // 0x4057b0: 0x94b00000  lhu         $s0, 0x0($a1)
    ctx->pc = 0x4057b0u;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4057b4: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x4057B4u;
    SET_GPR_U32(ctx, 31, 0x4057BCu);
    ctx->pc = 0x4057B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4057B4u;
    // 0x4057b8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x4057B4u, 0x4057BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4057BCu;
label_4057bc:
    // 0x4057bc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4057bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4057c0: 0x28a3a  dsrl        $s1, $v0, 8
    ctx->pc = 0x4057c0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) >> 8);
    // 0x4057c4: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x4057C4u;
    SET_GPR_U32(ctx, 31, 0x4057CCu);
    ctx->pc = 0x4057C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4057C4u;
    // 0x4057c8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x4057C4u, 0x4057CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4057CCu;
label_4057cc:
    // 0x4057cc: 0x2923a  dsrl        $s2, $v0, 8
    ctx->pc = 0x4057ccu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) >> 8);
    // 0x4057d0: 0x26d60002  addiu       $s6, $s6, 0x2
    ctx->pc = 0x4057d0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 2));
label_4057d4:
    // 0x4057d4: 0x26f7ffff  addiu       $s7, $s7, -0x1
    ctx->pc = 0x4057d4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967295));
    // 0x4057d8: 0x12e00041  beqz        $s7, . + 4 + (0x41 << 2)
    ctx->pc = 0x4057D8u;
    {
        const bool branch_taken_0x4057d8 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x4057DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4057D8u;
        // 0x4057dc: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4057d8) {
            ctx->pc = 0x4058E0u;
            goto label_4058e0;
        }
    }
    ctx->pc = 0x4057E0u;
label_4057e0:
    // 0x4057e0: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x4057e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4057e4: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x4057e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x4057e8: 0x5447000d  bnel        $v0, $a3, . + 4 + (0xD << 2)
    ctx->pc = 0x4057E8u;
    {
        const bool branch_taken_0x4057e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        if (branch_taken_0x4057e8) {
            ctx->pc = 0x4057ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4057E8u;
            // 0x4057ec: 0x92620001  lbu         $v0, 0x1($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x405820u;
            goto label_405820;
        }
    }
    ctx->pc = 0x4057F0u;
    // 0x4057f0: 0x8ea502a8  lw          $a1, 0x2A8($s5)
    ctx->pc = 0x4057f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 680)));
    // 0x4057f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4057f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4057f8: 0x2c52821  addu        $a1, $s6, $a1
    ctx->pc = 0x4057f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 5)));
    // 0x4057fc: 0x94b00000  lhu         $s0, 0x0($a1)
    ctx->pc = 0x4057fcu;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x405800: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x405800u;
    SET_GPR_U32(ctx, 31, 0x405808u);
    ctx->pc = 0x405804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x405800u;
    // 0x405804: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x405800u, 0x405808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x405808u;
label_405808:
    // 0x405808: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x405808u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40580c: 0x28a3a  dsrl        $s1, $v0, 8
    ctx->pc = 0x40580cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) >> 8);
    // 0x405810: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x405810u;
    SET_GPR_U32(ctx, 31, 0x405818u);
    ctx->pc = 0x405814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x405810u;
    // 0x405814: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x405810u, 0x405818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x405818u;
label_405818:
    // 0x405818: 0x2923a  dsrl        $s2, $v0, 8
    ctx->pc = 0x405818u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) >> 8);
    // 0x40581c: 0x92620001  lbu         $v0, 0x1($s3)
    ctx->pc = 0x40581cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
label_405820:
    // 0x405820: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x405820u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x405824: 0x1448000c  bne         $v0, $t0, . + 4 + (0xC << 2)
    ctx->pc = 0x405824u;
    {
        const bool branch_taken_0x405824 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 8));
        ctx->pc = 0x405828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405824u;
        // 0x405828: 0x26c30002  addiu       $v1, $s6, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x405824) {
            ctx->pc = 0x405858u;
            goto label_405858;
        }
    }
    ctx->pc = 0x40582Cu;
    // 0x40582c: 0x8ea502a8  lw          $a1, 0x2A8($s5)
    ctx->pc = 0x40582cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 680)));
    // 0x405830: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x405830u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x405834: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x405834u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x405838: 0x94b00000  lhu         $s0, 0x0($a1)
    ctx->pc = 0x405838u;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x40583c: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x40583Cu;
    SET_GPR_U32(ctx, 31, 0x405844u);
    ctx->pc = 0x405840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40583Cu;
    // 0x405840: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x40583Cu, 0x405844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x405844u;
label_405844:
    // 0x405844: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x405844u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x405848: 0x28a3a  dsrl        $s1, $v0, 8
    ctx->pc = 0x405848u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) >> 8);
    // 0x40584c: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x40584Cu;
    SET_GPR_U32(ctx, 31, 0x405854u);
    ctx->pc = 0x405850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40584Cu;
    // 0x405850: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x40584Cu, 0x405854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x405854u;
label_405854:
    // 0x405854: 0x2923a  dsrl        $s2, $v0, 8
    ctx->pc = 0x405854u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) >> 8);
label_405858:
    // 0x405858: 0x92620002  lbu         $v0, 0x2($s3)
    ctx->pc = 0x405858u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x40585c: 0x24090003  addiu       $t1, $zero, 0x3
    ctx->pc = 0x40585cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x405860: 0x1449000c  bne         $v0, $t1, . + 4 + (0xC << 2)
    ctx->pc = 0x405860u;
    {
        const bool branch_taken_0x405860 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 9));
        ctx->pc = 0x405864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405860u;
        // 0x405864: 0x26c30004  addiu       $v1, $s6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x405860) {
            ctx->pc = 0x405894u;
            goto label_405894;
        }
    }
    ctx->pc = 0x405868u;
    // 0x405868: 0x8ea502a8  lw          $a1, 0x2A8($s5)
    ctx->pc = 0x405868u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 680)));
    // 0x40586c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x40586cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x405870: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x405870u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x405874: 0x94b00000  lhu         $s0, 0x0($a1)
    ctx->pc = 0x405874u;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x405878: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x405878u;
    SET_GPR_U32(ctx, 31, 0x405880u);
    ctx->pc = 0x40587Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x405878u;
    // 0x40587c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x405878u, 0x405880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x405880u;
label_405880:
    // 0x405880: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x405880u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x405884: 0x28a3a  dsrl        $s1, $v0, 8
    ctx->pc = 0x405884u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) >> 8);
    // 0x405888: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x405888u;
    SET_GPR_U32(ctx, 31, 0x405890u);
    ctx->pc = 0x40588Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x405888u;
    // 0x40588c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x405888u, 0x405890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x405890u;
label_405890:
    // 0x405890: 0x2923a  dsrl        $s2, $v0, 8
    ctx->pc = 0x405890u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) >> 8);
label_405894:
    // 0x405894: 0x92620003  lbu         $v0, 0x3($s3)
    ctx->pc = 0x405894u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 3)));
    // 0x405898: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x405898u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x40589c: 0x1444000c  bne         $v0, $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x40589Cu;
    {
        const bool branch_taken_0x40589c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x4058A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40589Cu;
        // 0x4058a0: 0x26c30006  addiu       $v1, $s6, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40589c) {
            ctx->pc = 0x4058D0u;
            goto label_4058d0;
        }
    }
    ctx->pc = 0x4058A4u;
    // 0x4058a4: 0x8ea502a8  lw          $a1, 0x2A8($s5)
    ctx->pc = 0x4058a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 680)));
    // 0x4058a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4058a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4058ac: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x4058acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x4058b0: 0x94b00000  lhu         $s0, 0x0($a1)
    ctx->pc = 0x4058b0u;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4058b4: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x4058B4u;
    SET_GPR_U32(ctx, 31, 0x4058BCu);
    ctx->pc = 0x4058B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4058B4u;
    // 0x4058b8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x4058B4u, 0x4058BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4058BCu;
label_4058bc:
    // 0x4058bc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4058bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4058c0: 0x28a3a  dsrl        $s1, $v0, 8
    ctx->pc = 0x4058c0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) >> 8);
    // 0x4058c4: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x4058C4u;
    SET_GPR_U32(ctx, 31, 0x4058CCu);
    ctx->pc = 0x4058C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4058C4u;
    // 0x4058c8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x4058C4u, 0x4058CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4058CCu;
label_4058cc:
    // 0x4058cc: 0x2923a  dsrl        $s2, $v0, 8
    ctx->pc = 0x4058ccu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) >> 8);
label_4058d0:
    // 0x4058d0: 0x26d60008  addiu       $s6, $s6, 0x8
    ctx->pc = 0x4058d0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
    // 0x4058d4: 0x26f7fffc  addiu       $s7, $s7, -0x4
    ctx->pc = 0x4058d4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967292));
    // 0x4058d8: 0x16e0ffc1  bnez        $s7, . + 4 + (-0x3F << 2)
    ctx->pc = 0x4058D8u;
    {
        const bool branch_taken_0x4058d8 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        ctx->pc = 0x4058DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4058D8u;
        // 0x4058dc: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4058d8) {
            ctx->pc = 0x4057E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4057e0;
        }
    }
    ctx->pc = 0x4058E0u;
label_4058e0:
    // 0x4058e0: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x4058e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4058e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4058e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4058e8: 0x94b00006  lhu         $s0, 0x6($a1)
    ctx->pc = 0x4058e8u;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x4058ec: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x4058ECu;
    SET_GPR_U32(ctx, 31, 0x4058F4u);
    ctx->pc = 0x4058F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4058ECu;
    // 0x4058f0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x4058ECu, 0x4058F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4058F4u;
label_4058f4:
    // 0x4058f4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4058f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4058f8: 0x288fa  dsrl        $s1, $v0, 3
    ctx->pc = 0x4058f8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) >> 3);
    // 0x4058fc: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x4058FCu;
    SET_GPR_U32(ctx, 31, 0x405904u);
    ctx->pc = 0x405900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4058FCu;
    // 0x405900: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x4058FCu, 0x405904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x405904u;
label_405904:
    // 0x405904: 0x290fa  dsrl        $s2, $v0, 3
    ctx->pc = 0x405904u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) >> 3);
    // 0x405908: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x405908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x40590c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x40590cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x405910: 0x212ba  dsrl        $v0, $v0, 10
    ctx->pc = 0x405910u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 10);
    // 0x405914: 0x52102b  sltu        $v0, $v0, $s2
    ctx->pc = 0x405914u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x405918: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x405918u;
    {
        const bool branch_taken_0x405918 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x40591Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405918u;
        // 0x40591c: 0x8fa6004c  lw          $a2, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x405918) {
            ctx->pc = 0x405930u;
            goto label_405930;
        }
    }
    ctx->pc = 0x405920u;
    // 0x405920: 0x240dffff  addiu       $t5, $zero, -0x1
    ctx->pc = 0x405920u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x405924: 0xd687a  dsrl        $t5, $t5, 1
    ctx->pc = 0x405924u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) >> 1);
    // 0x405928: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x405928u;
    {
        const bool branch_taken_0x405928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40592Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405928u;
        // 0x40592c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x405928) {
            ctx->pc = 0x405940u;
            goto label_405940;
        }
    }
    ctx->pc = 0x405930u;
label_405930:
    // 0x405930: 0x1212b8  dsll        $v0, $s2, 10
    ctx->pc = 0x405930u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << 10);
    // 0x405934: 0x51682d  daddu       $t5, $v0, $s1
    ctx->pc = 0x405934u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 17));
label_405938:
    // 0x405938: 0x8fa6004c  lw          $a2, 0x4C($sp)
    ctx->pc = 0x405938u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x40593c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x40593cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_405940:
    // 0x405940: 0xdfa70018  ld          $a3, 0x18($sp)
    ctx->pc = 0x405940u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x405944: 0x8fab0040  lw          $t3, 0x40($sp)
    ctx->pc = 0x405944u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x405948: 0x24c80001  addiu       $t0, $a2, 0x1
    ctx->pc = 0x405948u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x40594c: 0x10e00088  beqz        $a3, . + 4 + (0x88 << 2)
    ctx->pc = 0x40594Cu;
    {
        const bool branch_taken_0x40594c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x405950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40594Cu;
        // 0x405950: 0x8fa9003c  lw          $t1, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40594c) {
            ctx->pc = 0x405B70u;
            goto label_405b70;
        }
    }
    ctx->pc = 0x405954u;
    // 0x405954: 0x240c0100  addiu       $t4, $zero, 0x100
    ctx->pc = 0x405954u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x405958: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x405958u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40595c: 0x160202d  daddu       $a0, $t3, $zero
    ctx->pc = 0x40595cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x405960: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x405960u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x405964: 0x18e00030  blez        $a3, . + 4 + (0x30 << 2)
    ctx->pc = 0x405964u;
    {
        const bool branch_taken_0x405964 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x405968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405964u;
        // 0x405968: 0x30e30003  andi        $v1, $a3, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x405964) {
            ctx->pc = 0x405A28u;
            goto label_405a28;
        }
    }
    ctx->pc = 0x40596Cu;
    // 0x40596c: 0x50600046  beql        $v1, $zero, . + 4 + (0x46 << 2)
    ctx->pc = 0x40596Cu;
    {
        const bool branch_taken_0x40596c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x40596c) {
            ctx->pc = 0x405970u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x40596Cu;
            // 0x405970: 0x90a20000  lbu         $v0, 0x0($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x405A88u;
            goto label_405a88;
        }
    }
    ctx->pc = 0x405974u;
    // 0x405974: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x405974u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x405978: 0x5440002c  bnel        $v0, $zero, . + 4 + (0x2C << 2)
    ctx->pc = 0x405978u;
    {
        const bool branch_taken_0x405978 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x405978) {
            ctx->pc = 0x40597Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x405978u;
            // 0x40597c: 0x90a30000  lbu         $v1, 0x0($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x405A2Cu;
            goto label_405a2c;
        }
    }
    ctx->pc = 0x405980u;
    // 0x405980: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x405980u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x405984: 0x54400016  bnel        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x405984u;
    {
        const bool branch_taken_0x405984 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x405984) {
            ctx->pc = 0x405988u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x405984u;
            // 0x405988: 0x90a30000  lbu         $v1, 0x0($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4059E0u;
            goto label_4059e0;
        }
    }
    ctx->pc = 0x40598Cu;
    // 0x40598c: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x40598cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x405990: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x405990u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x405994: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x405994u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x405998: 0x8fa8004c  lw          $t0, 0x4C($sp)
    ctx->pc = 0x405998u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x40599c: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x40599cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x4059a0: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x4059a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4059a4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x4059a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x4059a8: 0x25060002  addiu       $a2, $t0, 0x2
    ctx->pc = 0x4059a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
    // 0x4059ac: 0x306700ff  andi        $a3, $v1, 0xFF
    ctx->pc = 0x4059acu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x4059b0: 0xa1030001  sb          $v1, 0x1($t0)
    ctx->pc = 0x4059b0u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x4059b4: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x4059b4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4059b8: 0x80582d  daddu       $t3, $a0, $zero
    ctx->pc = 0x4059b8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4059bc: 0x28e20080  slti        $v0, $a3, 0x80
    ctx->pc = 0x4059bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x4059c0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4059C0u;
    {
        const bool branch_taken_0x4059c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4059C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4059C0u;
        // 0x4059c4: 0xc0402d  daddu       $t0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4059c0) {
            ctx->pc = 0x4059D0u;
            goto label_4059d0;
        }
    }
    ctx->pc = 0x4059C8u;
    // 0x4059c8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x4059C8u;
    {
        const bool branch_taken_0x4059c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4059CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4059C8u;
        // 0x4059cc: 0xf4a02d  daddu       $s4, $a3, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4059c8) {
            ctx->pc = 0x4059D8u;
            goto label_4059d8;
        }
    }
    ctx->pc = 0x4059D0u;
label_4059d0:
    // 0x4059d0: 0x1871023  subu        $v0, $t4, $a3
    ctx->pc = 0x4059d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 7)));
    // 0x4059d4: 0x282a02d  daddu       $s4, $s4, $v0
    ctx->pc = 0x4059d4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 2));
label_4059d8:
    // 0x4059d8: 0x654a0001  daddiu      $t2, $t2, 0x1
    ctx->pc = 0x4059d8u;
    SET_GPR_S64(ctx, 10, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)1);
    // 0x4059dc: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x4059dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_4059e0:
    // 0x4059e0: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x4059e0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x4059e4: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x4059e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4059e8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x4059e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x4059ec: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x4059ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x4059f0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x4059f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x4059f4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x4059f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4059f8: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x4059f8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x4059fc: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x4059fcu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x405a00: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x405a00u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x405a04: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x405a04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x405a08: 0x28e20080  slti        $v0, $a3, 0x80
    ctx->pc = 0x405a08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x405a0c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x405A0Cu;
    {
        const bool branch_taken_0x405a0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x405A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405A0Cu;
        // 0x405a10: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x405a0c) {
            ctx->pc = 0x405A1Cu;
            goto label_405a1c;
        }
    }
    ctx->pc = 0x405A14u;
    // 0x405a14: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x405A14u;
    {
        const bool branch_taken_0x405a14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x405A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405A14u;
        // 0x405a18: 0xf4a02d  daddu       $s4, $a3, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x405a14) {
            ctx->pc = 0x405A24u;
            goto label_405a24;
        }
    }
    ctx->pc = 0x405A1Cu;
label_405a1c:
    // 0x405a1c: 0x1871023  subu        $v0, $t4, $a3
    ctx->pc = 0x405a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 7)));
    // 0x405a20: 0x282a02d  daddu       $s4, $s4, $v0
    ctx->pc = 0x405a20u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 2));
label_405a24:
    // 0x405a24: 0x654a0001  daddiu      $t2, $t2, 0x1
    ctx->pc = 0x405a24u;
    SET_GPR_S64(ctx, 10, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)1);
label_405a28:
    // 0x405a28: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x405a28u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_405a2c:
    // 0x405a2c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x405a2cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x405a30: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x405a30u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x405a34: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x405a34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x405a38: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x405a38u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x405a3c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x405a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x405a40: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x405a40u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x405a44: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x405a44u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x405a48: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x405a48u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x405a4c: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x405a4cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x405a50: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x405a50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x405a54: 0x28e20080  slti        $v0, $a3, 0x80
    ctx->pc = 0x405a54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x405a58: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x405A58u;
    {
        const bool branch_taken_0x405a58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x405A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405A58u;
        // 0x405a5c: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x405a58) {
            ctx->pc = 0x405A68u;
            goto label_405a68;
        }
    }
    ctx->pc = 0x405A60u;
    // 0x405a60: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x405A60u;
    {
        const bool branch_taken_0x405a60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x405A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405A60u;
        // 0x405a64: 0xf4a02d  daddu       $s4, $a3, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x405a60) {
            ctx->pc = 0x405A70u;
            goto label_405a70;
        }
    }
    ctx->pc = 0x405A68u;
label_405a68:
    // 0x405a68: 0x1871023  subu        $v0, $t4, $a3
    ctx->pc = 0x405a68u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 7)));
    // 0x405a6c: 0x282a02d  daddu       $s4, $s4, $v0
    ctx->pc = 0x405a6cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 2));
label_405a70:
    // 0x405a70: 0xdfa30018  ld          $v1, 0x18($sp)
    ctx->pc = 0x405a70u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x405a74: 0x654a0001  daddiu      $t2, $t2, 0x1
    ctx->pc = 0x405a74u;
    SET_GPR_S64(ctx, 10, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)1);
    // 0x405a78: 0x143102b  sltu        $v0, $t2, $v1
    ctx->pc = 0x405a78u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x405a7c: 0x1040003d  beqz        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x405A7Cu;
    {
        const bool branch_taken_0x405a7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x405A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405A7Cu;
        // 0x405a80: 0xdfa30028  ld          $v1, 0x28($sp) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x405a7c) {
            ctx->pc = 0x405B74u;
            goto label_405b74;
        }
    }
    ctx->pc = 0x405A84u;
    // 0x405a84: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x405a84u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_405a88:
    // 0x405a88: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x405a88u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x405a8c: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x405a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x405a90: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x405a90u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x405a94: 0x306700ff  andi        $a3, $v1, 0xFF
    ctx->pc = 0x405a94u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x405a98: 0x28e20080  slti        $v0, $a3, 0x80
    ctx->pc = 0x405a98u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x405a9c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x405A9Cu;
    {
        const bool branch_taken_0x405a9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x405AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405A9Cu;
        // 0x405aa0: 0xa0c30000  sb          $v1, 0x0($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x405a9c) {
            ctx->pc = 0x405AACu;
            goto label_405aac;
        }
    }
    ctx->pc = 0x405AA4u;
    // 0x405aa4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x405AA4u;
    {
        const bool branch_taken_0x405aa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x405AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405AA4u;
        // 0x405aa8: 0xf4a02d  daddu       $s4, $a3, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x405aa4) {
            ctx->pc = 0x405AB4u;
            goto label_405ab4;
        }
    }
    ctx->pc = 0x405AACu;
label_405aac:
    // 0x405aac: 0x1871023  subu        $v0, $t4, $a3
    ctx->pc = 0x405aacu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 7)));
    // 0x405ab0: 0x282a02d  daddu       $s4, $s4, $v0
    ctx->pc = 0x405ab0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 2));
label_405ab4:
    // 0x405ab4: 0x90a20001  lbu         $v0, 0x1($a1)
    ctx->pc = 0x405ab4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x405ab8: 0x90830001  lbu         $v1, 0x1($a0)
    ctx->pc = 0x405ab8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x405abc: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x405abcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x405ac0: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x405ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x405ac4: 0x306700ff  andi        $a3, $v1, 0xFF
    ctx->pc = 0x405ac4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x405ac8: 0x28e20080  slti        $v0, $a3, 0x80
    ctx->pc = 0x405ac8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x405acc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x405ACCu;
    {
        const bool branch_taken_0x405acc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x405AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405ACCu;
        // 0x405ad0: 0xa0c30001  sb          $v1, 0x1($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x405acc) {
            ctx->pc = 0x405ADCu;
            goto label_405adc;
        }
    }
    ctx->pc = 0x405AD4u;
    // 0x405ad4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x405AD4u;
    {
        const bool branch_taken_0x405ad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x405AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405AD4u;
        // 0x405ad8: 0xf4a02d  daddu       $s4, $a3, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x405ad4) {
            ctx->pc = 0x405AE4u;
            goto label_405ae4;
        }
    }
    ctx->pc = 0x405ADCu;
label_405adc:
    // 0x405adc: 0x1871023  subu        $v0, $t4, $a3
    ctx->pc = 0x405adcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 7)));
    // 0x405ae0: 0x282a02d  daddu       $s4, $s4, $v0
    ctx->pc = 0x405ae0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 2));
label_405ae4:
    // 0x405ae4: 0x90a20002  lbu         $v0, 0x2($a1)
    ctx->pc = 0x405ae4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x405ae8: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x405ae8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x405aec: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x405aecu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x405af0: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x405af0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x405af4: 0x306700ff  andi        $a3, $v1, 0xFF
    ctx->pc = 0x405af4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x405af8: 0x28e20080  slti        $v0, $a3, 0x80
    ctx->pc = 0x405af8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x405afc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x405AFCu;
    {
        const bool branch_taken_0x405afc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x405B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405AFCu;
        // 0x405b00: 0xa0c30002  sb          $v1, 0x2($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x405afc) {
            ctx->pc = 0x405B0Cu;
            goto label_405b0c;
        }
    }
    ctx->pc = 0x405B04u;
    // 0x405b04: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x405B04u;
    {
        const bool branch_taken_0x405b04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x405B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405B04u;
        // 0x405b08: 0xf4a02d  daddu       $s4, $a3, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x405b04) {
            ctx->pc = 0x405B14u;
            goto label_405b14;
        }
    }
    ctx->pc = 0x405B0Cu;
label_405b0c:
    // 0x405b0c: 0x1871023  subu        $v0, $t4, $a3
    ctx->pc = 0x405b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 7)));
    // 0x405b10: 0x282a02d  daddu       $s4, $s4, $v0
    ctx->pc = 0x405b10u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 2));
label_405b14:
    // 0x405b14: 0x90a30003  lbu         $v1, 0x3($a1)
    ctx->pc = 0x405b14u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
    // 0x405b18: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x405b18u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x405b1c: 0x90820003  lbu         $v0, 0x3($a0)
    ctx->pc = 0x405b1cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x405b20: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x405b20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x405b24: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x405b24u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x405b28: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x405b28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x405b2c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x405b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x405b30: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x405b30u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x405b34: 0xa0c20003  sb          $v0, 0x3($a2)
    ctx->pc = 0x405b34u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x405b38: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x405b38u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x405b3c: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x405b3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x405b40: 0x28e20080  slti        $v0, $a3, 0x80
    ctx->pc = 0x405b40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x405b44: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x405B44u;
    {
        const bool branch_taken_0x405b44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x405B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405B44u;
        // 0x405b48: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x405b44) {
            ctx->pc = 0x405B54u;
            goto label_405b54;
        }
    }
    ctx->pc = 0x405B4Cu;
    // 0x405b4c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x405B4Cu;
    {
        const bool branch_taken_0x405b4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x405B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405B4Cu;
        // 0x405b50: 0xf4a02d  daddu       $s4, $a3, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x405b4c) {
            ctx->pc = 0x405B5Cu;
            goto label_405b5c;
        }
    }
    ctx->pc = 0x405B54u;
label_405b54:
    // 0x405b54: 0x1871023  subu        $v0, $t4, $a3
    ctx->pc = 0x405b54u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 7)));
    // 0x405b58: 0x282a02d  daddu       $s4, $s4, $v0
    ctx->pc = 0x405b58u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 2));
label_405b5c:
    // 0x405b5c: 0xdfa70018  ld          $a3, 0x18($sp)
    ctx->pc = 0x405b5cu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x405b60: 0x654a0004  daddiu      $t2, $t2, 0x4
    ctx->pc = 0x405b60u;
    SET_GPR_S64(ctx, 10, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)4);
    // 0x405b64: 0x147102b  sltu        $v0, $t2, $a3
    ctx->pc = 0x405b64u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x405b68: 0x5440ffc7  bnel        $v0, $zero, . + 4 + (-0x39 << 2)
    ctx->pc = 0x405B68u;
    {
        const bool branch_taken_0x405b68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x405b68) {
            ctx->pc = 0x405B6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x405B68u;
            // 0x405b6c: 0x90a20000  lbu         $v0, 0x0($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x405A88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_405a88;
        }
    }
    ctx->pc = 0x405B70u;
label_405b70:
    // 0x405b70: 0xdfa30028  ld          $v1, 0x28($sp)
    ctx->pc = 0x405b70u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_405b74:
    // 0x405b74: 0x143102b  sltu        $v0, $t2, $v1
    ctx->pc = 0x405b74u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x405b78: 0x10400055  beqz        $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x405B78u;
    {
        const bool branch_taken_0x405b78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x405B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405B78u;
        // 0x405b7c: 0x6a102f  dsubu       $v0, $v1, $t2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) - GPR_U64(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x405b78) {
            ctx->pc = 0x405CD0u;
            goto label_405cd0;
        }
    }
    ctx->pc = 0x405B80u;
    // 0x405b80: 0xdfa70028  ld          $a3, 0x28($sp)
    ctx->pc = 0x405b80u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x405b84: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x405b84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x405b88: 0x240e0100  addiu       $t6, $zero, 0x100
    ctx->pc = 0x405b88u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x405b8c: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x405b8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x405b90: 0x160282d  daddu       $a1, $t3, $zero
    ctx->pc = 0x405b90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x405b94: 0x120302d  daddu       $a2, $t1, $zero
    ctx->pc = 0x405b94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x405b98: 0x147102a  slt         $v0, $t2, $a3
    ctx->pc = 0x405b98u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x405b9c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x405B9Cu;
    {
        const bool branch_taken_0x405b9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x405BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405B9Cu;
        // 0x405ba0: 0x8fac0040  lw          $t4, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x405b9c) {
            ctx->pc = 0x405BACu;
            goto label_405bac;
        }
    }
    ctx->pc = 0x405BA4u;
    // 0x405ba4: 0x5060001c  beql        $v1, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x405BA4u;
    {
        const bool branch_taken_0x405ba4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x405ba4) {
            ctx->pc = 0x405BA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x405BA4u;
            // 0x405ba8: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x405C18u;
            goto label_405c18;
        }
    }
    ctx->pc = 0x405BACu;
label_405bac:
    // 0x405bac: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x405bacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x405bb0: 0x25260001  addiu       $a2, $t1, 0x1
    ctx->pc = 0x405bb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x405bb4: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x405bb4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x405bb8: 0x25650001  addiu       $a1, $t3, 0x1
    ctx->pc = 0x405bb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x405bbc: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x405bbcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x405bc0: 0x246c0001  addiu       $t4, $v1, 0x1
    ctx->pc = 0x405bc0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x405bc4: 0x91630000  lbu         $v1, 0x0($t3)
    ctx->pc = 0x405bc4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x405bc8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x405bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x405bcc: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x405bccu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x405bd0: 0x25040001  addiu       $a0, $t0, 0x1
    ctx->pc = 0x405bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x405bd4: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x405bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x405bd8: 0x306700ff  andi        $a3, $v1, 0xFF
    ctx->pc = 0x405bd8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x405bdc: 0x28e20080  slti        $v0, $a3, 0x80
    ctx->pc = 0x405bdcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x405be0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x405BE0u;
    {
        const bool branch_taken_0x405be0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x405BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405BE0u;
        // 0x405be4: 0xa1030000  sb          $v1, 0x0($t0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x405be0) {
            ctx->pc = 0x405BF0u;
            goto label_405bf0;
        }
    }
    ctx->pc = 0x405BE8u;
    // 0x405be8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x405BE8u;
    {
        const bool branch_taken_0x405be8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x405BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405BE8u;
        // 0x405bec: 0xf4a02d  daddu       $s4, $a3, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x405be8) {
            ctx->pc = 0x405BF8u;
            goto label_405bf8;
        }
    }
    ctx->pc = 0x405BF0u;
label_405bf0:
    // 0x405bf0: 0x1c71023  subu        $v0, $t6, $a3
    ctx->pc = 0x405bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 7)));
    // 0x405bf4: 0x282a02d  daddu       $s4, $s4, $v0
    ctx->pc = 0x405bf4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 2));
label_405bf8:
    // 0x405bf8: 0x1b4102b  sltu        $v0, $t5, $s4
    ctx->pc = 0x405bf8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x405bfc: 0x14400034  bnez        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x405BFCu;
    {
        const bool branch_taken_0x405bfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x405C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405BFCu;
        // 0x405c00: 0xdfa70028  ld          $a3, 0x28($sp) (Delay Slot)
        SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x405bfc) {
            ctx->pc = 0x405CD0u;
            goto label_405cd0;
        }
    }
    ctx->pc = 0x405C04u;
    // 0x405c04: 0x654a0001  daddiu      $t2, $t2, 0x1
    ctx->pc = 0x405c04u;
    SET_GPR_S64(ctx, 10, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)1);
    // 0x405c08: 0x147102b  sltu        $v0, $t2, $a3
    ctx->pc = 0x405c08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x405c0c: 0x50400031  beql        $v0, $zero, . + 4 + (0x31 << 2)
    ctx->pc = 0x405C0Cu;
    {
        const bool branch_taken_0x405c0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x405c0c) {
            ctx->pc = 0x405C10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x405C0Cu;
            // 0x405c10: 0x92a3029c  lbu         $v1, 0x29C($s5) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 668)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x405CD4u;
            goto label_405cd4;
        }
    }
    ctx->pc = 0x405C14u;
    // 0x405c14: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x405c14u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_405c18:
    // 0x405c18: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x405c18u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x405c1c: 0x180282d  daddu       $a1, $t4, $zero
    ctx->pc = 0x405c1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x405c20: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x405c20u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x405c24: 0x0  nop
    ctx->pc = 0x405c24u;
    // NOP
label_405c28:
    // 0x405c28: 0x90a40000  lbu         $a0, 0x0($a1)
    ctx->pc = 0x405c28u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x405c2c: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x405c2cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x405c30: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x405c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x405c34: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x405c34u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x405c38: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x405c38u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x405c3c: 0x306700ff  andi        $a3, $v1, 0xFF
    ctx->pc = 0x405c3cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x405c40: 0x28e20080  slti        $v0, $a3, 0x80
    ctx->pc = 0x405c40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x405c44: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x405C44u;
    {
        const bool branch_taken_0x405c44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x405C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405C44u;
        // 0x405c48: 0xa1230000  sb          $v1, 0x0($t1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x405c44) {
            ctx->pc = 0x405C54u;
            goto label_405c54;
        }
    }
    ctx->pc = 0x405C4Cu;
    // 0x405c4c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x405C4Cu;
    {
        const bool branch_taken_0x405c4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x405C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405C4Cu;
        // 0x405c50: 0xf4a02d  daddu       $s4, $a3, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x405c4c) {
            ctx->pc = 0x405C5Cu;
            goto label_405c5c;
        }
    }
    ctx->pc = 0x405C54u;
label_405c54:
    // 0x405c54: 0x1c71023  subu        $v0, $t6, $a3
    ctx->pc = 0x405c54u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 7)));
    // 0x405c58: 0x282a02d  daddu       $s4, $s4, $v0
    ctx->pc = 0x405c58u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 2));
label_405c5c:
    // 0x405c5c: 0x1b4102b  sltu        $v0, $t5, $s4
    ctx->pc = 0x405c5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x405c60: 0x5440001c  bnel        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x405C60u;
    {
        const bool branch_taken_0x405c60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x405c60) {
            ctx->pc = 0x405C64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x405C60u;
            // 0x405c64: 0x92a3029c  lbu         $v1, 0x29C($s5) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 668)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x405CD4u;
            goto label_405cd4;
        }
    }
    ctx->pc = 0x405C68u;
    // 0x405c68: 0x90c30001  lbu         $v1, 0x1($a2)
    ctx->pc = 0x405c68u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x405c6c: 0x654a0001  daddiu      $t2, $t2, 0x1
    ctx->pc = 0x405c6cu;
    SET_GPR_S64(ctx, 10, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)1);
    // 0x405c70: 0x90a40001  lbu         $a0, 0x1($a1)
    ctx->pc = 0x405c70u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x405c74: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x405c74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x405c78: 0x91020001  lbu         $v0, 0x1($t0)
    ctx->pc = 0x405c78u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 1)));
    // 0x405c7c: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x405c7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x405c80: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x405c80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x405c84: 0x25080002  addiu       $t0, $t0, 0x2
    ctx->pc = 0x405c84u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
    // 0x405c88: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x405c88u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x405c8c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x405c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x405c90: 0xa1220001  sb          $v0, 0x1($t1)
    ctx->pc = 0x405c90u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x405c94: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x405c94u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x405c98: 0x28e20080  slti        $v0, $a3, 0x80
    ctx->pc = 0x405c98u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x405c9c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x405C9Cu;
    {
        const bool branch_taken_0x405c9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x405CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405C9Cu;
        // 0x405ca0: 0x25290002  addiu       $t1, $t1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x405c9c) {
            ctx->pc = 0x405CACu;
            goto label_405cac;
        }
    }
    ctx->pc = 0x405CA4u;
    // 0x405ca4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x405CA4u;
    {
        const bool branch_taken_0x405ca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x405CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405CA4u;
        // 0x405ca8: 0xf4a02d  daddu       $s4, $a3, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x405ca4) {
            ctx->pc = 0x405CB4u;
            goto label_405cb4;
        }
    }
    ctx->pc = 0x405CACu;
label_405cac:
    // 0x405cac: 0x1c71023  subu        $v0, $t6, $a3
    ctx->pc = 0x405cacu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 7)));
    // 0x405cb0: 0x282a02d  daddu       $s4, $s4, $v0
    ctx->pc = 0x405cb0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 2));
label_405cb4:
    // 0x405cb4: 0x1b4102b  sltu        $v0, $t5, $s4
    ctx->pc = 0x405cb4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x405cb8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x405CB8u;
    {
        const bool branch_taken_0x405cb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x405CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405CB8u;
        // 0x405cbc: 0xdfa30028  ld          $v1, 0x28($sp) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x405cb8) {
            ctx->pc = 0x405CD0u;
            goto label_405cd0;
        }
    }
    ctx->pc = 0x405CC0u;
    // 0x405cc0: 0x654a0001  daddiu      $t2, $t2, 0x1
    ctx->pc = 0x405cc0u;
    SET_GPR_S64(ctx, 10, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)1);
    // 0x405cc4: 0x143102b  sltu        $v0, $t2, $v1
    ctx->pc = 0x405cc4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x405cc8: 0x5440ffd7  bnel        $v0, $zero, . + 4 + (-0x29 << 2)
    ctx->pc = 0x405CC8u;
    {
        const bool branch_taken_0x405cc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x405cc8) {
            ctx->pc = 0x405CCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x405CC8u;
            // 0x405ccc: 0x90c20000  lbu         $v0, 0x0($a2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x405C28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_405c28;
        }
    }
    ctx->pc = 0x405CD0u;
label_405cd0:
    // 0x405cd0: 0x92a3029c  lbu         $v1, 0x29C($s5)
    ctx->pc = 0x405cd0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 668)));
label_405cd4:
    // 0x405cd4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x405cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x405cd8: 0x5462009d  bnel        $v1, $v0, . + 4 + (0x9D << 2)
    ctx->pc = 0x405CD8u;
    {
        const bool branch_taken_0x405cd8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x405cd8) {
            ctx->pc = 0x405CDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x405CD8u;
            // 0x405cdc: 0xdfa80010  ld          $t0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x405F50u;
            goto label_405f50;
        }
    }
    ctx->pc = 0x405CE0u;
    // 0x405ce0: 0x8ea402ac  lw          $a0, 0x2AC($s5)
    ctx->pc = 0x405ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 684)));
    // 0x405ce4: 0x141aba  dsrl        $v1, $s4, 10
    ctx->pc = 0x405ce4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) >> 10);
    // 0x405ce8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x405ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x405cec: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x405cecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x405cf0: 0x212ba  dsrl        $v0, $v0, 10
    ctx->pc = 0x405cf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 10);
    // 0x405cf4: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x405cf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x405cf8: 0x629024  and         $s2, $v1, $v0
    ctx->pc = 0x405cf8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x405cfc: 0x3291ffff  andi        $s1, $s4, 0xFFFF
    ctx->pc = 0x405cfcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)65535);
    // 0x405d00: 0x10a0007d  beqz        $a1, . + 4 + (0x7D << 2)
    ctx->pc = 0x405D00u;
    {
        const bool branch_taken_0x405d00 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x405D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405D00u;
        // 0x405d04: 0xafa40034  sw          $a0, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x405d00) {
            ctx->pc = 0x405EF8u;
            goto label_405ef8;
        }
    }
    ctx->pc = 0x405D08u;
    // 0x405d08: 0x8eb702a0  lw          $s7, 0x2A0($s5)
    ctx->pc = 0x405d08u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 672)));
    // 0x405d0c: 0x51023  negu        $v0, $a1
    ctx->pc = 0x405d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
    // 0x405d10: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x405d10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x405d14: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x405d14u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x405d18: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x405d18u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x405d1c: 0x1060003a  beqz        $v1, . + 4 + (0x3A << 2)
    ctx->pc = 0x405D1Cu;
    {
        const bool branch_taken_0x405d1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x405D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405D1Cu;
        // 0x405d20: 0x2e0982d  daddu       $s3, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x405d1c) {
            ctx->pc = 0x405E08u;
            goto label_405e08;
        }
    }
    ctx->pc = 0x405D24u;
    // 0x405d24: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x405d24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x405d28: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x405D28u;
    {
        const bool branch_taken_0x405d28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x405D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405D28u;
        // 0x405d2c: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x405d28) {
            ctx->pc = 0x405DC0u;
            goto label_405dc0;
        }
    }
    ctx->pc = 0x405D30u;
    // 0x405d30: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x405D30u;
    {
        const bool branch_taken_0x405d30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x405d30) {
            ctx->pc = 0x405D34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x405D30u;
            // 0x405d34: 0x92620000  lbu         $v0, 0x0($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x405D80u;
            goto label_405d80;
        }
    }
    ctx->pc = 0x405D38u;
    // 0x405d38: 0x92e20000  lbu         $v0, 0x0($s7)
    ctx->pc = 0x405d38u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x405d3c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x405D3Cu;
    {
        const bool branch_taken_0x405d3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x405D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405D3Cu;
        // 0x405d40: 0x8fa60030  lw          $a2, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x405d3c) {
            ctx->pc = 0x405D70u;
            goto label_405d70;
        }
    }
    ctx->pc = 0x405D44u;
    // 0x405d44: 0x8ea502a4  lw          $a1, 0x2A4($s5)
    ctx->pc = 0x405d44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 676)));
    // 0x405d48: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x405d48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x405d4c: 0x94b00000  lhu         $s0, 0x0($a1)
    ctx->pc = 0x405d4cu;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x405d50: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x405D50u;
    SET_GPR_U32(ctx, 31, 0x405D58u);
    ctx->pc = 0x405D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x405D50u;
    // 0x405d54: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x405D50u, 0x405D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x405D58u;
label_405d58:
    // 0x405d58: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x405d58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x405d5c: 0x28a3a  dsrl        $s1, $v0, 8
    ctx->pc = 0x405d5cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) >> 8);
    // 0x405d60: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x405D60u;
    SET_GPR_U32(ctx, 31, 0x405D68u);
    ctx->pc = 0x405D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x405D60u;
    // 0x405d64: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x405D60u, 0x405D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x405D68u;
label_405d68:
    // 0x405d68: 0x2923a  dsrl        $s2, $v0, 8
    ctx->pc = 0x405d68u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) >> 8);
    // 0x405d6c: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x405d6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_405d70:
    // 0x405d70: 0x26f30001  addiu       $s3, $s7, 0x1
    ctx->pc = 0x405d70u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x405d74: 0x24140002  addiu       $s4, $zero, 0x2
    ctx->pc = 0x405d74u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x405d78: 0x24d6ffff  addiu       $s6, $a2, -0x1
    ctx->pc = 0x405d78u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x405d7c: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x405d7cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_405d80:
    // 0x405d80: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x405D80u;
    {
        const bool branch_taken_0x405d80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x405d80) {
            ctx->pc = 0x405D84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x405D80u;
            // 0x405d84: 0x26940002  addiu       $s4, $s4, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x405DB8u;
            goto label_405db8;
        }
    }
    ctx->pc = 0x405D88u;
    // 0x405d88: 0x8ea502a4  lw          $a1, 0x2A4($s5)
    ctx->pc = 0x405d88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 676)));
    // 0x405d8c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x405d8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x405d90: 0x2852821  addu        $a1, $s4, $a1
    ctx->pc = 0x405d90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
    // 0x405d94: 0x94b00000  lhu         $s0, 0x0($a1)
    ctx->pc = 0x405d94u;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x405d98: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x405D98u;
    SET_GPR_U32(ctx, 31, 0x405DA0u);
    ctx->pc = 0x405D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x405D98u;
    // 0x405d9c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x405D98u, 0x405DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x405DA0u;
label_405da0:
    // 0x405da0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x405da0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x405da4: 0x28a3a  dsrl        $s1, $v0, 8
    ctx->pc = 0x405da4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) >> 8);
    // 0x405da8: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x405DA8u;
    SET_GPR_U32(ctx, 31, 0x405DB0u);
    ctx->pc = 0x405DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x405DA8u;
    // 0x405dac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x405DA8u, 0x405DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x405DB0u;
label_405db0:
    // 0x405db0: 0x2923a  dsrl        $s2, $v0, 8
    ctx->pc = 0x405db0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) >> 8);
    // 0x405db4: 0x26940002  addiu       $s4, $s4, 0x2
    ctx->pc = 0x405db4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
label_405db8:
    // 0x405db8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x405db8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x405dbc: 0x26d6ffff  addiu       $s6, $s6, -0x1
    ctx->pc = 0x405dbcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
label_405dc0:
    // 0x405dc0: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x405dc0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x405dc4: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x405DC4u;
    {
        const bool branch_taken_0x405dc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x405dc4) {
            ctx->pc = 0x405DC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x405DC4u;
            // 0x405dc8: 0x26940002  addiu       $s4, $s4, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x405DFCu;
            goto label_405dfc;
        }
    }
    ctx->pc = 0x405DCCu;
    // 0x405dcc: 0x8ea502a4  lw          $a1, 0x2A4($s5)
    ctx->pc = 0x405dccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 676)));
    // 0x405dd0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x405dd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x405dd4: 0x2852821  addu        $a1, $s4, $a1
    ctx->pc = 0x405dd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
    // 0x405dd8: 0x94b00000  lhu         $s0, 0x0($a1)
    ctx->pc = 0x405dd8u;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x405ddc: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x405DDCu;
    SET_GPR_U32(ctx, 31, 0x405DE4u);
    ctx->pc = 0x405DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x405DDCu;
    // 0x405de0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x405DDCu, 0x405DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x405DE4u;
label_405de4:
    // 0x405de4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x405de4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x405de8: 0x28a3a  dsrl        $s1, $v0, 8
    ctx->pc = 0x405de8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) >> 8);
    // 0x405dec: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x405DECu;
    SET_GPR_U32(ctx, 31, 0x405DF4u);
    ctx->pc = 0x405DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x405DECu;
    // 0x405df0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x405DECu, 0x405DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x405DF4u;
label_405df4:
    // 0x405df4: 0x2923a  dsrl        $s2, $v0, 8
    ctx->pc = 0x405df4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) >> 8);
    // 0x405df8: 0x26940002  addiu       $s4, $s4, 0x2
    ctx->pc = 0x405df8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
label_405dfc:
    // 0x405dfc: 0x26d6ffff  addiu       $s6, $s6, -0x1
    ctx->pc = 0x405dfcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
    // 0x405e00: 0x12c0003d  beqz        $s6, . + 4 + (0x3D << 2)
    ctx->pc = 0x405E00u;
    {
        const bool branch_taken_0x405e00 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x405E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405E00u;
        // 0x405e04: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x405e00) {
            ctx->pc = 0x405EF8u;
            goto label_405ef8;
        }
    }
    ctx->pc = 0x405E08u;
label_405e08:
    // 0x405e08: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x405e08u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x405e0c: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x405E0Cu;
    {
        const bool branch_taken_0x405e0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x405e0c) {
            ctx->pc = 0x405E10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x405E0Cu;
            // 0x405e10: 0x92620001  lbu         $v0, 0x1($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x405E44u;
            goto label_405e44;
        }
    }
    ctx->pc = 0x405E14u;
    // 0x405e14: 0x8ea502a4  lw          $a1, 0x2A4($s5)
    ctx->pc = 0x405e14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 676)));
    // 0x405e18: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x405e18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x405e1c: 0x2852821  addu        $a1, $s4, $a1
    ctx->pc = 0x405e1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
    // 0x405e20: 0x94b00000  lhu         $s0, 0x0($a1)
    ctx->pc = 0x405e20u;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x405e24: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x405E24u;
    SET_GPR_U32(ctx, 31, 0x405E2Cu);
    ctx->pc = 0x405E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x405E24u;
    // 0x405e28: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x405E24u, 0x405E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x405E2Cu;
label_405e2c:
    // 0x405e2c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x405e2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x405e30: 0x28a3a  dsrl        $s1, $v0, 8
    ctx->pc = 0x405e30u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) >> 8);
    // 0x405e34: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x405E34u;
    SET_GPR_U32(ctx, 31, 0x405E3Cu);
    ctx->pc = 0x405E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x405E34u;
    // 0x405e38: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x405E34u, 0x405E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x405E3Cu;
label_405e3c:
    // 0x405e3c: 0x2923a  dsrl        $s2, $v0, 8
    ctx->pc = 0x405e3cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) >> 8);
    // 0x405e40: 0x92620001  lbu         $v0, 0x1($s3)
    ctx->pc = 0x405e40u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
label_405e44:
    // 0x405e44: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x405E44u;
    {
        const bool branch_taken_0x405e44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x405E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405E44u;
        // 0x405e48: 0x26830002  addiu       $v1, $s4, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x405e44) {
            ctx->pc = 0x405E78u;
            goto label_405e78;
        }
    }
    ctx->pc = 0x405E4Cu;
    // 0x405e4c: 0x8ea502a4  lw          $a1, 0x2A4($s5)
    ctx->pc = 0x405e4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 676)));
    // 0x405e50: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x405e50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x405e54: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x405e54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x405e58: 0x94b00000  lhu         $s0, 0x0($a1)
    ctx->pc = 0x405e58u;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x405e5c: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x405E5Cu;
    SET_GPR_U32(ctx, 31, 0x405E64u);
    ctx->pc = 0x405E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x405E5Cu;
    // 0x405e60: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x405E5Cu, 0x405E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x405E64u;
label_405e64:
    // 0x405e64: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x405e64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x405e68: 0x28a3a  dsrl        $s1, $v0, 8
    ctx->pc = 0x405e68u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) >> 8);
    // 0x405e6c: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x405E6Cu;
    SET_GPR_U32(ctx, 31, 0x405E74u);
    ctx->pc = 0x405E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x405E6Cu;
    // 0x405e70: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x405E6Cu, 0x405E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x405E74u;
label_405e74:
    // 0x405e74: 0x2923a  dsrl        $s2, $v0, 8
    ctx->pc = 0x405e74u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) >> 8);
label_405e78:
    // 0x405e78: 0x92620002  lbu         $v0, 0x2($s3)
    ctx->pc = 0x405e78u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x405e7c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x405E7Cu;
    {
        const bool branch_taken_0x405e7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x405E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405E7Cu;
        // 0x405e80: 0x26830004  addiu       $v1, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x405e7c) {
            ctx->pc = 0x405EB0u;
            goto label_405eb0;
        }
    }
    ctx->pc = 0x405E84u;
    // 0x405e84: 0x8ea502a4  lw          $a1, 0x2A4($s5)
    ctx->pc = 0x405e84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 676)));
    // 0x405e88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x405e88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x405e8c: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x405e8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x405e90: 0x94b00000  lhu         $s0, 0x0($a1)
    ctx->pc = 0x405e90u;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x405e94: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x405E94u;
    SET_GPR_U32(ctx, 31, 0x405E9Cu);
    ctx->pc = 0x405E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x405E94u;
    // 0x405e98: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x405E94u, 0x405E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x405E9Cu;
label_405e9c:
    // 0x405e9c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x405e9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x405ea0: 0x28a3a  dsrl        $s1, $v0, 8
    ctx->pc = 0x405ea0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) >> 8);
    // 0x405ea4: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x405EA4u;
    SET_GPR_U32(ctx, 31, 0x405EACu);
    ctx->pc = 0x405EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x405EA4u;
    // 0x405ea8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x405EA4u, 0x405EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x405EACu;
label_405eac:
    // 0x405eac: 0x2923a  dsrl        $s2, $v0, 8
    ctx->pc = 0x405eacu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) >> 8);
label_405eb0:
    // 0x405eb0: 0x92620003  lbu         $v0, 0x3($s3)
    ctx->pc = 0x405eb0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 3)));
    // 0x405eb4: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x405EB4u;
    {
        const bool branch_taken_0x405eb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x405EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405EB4u;
        // 0x405eb8: 0x26830006  addiu       $v1, $s4, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x405eb4) {
            ctx->pc = 0x405EE8u;
            goto label_405ee8;
        }
    }
    ctx->pc = 0x405EBCu;
    // 0x405ebc: 0x8ea502a4  lw          $a1, 0x2A4($s5)
    ctx->pc = 0x405ebcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 676)));
    // 0x405ec0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x405ec0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x405ec4: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x405ec4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x405ec8: 0x94b00000  lhu         $s0, 0x0($a1)
    ctx->pc = 0x405ec8u;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x405ecc: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x405ECCu;
    SET_GPR_U32(ctx, 31, 0x405ED4u);
    ctx->pc = 0x405ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x405ECCu;
    // 0x405ed0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x405ECCu, 0x405ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x405ED4u;
label_405ed4:
    // 0x405ed4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x405ed4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x405ed8: 0x28a3a  dsrl        $s1, $v0, 8
    ctx->pc = 0x405ed8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) >> 8);
    // 0x405edc: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x405EDCu;
    SET_GPR_U32(ctx, 31, 0x405EE4u);
    ctx->pc = 0x405EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x405EDCu;
    // 0x405ee0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x405EDCu, 0x405EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x405EE4u;
label_405ee4:
    // 0x405ee4: 0x2923a  dsrl        $s2, $v0, 8
    ctx->pc = 0x405ee4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) >> 8);
label_405ee8:
    // 0x405ee8: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x405ee8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x405eec: 0x26d6fffc  addiu       $s6, $s6, -0x4
    ctx->pc = 0x405eecu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967292));
    // 0x405ef0: 0x16c0ffc5  bnez        $s6, . + 4 + (-0x3B << 2)
    ctx->pc = 0x405EF0u;
    {
        const bool branch_taken_0x405ef0 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x405EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405EF0u;
        // 0x405ef4: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x405ef0) {
            ctx->pc = 0x405E08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_405e08;
        }
    }
    ctx->pc = 0x405EF8u;
label_405ef8:
    // 0x405ef8: 0x8fa70034  lw          $a3, 0x34($sp)
    ctx->pc = 0x405ef8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x405efc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x405efcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x405f00: 0x94f00006  lhu         $s0, 0x6($a3)
    ctx->pc = 0x405f00u;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 6)));
    // 0x405f04: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x405F04u;
    SET_GPR_U32(ctx, 31, 0x405F0Cu);
    ctx->pc = 0x405F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x405F04u;
    // 0x405f08: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x405F04u, 0x405F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x405F0Cu;
label_405f0c:
    // 0x405f0c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x405f0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x405f10: 0x288fa  dsrl        $s1, $v0, 3
    ctx->pc = 0x405f10u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) >> 3);
    // 0x405f14: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x405F14u;
    SET_GPR_U32(ctx, 31, 0x405F1Cu);
    ctx->pc = 0x405F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x405F14u;
    // 0x405f18: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x405F14u, 0x405F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x405F1Cu;
label_405f1c:
    // 0x405f1c: 0x290fa  dsrl        $s2, $v0, 3
    ctx->pc = 0x405f1cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) >> 3);
    // 0x405f20: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x405f20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x405f24: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x405f24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x405f28: 0x212ba  dsrl        $v0, $v0, 10
    ctx->pc = 0x405f28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 10);
    // 0x405f2c: 0x52102b  sltu        $v0, $v0, $s2
    ctx->pc = 0x405f2cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x405f30: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x405F30u;
    {
        const bool branch_taken_0x405f30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x405F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405F30u;
        // 0x405f34: 0xdfa80010  ld          $t0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x405f30) {
            ctx->pc = 0x405F48u;
            goto label_405f48;
        }
    }
    ctx->pc = 0x405F38u;
    // 0x405f38: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x405f38u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x405f3c: 0x14a07a  dsrl        $s4, $s4, 1
    ctx->pc = 0x405f3cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) >> 1);
    // 0x405f40: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x405F40u;
    {
        const bool branch_taken_0x405f40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x405F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405F40u;
        // 0x405f44: 0x288102b  sltu        $v0, $s4, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x405f40) {
            ctx->pc = 0x405F54u;
            goto label_405f54;
        }
    }
    ctx->pc = 0x405F48u;
label_405f48:
    // 0x405f48: 0x1212b8  dsll        $v0, $s2, 10
    ctx->pc = 0x405f48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << 10);
    // 0x405f4c: 0x51a02d  daddu       $s4, $v0, $s1
    ctx->pc = 0x405f4cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 17));
label_405f50:
    // 0x405f50: 0x288102b  sltu        $v0, $s4, $t0
    ctx->pc = 0x405f50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
label_405f54:
    // 0x405f54: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x405F54u;
    {
        const bool branch_taken_0x405f54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x405F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405F54u;
        // 0x405f58: 0x8fa30020  lw          $v1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x405f54) {
            ctx->pc = 0x405F6Cu;
            goto label_405f6c;
        }
    }
    ctx->pc = 0x405F5Cu;
    // 0x405f5c: 0x8ea901c8  lw          $t1, 0x1C8($s5)
    ctx->pc = 0x405f5cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 456)));
    // 0x405f60: 0xffb40010  sd          $s4, 0x10($sp)
    ctx->pc = 0x405f60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 20));
    // 0x405f64: 0xafa90008  sw          $t1, 0x8($sp)
    ctx->pc = 0x405f64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 9));
label_405f68:
    // 0x405f68: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x405f68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_405f6c:
    // 0x405f6c: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x405f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x405f70: 0x146200d9  bne         $v1, $v0, . + 4 + (0xD9 << 2)
    ctx->pc = 0x405F70u;
    {
        const bool branch_taken_0x405f70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x405F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405F70u;
        // 0x405f74: 0x8fa80020  lw          $t0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x405f70) {
            ctx->pc = 0x4062D8u;
            goto label_4062d8;
        }
    }
    ctx->pc = 0x405F78u;
    // 0x405f78: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x405f78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x405f7c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x405f7cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x405f80: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x405f80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x405f84: 0x8ea601cc  lw          $a2, 0x1CC($s5)
    ctx->pc = 0x405f84u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 460)));
    // 0x405f88: 0x248c0001  addiu       $t4, $a0, 0x1
    ctx->pc = 0x405f88u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x405f8c: 0x24ab0001  addiu       $t3, $a1, 0x1
    ctx->pc = 0x405f8cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x405f90: 0xdfa70018  ld          $a3, 0x18($sp)
    ctx->pc = 0x405f90u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x405f94: 0x24c90001  addiu       $t1, $a2, 0x1
    ctx->pc = 0x405f94u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x405f98: 0xafac0040  sw          $t4, 0x40($sp)
    ctx->pc = 0x405f98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 12));
    // 0x405f9c: 0x10e00052  beqz        $a3, . + 4 + (0x52 << 2)
    ctx->pc = 0x405F9Cu;
    {
        const bool branch_taken_0x405f9c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x405FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405F9Cu;
        // 0x405fa0: 0xafab003c  sw          $t3, 0x3C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x405f9c) {
            ctx->pc = 0x4060E8u;
            goto label_4060e8;
        }
    }
    ctx->pc = 0x405FA4u;
    // 0x405fa4: 0xdfa80018  ld          $t0, 0x18($sp)
    ctx->pc = 0x405fa4u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x405fa8: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x405fa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x405fac: 0x180282d  daddu       $a1, $t4, $zero
    ctx->pc = 0x405facu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x405fb0: 0x160382d  daddu       $a3, $t3, $zero
    ctx->pc = 0x405fb0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x405fb4: 0x19000022  blez        $t0, . + 4 + (0x22 << 2)
    ctx->pc = 0x405FB4u;
    {
        const bool branch_taken_0x405fb4 = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x405FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405FB4u;
        // 0x405fb8: 0x31030003  andi        $v1, $t0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x405fb4) {
            ctx->pc = 0x406040u;
            goto label_406040;
        }
    }
    ctx->pc = 0x405FBCu;
    // 0x405fbc: 0x1060002e  beqz        $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x405FBCu;
    {
        const bool branch_taken_0x405fbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x405FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x405FBCu;
        // 0x405fc0: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x405fbc) {
            ctx->pc = 0x406078u;
            goto label_406078;
        }
    }
    ctx->pc = 0x405FC4u;
    // 0x405fc4: 0x5440001f  bnel        $v0, $zero, . + 4 + (0x1F << 2)
    ctx->pc = 0x405FC4u;
    {
        const bool branch_taken_0x405fc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x405fc4) {
            ctx->pc = 0x405FC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x405FC4u;
            // 0x405fc8: 0x90a20000  lbu         $v0, 0x0($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x406044u;
            goto label_406044;
        }
    }
    ctx->pc = 0x405FCCu;
    // 0x405fcc: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x405fccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x405fd0: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x405FD0u;
    {
        const bool branch_taken_0x405fd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x405fd0) {
            ctx->pc = 0x405FD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x405FD0u;
            // 0x405fd4: 0x90a20000  lbu         $v0, 0x0($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x406018u;
            goto label_406018;
        }
    }
    ctx->pc = 0x405FD8u;
    // 0x405fd8: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x405fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x405fdc: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x405fdcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x405fe0: 0x8fa9000c  lw          $t1, 0xC($sp)
    ctx->pc = 0x405fe0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x405fe4: 0x246b0002  addiu       $t3, $v1, 0x2
    ctx->pc = 0x405fe4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x405fe8: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x405fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x405fec: 0x91220001  lbu         $v0, 0x1($t1)
    ctx->pc = 0x405fecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 1)));
    // 0x405ff0: 0x252c0002  addiu       $t4, $t1, 0x2
    ctx->pc = 0x405ff0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
    // 0x405ff4: 0x90630001  lbu         $v1, 0x1($v1)
    ctx->pc = 0x405ff4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x405ff8: 0x24c90002  addiu       $t1, $a2, 0x2
    ctx->pc = 0x405ff8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x405ffc: 0x8fa8000c  lw          $t0, 0xC($sp)
    ctx->pc = 0x405ffcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x406000: 0x24870002  addiu       $a3, $a0, 0x2
    ctx->pc = 0x406000u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x406004: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x406004u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x406008: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x406008u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40600c: 0xa0c20001  sb          $v0, 0x1($a2)
    ctx->pc = 0x40600cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x406010: 0x25050002  addiu       $a1, $t0, 0x2
    ctx->pc = 0x406010u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
    // 0x406014: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x406014u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_406018:
    // 0x406018: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x406018u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x40601c: 0x90e30000  lbu         $v1, 0x0($a3)
    ctx->pc = 0x40601cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x406020: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x406020u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x406024: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x406024u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x406028: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x406028u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x40602c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x40602cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x406030: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x406030u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x406034: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x406034u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x406038: 0x654a0001  daddiu      $t2, $t2, 0x1
    ctx->pc = 0x406038u;
    SET_GPR_S64(ctx, 10, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)1);
    // 0x40603c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x40603cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_406040:
    // 0x406040: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x406040u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_406044:
    // 0x406044: 0x654a0001  daddiu      $t2, $t2, 0x1
    ctx->pc = 0x406044u;
    SET_GPR_S64(ctx, 10, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)1);
    // 0x406048: 0x90e30000  lbu         $v1, 0x0($a3)
    ctx->pc = 0x406048u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x40604c: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x40604cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x406050: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x406050u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x406054: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x406054u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x406058: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x406058u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x40605c: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x40605cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x406060: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x406060u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x406064: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x406064u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x406068: 0xdfa20018  ld          $v0, 0x18($sp)
    ctx->pc = 0x406068u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x40606c: 0x142402b  sltu        $t0, $t2, $v0
    ctx->pc = 0x40606cu;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x406070: 0x1100001d  beqz        $t0, . + 4 + (0x1D << 2)
    ctx->pc = 0x406070u;
    {
        const bool branch_taken_0x406070 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x406074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406070u;
        // 0x406074: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x406070) {
            ctx->pc = 0x4060E8u;
            goto label_4060e8;
        }
    }
    ctx->pc = 0x406078u;
label_406078:
    // 0x406078: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x406078u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40607c: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x40607cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_406080:
    // 0x406080: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x406080u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x406084: 0x654a0004  daddiu      $t2, $t2, 0x4
    ctx->pc = 0x406084u;
    SET_GPR_S64(ctx, 10, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)4);
    // 0x406088: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x406088u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x40608c: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x40608cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x406090: 0xdfa70018  ld          $a3, 0x18($sp)
    ctx->pc = 0x406090u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x406094: 0x258c0004  addiu       $t4, $t4, 0x4
    ctx->pc = 0x406094u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x406098: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x406098u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x40609c: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x40609cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x4060a0: 0xa0c30000  sb          $v1, 0x0($a2)
    ctx->pc = 0x4060a0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x4060a4: 0x147402b  sltu        $t0, $t2, $a3
    ctx->pc = 0x4060a4u;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x4060a8: 0x90830001  lbu         $v1, 0x1($a0)
    ctx->pc = 0x4060a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x4060ac: 0x90a20001  lbu         $v0, 0x1($a1)
    ctx->pc = 0x4060acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x4060b0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x4060b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4060b4: 0xa0c20001  sb          $v0, 0x1($a2)
    ctx->pc = 0x4060b4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x4060b8: 0x90820002  lbu         $v0, 0x2($a0)
    ctx->pc = 0x4060b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x4060bc: 0x90a30002  lbu         $v1, 0x2($a1)
    ctx->pc = 0x4060bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x4060c0: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x4060c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4060c4: 0xa0c30002  sb          $v1, 0x2($a2)
    ctx->pc = 0x4060c4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x4060c8: 0x90a20003  lbu         $v0, 0x3($a1)
    ctx->pc = 0x4060c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
    // 0x4060cc: 0x90830003  lbu         $v1, 0x3($a0)
    ctx->pc = 0x4060ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x4060d0: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x4060d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x4060d4: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x4060d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x4060d8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x4060d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4060dc: 0xa0c20003  sb          $v0, 0x3($a2)
    ctx->pc = 0x4060dcu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x4060e0: 0x1500ffe7  bnez        $t0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x4060E0u;
    {
        const bool branch_taken_0x4060e0 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x4060E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4060E0u;
        // 0x4060e4: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4060e0) {
            ctx->pc = 0x406080u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_406080;
        }
    }
    ctx->pc = 0x4060E8u;
label_4060e8:
    // 0x4060e8: 0xdfa80028  ld          $t0, 0x28($sp)
    ctx->pc = 0x4060e8u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4060ec: 0x148102b  sltu        $v0, $t2, $t0
    ctx->pc = 0x4060ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x4060f0: 0x10400076  beqz        $v0, . + 4 + (0x76 << 2)
    ctx->pc = 0x4060F0u;
    {
        const bool branch_taken_0x4060f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4060F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4060F0u;
        // 0x4060f4: 0x10a102f  dsubu       $v0, $t0, $t2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) - GPR_U64(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4060f0) {
            ctx->pc = 0x4062CCu;
            goto label_4062cc;
        }
    }
    ctx->pc = 0x4060F8u;
    // 0x4060f8: 0xdfa40028  ld          $a0, 0x28($sp)
    ctx->pc = 0x4060f8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4060fc: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x4060fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x406100: 0x180402d  daddu       $t0, $t4, $zero
    ctx->pc = 0x406100u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x406104: 0x8fad0040  lw          $t5, 0x40($sp)
    ctx->pc = 0x406104u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x406108: 0x160882d  daddu       $s1, $t3, $zero
    ctx->pc = 0x406108u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40610c: 0x144102a  slt         $v0, $t2, $a0
    ctx->pc = 0x40610cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x406110: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x406110u;
    {
        const bool branch_taken_0x406110 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x406114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406110u;
        // 0x406114: 0x8fb0003c  lw          $s0, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x406110) {
            ctx->pc = 0x406120u;
            goto label_406120;
        }
    }
    ctx->pc = 0x406118u;
    // 0x406118: 0x10600029  beqz        $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x406118u;
    {
        const bool branch_taken_0x406118 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x40611Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406118u;
        // 0x40611c: 0x120782d  daddu       $t7, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x406118) {
            ctx->pc = 0x4061C0u;
            goto label_4061c0;
        }
    }
    ctx->pc = 0x406120u;
label_406120:
    // 0x406120: 0x8fa6003c  lw          $a2, 0x3C($sp)
    ctx->pc = 0x406120u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x406124: 0x25710001  addiu       $s1, $t3, 0x1
    ctx->pc = 0x406124u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x406128: 0x8fa70040  lw          $a3, 0x40($sp)
    ctx->pc = 0x406128u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x40612c: 0x916c0000  lbu         $t4, 0x0($t3)
    ctx->pc = 0x40612cu;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x406130: 0x24d00001  addiu       $s0, $a2, 0x1
    ctx->pc = 0x406130u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x406134: 0x90c50000  lbu         $a1, 0x0($a2)
    ctx->pc = 0x406134u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x406138: 0x24ed0001  addiu       $t5, $a3, 0x1
    ctx->pc = 0x406138u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x40613c: 0x90eb0000  lbu         $t3, 0x0($a3)
    ctx->pc = 0x40613cu;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x406140: 0x1851823  subu        $v1, $t4, $a1
    ctx->pc = 0x406140u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 5)));
    // 0x406144: 0x1652023  subu        $a0, $t3, $a1
    ctx->pc = 0x406144u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 5)));
    // 0x406148: 0x4610002  bgez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x406148u;
    {
        const bool branch_taken_0x406148 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x40614Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406148u;
        // 0x40614c: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x406148) {
            ctx->pc = 0x406154u;
            goto label_406154;
        }
    }
    ctx->pc = 0x406150u;
    // 0x406150: 0x63023  negu        $a2, $a2
    ctx->pc = 0x406150u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
label_406154:
    // 0x406154: 0x4810002  bgez        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x406154u;
    {
        const bool branch_taken_0x406154 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x406158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406154u;
        // 0x406158: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x406154) {
            ctx->pc = 0x406160u;
            goto label_406160;
        }
    }
    ctx->pc = 0x40615Cu;
    // 0x40615c: 0x73823  negu        $a3, $a3
    ctx->pc = 0x40615cu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 7)));
label_406160:
    // 0x406160: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x406160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x406164: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x406164u;
    {
        const bool branch_taken_0x406164 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x406168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406164u;
        // 0x406168: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x406164) {
            ctx->pc = 0x406170u;
            goto label_406170;
        }
    }
    ctx->pc = 0x40616Cu;
    // 0x40616c: 0x42023  negu        $a0, $a0
    ctx->pc = 0x40616cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
label_406170:
    // 0x406170: 0xe6182a  slt         $v1, $a3, $a2
    ctx->pc = 0x406170u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x406174: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x406174u;
    {
        const bool branch_taken_0x406174 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x406178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406174u;
        // 0x406178: 0x87102a  slt         $v0, $a0, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x406174) {
            ctx->pc = 0x406188u;
            goto label_406188;
        }
    }
    ctx->pc = 0x40617Cu;
    // 0x40617c: 0x86102a  slt         $v0, $a0, $a2
    ctx->pc = 0x40617cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x406180: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x406180u;
    {
        const bool branch_taken_0x406180 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x406184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406180u;
        // 0x406184: 0x87102a  slt         $v0, $a0, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x406180) {
            ctx->pc = 0x406194u;
            goto label_406194;
        }
    }
    ctx->pc = 0x406188u;
label_406188:
    // 0x406188: 0x180182d  daddu       $v1, $t4, $zero
    ctx->pc = 0x406188u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40618c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x40618Cu;
    {
        const bool branch_taken_0x40618c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x406190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40618Cu;
        // 0x406190: 0xa2180b  movn        $v1, $a1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40618c) {
            ctx->pc = 0x406198u;
            goto label_406198;
        }
    }
    ctx->pc = 0x406194u;
label_406194:
    // 0x406194: 0x160182d  daddu       $v1, $t3, $zero
    ctx->pc = 0x406194u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_406198:
    // 0x406198: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x406198u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x40619c: 0x654a0001  daddiu      $t2, $t2, 0x1
    ctx->pc = 0x40619cu;
    SET_GPR_S64(ctx, 10, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)1);
    // 0x4061a0: 0xdfa50028  ld          $a1, 0x28($sp)
    ctx->pc = 0x4061a0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4061a4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x4061a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x4061a8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x4061a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4061ac: 0xa1220000  sb          $v0, 0x0($t1)
    ctx->pc = 0x4061acu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x4061b0: 0x145202b  sltu        $a0, $t2, $a1
    ctx->pc = 0x4061b0u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x4061b4: 0x10800045  beqz        $a0, . + 4 + (0x45 << 2)
    ctx->pc = 0x4061B4u;
    {
        const bool branch_taken_0x4061b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4061B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4061B4u;
        // 0x4061b8: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4061b4) {
            ctx->pc = 0x4062CCu;
            goto label_4062cc;
        }
    }
    ctx->pc = 0x4061BCu;
    // 0x4061bc: 0x120782d  daddu       $t7, $t1, $zero
    ctx->pc = 0x4061bcu;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_4061c0:
    // 0x4061c0: 0x100702d  daddu       $t6, $t0, $zero
    ctx->pc = 0x4061c0u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4061c4: 0x200602d  daddu       $t4, $s0, $zero
    ctx->pc = 0x4061c4u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4061c8: 0x220582d  daddu       $t3, $s1, $zero
    ctx->pc = 0x4061c8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4061cc: 0x0  nop
    ctx->pc = 0x4061ccu;
    // NOP
label_4061d0:
    // 0x4061d0: 0x91860000  lbu         $a2, 0x0($t4)
    ctx->pc = 0x4061d0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4061d4: 0x91690000  lbu         $t1, 0x0($t3)
    ctx->pc = 0x4061d4u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4061d8: 0x91a80000  lbu         $t0, 0x0($t5)
    ctx->pc = 0x4061d8u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4061dc: 0x1261823  subu        $v1, $t1, $a2
    ctx->pc = 0x4061dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
    // 0x4061e0: 0x1062023  subu        $a0, $t0, $a2
    ctx->pc = 0x4061e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x4061e4: 0x4610002  bgez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x4061E4u;
    {
        const bool branch_taken_0x4061e4 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x4061E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4061E4u;
        // 0x4061e8: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4061e4) {
            ctx->pc = 0x4061F0u;
            goto label_4061f0;
        }
    }
    ctx->pc = 0x4061ECu;
    // 0x4061ec: 0x52823  negu        $a1, $a1
    ctx->pc = 0x4061ecu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
label_4061f0:
    // 0x4061f0: 0x4810002  bgez        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x4061F0u;
    {
        const bool branch_taken_0x4061f0 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x4061F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4061F0u;
        // 0x4061f4: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4061f0) {
            ctx->pc = 0x4061FCu;
            goto label_4061fc;
        }
    }
    ctx->pc = 0x4061F8u;
    // 0x4061f8: 0x73823  negu        $a3, $a3
    ctx->pc = 0x4061f8u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 7)));
label_4061fc:
    // 0x4061fc: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x4061fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x406200: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x406200u;
    {
        const bool branch_taken_0x406200 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x406204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406200u;
        // 0x406204: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x406200) {
            ctx->pc = 0x40620Cu;
            goto label_40620c;
        }
    }
    ctx->pc = 0x406208u;
    // 0x406208: 0x42023  negu        $a0, $a0
    ctx->pc = 0x406208u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
label_40620c:
    // 0x40620c: 0xe5182a  slt         $v1, $a3, $a1
    ctx->pc = 0x40620cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x406210: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x406210u;
    {
        const bool branch_taken_0x406210 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x406214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406210u;
        // 0x406214: 0x87102a  slt         $v0, $a0, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x406210) {
            ctx->pc = 0x406224u;
            goto label_406224;
        }
    }
    ctx->pc = 0x406218u;
    // 0x406218: 0x85102a  slt         $v0, $a0, $a1
    ctx->pc = 0x406218u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x40621c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x40621Cu;
    {
        const bool branch_taken_0x40621c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x406220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40621Cu;
        // 0x406220: 0x87102a  slt         $v0, $a0, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x40621c) {
            ctx->pc = 0x406230u;
            goto label_406230;
        }
    }
    ctx->pc = 0x406224u;
label_406224:
    // 0x406224: 0x120182d  daddu       $v1, $t1, $zero
    ctx->pc = 0x406224u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x406228: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x406228u;
    {
        const bool branch_taken_0x406228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40622Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406228u;
        // 0x40622c: 0xc2180b  movn        $v1, $a2, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x406228) {
            ctx->pc = 0x406234u;
            goto label_406234;
        }
    }
    ctx->pc = 0x406230u;
label_406230:
    // 0x406230: 0x100182d  daddu       $v1, $t0, $zero
    ctx->pc = 0x406230u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_406234:
    // 0x406234: 0x91c20000  lbu         $v0, 0x0($t6)
    ctx->pc = 0x406234u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x406238: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x406238u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x40623c: 0xa1e20000  sb          $v0, 0x0($t7)
    ctx->pc = 0x40623cu;
    WRITE8(ADD32(GPR_U32(ctx, 15), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x406240: 0x91870001  lbu         $a3, 0x1($t4)
    ctx->pc = 0x406240u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 1)));
    // 0x406244: 0x91690001  lbu         $t1, 0x1($t3)
    ctx->pc = 0x406244u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 1)));
    // 0x406248: 0x258c0002  addiu       $t4, $t4, 0x2
    ctx->pc = 0x406248u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 2));
    // 0x40624c: 0x91a80001  lbu         $t0, 0x1($t5)
    ctx->pc = 0x40624cu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 1)));
    // 0x406250: 0x256b0002  addiu       $t3, $t3, 0x2
    ctx->pc = 0x406250u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 2));
    // 0x406254: 0x1271823  subu        $v1, $t1, $a3
    ctx->pc = 0x406254u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
    // 0x406258: 0x1072023  subu        $a0, $t0, $a3
    ctx->pc = 0x406258u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x40625c: 0x4610002  bgez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x40625Cu;
    {
        const bool branch_taken_0x40625c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x406260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40625Cu;
        // 0x406260: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40625c) {
            ctx->pc = 0x406268u;
            goto label_406268;
        }
    }
    ctx->pc = 0x406264u;
    // 0x406264: 0x52823  negu        $a1, $a1
    ctx->pc = 0x406264u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
label_406268:
    // 0x406268: 0x4810002  bgez        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x406268u;
    {
        const bool branch_taken_0x406268 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x40626Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406268u;
        // 0x40626c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x406268) {
            ctx->pc = 0x406274u;
            goto label_406274;
        }
    }
    ctx->pc = 0x406270u;
    // 0x406270: 0x63023  negu        $a2, $a2
    ctx->pc = 0x406270u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
label_406274:
    // 0x406274: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x406274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x406278: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x406278u;
    {
        const bool branch_taken_0x406278 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x40627Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406278u;
        // 0x40627c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x406278) {
            ctx->pc = 0x406284u;
            goto label_406284;
        }
    }
    ctx->pc = 0x406280u;
    // 0x406280: 0x42023  negu        $a0, $a0
    ctx->pc = 0x406280u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
label_406284:
    // 0x406284: 0xc5182a  slt         $v1, $a2, $a1
    ctx->pc = 0x406284u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x406288: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x406288u;
    {
        const bool branch_taken_0x406288 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x40628Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406288u;
        // 0x40628c: 0x25ad0002  addiu       $t5, $t5, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x406288) {
            ctx->pc = 0x40629Cu;
            goto label_40629c;
        }
    }
    ctx->pc = 0x406290u;
    // 0x406290: 0x85102a  slt         $v0, $a0, $a1
    ctx->pc = 0x406290u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x406294: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x406294u;
    {
        const bool branch_taken_0x406294 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x406294) {
            ctx->pc = 0x406298u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x406294u;
            // 0x406298: 0x100182d  daddu       $v1, $t0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4062A8u;
            goto label_4062a8;
        }
    }
    ctx->pc = 0x40629Cu;
label_40629c:
    // 0x40629c: 0x86102a  slt         $v0, $a0, $a2
    ctx->pc = 0x40629cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x4062a0: 0x120182d  daddu       $v1, $t1, $zero
    ctx->pc = 0x4062a0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4062a4: 0xe2180b  movn        $v1, $a3, $v0
    ctx->pc = 0x4062a4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 7));
label_4062a8:
    // 0x4062a8: 0x91c20001  lbu         $v0, 0x1($t6)
    ctx->pc = 0x4062a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 1)));
    // 0x4062ac: 0x654a0002  daddiu      $t2, $t2, 0x2
    ctx->pc = 0x4062acu;
    SET_GPR_S64(ctx, 10, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)2);
    // 0x4062b0: 0xdfa60028  ld          $a2, 0x28($sp)
    ctx->pc = 0x4062b0u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4062b4: 0x25ce0002  addiu       $t6, $t6, 0x2
    ctx->pc = 0x4062b4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 2));
    // 0x4062b8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x4062b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4062bc: 0xa1e20001  sb          $v0, 0x1($t7)
    ctx->pc = 0x4062bcu;
    WRITE8(ADD32(GPR_U32(ctx, 15), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x4062c0: 0x146202b  sltu        $a0, $t2, $a2
    ctx->pc = 0x4062c0u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x4062c4: 0x1480ffc2  bnez        $a0, . + 4 + (-0x3E << 2)
    ctx->pc = 0x4062C4u;
    {
        const bool branch_taken_0x4062c4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x4062C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4062C4u;
        // 0x4062c8: 0x25ef0002  addiu       $t7, $t7, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4062c4) {
            ctx->pc = 0x4061D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4061d0;
        }
    }
    ctx->pc = 0x4062CCu;
label_4062cc:
    // 0x4062cc: 0x8ea701cc  lw          $a3, 0x1CC($s5)
    ctx->pc = 0x4062ccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 460)));
    // 0x4062d0: 0x1000027c  b           . + 4 + (0x27C << 2)
    ctx->pc = 0x4062D0u;
    {
        const bool branch_taken_0x4062d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4062D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4062D0u;
        // 0x4062d4: 0xafa70008  sw          $a3, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4062d0) {
            ctx->pc = 0x406CC4u;
            goto label_406cc4;
        }
    }
    ctx->pc = 0x4062D8u;
label_4062d8:
    // 0x4062d8: 0x31020080  andi        $v0, $t0, 0x80
    ctx->pc = 0x4062d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)128);
    // 0x4062dc: 0x10400279  beqz        $v0, . + 4 + (0x279 << 2)
    ctx->pc = 0x4062DCu;
    {
        const bool branch_taken_0x4062dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4062E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4062DCu;
        // 0x4062e0: 0x8fa9000c  lw          $t1, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4062dc) {
            ctx->pc = 0x406CC4u;
            goto label_406cc4;
        }
    }
    ctx->pc = 0x4062E4u;
    // 0x4062e4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x4062e4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4062e8: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x4062e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x4062ec: 0x92a3029c  lbu         $v1, 0x29C($s5)
    ctx->pc = 0x4062ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 668)));
    // 0x4062f0: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x4062f0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x4062f4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4062f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x4062f8: 0xafa90040  sw          $t1, 0x40($sp)
    ctx->pc = 0x4062f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 9));
    // 0x4062fc: 0xafa2003c  sw          $v0, 0x3C($sp)
    ctx->pc = 0x4062fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
    // 0x406300: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x406300u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x406304: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x406304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x406308: 0x8ea401cc  lw          $a0, 0x1CC($s5)
    ctx->pc = 0x406308u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 460)));
    // 0x40630c: 0x146200a4  bne         $v1, $v0, . + 4 + (0xA4 << 2)
    ctx->pc = 0x40630Cu;
    {
        const bool branch_taken_0x40630c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x406310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40630Cu;
        // 0x406310: 0xafa40050  sw          $a0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40630c) {
            ctx->pc = 0x4065A0u;
            goto label_4065a0;
        }
    }
    ctx->pc = 0x406314u;
    // 0x406314: 0x8ea502b0  lw          $a1, 0x2B0($s5)
    ctx->pc = 0x406314u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 688)));
    // 0x406318: 0x101aba  dsrl        $v1, $s0, 10
    ctx->pc = 0x406318u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) >> 10);
    // 0x40631c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x40631cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x406320: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x406320u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x406324: 0x212ba  dsrl        $v0, $v0, 10
    ctx->pc = 0x406324u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 10);
    // 0x406328: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x406328u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x40632c: 0x629024  and         $s2, $v1, $v0
    ctx->pc = 0x40632cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x406330: 0x3211ffff  andi        $s1, $s0, 0xFFFF
    ctx->pc = 0x406330u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x406334: 0x10c00084  beqz        $a2, . + 4 + (0x84 << 2)
    ctx->pc = 0x406334u;
    {
        const bool branch_taken_0x406334 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x406338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406334u;
        // 0x406338: 0xafa50038  sw          $a1, 0x38($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x406334) {
            ctx->pc = 0x406548u;
            goto label_406548;
        }
    }
    ctx->pc = 0x40633Cu;
    // 0x40633c: 0x8ebe02a0  lw          $fp, 0x2A0($s5)
    ctx->pc = 0x40633cu;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 672)));
    // 0x406340: 0x61023  negu        $v0, $a2
    ctx->pc = 0x406340u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
    // 0x406344: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x406344u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x406348: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x406348u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40634c: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x40634cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x406350: 0x1060003d  beqz        $v1, . + 4 + (0x3D << 2)
    ctx->pc = 0x406350u;
    {
        const bool branch_taken_0x406350 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x406354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406350u;
        // 0x406354: 0x3c0982d  daddu       $s3, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x406350) {
            ctx->pc = 0x406448u;
            goto label_406448;
        }
    }
    ctx->pc = 0x406358u;
    // 0x406358: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x406358u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x40635c: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x40635Cu;
    {
        const bool branch_taken_0x40635c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x406360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40635Cu;
        // 0x406360: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x40635c) {
            ctx->pc = 0x4063F8u;
            goto label_4063f8;
        }
    }
    ctx->pc = 0x406364u;
    // 0x406364: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x406364u;
    {
        const bool branch_taken_0x406364 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x406368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406364u;
        // 0x406368: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x406364) {
            ctx->pc = 0x4063B0u;
            goto label_4063b0;
        }
    }
    ctx->pc = 0x40636Cu;
    // 0x40636c: 0x93c20000  lbu         $v0, 0x0($fp)
    ctx->pc = 0x40636cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x406370: 0x1447000c  bne         $v0, $a3, . + 4 + (0xC << 2)
    ctx->pc = 0x406370u;
    {
        const bool branch_taken_0x406370 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        ctx->pc = 0x406374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406370u;
        // 0x406374: 0x8fa80030  lw          $t0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x406370) {
            ctx->pc = 0x4063A4u;
            goto label_4063a4;
        }
    }
    ctx->pc = 0x406378u;
    // 0x406378: 0x8ea502a8  lw          $a1, 0x2A8($s5)
    ctx->pc = 0x406378u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 680)));
    // 0x40637c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x40637cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x406380: 0x94b00000  lhu         $s0, 0x0($a1)
    ctx->pc = 0x406380u;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x406384: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x406384u;
    SET_GPR_U32(ctx, 31, 0x40638Cu);
    ctx->pc = 0x406388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x406384u;
    // 0x406388: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x406384u, 0x40638Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40638Cu;
label_40638c:
    // 0x40638c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x40638cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x406390: 0x28a3a  dsrl        $s1, $v0, 8
    ctx->pc = 0x406390u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) >> 8);
    // 0x406394: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x406394u;
    SET_GPR_U32(ctx, 31, 0x40639Cu);
    ctx->pc = 0x406398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x406394u;
    // 0x406398: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x406394u, 0x40639Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40639Cu;
label_40639c:
    // 0x40639c: 0x2923a  dsrl        $s2, $v0, 8
    ctx->pc = 0x40639cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) >> 8);
    // 0x4063a0: 0x8fa80030  lw          $t0, 0x30($sp)
    ctx->pc = 0x4063a0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_4063a4:
    // 0x4063a4: 0x27d30001  addiu       $s3, $fp, 0x1
    ctx->pc = 0x4063a4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x4063a8: 0x24160002  addiu       $s6, $zero, 0x2
    ctx->pc = 0x4063a8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4063ac: 0x2517ffff  addiu       $s7, $t0, -0x1
    ctx->pc = 0x4063acu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
label_4063b0:
    // 0x4063b0: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x4063b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4063b4: 0x24090004  addiu       $t1, $zero, 0x4
    ctx->pc = 0x4063b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4063b8: 0x5449000d  bnel        $v0, $t1, . + 4 + (0xD << 2)
    ctx->pc = 0x4063B8u;
    {
        const bool branch_taken_0x4063b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 9));
        if (branch_taken_0x4063b8) {
            ctx->pc = 0x4063BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4063B8u;
            // 0x4063bc: 0x26d60002  addiu       $s6, $s6, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4063F0u;
            goto label_4063f0;
        }
    }
    ctx->pc = 0x4063C0u;
    // 0x4063c0: 0x8ea502a8  lw          $a1, 0x2A8($s5)
    ctx->pc = 0x4063c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 680)));
    // 0x4063c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4063c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4063c8: 0x2c52821  addu        $a1, $s6, $a1
    ctx->pc = 0x4063c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 5)));
    // 0x4063cc: 0x94b00000  lhu         $s0, 0x0($a1)
    ctx->pc = 0x4063ccu;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4063d0: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x4063D0u;
    SET_GPR_U32(ctx, 31, 0x4063D8u);
    ctx->pc = 0x4063D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4063D0u;
    // 0x4063d4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x4063D0u, 0x4063D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4063D8u;
label_4063d8:
    // 0x4063d8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4063d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4063dc: 0x28a3a  dsrl        $s1, $v0, 8
    ctx->pc = 0x4063dcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) >> 8);
    // 0x4063e0: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x4063E0u;
    SET_GPR_U32(ctx, 31, 0x4063E8u);
    ctx->pc = 0x4063E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4063E0u;
    // 0x4063e4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x4063E0u, 0x4063E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4063E8u;
label_4063e8:
    // 0x4063e8: 0x2923a  dsrl        $s2, $v0, 8
    ctx->pc = 0x4063e8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) >> 8);
    // 0x4063ec: 0x26d60002  addiu       $s6, $s6, 0x2
    ctx->pc = 0x4063ecu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 2));
label_4063f0:
    // 0x4063f0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x4063f0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x4063f4: 0x26f7ffff  addiu       $s7, $s7, -0x1
    ctx->pc = 0x4063f4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967295));
label_4063f8:
    // 0x4063f8: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x4063f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4063fc: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4063fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x406400: 0x5443000d  bnel        $v0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x406400u;
    {
        const bool branch_taken_0x406400 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x406400) {
            ctx->pc = 0x406404u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x406400u;
            // 0x406404: 0x26d60002  addiu       $s6, $s6, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x406438u;
            goto label_406438;
        }
    }
    ctx->pc = 0x406408u;
    // 0x406408: 0x8ea502a8  lw          $a1, 0x2A8($s5)
    ctx->pc = 0x406408u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 680)));
    // 0x40640c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x40640cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x406410: 0x2c52821  addu        $a1, $s6, $a1
    ctx->pc = 0x406410u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 5)));
    // 0x406414: 0x94b00000  lhu         $s0, 0x0($a1)
    ctx->pc = 0x406414u;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x406418: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x406418u;
    SET_GPR_U32(ctx, 31, 0x406420u);
    ctx->pc = 0x40641Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x406418u;
    // 0x40641c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x406418u, 0x406420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x406420u;
label_406420:
    // 0x406420: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x406420u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x406424: 0x28a3a  dsrl        $s1, $v0, 8
    ctx->pc = 0x406424u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) >> 8);
    // 0x406428: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x406428u;
    SET_GPR_U32(ctx, 31, 0x406430u);
    ctx->pc = 0x40642Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x406428u;
    // 0x40642c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x406428u, 0x406430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x406430u;
label_406430:
    // 0x406430: 0x2923a  dsrl        $s2, $v0, 8
    ctx->pc = 0x406430u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) >> 8);
    // 0x406434: 0x26d60002  addiu       $s6, $s6, 0x2
    ctx->pc = 0x406434u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 2));
label_406438:
    // 0x406438: 0x26f7ffff  addiu       $s7, $s7, -0x1
    ctx->pc = 0x406438u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967295));
    // 0x40643c: 0x12e00042  beqz        $s7, . + 4 + (0x42 << 2)
    ctx->pc = 0x40643Cu;
    {
        const bool branch_taken_0x40643c = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x406440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40643Cu;
        // 0x406440: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40643c) {
            ctx->pc = 0x406548u;
            goto label_406548;
        }
    }
    ctx->pc = 0x406444u;
    // 0x406444: 0x0  nop
    ctx->pc = 0x406444u;
    // NOP
label_406448:
    // 0x406448: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x406448u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x40644c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x40644cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x406450: 0x5444000d  bnel        $v0, $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x406450u;
    {
        const bool branch_taken_0x406450 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x406450) {
            ctx->pc = 0x406454u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x406450u;
            // 0x406454: 0x92620001  lbu         $v0, 0x1($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x406488u;
            goto label_406488;
        }
    }
    ctx->pc = 0x406458u;
    // 0x406458: 0x8ea502a8  lw          $a1, 0x2A8($s5)
    ctx->pc = 0x406458u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 680)));
    // 0x40645c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x40645cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x406460: 0x2c52821  addu        $a1, $s6, $a1
    ctx->pc = 0x406460u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 5)));
    // 0x406464: 0x94b00000  lhu         $s0, 0x0($a1)
    ctx->pc = 0x406464u;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x406468: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x406468u;
    SET_GPR_U32(ctx, 31, 0x406470u);
    ctx->pc = 0x40646Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x406468u;
    // 0x40646c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x406468u, 0x406470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x406470u;
label_406470:
    // 0x406470: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x406470u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x406474: 0x28a3a  dsrl        $s1, $v0, 8
    ctx->pc = 0x406474u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) >> 8);
    // 0x406478: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x406478u;
    SET_GPR_U32(ctx, 31, 0x406480u);
    ctx->pc = 0x40647Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x406478u;
    // 0x40647c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x406478u, 0x406480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x406480u;
label_406480:
    // 0x406480: 0x2923a  dsrl        $s2, $v0, 8
    ctx->pc = 0x406480u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) >> 8);
    // 0x406484: 0x92620001  lbu         $v0, 0x1($s3)
    ctx->pc = 0x406484u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
label_406488:
    // 0x406488: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x406488u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x40648c: 0x1445000c  bne         $v0, $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x40648Cu;
    {
        const bool branch_taken_0x40648c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x406490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40648Cu;
        // 0x406490: 0x26c30002  addiu       $v1, $s6, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40648c) {
            ctx->pc = 0x4064C0u;
            goto label_4064c0;
        }
    }
    ctx->pc = 0x406494u;
    // 0x406494: 0x8ea502a8  lw          $a1, 0x2A8($s5)
    ctx->pc = 0x406494u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 680)));
    // 0x406498: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x406498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40649c: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x40649cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x4064a0: 0x94b00000  lhu         $s0, 0x0($a1)
    ctx->pc = 0x4064a0u;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4064a4: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x4064A4u;
    SET_GPR_U32(ctx, 31, 0x4064ACu);
    ctx->pc = 0x4064A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4064A4u;
    // 0x4064a8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x4064A4u, 0x4064ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4064ACu;
label_4064ac:
    // 0x4064ac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4064acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4064b0: 0x28a3a  dsrl        $s1, $v0, 8
    ctx->pc = 0x4064b0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) >> 8);
    // 0x4064b4: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x4064B4u;
    SET_GPR_U32(ctx, 31, 0x4064BCu);
    ctx->pc = 0x4064B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4064B4u;
    // 0x4064b8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x4064B4u, 0x4064BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4064BCu;
label_4064bc:
    // 0x4064bc: 0x2923a  dsrl        $s2, $v0, 8
    ctx->pc = 0x4064bcu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) >> 8);
label_4064c0:
    // 0x4064c0: 0x92620002  lbu         $v0, 0x2($s3)
    ctx->pc = 0x4064c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x4064c4: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x4064c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4064c8: 0x1446000c  bne         $v0, $a2, . + 4 + (0xC << 2)
    ctx->pc = 0x4064C8u;
    {
        const bool branch_taken_0x4064c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        ctx->pc = 0x4064CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4064C8u;
        // 0x4064cc: 0x26c30004  addiu       $v1, $s6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4064c8) {
            ctx->pc = 0x4064FCu;
            goto label_4064fc;
        }
    }
    ctx->pc = 0x4064D0u;
    // 0x4064d0: 0x8ea502a8  lw          $a1, 0x2A8($s5)
    ctx->pc = 0x4064d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 680)));
    // 0x4064d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4064d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4064d8: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x4064d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x4064dc: 0x94b00000  lhu         $s0, 0x0($a1)
    ctx->pc = 0x4064dcu;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4064e0: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x4064E0u;
    SET_GPR_U32(ctx, 31, 0x4064E8u);
    ctx->pc = 0x4064E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4064E0u;
    // 0x4064e4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x4064E0u, 0x4064E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4064E8u;
label_4064e8:
    // 0x4064e8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4064e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4064ec: 0x28a3a  dsrl        $s1, $v0, 8
    ctx->pc = 0x4064ecu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) >> 8);
    // 0x4064f0: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x4064F0u;
    SET_GPR_U32(ctx, 31, 0x4064F8u);
    ctx->pc = 0x4064F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4064F0u;
    // 0x4064f4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x4064F0u, 0x4064F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4064F8u;
label_4064f8:
    // 0x4064f8: 0x2923a  dsrl        $s2, $v0, 8
    ctx->pc = 0x4064f8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) >> 8);
label_4064fc:
    // 0x4064fc: 0x92620003  lbu         $v0, 0x3($s3)
    ctx->pc = 0x4064fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 3)));
    // 0x406500: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x406500u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x406504: 0x1447000c  bne         $v0, $a3, . + 4 + (0xC << 2)
    ctx->pc = 0x406504u;
    {
        const bool branch_taken_0x406504 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        ctx->pc = 0x406508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406504u;
        // 0x406508: 0x26c30006  addiu       $v1, $s6, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x406504) {
            ctx->pc = 0x406538u;
            goto label_406538;
        }
    }
    ctx->pc = 0x40650Cu;
    // 0x40650c: 0x8ea502a8  lw          $a1, 0x2A8($s5)
    ctx->pc = 0x40650cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 680)));
    // 0x406510: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x406510u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x406514: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x406514u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x406518: 0x94b00000  lhu         $s0, 0x0($a1)
    ctx->pc = 0x406518u;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x40651c: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x40651Cu;
    SET_GPR_U32(ctx, 31, 0x406524u);
    ctx->pc = 0x406520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40651Cu;
    // 0x406520: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x40651Cu, 0x406524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x406524u;
label_406524:
    // 0x406524: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x406524u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x406528: 0x28a3a  dsrl        $s1, $v0, 8
    ctx->pc = 0x406528u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) >> 8);
    // 0x40652c: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x40652Cu;
    SET_GPR_U32(ctx, 31, 0x406534u);
    ctx->pc = 0x406530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40652Cu;
    // 0x406530: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x40652Cu, 0x406534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x406534u;
label_406534:
    // 0x406534: 0x2923a  dsrl        $s2, $v0, 8
    ctx->pc = 0x406534u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) >> 8);
label_406538:
    // 0x406538: 0x26d60008  addiu       $s6, $s6, 0x8
    ctx->pc = 0x406538u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
    // 0x40653c: 0x26f7fffc  addiu       $s7, $s7, -0x4
    ctx->pc = 0x40653cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967292));
    // 0x406540: 0x16e0ffc1  bnez        $s7, . + 4 + (-0x3F << 2)
    ctx->pc = 0x406540u;
    {
        const bool branch_taken_0x406540 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        ctx->pc = 0x406544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406540u;
        // 0x406544: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x406540) {
            ctx->pc = 0x406448u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_406448;
        }
    }
    ctx->pc = 0x406548u;
label_406548:
    // 0x406548: 0x8fa80038  lw          $t0, 0x38($sp)
    ctx->pc = 0x406548u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x40654c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x40654cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x406550: 0x95100008  lhu         $s0, 0x8($t0)
    ctx->pc = 0x406550u;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x406554: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x406554u;
    SET_GPR_U32(ctx, 31, 0x40655Cu);
    ctx->pc = 0x406558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x406554u;
    // 0x406558: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x406554u, 0x40655Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40655Cu;
label_40655c:
    // 0x40655c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x40655cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x406560: 0x288fa  dsrl        $s1, $v0, 3
    ctx->pc = 0x406560u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) >> 3);
    // 0x406564: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x406564u;
    SET_GPR_U32(ctx, 31, 0x40656Cu);
    ctx->pc = 0x406568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x406564u;
    // 0x406568: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x406564u, 0x40656Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40656Cu;
label_40656c:
    // 0x40656c: 0x290fa  dsrl        $s2, $v0, 3
    ctx->pc = 0x40656cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) >> 3);
    // 0x406570: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x406570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x406574: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x406574u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x406578: 0x212ba  dsrl        $v0, $v0, 10
    ctx->pc = 0x406578u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 10);
    // 0x40657c: 0x52102b  sltu        $v0, $v0, $s2
    ctx->pc = 0x40657cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x406580: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x406580u;
    {
        const bool branch_taken_0x406580 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x406584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406580u;
        // 0x406584: 0x8fa20050  lw          $v0, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x406580) {
            ctx->pc = 0x406598u;
            goto label_406598;
        }
    }
    ctx->pc = 0x406588u;
    // 0x406588: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x406588u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x40658c: 0x10807a  dsrl        $s0, $s0, 1
    ctx->pc = 0x40658cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> 1);
    // 0x406590: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x406590u;
    {
        const bool branch_taken_0x406590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x406594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406590u;
        // 0x406594: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x406590) {
            ctx->pc = 0x4065A8u;
            goto label_4065a8;
        }
    }
    ctx->pc = 0x406598u;
label_406598:
    // 0x406598: 0x1212b8  dsll        $v0, $s2, 10
    ctx->pc = 0x406598u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << 10);
    // 0x40659c: 0x51802d  daddu       $s0, $v0, $s1
    ctx->pc = 0x40659cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 17));
label_4065a0:
    // 0x4065a0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x4065a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4065a4: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x4065a4u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4065a8:
    // 0x4065a8: 0xdfa30018  ld          $v1, 0x18($sp)
    ctx->pc = 0x4065a8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4065ac: 0x8fa90040  lw          $t1, 0x40($sp)
    ctx->pc = 0x4065acu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4065b0: 0x244a0001  addiu       $t2, $v0, 0x1
    ctx->pc = 0x4065b0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x4065b4: 0x10600084  beqz        $v1, . + 4 + (0x84 << 2)
    ctx->pc = 0x4065B4u;
    {
        const bool branch_taken_0x4065b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4065B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4065B4u;
        // 0x4065b8: 0x8fa4003c  lw          $a0, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4065b4) {
            ctx->pc = 0x4067C8u;
            goto label_4067c8;
        }
    }
    ctx->pc = 0x4065BCu;
    // 0x4065bc: 0xdfa70018  ld          $a3, 0x18($sp)
    ctx->pc = 0x4065bcu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4065c0: 0x240b0100  addiu       $t3, $zero, 0x100
    ctx->pc = 0x4065c0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x4065c4: 0x140302d  daddu       $a2, $t2, $zero
    ctx->pc = 0x4065c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4065c8: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x4065c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4065cc: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x4065ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4065d0: 0x18e00030  blez        $a3, . + 4 + (0x30 << 2)
    ctx->pc = 0x4065D0u;
    {
        const bool branch_taken_0x4065d0 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x4065D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4065D0u;
        // 0x4065d4: 0x30630003  andi        $v1, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4065d0) {
            ctx->pc = 0x406694u;
            goto label_406694;
        }
    }
    ctx->pc = 0x4065D8u;
    // 0x4065d8: 0x50600045  beql        $v1, $zero, . + 4 + (0x45 << 2)
    ctx->pc = 0x4065D8u;
    {
        const bool branch_taken_0x4065d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4065d8) {
            ctx->pc = 0x4065DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4065D8u;
            // 0x4065dc: 0x91030000  lbu         $v1, 0x0($t0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4066F0u;
            goto label_4066f0;
        }
    }
    ctx->pc = 0x4065E0u;
    // 0x4065e0: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x4065e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x4065e4: 0x5440002c  bnel        $v0, $zero, . + 4 + (0x2C << 2)
    ctx->pc = 0x4065E4u;
    {
        const bool branch_taken_0x4065e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4065e4) {
            ctx->pc = 0x4065E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4065E4u;
            // 0x4065e8: 0x90a20000  lbu         $v0, 0x0($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x406698u;
            goto label_406698;
        }
    }
    ctx->pc = 0x4065ECu;
    // 0x4065ec: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x4065ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x4065f0: 0x54400017  bnel        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x4065F0u;
    {
        const bool branch_taken_0x4065f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4065f0) {
            ctx->pc = 0x4065F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4065F0u;
            // 0x4065f4: 0x90a20000  lbu         $v0, 0x0($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x406650u;
            goto label_406650;
        }
    }
    ctx->pc = 0x4065F8u;
    // 0x4065f8: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x4065f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x4065fc: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x4065fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x406600: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x406600u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x406604: 0x25250001  addiu       $a1, $t1, 0x1
    ctx->pc = 0x406604u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x406608: 0x8fa80050  lw          $t0, 0x50($sp)
    ctx->pc = 0x406608u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x40660c: 0x8fa90050  lw          $t1, 0x50($sp)
    ctx->pc = 0x40660cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x406610: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x406610u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x406614: 0x25060002  addiu       $a2, $t0, 0x2
    ctx->pc = 0x406614u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
    // 0x406618: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x406618u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x40661c: 0xa1220001  sb          $v0, 0x1($t1)
    ctx->pc = 0x40661cu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x406620: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x406620u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x406624: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x406624u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x406628: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x406628u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40662c: 0x28e20080  slti        $v0, $a3, 0x80
    ctx->pc = 0x40662cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x406630: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x406630u;
    {
        const bool branch_taken_0x406630 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x406634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406630u;
        // 0x406634: 0xc0502d  daddu       $t2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x406630) {
            ctx->pc = 0x406640u;
            goto label_406640;
        }
    }
    ctx->pc = 0x406638u;
    // 0x406638: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x406638u;
    {
        const bool branch_taken_0x406638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40663Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406638u;
        // 0x40663c: 0xf4a02d  daddu       $s4, $a3, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x406638) {
            ctx->pc = 0x406648u;
            goto label_406648;
        }
    }
    ctx->pc = 0x406640u;
label_406640:
    // 0x406640: 0x1671023  subu        $v0, $t3, $a3
    ctx->pc = 0x406640u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 7)));
    // 0x406644: 0x282a02d  daddu       $s4, $s4, $v0
    ctx->pc = 0x406644u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 2));
label_406648:
    // 0x406648: 0x658c0001  daddiu      $t4, $t4, 0x1
    ctx->pc = 0x406648u;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 12) + (int64_t)(int32_t)1);
    // 0x40664c: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x40664cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_406650:
    // 0x406650: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x406650u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x406654: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x406654u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x406658: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x406658u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x40665c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x40665cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x406660: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x406660u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x406664: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x406664u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x406668: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x406668u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x40666c: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x40666cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x406670: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x406670u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x406674: 0x28e20080  slti        $v0, $a3, 0x80
    ctx->pc = 0x406674u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x406678: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x406678u;
    {
        const bool branch_taken_0x406678 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x40667Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406678u;
        // 0x40667c: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x406678) {
            ctx->pc = 0x406688u;
            goto label_406688;
        }
    }
    ctx->pc = 0x406680u;
    // 0x406680: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x406680u;
    {
        const bool branch_taken_0x406680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x406684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406680u;
        // 0x406684: 0xf4a02d  daddu       $s4, $a3, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x406680) {
            ctx->pc = 0x406690u;
            goto label_406690;
        }
    }
    ctx->pc = 0x406688u;
label_406688:
    // 0x406688: 0x1671023  subu        $v0, $t3, $a3
    ctx->pc = 0x406688u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 7)));
    // 0x40668c: 0x282a02d  daddu       $s4, $s4, $v0
    ctx->pc = 0x40668cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 2));
label_406690:
    // 0x406690: 0x658c0001  daddiu      $t4, $t4, 0x1
    ctx->pc = 0x406690u;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 12) + (int64_t)(int32_t)1);
label_406694:
    // 0x406694: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x406694u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_406698:
    // 0x406698: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x406698u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x40669c: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x40669cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4066a0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x4066a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x4066a4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x4066a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x4066a8: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x4066a8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x4066ac: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x4066acu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4066b0: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x4066b0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x4066b4: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x4066b4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x4066b8: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x4066b8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x4066bc: 0x28e20080  slti        $v0, $a3, 0x80
    ctx->pc = 0x4066bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x4066c0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4066C0u;
    {
        const bool branch_taken_0x4066c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4066C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4066C0u;
        // 0x4066c4: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4066c0) {
            ctx->pc = 0x4066D0u;
            goto label_4066d0;
        }
    }
    ctx->pc = 0x4066C8u;
    // 0x4066c8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x4066C8u;
    {
        const bool branch_taken_0x4066c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4066CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4066C8u;
        // 0x4066cc: 0xf4a02d  daddu       $s4, $a3, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4066c8) {
            ctx->pc = 0x4066D8u;
            goto label_4066d8;
        }
    }
    ctx->pc = 0x4066D0u;
label_4066d0:
    // 0x4066d0: 0x1671023  subu        $v0, $t3, $a3
    ctx->pc = 0x4066d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 7)));
    // 0x4066d4: 0x282a02d  daddu       $s4, $s4, $v0
    ctx->pc = 0x4066d4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 2));
label_4066d8:
    // 0x4066d8: 0xdfa30018  ld          $v1, 0x18($sp)
    ctx->pc = 0x4066d8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4066dc: 0x658c0001  daddiu      $t4, $t4, 0x1
    ctx->pc = 0x4066dcu;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 12) + (int64_t)(int32_t)1);
    // 0x4066e0: 0x183102b  sltu        $v0, $t4, $v1
    ctx->pc = 0x4066e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x4066e4: 0x50400039  beql        $v0, $zero, . + 4 + (0x39 << 2)
    ctx->pc = 0x4066E4u;
    {
        const bool branch_taken_0x4066e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4066e4) {
            ctx->pc = 0x4066E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4066E4u;
            // 0x4066e8: 0xdfa80028  ld          $t0, 0x28($sp) (Delay Slot)
            SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 29), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4067CCu;
            goto label_4067cc;
        }
    }
    ctx->pc = 0x4066ECu;
    // 0x4066ec: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x4066ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_4066f0:
    // 0x4066f0: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x4066f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4066f4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x4066f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4066f8: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x4066f8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x4066fc: 0x28e30080  slti        $v1, $a3, 0x80
    ctx->pc = 0x4066fcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x406700: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x406700u;
    {
        const bool branch_taken_0x406700 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x406704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406700u;
        // 0x406704: 0xa0c20000  sb          $v0, 0x0($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x406700) {
            ctx->pc = 0x406710u;
            goto label_406710;
        }
    }
    ctx->pc = 0x406708u;
    // 0x406708: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x406708u;
    {
        const bool branch_taken_0x406708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40670Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406708u;
        // 0x40670c: 0xf4a02d  daddu       $s4, $a3, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x406708) {
            ctx->pc = 0x406718u;
            goto label_406718;
        }
    }
    ctx->pc = 0x406710u;
label_406710:
    // 0x406710: 0x1671023  subu        $v0, $t3, $a3
    ctx->pc = 0x406710u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 7)));
    // 0x406714: 0x282a02d  daddu       $s4, $s4, $v0
    ctx->pc = 0x406714u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 2));
label_406718:
    // 0x406718: 0x91030001  lbu         $v1, 0x1($t0)
    ctx->pc = 0x406718u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 1)));
    // 0x40671c: 0x90a20001  lbu         $v0, 0x1($a1)
    ctx->pc = 0x40671cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x406720: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x406720u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x406724: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x406724u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x406728: 0x28e30080  slti        $v1, $a3, 0x80
    ctx->pc = 0x406728u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x40672c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x40672Cu;
    {
        const bool branch_taken_0x40672c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x406730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40672Cu;
        // 0x406730: 0xa0c20001  sb          $v0, 0x1($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40672c) {
            ctx->pc = 0x40673Cu;
            goto label_40673c;
        }
    }
    ctx->pc = 0x406734u;
    // 0x406734: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x406734u;
    {
        const bool branch_taken_0x406734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x406738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406734u;
        // 0x406738: 0xf4a02d  daddu       $s4, $a3, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x406734) {
            ctx->pc = 0x406744u;
            goto label_406744;
        }
    }
    ctx->pc = 0x40673Cu;
label_40673c:
    // 0x40673c: 0x1671023  subu        $v0, $t3, $a3
    ctx->pc = 0x40673cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 7)));
    // 0x406740: 0x282a02d  daddu       $s4, $s4, $v0
    ctx->pc = 0x406740u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 2));
label_406744:
    // 0x406744: 0x91030002  lbu         $v1, 0x2($t0)
    ctx->pc = 0x406744u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 2)));
    // 0x406748: 0x90a20002  lbu         $v0, 0x2($a1)
    ctx->pc = 0x406748u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x40674c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x40674cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x406750: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x406750u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x406754: 0x28e30080  slti        $v1, $a3, 0x80
    ctx->pc = 0x406754u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x406758: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x406758u;
    {
        const bool branch_taken_0x406758 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x40675Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406758u;
        // 0x40675c: 0xa0c20002  sb          $v0, 0x2($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x406758) {
            ctx->pc = 0x406768u;
            goto label_406768;
        }
    }
    ctx->pc = 0x406760u;
    // 0x406760: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x406760u;
    {
        const bool branch_taken_0x406760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x406764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406760u;
        // 0x406764: 0xf4a02d  daddu       $s4, $a3, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x406760) {
            ctx->pc = 0x406770u;
            goto label_406770;
        }
    }
    ctx->pc = 0x406768u;
label_406768:
    // 0x406768: 0x1671023  subu        $v0, $t3, $a3
    ctx->pc = 0x406768u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 7)));
    // 0x40676c: 0x282a02d  daddu       $s4, $s4, $v0
    ctx->pc = 0x40676cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 2));
label_406770:
    // 0x406770: 0x90a20003  lbu         $v0, 0x3($a1)
    ctx->pc = 0x406770u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
    // 0x406774: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x406774u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x406778: 0x91030003  lbu         $v1, 0x3($t0)
    ctx->pc = 0x406778u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 3)));
    // 0x40677c: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x40677cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x406780: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x406780u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x406784: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x406784u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x406788: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x406788u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x40678c: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x40678cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x406790: 0xa0c20003  sb          $v0, 0x3($a2)
    ctx->pc = 0x406790u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x406794: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x406794u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x406798: 0x28e20080  slti        $v0, $a3, 0x80
    ctx->pc = 0x406798u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x40679c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x40679Cu;
    {
        const bool branch_taken_0x40679c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4067A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40679Cu;
        // 0x4067a0: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40679c) {
            ctx->pc = 0x4067ACu;
            goto label_4067ac;
        }
    }
    ctx->pc = 0x4067A4u;
    // 0x4067a4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x4067A4u;
    {
        const bool branch_taken_0x4067a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4067A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4067A4u;
        // 0x4067a8: 0xf4a02d  daddu       $s4, $a3, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4067a4) {
            ctx->pc = 0x4067B4u;
            goto label_4067b4;
        }
    }
    ctx->pc = 0x4067ACu;
label_4067ac:
    // 0x4067ac: 0x1671023  subu        $v0, $t3, $a3
    ctx->pc = 0x4067acu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 7)));
    // 0x4067b0: 0x282a02d  daddu       $s4, $s4, $v0
    ctx->pc = 0x4067b0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 2));
label_4067b4:
    // 0x4067b4: 0xdfa70018  ld          $a3, 0x18($sp)
    ctx->pc = 0x4067b4u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4067b8: 0x658c0004  daddiu      $t4, $t4, 0x4
    ctx->pc = 0x4067b8u;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 12) + (int64_t)(int32_t)4);
    // 0x4067bc: 0x187102b  sltu        $v0, $t4, $a3
    ctx->pc = 0x4067bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x4067c0: 0x5440ffcb  bnel        $v0, $zero, . + 4 + (-0x35 << 2)
    ctx->pc = 0x4067C0u;
    {
        const bool branch_taken_0x4067c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4067c0) {
            ctx->pc = 0x4067C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4067C0u;
            // 0x4067c4: 0x91030000  lbu         $v1, 0x0($t0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4066F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4066f0;
        }
    }
    ctx->pc = 0x4067C8u;
label_4067c8:
    // 0x4067c8: 0xdfa80028  ld          $t0, 0x28($sp)
    ctx->pc = 0x4067c8u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_4067cc:
    // 0x4067cc: 0x188102b  sltu        $v0, $t4, $t0
    ctx->pc = 0x4067ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x4067d0: 0x10400096  beqz        $v0, . + 4 + (0x96 << 2)
    ctx->pc = 0x4067D0u;
    {
        const bool branch_taken_0x4067d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4067D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4067D0u;
        // 0x4067d4: 0x10c102f  dsubu       $v0, $t0, $t4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) - GPR_U64(ctx, 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4067d0) {
            ctx->pc = 0x406A2Cu;
            goto label_406a2c;
        }
    }
    ctx->pc = 0x4067D8u;
    // 0x4067d8: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x4067d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4067dc: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x4067dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x4067e0: 0x30470001  andi        $a3, $v0, 0x1
    ctx->pc = 0x4067e0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x4067e4: 0x140582d  daddu       $t3, $t2, $zero
    ctx->pc = 0x4067e4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4067e8: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x4067e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4067ec: 0x24120100  addiu       $s2, $zero, 0x100
    ctx->pc = 0x4067ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x4067f0: 0xc0682d  daddu       $t5, $a2, $zero
    ctx->pc = 0x4067f0u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4067f4: 0x60702d  daddu       $t6, $v1, $zero
    ctx->pc = 0x4067f4u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4067f8: 0x188102a  slt         $v0, $t4, $t0
    ctx->pc = 0x4067f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x4067fc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4067FCu;
    {
        const bool branch_taken_0x4067fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x406800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4067FCu;
        // 0x406800: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4067fc) {
            ctx->pc = 0x40680Cu;
            goto label_40680c;
        }
    }
    ctx->pc = 0x406804u;
    // 0x406804: 0x10e00031  beqz        $a3, . + 4 + (0x31 << 2)
    ctx->pc = 0x406804u;
    {
        const bool branch_taken_0x406804 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x406808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406804u;
        // 0x406808: 0x1a0782d  daddu       $t7, $t5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x406804) {
            ctx->pc = 0x4068CCu;
            goto label_4068cc;
        }
    }
    ctx->pc = 0x40680Cu;
label_40680c:
    // 0x40680c: 0x24910001  addiu       $s1, $a0, 0x1
    ctx->pc = 0x40680cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x406810: 0x90670000  lbu         $a3, 0x0($v1)
    ctx->pc = 0x406810u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x406814: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x406814u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x406818: 0x246e0001  addiu       $t6, $v1, 0x1
    ctx->pc = 0x406818u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x40681c: 0x90ca0000  lbu         $t2, 0x0($a2)
    ctx->pc = 0x40681cu;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x406820: 0x24cd0001  addiu       $t5, $a2, 0x1
    ctx->pc = 0x406820u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x406824: 0x871823  subu        $v1, $a0, $a3
    ctx->pc = 0x406824u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x406828: 0x1473023  subu        $a2, $t2, $a3
    ctx->pc = 0x406828u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
    // 0x40682c: 0x4610002  bgez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x40682Cu;
    {
        const bool branch_taken_0x40682c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x406830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40682Cu;
        // 0x406830: 0x60402d  daddu       $t0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40682c) {
            ctx->pc = 0x406838u;
            goto label_406838;
        }
    }
    ctx->pc = 0x406834u;
    // 0x406834: 0x84023  negu        $t0, $t0
    ctx->pc = 0x406834u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 8)));
label_406838:
    // 0x406838: 0x4c10002  bgez        $a2, . + 4 + (0x2 << 2)
    ctx->pc = 0x406838u;
    {
        const bool branch_taken_0x406838 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x40683Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406838u;
        // 0x40683c: 0xc0482d  daddu       $t1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x406838) {
            ctx->pc = 0x406844u;
            goto label_406844;
        }
    }
    ctx->pc = 0x406840u;
    // 0x406840: 0x94823  negu        $t1, $t1
    ctx->pc = 0x406840u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 9)));
label_406844:
    // 0x406844: 0x661021  addu        $v0, $v1, $a2
    ctx->pc = 0x406844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x406848: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x406848u;
    {
        const bool branch_taken_0x406848 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x40684Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406848u;
        // 0x40684c: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x406848) {
            ctx->pc = 0x406854u;
            goto label_406854;
        }
    }
    ctx->pc = 0x406850u;
    // 0x406850: 0x63023  negu        $a2, $a2
    ctx->pc = 0x406850u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
label_406854:
    // 0x406854: 0x128182a  slt         $v1, $t1, $t0
    ctx->pc = 0x406854u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x406858: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x406858u;
    {
        const bool branch_taken_0x406858 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x40685Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406858u;
        // 0x40685c: 0xc9102a  slt         $v0, $a2, $t1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x406858) {
            ctx->pc = 0x40686Cu;
            goto label_40686c;
        }
    }
    ctx->pc = 0x406860u;
    // 0x406860: 0xc8102a  slt         $v0, $a2, $t0
    ctx->pc = 0x406860u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x406864: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x406864u;
    {
        const bool branch_taken_0x406864 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x406868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406864u;
        // 0x406868: 0xc9102a  slt         $v0, $a2, $t1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x406864) {
            ctx->pc = 0x406878u;
            goto label_406878;
        }
    }
    ctx->pc = 0x40686Cu;
label_40686c:
    // 0x40686c: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x40686cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x406870: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x406870u;
    {
        const bool branch_taken_0x406870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x406874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406870u;
        // 0x406874: 0xe2180b  movn        $v1, $a3, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x406870) {
            ctx->pc = 0x40687Cu;
            goto label_40687c;
        }
    }
    ctx->pc = 0x406878u;
label_406878:
    // 0x406878: 0x140182d  daddu       $v1, $t2, $zero
    ctx->pc = 0x406878u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_40687c:
    // 0x40687c: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x40687cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x406880: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x406880u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x406884: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x406884u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x406888: 0xa1620000  sb          $v0, 0x0($t3)
    ctx->pc = 0x406888u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x40688c: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x40688cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x406890: 0x28e20080  slti        $v0, $a3, 0x80
    ctx->pc = 0x406890u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x406894: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x406894u;
    {
        const bool branch_taken_0x406894 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x406898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406894u;
        // 0x406898: 0x256b0001  addiu       $t3, $t3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x406894) {
            ctx->pc = 0x4068A4u;
            goto label_4068a4;
        }
    }
    ctx->pc = 0x40689Cu;
    // 0x40689c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x40689Cu;
    {
        const bool branch_taken_0x40689c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4068A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40689Cu;
        // 0x4068a0: 0xf4a02d  daddu       $s4, $a3, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40689c) {
            ctx->pc = 0x4068ACu;
            goto label_4068ac;
        }
    }
    ctx->pc = 0x4068A4u;
label_4068a4:
    // 0x4068a4: 0x2471023  subu        $v0, $s2, $a3
    ctx->pc = 0x4068a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 7)));
    // 0x4068a8: 0x282a02d  daddu       $s4, $s4, $v0
    ctx->pc = 0x4068a8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 2));
label_4068ac:
    // 0x4068ac: 0x214102b  sltu        $v0, $s0, $s4
    ctx->pc = 0x4068acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x4068b0: 0x1440005e  bnez        $v0, . + 4 + (0x5E << 2)
    ctx->pc = 0x4068B0u;
    {
        const bool branch_taken_0x4068b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4068B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4068B0u;
        // 0x4068b4: 0xdfa90028  ld          $t1, 0x28($sp) (Delay Slot)
        SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4068b0) {
            ctx->pc = 0x406A2Cu;
            goto label_406a2c;
        }
    }
    ctx->pc = 0x4068B8u;
    // 0x4068b8: 0x658c0001  daddiu      $t4, $t4, 0x1
    ctx->pc = 0x4068b8u;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 12) + (int64_t)(int32_t)1);
    // 0x4068bc: 0x189102b  sltu        $v0, $t4, $t1
    ctx->pc = 0x4068bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x4068c0: 0x5040005b  beql        $v0, $zero, . + 4 + (0x5B << 2)
    ctx->pc = 0x4068C0u;
    {
        const bool branch_taken_0x4068c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4068c0) {
            ctx->pc = 0x4068C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4068C0u;
            // 0x4068c4: 0x92a3029c  lbu         $v1, 0x29C($s5) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 668)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x406A30u;
            goto label_406a30;
        }
    }
    ctx->pc = 0x4068C8u;
    // 0x4068c8: 0x1a0782d  daddu       $t7, $t5, $zero
    ctx->pc = 0x4068c8u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
label_4068cc:
    // 0x4068cc: 0x220682d  daddu       $t5, $s1, $zero
    ctx->pc = 0x4068ccu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4068d0: 0x91c70000  lbu         $a3, 0x0($t6)
    ctx->pc = 0x4068d0u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x4068d4: 0x0  nop
    ctx->pc = 0x4068d4u;
    // NOP
label_4068d8:
    // 0x4068d8: 0x91aa0000  lbu         $t2, 0x0($t5)
    ctx->pc = 0x4068d8u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4068dc: 0x91e90000  lbu         $t1, 0x0($t7)
    ctx->pc = 0x4068dcu;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x4068e0: 0x1471823  subu        $v1, $t2, $a3
    ctx->pc = 0x4068e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
    // 0x4068e4: 0x1272023  subu        $a0, $t1, $a3
    ctx->pc = 0x4068e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
    // 0x4068e8: 0x4610002  bgez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x4068E8u;
    {
        const bool branch_taken_0x4068e8 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x4068ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4068E8u;
        // 0x4068ec: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4068e8) {
            ctx->pc = 0x4068F4u;
            goto label_4068f4;
        }
    }
    ctx->pc = 0x4068F0u;
    // 0x4068f0: 0x63023  negu        $a2, $a2
    ctx->pc = 0x4068f0u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
label_4068f4:
    // 0x4068f4: 0x4810002  bgez        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x4068F4u;
    {
        const bool branch_taken_0x4068f4 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x4068F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4068F4u;
        // 0x4068f8: 0x80402d  daddu       $t0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4068f4) {
            ctx->pc = 0x406900u;
            goto label_406900;
        }
    }
    ctx->pc = 0x4068FCu;
    // 0x4068fc: 0x84023  negu        $t0, $t0
    ctx->pc = 0x4068fcu;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 8)));
label_406900:
    // 0x406900: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x406900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x406904: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x406904u;
    {
        const bool branch_taken_0x406904 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x406908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406904u;
        // 0x406908: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x406904) {
            ctx->pc = 0x406910u;
            goto label_406910;
        }
    }
    ctx->pc = 0x40690Cu;
    // 0x40690c: 0x42023  negu        $a0, $a0
    ctx->pc = 0x40690cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
label_406910:
    // 0x406910: 0x106182a  slt         $v1, $t0, $a2
    ctx->pc = 0x406910u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x406914: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x406914u;
    {
        const bool branch_taken_0x406914 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x406918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406914u;
        // 0x406918: 0x88102a  slt         $v0, $a0, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x406914) {
            ctx->pc = 0x406928u;
            goto label_406928;
        }
    }
    ctx->pc = 0x40691Cu;
    // 0x40691c: 0x86102a  slt         $v0, $a0, $a2
    ctx->pc = 0x40691cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x406920: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x406920u;
    {
        const bool branch_taken_0x406920 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x406924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406920u;
        // 0x406924: 0x88102a  slt         $v0, $a0, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x406920) {
            ctx->pc = 0x406934u;
            goto label_406934;
        }
    }
    ctx->pc = 0x406928u;
label_406928:
    // 0x406928: 0x140182d  daddu       $v1, $t2, $zero
    ctx->pc = 0x406928u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40692c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x40692Cu;
    {
        const bool branch_taken_0x40692c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x406930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40692Cu;
        // 0x406930: 0xe2180b  movn        $v1, $a3, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40692c) {
            ctx->pc = 0x406938u;
            goto label_406938;
        }
    }
    ctx->pc = 0x406934u;
label_406934:
    // 0x406934: 0x120182d  daddu       $v1, $t1, $zero
    ctx->pc = 0x406934u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_406938:
    // 0x406938: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x406938u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x40693c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x40693cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x406940: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x406940u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x406944: 0xa1620000  sb          $v0, 0x0($t3)
    ctx->pc = 0x406944u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x406948: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x406948u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x40694c: 0x28e20080  slti        $v0, $a3, 0x80
    ctx->pc = 0x40694cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x406950: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x406950u;
    {
        const bool branch_taken_0x406950 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x406954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406950u;
        // 0x406954: 0x256b0001  addiu       $t3, $t3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x406950) {
            ctx->pc = 0x406960u;
            goto label_406960;
        }
    }
    ctx->pc = 0x406958u;
    // 0x406958: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x406958u;
    {
        const bool branch_taken_0x406958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40695Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406958u;
        // 0x40695c: 0xf4a02d  daddu       $s4, $a3, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x406958) {
            ctx->pc = 0x406968u;
            goto label_406968;
        }
    }
    ctx->pc = 0x406960u;
label_406960:
    // 0x406960: 0x2471023  subu        $v0, $s2, $a3
    ctx->pc = 0x406960u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 7)));
    // 0x406964: 0x282a02d  daddu       $s4, $s4, $v0
    ctx->pc = 0x406964u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 2));
label_406968:
    // 0x406968: 0x214102b  sltu        $v0, $s0, $s4
    ctx->pc = 0x406968u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x40696c: 0x54400030  bnel        $v0, $zero, . + 4 + (0x30 << 2)
    ctx->pc = 0x40696Cu;
    {
        const bool branch_taken_0x40696c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x40696c) {
            ctx->pc = 0x406970u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x40696Cu;
            // 0x406970: 0x92a3029c  lbu         $v1, 0x29C($s5) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 668)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x406A30u;
            goto label_406a30;
        }
    }
    ctx->pc = 0x406974u;
    // 0x406974: 0x91c80001  lbu         $t0, 0x1($t6)
    ctx->pc = 0x406974u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 1)));
    // 0x406978: 0x658c0001  daddiu      $t4, $t4, 0x1
    ctx->pc = 0x406978u;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 12) + (int64_t)(int32_t)1);
    // 0x40697c: 0x91aa0001  lbu         $t2, 0x1($t5)
    ctx->pc = 0x40697cu;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 13), 1)));
    // 0x406980: 0x25ce0002  addiu       $t6, $t6, 0x2
    ctx->pc = 0x406980u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 2));
    // 0x406984: 0x91e90001  lbu         $t1, 0x1($t7)
    ctx->pc = 0x406984u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 1)));
    // 0x406988: 0x25ad0002  addiu       $t5, $t5, 0x2
    ctx->pc = 0x406988u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 2));
    // 0x40698c: 0x1481823  subu        $v1, $t2, $t0
    ctx->pc = 0x40698cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 8)));
    // 0x406990: 0x1282023  subu        $a0, $t1, $t0
    ctx->pc = 0x406990u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x406994: 0x4610002  bgez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x406994u;
    {
        const bool branch_taken_0x406994 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x406998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406994u;
        // 0x406998: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x406994) {
            ctx->pc = 0x4069A0u;
            goto label_4069a0;
        }
    }
    ctx->pc = 0x40699Cu;
    // 0x40699c: 0x63023  negu        $a2, $a2
    ctx->pc = 0x40699cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
label_4069a0:
    // 0x4069a0: 0x4810002  bgez        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x4069A0u;
    {
        const bool branch_taken_0x4069a0 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x4069A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4069A0u;
        // 0x4069a4: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4069a0) {
            ctx->pc = 0x4069ACu;
            goto label_4069ac;
        }
    }
    ctx->pc = 0x4069A8u;
    // 0x4069a8: 0x73823  negu        $a3, $a3
    ctx->pc = 0x4069a8u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 7)));
label_4069ac:
    // 0x4069ac: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x4069acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x4069b0: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x4069B0u;
    {
        const bool branch_taken_0x4069b0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x4069B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4069B0u;
        // 0x4069b4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4069b0) {
            ctx->pc = 0x4069BCu;
            goto label_4069bc;
        }
    }
    ctx->pc = 0x4069B8u;
    // 0x4069b8: 0x42023  negu        $a0, $a0
    ctx->pc = 0x4069b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
label_4069bc:
    // 0x4069bc: 0xe6182a  slt         $v1, $a3, $a2
    ctx->pc = 0x4069bcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x4069c0: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x4069C0u;
    {
        const bool branch_taken_0x4069c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4069C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4069C0u;
        // 0x4069c4: 0x25ef0002  addiu       $t7, $t7, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4069c0) {
            ctx->pc = 0x4069D4u;
            goto label_4069d4;
        }
    }
    ctx->pc = 0x4069C8u;
    // 0x4069c8: 0x86102a  slt         $v0, $a0, $a2
    ctx->pc = 0x4069c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x4069cc: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x4069CCu;
    {
        const bool branch_taken_0x4069cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4069cc) {
            ctx->pc = 0x4069D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4069CCu;
            // 0x4069d0: 0x120182d  daddu       $v1, $t1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4069E0u;
            goto label_4069e0;
        }
    }
    ctx->pc = 0x4069D4u;
label_4069d4:
    // 0x4069d4: 0x87102a  slt         $v0, $a0, $a3
    ctx->pc = 0x4069d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x4069d8: 0x140182d  daddu       $v1, $t2, $zero
    ctx->pc = 0x4069d8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4069dc: 0x102180b  movn        $v1, $t0, $v0
    ctx->pc = 0x4069dcu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 8));
label_4069e0:
    // 0x4069e0: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x4069e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4069e4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x4069e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x4069e8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x4069e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4069ec: 0xa1620000  sb          $v0, 0x0($t3)
    ctx->pc = 0x4069ecu;
    WRITE8(ADD32(GPR_U32(ctx, 11), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x4069f0: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x4069f0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x4069f4: 0x28e20080  slti        $v0, $a3, 0x80
    ctx->pc = 0x4069f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x4069f8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4069F8u;
    {
        const bool branch_taken_0x4069f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4069FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4069F8u;
        // 0x4069fc: 0x256b0001  addiu       $t3, $t3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4069f8) {
            ctx->pc = 0x406A08u;
            goto label_406a08;
        }
    }
    ctx->pc = 0x406A00u;
    // 0x406a00: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x406A00u;
    {
        const bool branch_taken_0x406a00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x406A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406A00u;
        // 0x406a04: 0xf4a02d  daddu       $s4, $a3, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x406a00) {
            ctx->pc = 0x406A10u;
            goto label_406a10;
        }
    }
    ctx->pc = 0x406A08u;
label_406a08:
    // 0x406a08: 0x2471023  subu        $v0, $s2, $a3
    ctx->pc = 0x406a08u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 7)));
    // 0x406a0c: 0x282a02d  daddu       $s4, $s4, $v0
    ctx->pc = 0x406a0cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 2));
label_406a10:
    // 0x406a10: 0x214102b  sltu        $v0, $s0, $s4
    ctx->pc = 0x406a10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x406a14: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x406A14u;
    {
        const bool branch_taken_0x406a14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x406A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406A14u;
        // 0x406a18: 0xdfa30028  ld          $v1, 0x28($sp) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x406a14) {
            ctx->pc = 0x406A2Cu;
            goto label_406a2c;
        }
    }
    ctx->pc = 0x406A1Cu;
    // 0x406a1c: 0x658c0001  daddiu      $t4, $t4, 0x1
    ctx->pc = 0x406a1cu;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 12) + (int64_t)(int32_t)1);
    // 0x406a20: 0x183102b  sltu        $v0, $t4, $v1
    ctx->pc = 0x406a20u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x406a24: 0x5440ffac  bnel        $v0, $zero, . + 4 + (-0x54 << 2)
    ctx->pc = 0x406A24u;
    {
        const bool branch_taken_0x406a24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x406a24) {
            ctx->pc = 0x406A28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x406A24u;
            // 0x406a28: 0x91c70000  lbu         $a3, 0x0($t6) (Delay Slot)
            SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4068D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4068d8;
        }
    }
    ctx->pc = 0x406A2Cu;
label_406a2c:
    // 0x406a2c: 0x92a3029c  lbu         $v1, 0x29C($s5)
    ctx->pc = 0x406a2cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 668)));
label_406a30:
    // 0x406a30: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x406a30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x406a34: 0x1462009e  bne         $v1, $v0, . + 4 + (0x9E << 2)
    ctx->pc = 0x406A34u;
    {
        const bool branch_taken_0x406a34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x406A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406A34u;
        // 0x406a38: 0xdfa80010  ld          $t0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x406a34) {
            ctx->pc = 0x406CB0u;
            goto label_406cb0;
        }
    }
    ctx->pc = 0x406A3Cu;
    // 0x406a3c: 0x8ea402ac  lw          $a0, 0x2AC($s5)
    ctx->pc = 0x406a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 684)));
    // 0x406a40: 0x141aba  dsrl        $v1, $s4, 10
    ctx->pc = 0x406a40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) >> 10);
    // 0x406a44: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x406a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x406a48: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x406a48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x406a4c: 0x212ba  dsrl        $v0, $v0, 10
    ctx->pc = 0x406a4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 10);
    // 0x406a50: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x406a50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x406a54: 0x629024  and         $s2, $v1, $v0
    ctx->pc = 0x406a54u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x406a58: 0x3291ffff  andi        $s1, $s4, 0xFFFF
    ctx->pc = 0x406a58u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)65535);
    // 0x406a5c: 0x10a0007e  beqz        $a1, . + 4 + (0x7E << 2)
    ctx->pc = 0x406A5Cu;
    {
        const bool branch_taken_0x406a5c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x406A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406A5Cu;
        // 0x406a60: 0xafa40034  sw          $a0, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x406a5c) {
            ctx->pc = 0x406C58u;
            goto label_406c58;
        }
    }
    ctx->pc = 0x406A64u;
    // 0x406a64: 0x8eb702a0  lw          $s7, 0x2A0($s5)
    ctx->pc = 0x406a64u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 672)));
    // 0x406a68: 0x51023  negu        $v0, $a1
    ctx->pc = 0x406a68u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
    // 0x406a6c: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x406a6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x406a70: 0x241e0004  addiu       $fp, $zero, 0x4
    ctx->pc = 0x406a70u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x406a74: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x406a74u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x406a78: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x406a78u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x406a7c: 0x1060003a  beqz        $v1, . + 4 + (0x3A << 2)
    ctx->pc = 0x406A7Cu;
    {
        const bool branch_taken_0x406a7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x406A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406A7Cu;
        // 0x406a80: 0x2e0982d  daddu       $s3, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x406a7c) {
            ctx->pc = 0x406B68u;
            goto label_406b68;
        }
    }
    ctx->pc = 0x406A84u;
    // 0x406a84: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x406a84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x406a88: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x406A88u;
    {
        const bool branch_taken_0x406a88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x406A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406A88u;
        // 0x406a8c: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x406a88) {
            ctx->pc = 0x406B20u;
            goto label_406b20;
        }
    }
    ctx->pc = 0x406A90u;
    // 0x406a90: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x406A90u;
    {
        const bool branch_taken_0x406a90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x406a90) {
            ctx->pc = 0x406A94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x406A90u;
            // 0x406a94: 0x92620000  lbu         $v0, 0x0($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x406AE0u;
            goto label_406ae0;
        }
    }
    ctx->pc = 0x406A98u;
    // 0x406a98: 0x92e20000  lbu         $v0, 0x0($s7)
    ctx->pc = 0x406a98u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x406a9c: 0x145e000c  bne         $v0, $fp, . + 4 + (0xC << 2)
    ctx->pc = 0x406A9Cu;
    {
        const bool branch_taken_0x406a9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 30));
        ctx->pc = 0x406AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406A9Cu;
        // 0x406aa0: 0x8fa60030  lw          $a2, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x406a9c) {
            ctx->pc = 0x406AD0u;
            goto label_406ad0;
        }
    }
    ctx->pc = 0x406AA4u;
    // 0x406aa4: 0x8ea502a4  lw          $a1, 0x2A4($s5)
    ctx->pc = 0x406aa4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 676)));
    // 0x406aa8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x406aa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x406aac: 0x94b00000  lhu         $s0, 0x0($a1)
    ctx->pc = 0x406aacu;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x406ab0: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x406AB0u;
    SET_GPR_U32(ctx, 31, 0x406AB8u);
    ctx->pc = 0x406AB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x406AB0u;
    // 0x406ab4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x406AB0u, 0x406AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x406AB8u;
label_406ab8:
    // 0x406ab8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x406ab8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x406abc: 0x28a3a  dsrl        $s1, $v0, 8
    ctx->pc = 0x406abcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) >> 8);
    // 0x406ac0: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x406AC0u;
    SET_GPR_U32(ctx, 31, 0x406AC8u);
    ctx->pc = 0x406AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x406AC0u;
    // 0x406ac4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x406AC0u, 0x406AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x406AC8u;
label_406ac8:
    // 0x406ac8: 0x2923a  dsrl        $s2, $v0, 8
    ctx->pc = 0x406ac8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) >> 8);
    // 0x406acc: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x406accu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_406ad0:
    // 0x406ad0: 0x26f30001  addiu       $s3, $s7, 0x1
    ctx->pc = 0x406ad0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x406ad4: 0x24140002  addiu       $s4, $zero, 0x2
    ctx->pc = 0x406ad4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x406ad8: 0x24d6ffff  addiu       $s6, $a2, -0x1
    ctx->pc = 0x406ad8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x406adc: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x406adcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_406ae0:
    // 0x406ae0: 0x545e000d  bnel        $v0, $fp, . + 4 + (0xD << 2)
    ctx->pc = 0x406AE0u;
    {
        const bool branch_taken_0x406ae0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 30));
        if (branch_taken_0x406ae0) {
            ctx->pc = 0x406AE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x406AE0u;
            // 0x406ae4: 0x26940002  addiu       $s4, $s4, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x406B18u;
            goto label_406b18;
        }
    }
    ctx->pc = 0x406AE8u;
    // 0x406ae8: 0x8ea502a4  lw          $a1, 0x2A4($s5)
    ctx->pc = 0x406ae8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 676)));
    // 0x406aec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x406aecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x406af0: 0x2852821  addu        $a1, $s4, $a1
    ctx->pc = 0x406af0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
    // 0x406af4: 0x94b00000  lhu         $s0, 0x0($a1)
    ctx->pc = 0x406af4u;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x406af8: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x406AF8u;
    SET_GPR_U32(ctx, 31, 0x406B00u);
    ctx->pc = 0x406AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x406AF8u;
    // 0x406afc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x406AF8u, 0x406B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x406B00u;
label_406b00:
    // 0x406b00: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x406b00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x406b04: 0x28a3a  dsrl        $s1, $v0, 8
    ctx->pc = 0x406b04u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) >> 8);
    // 0x406b08: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x406B08u;
    SET_GPR_U32(ctx, 31, 0x406B10u);
    ctx->pc = 0x406B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x406B08u;
    // 0x406b0c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x406B08u, 0x406B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x406B10u;
label_406b10:
    // 0x406b10: 0x2923a  dsrl        $s2, $v0, 8
    ctx->pc = 0x406b10u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) >> 8);
    // 0x406b14: 0x26940002  addiu       $s4, $s4, 0x2
    ctx->pc = 0x406b14u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
label_406b18:
    // 0x406b18: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x406b18u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x406b1c: 0x26d6ffff  addiu       $s6, $s6, -0x1
    ctx->pc = 0x406b1cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
label_406b20:
    // 0x406b20: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x406b20u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x406b24: 0x545e000d  bnel        $v0, $fp, . + 4 + (0xD << 2)
    ctx->pc = 0x406B24u;
    {
        const bool branch_taken_0x406b24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 30));
        if (branch_taken_0x406b24) {
            ctx->pc = 0x406B28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x406B24u;
            // 0x406b28: 0x26940002  addiu       $s4, $s4, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x406B5Cu;
            goto label_406b5c;
        }
    }
    ctx->pc = 0x406B2Cu;
    // 0x406b2c: 0x8ea502a4  lw          $a1, 0x2A4($s5)
    ctx->pc = 0x406b2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 676)));
    // 0x406b30: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x406b30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x406b34: 0x2852821  addu        $a1, $s4, $a1
    ctx->pc = 0x406b34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
    // 0x406b38: 0x94b00000  lhu         $s0, 0x0($a1)
    ctx->pc = 0x406b38u;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x406b3c: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x406B3Cu;
    SET_GPR_U32(ctx, 31, 0x406B44u);
    ctx->pc = 0x406B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x406B3Cu;
    // 0x406b40: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x406B3Cu, 0x406B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x406B44u;
label_406b44:
    // 0x406b44: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x406b44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x406b48: 0x28a3a  dsrl        $s1, $v0, 8
    ctx->pc = 0x406b48u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) >> 8);
    // 0x406b4c: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x406B4Cu;
    SET_GPR_U32(ctx, 31, 0x406B54u);
    ctx->pc = 0x406B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x406B4Cu;
    // 0x406b50: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x406B4Cu, 0x406B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x406B54u;
label_406b54:
    // 0x406b54: 0x2923a  dsrl        $s2, $v0, 8
    ctx->pc = 0x406b54u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) >> 8);
    // 0x406b58: 0x26940002  addiu       $s4, $s4, 0x2
    ctx->pc = 0x406b58u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
label_406b5c:
    // 0x406b5c: 0x26d6ffff  addiu       $s6, $s6, -0x1
    ctx->pc = 0x406b5cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
    // 0x406b60: 0x12c0003d  beqz        $s6, . + 4 + (0x3D << 2)
    ctx->pc = 0x406B60u;
    {
        const bool branch_taken_0x406b60 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x406B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406B60u;
        // 0x406b64: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x406b60) {
            ctx->pc = 0x406C58u;
            goto label_406c58;
        }
    }
    ctx->pc = 0x406B68u;
label_406b68:
    // 0x406b68: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x406b68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x406b6c: 0x545e000d  bnel        $v0, $fp, . + 4 + (0xD << 2)
    ctx->pc = 0x406B6Cu;
    {
        const bool branch_taken_0x406b6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 30));
        if (branch_taken_0x406b6c) {
            ctx->pc = 0x406B70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x406B6Cu;
            // 0x406b70: 0x92620001  lbu         $v0, 0x1($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x406BA4u;
            goto label_406ba4;
        }
    }
    ctx->pc = 0x406B74u;
    // 0x406b74: 0x8ea502a4  lw          $a1, 0x2A4($s5)
    ctx->pc = 0x406b74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 676)));
    // 0x406b78: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x406b78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x406b7c: 0x2852821  addu        $a1, $s4, $a1
    ctx->pc = 0x406b7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
    // 0x406b80: 0x94b00000  lhu         $s0, 0x0($a1)
    ctx->pc = 0x406b80u;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x406b84: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x406B84u;
    SET_GPR_U32(ctx, 31, 0x406B8Cu);
    ctx->pc = 0x406B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x406B84u;
    // 0x406b88: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x406B84u, 0x406B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x406B8Cu;
label_406b8c:
    // 0x406b8c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x406b8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x406b90: 0x28a3a  dsrl        $s1, $v0, 8
    ctx->pc = 0x406b90u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) >> 8);
    // 0x406b94: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x406B94u;
    SET_GPR_U32(ctx, 31, 0x406B9Cu);
    ctx->pc = 0x406B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x406B94u;
    // 0x406b98: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x406B94u, 0x406B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x406B9Cu;
label_406b9c:
    // 0x406b9c: 0x2923a  dsrl        $s2, $v0, 8
    ctx->pc = 0x406b9cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) >> 8);
    // 0x406ba0: 0x92620001  lbu         $v0, 0x1($s3)
    ctx->pc = 0x406ba0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
label_406ba4:
    // 0x406ba4: 0x145e000c  bne         $v0, $fp, . + 4 + (0xC << 2)
    ctx->pc = 0x406BA4u;
    {
        const bool branch_taken_0x406ba4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 30));
        ctx->pc = 0x406BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406BA4u;
        // 0x406ba8: 0x26830002  addiu       $v1, $s4, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x406ba4) {
            ctx->pc = 0x406BD8u;
            goto label_406bd8;
        }
    }
    ctx->pc = 0x406BACu;
    // 0x406bac: 0x8ea502a4  lw          $a1, 0x2A4($s5)
    ctx->pc = 0x406bacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 676)));
    // 0x406bb0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x406bb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x406bb4: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x406bb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x406bb8: 0x94b00000  lhu         $s0, 0x0($a1)
    ctx->pc = 0x406bb8u;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x406bbc: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x406BBCu;
    SET_GPR_U32(ctx, 31, 0x406BC4u);
    ctx->pc = 0x406BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x406BBCu;
    // 0x406bc0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x406BBCu, 0x406BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x406BC4u;
label_406bc4:
    // 0x406bc4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x406bc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x406bc8: 0x28a3a  dsrl        $s1, $v0, 8
    ctx->pc = 0x406bc8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) >> 8);
    // 0x406bcc: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x406BCCu;
    SET_GPR_U32(ctx, 31, 0x406BD4u);
    ctx->pc = 0x406BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x406BCCu;
    // 0x406bd0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x406BCCu, 0x406BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x406BD4u;
label_406bd4:
    // 0x406bd4: 0x2923a  dsrl        $s2, $v0, 8
    ctx->pc = 0x406bd4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) >> 8);
label_406bd8:
    // 0x406bd8: 0x92620002  lbu         $v0, 0x2($s3)
    ctx->pc = 0x406bd8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x406bdc: 0x145e000c  bne         $v0, $fp, . + 4 + (0xC << 2)
    ctx->pc = 0x406BDCu;
    {
        const bool branch_taken_0x406bdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 30));
        ctx->pc = 0x406BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406BDCu;
        // 0x406be0: 0x26830004  addiu       $v1, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x406bdc) {
            ctx->pc = 0x406C10u;
            goto label_406c10;
        }
    }
    ctx->pc = 0x406BE4u;
    // 0x406be4: 0x8ea502a4  lw          $a1, 0x2A4($s5)
    ctx->pc = 0x406be4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 676)));
    // 0x406be8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x406be8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x406bec: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x406becu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x406bf0: 0x94b00000  lhu         $s0, 0x0($a1)
    ctx->pc = 0x406bf0u;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x406bf4: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x406BF4u;
    SET_GPR_U32(ctx, 31, 0x406BFCu);
    ctx->pc = 0x406BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x406BF4u;
    // 0x406bf8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x406BF4u, 0x406BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x406BFCu;
label_406bfc:
    // 0x406bfc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x406bfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x406c00: 0x28a3a  dsrl        $s1, $v0, 8
    ctx->pc = 0x406c00u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) >> 8);
    // 0x406c04: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x406C04u;
    SET_GPR_U32(ctx, 31, 0x406C0Cu);
    ctx->pc = 0x406C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x406C04u;
    // 0x406c08: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x406C04u, 0x406C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x406C0Cu;
label_406c0c:
    // 0x406c0c: 0x2923a  dsrl        $s2, $v0, 8
    ctx->pc = 0x406c0cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) >> 8);
label_406c10:
    // 0x406c10: 0x92620003  lbu         $v0, 0x3($s3)
    ctx->pc = 0x406c10u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 3)));
    // 0x406c14: 0x145e000c  bne         $v0, $fp, . + 4 + (0xC << 2)
    ctx->pc = 0x406C14u;
    {
        const bool branch_taken_0x406c14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 30));
        ctx->pc = 0x406C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406C14u;
        // 0x406c18: 0x26830006  addiu       $v1, $s4, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x406c14) {
            ctx->pc = 0x406C48u;
            goto label_406c48;
        }
    }
    ctx->pc = 0x406C1Cu;
    // 0x406c1c: 0x8ea502a4  lw          $a1, 0x2A4($s5)
    ctx->pc = 0x406c1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 676)));
    // 0x406c20: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x406c20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x406c24: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x406c24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x406c28: 0x94b00000  lhu         $s0, 0x0($a1)
    ctx->pc = 0x406c28u;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x406c2c: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x406C2Cu;
    SET_GPR_U32(ctx, 31, 0x406C34u);
    ctx->pc = 0x406C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x406C2Cu;
    // 0x406c30: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x406C2Cu, 0x406C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x406C34u;
label_406c34:
    // 0x406c34: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x406c34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x406c38: 0x28a3a  dsrl        $s1, $v0, 8
    ctx->pc = 0x406c38u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) >> 8);
    // 0x406c3c: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x406C3Cu;
    SET_GPR_U32(ctx, 31, 0x406C44u);
    ctx->pc = 0x406C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x406C3Cu;
    // 0x406c40: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x406C3Cu, 0x406C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x406C44u;
label_406c44:
    // 0x406c44: 0x2923a  dsrl        $s2, $v0, 8
    ctx->pc = 0x406c44u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) >> 8);
label_406c48:
    // 0x406c48: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x406c48u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x406c4c: 0x26d6fffc  addiu       $s6, $s6, -0x4
    ctx->pc = 0x406c4cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967292));
    // 0x406c50: 0x16c0ffc5  bnez        $s6, . + 4 + (-0x3B << 2)
    ctx->pc = 0x406C50u;
    {
        const bool branch_taken_0x406c50 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x406C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406C50u;
        // 0x406c54: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x406c50) {
            ctx->pc = 0x406B68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_406b68;
        }
    }
    ctx->pc = 0x406C58u;
label_406c58:
    // 0x406c58: 0x8fa70034  lw          $a3, 0x34($sp)
    ctx->pc = 0x406c58u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x406c5c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x406c5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x406c60: 0x94f00008  lhu         $s0, 0x8($a3)
    ctx->pc = 0x406c60u;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x406c64: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x406C64u;
    SET_GPR_U32(ctx, 31, 0x406C6Cu);
    ctx->pc = 0x406C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x406C64u;
    // 0x406c68: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x406C64u, 0x406C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x406C6Cu;
label_406c6c:
    // 0x406c6c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x406c6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x406c70: 0x288fa  dsrl        $s1, $v0, 3
    ctx->pc = 0x406c70u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) >> 3);
    // 0x406c74: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x406C74u;
    SET_GPR_U32(ctx, 31, 0x406C7Cu);
    ctx->pc = 0x406C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x406C74u;
    // 0x406c78: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x406C74u, 0x406C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x406C7Cu;
label_406c7c:
    // 0x406c7c: 0x290fa  dsrl        $s2, $v0, 3
    ctx->pc = 0x406c7cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) >> 3);
    // 0x406c80: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x406c80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x406c84: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x406c84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x406c88: 0x212ba  dsrl        $v0, $v0, 10
    ctx->pc = 0x406c88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 10);
    // 0x406c8c: 0x52102b  sltu        $v0, $v0, $s2
    ctx->pc = 0x406c8cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x406c90: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x406C90u;
    {
        const bool branch_taken_0x406c90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x406C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406C90u;
        // 0x406c94: 0xdfa80010  ld          $t0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x406c90) {
            ctx->pc = 0x406CA8u;
            goto label_406ca8;
        }
    }
    ctx->pc = 0x406C98u;
    // 0x406c98: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x406c98u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x406c9c: 0x14a07a  dsrl        $s4, $s4, 1
    ctx->pc = 0x406c9cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) >> 1);
    // 0x406ca0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x406CA0u;
    {
        const bool branch_taken_0x406ca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x406CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406CA0u;
        // 0x406ca4: 0x288102b  sltu        $v0, $s4, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x406ca0) {
            ctx->pc = 0x406CB4u;
            goto label_406cb4;
        }
    }
    ctx->pc = 0x406CA8u;
label_406ca8:
    // 0x406ca8: 0x1212b8  dsll        $v0, $s2, 10
    ctx->pc = 0x406ca8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << 10);
    // 0x406cac: 0x51a02d  daddu       $s4, $v0, $s1
    ctx->pc = 0x406cacu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 17));
label_406cb0:
    // 0x406cb0: 0x288102b  sltu        $v0, $s4, $t0
    ctx->pc = 0x406cb0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
label_406cb4:
    // 0x406cb4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x406CB4u;
    {
        const bool branch_taken_0x406cb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x406CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406CB4u;
        // 0x406cb8: 0x8fa50008  lw          $a1, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x406cb4) {
            ctx->pc = 0x406CC8u;
            goto label_406cc8;
        }
    }
    ctx->pc = 0x406CBCu;
    // 0x406cbc: 0x8ea901cc  lw          $t1, 0x1CC($s5)
    ctx->pc = 0x406cbcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 460)));
    // 0x406cc0: 0xafa90008  sw          $t1, 0x8($sp)
    ctx->pc = 0x406cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 9));
label_406cc4:
    // 0x406cc4: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x406cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_406cc8:
    // 0x406cc8: 0xc101d9e  jal         func_407678
    ctx->pc = 0x406CC8u;
    SET_GPR_U32(ctx, 31, 0x406CD0u);
    ctx->pc = 0x406CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x406CC8u;
    // 0x406ccc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x407678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x407678u, 0x406CC8u, 0x406CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x406CD0u;
label_406cd0:
    // 0x406cd0: 0x92a2029d  lbu         $v0, 0x29D($s5)
    ctx->pc = 0x406cd0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 669)));
    // 0x406cd4: 0x1040003e  beqz        $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x406CD4u;
    {
        const bool branch_taken_0x406cd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x406CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406CD4u;
        // 0x406cd8: 0x8fa30030  lw          $v1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x406cd4) {
            ctx->pc = 0x406DD0u;
            goto label_406dd0;
        }
    }
    ctx->pc = 0x406CDCu;
    // 0x406cdc: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x406cdcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x406ce0: 0x103102a  slt         $v0, $t0, $v1
    ctx->pc = 0x406ce0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x406ce4: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x406CE4u;
    {
        const bool branch_taken_0x406ce4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x406CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406CE4u;
        // 0x406ce8: 0x2462ffff  addiu       $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x406ce4) {
            ctx->pc = 0x406DBCu;
            goto label_406dbc;
        }
    }
    ctx->pc = 0x406CECu;
    // 0x406cec: 0x28630002  slti        $v1, $v1, 0x2
    ctx->pc = 0x406cecu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x406cf0: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x406CF0u;
    {
        const bool branch_taken_0x406cf0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x406CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406CF0u;
        // 0x406cf4: 0x30440003  andi        $a0, $v0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x406cf0) {
            ctx->pc = 0x406D3Cu;
            goto label_406d3c;
        }
    }
    ctx->pc = 0x406CF8u;
    // 0x406cf8: 0x5080001a  beql        $a0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x406CF8u;
    {
        const bool branch_taken_0x406cf8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x406cf8) {
            ctx->pc = 0x406CFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x406CF8u;
            // 0x406cfc: 0x8ea302a0  lw          $v1, 0x2A0($s5) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 672)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x406D64u;
            goto label_406d64;
        }
    }
    ctx->pc = 0x406D00u;
    // 0x406d00: 0x28820002  slti        $v0, $a0, 0x2
    ctx->pc = 0x406d00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x406d04: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x406D04u;
    {
        const bool branch_taken_0x406d04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x406d04) {
            ctx->pc = 0x406D08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x406D04u;
            // 0x406d08: 0x8ea202a0  lw          $v0, 0x2A0($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 672)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x406D40u;
            goto label_406d40;
        }
    }
    ctx->pc = 0x406D0Cu;
    // 0x406d0c: 0x28820003  slti        $v0, $a0, 0x3
    ctx->pc = 0x406d0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x406d10: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x406D10u;
    {
        const bool branch_taken_0x406d10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x406d10) {
            ctx->pc = 0x406D14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x406D10u;
            // 0x406d14: 0x8ea202a0  lw          $v0, 0x2A0($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 672)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x406D2Cu;
            goto label_406d2c;
        }
    }
    ctx->pc = 0x406D18u;
    // 0x406d18: 0x8ea302a0  lw          $v1, 0x2A0($s5)
    ctx->pc = 0x406d18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 672)));
    // 0x406d1c: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x406d1cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x406d20: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x406d20u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x406d24: 0xa0620001  sb          $v0, 0x1($v1)
    ctx->pc = 0x406d24u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x406d28: 0x8ea202a0  lw          $v0, 0x2A0($s5)
    ctx->pc = 0x406d28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 672)));
label_406d2c:
    // 0x406d2c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x406d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x406d30: 0x9043ffff  lbu         $v1, -0x1($v0)
    ctx->pc = 0x406d30u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294967295)));
    // 0x406d34: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x406d34u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x406d38: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x406d38u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
label_406d3c:
    // 0x406d3c: 0x8ea202a0  lw          $v0, 0x2A0($s5)
    ctx->pc = 0x406d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 672)));
label_406d40:
    // 0x406d40: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x406d40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x406d44: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x406d44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x406d48: 0x9043ffff  lbu         $v1, -0x1($v0)
    ctx->pc = 0x406d48u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294967295)));
    // 0x406d4c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x406d4cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x406d50: 0x104482a  slt         $t1, $t0, $a0
    ctx->pc = 0x406d50u;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x406d54: 0x11200019  beqz        $t1, . + 4 + (0x19 << 2)
    ctx->pc = 0x406D54u;
    {
        const bool branch_taken_0x406d54 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x406D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406D54u;
        // 0x406d58: 0xa0430000  sb          $v1, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x406d54) {
            ctx->pc = 0x406DBCu;
            goto label_406dbc;
        }
    }
    ctx->pc = 0x406D5Cu;
    // 0x406d5c: 0x0  nop
    ctx->pc = 0x406d5cu;
    // NOP
label_406d60:
    // 0x406d60: 0x8ea302a0  lw          $v1, 0x2A0($s5)
    ctx->pc = 0x406d60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 672)));
label_406d64:
    // 0x406d64: 0x25050001  addiu       $a1, $t0, 0x1
    ctx->pc = 0x406d64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x406d68: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x406d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x406d6c: 0x25060002  addiu       $a2, $t0, 0x2
    ctx->pc = 0x406d6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
    // 0x406d70: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x406d70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x406d74: 0x25070003  addiu       $a3, $t0, 0x3
    ctx->pc = 0x406d74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 3));
    // 0x406d78: 0x9064ffff  lbu         $a0, -0x1($v1)
    ctx->pc = 0x406d78u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294967295)));
    // 0x406d7c: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x406d7cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x406d80: 0x102482a  slt         $t1, $t0, $v0
    ctx->pc = 0x406d80u;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x406d84: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x406d84u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x406d88: 0x8ea202a0  lw          $v0, 0x2A0($s5)
    ctx->pc = 0x406d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 672)));
    // 0x406d8c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x406d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x406d90: 0x9044ffff  lbu         $a0, -0x1($v0)
    ctx->pc = 0x406d90u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294967295)));
    // 0x406d94: 0xa0440000  sb          $a0, 0x0($v0)
    ctx->pc = 0x406d94u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x406d98: 0x8ea302a0  lw          $v1, 0x2A0($s5)
    ctx->pc = 0x406d98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 672)));
    // 0x406d9c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x406d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x406da0: 0x9064ffff  lbu         $a0, -0x1($v1)
    ctx->pc = 0x406da0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294967295)));
    // 0x406da4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x406da4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x406da8: 0x8ea202a0  lw          $v0, 0x2A0($s5)
    ctx->pc = 0x406da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 672)));
    // 0x406dac: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x406dacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x406db0: 0x9043ffff  lbu         $v1, -0x1($v0)
    ctx->pc = 0x406db0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294967295)));
    // 0x406db4: 0x1520ffea  bnez        $t1, . + 4 + (-0x16 << 2)
    ctx->pc = 0x406DB4u;
    {
        const bool branch_taken_0x406db4 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x406DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406DB4u;
        // 0x406db8: 0xa0430000  sb          $v1, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x406db4) {
            ctx->pc = 0x406D60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_406d60;
        }
    }
    ctx->pc = 0x406DBCu;
label_406dbc:
    // 0x406dbc: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x406dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x406dc0: 0x8ea202a0  lw          $v0, 0x2A0($s5)
    ctx->pc = 0x406dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 672)));
    // 0x406dc4: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x406dc4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x406dc8: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x406dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x406dcc: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x406dccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
label_406dd0:
    // 0x406dd0: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x406dd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x406dd4: 0x7bb100e0  lq          $s1, 0xE0($sp)
    ctx->pc = 0x406dd4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x406dd8: 0x7bb200d0  lq          $s2, 0xD0($sp)
    ctx->pc = 0x406dd8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x406ddc: 0x7bb300c0  lq          $s3, 0xC0($sp)
    ctx->pc = 0x406ddcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x406de0: 0x7bb400b0  lq          $s4, 0xB0($sp)
    ctx->pc = 0x406de0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x406de4: 0x7bb500a0  lq          $s5, 0xA0($sp)
    ctx->pc = 0x406de4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x406de8: 0x7bb60090  lq          $s6, 0x90($sp)
    ctx->pc = 0x406de8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x406dec: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x406decu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x406df0: 0x7bbe0070  lq          $fp, 0x70($sp)
    ctx->pc = 0x406df0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x406df4: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x406df4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x406df8: 0x3e00008  jr          $ra
    ctx->pc = 0x406DF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x406DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x406DF8u;
        // 0x406dfc: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x406DF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x406E00u;
}
