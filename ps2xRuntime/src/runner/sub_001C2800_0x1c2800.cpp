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

// Function: sub_001C2800
// Address: 0x1c2800 - 0x1c2ab0
void sub_001C2800_0x1c2800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C2800_0x1c2800");
#endif

    switch (ctx->pc) {
        case 0x1c28a0u: goto label_1c28a0;
        case 0x1c28ccu: goto label_1c28cc;
        case 0x1c28f4u: goto label_1c28f4;
        case 0x1c29c4u: goto label_1c29c4;
        case 0x1c29d0u: goto label_1c29d0;
        case 0x1c2a18u: goto label_1c2a18;
        case 0x1c2a78u: goto label_1c2a78;
        default: break;
    }

    ctx->pc = 0x1c2800u;

    // 0x1c2800: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x1c2800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x1c2804: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1c2804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1c2808: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1c2808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x1c280c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1c280cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1c2810: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1c2810u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1c2814: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1c2814u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1c2818: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1c2818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1c281c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1c281cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1c2820: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1c2820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1c2824: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c2824u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c2828: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c2828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c282c: 0xafa400e0  sw          $a0, 0xE0($sp)
    ctx->pc = 0x1c282cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 4));
    // 0x1c2830: 0xafa500f0  sw          $a1, 0xF0($sp)
    ctx->pc = 0x1c2830u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 5));
    // 0x1c2834: 0xafa60100  sw          $a2, 0x100($sp)
    ctx->pc = 0x1c2834u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 6));
    // 0x1c2838: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1c2838u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c283c: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x1c283cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1c2840: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x1c2840u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x1c2844: 0x8c63be58  lw          $v1, -0x41A8($v1)
    ctx->pc = 0x1c2844u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x60BE58u));
    // 0x1c2848: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x1c2848u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1c284c: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x1c284cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x1c2850: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x1c2850u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x1c2854: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x1c2854u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x1c2858: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x1c2858u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x1c285c: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C285Cu;
    {
        const bool branch_taken_0x1c285c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c285c) {
            ctx->pc = 0x1C2884u;
            goto label_1c2884;
        }
    }
    ctx->pc = 0x1C2864u;
    // 0x1c2864: 0x8fa40100  lw          $a0, 0x100($sp)
    ctx->pc = 0x1c2864u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1c2868: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x1c2868u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x1c286c: 0x8c63be5c  lw          $v1, -0x41A4($v1)
    ctx->pc = 0x1c286cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x60BE5Cu));
    // 0x1c2870: 0x83082b  sltu        $at, $a0, $v1
    ctx->pc = 0x1c2870u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1c2874: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C2874u;
    {
        const bool branch_taken_0x1c2874 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2874) {
            ctx->pc = 0x1C2884u;
            goto label_1c2884;
        }
    }
    ctx->pc = 0x1C287Cu;
    // 0x1c287c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c287cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c2880: 0x307600ff  andi        $s6, $v1, 0xFF
    ctx->pc = 0x1c2880u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1c2884:
    // 0x1c2884: 0x32de00ff  andi        $fp, $s6, 0xFF
    ctx->pc = 0x1c2884u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
    // 0x1c2888: 0x13c0007b  beqz        $fp, . + 4 + (0x7B << 2)
    ctx->pc = 0x1C2888u;
    {
        const bool branch_taken_0x1c2888 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2888) {
            ctx->pc = 0x1C2A78u;
            goto label_1c2a78;
        }
    }
    ctx->pc = 0x1C2890u;
    // 0x1c2890: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1c2890u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1c2894: 0x24a574f0  addiu       $a1, $a1, 0x74F0
    ctx->pc = 0x1c2894u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29936));
    // 0x1c2898: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1c2898u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1c289c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1c289cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1c28a0:
    // 0x1c28a0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1c28a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1c28a4: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x1c28a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x1c28a8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1c28a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1c28ac: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1c28acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1c28b0: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x1c28b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x1c28b4: 0x1c60fffa  bgtz        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1C28B4u;
    {
        const bool branch_taken_0x1c28b4 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x1c28b4) {
            ctx->pc = 0x1C28A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c28a0;
        }
    }
    ctx->pc = 0x1C28BCu;
    // 0x1c28bc: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x1c28bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x1c28c0: 0x24a57510  addiu       $a1, $a1, 0x7510
    ctx->pc = 0x1c28c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29968));
    // 0x1c28c4: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1c28c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1c28c8: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1c28c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1c28cc:
    // 0x1c28cc: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1c28ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1c28d0: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x1c28d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x1c28d4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1c28d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1c28d8: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1c28d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1c28dc: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x1c28dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x1c28e0: 0x1c60fffa  bgtz        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1C28E0u;
    {
        const bool branch_taken_0x1c28e0 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x1c28e0) {
            ctx->pc = 0x1C28CCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c28cc;
        }
    }
    ctx->pc = 0x1C28E8u;
    // 0x1c28e8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1c28e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c28ec: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x1C28ECu;
    {
        const bool branch_taken_0x1c28ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c28ec) {
            ctx->pc = 0x1C2A4Cu;
            goto label_1c2a4c;
        }
    }
    ctx->pc = 0x1C28F4u;
label_1c28f4:
    // 0x1c28f4: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1c28f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1c28f8: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x1c28f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1c28fc: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x1c28fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1c2900: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x1c2900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x1c2904: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x1c2904u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1c2908: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1c2908u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1c290c: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x1c290cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1c2910: 0x8fa30100  lw          $v1, 0x100($sp)
    ctx->pc = 0x1c2910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1c2914: 0x8c4200a0  lw          $v0, 0xA0($v0)
    ctx->pc = 0x1c2914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x1c2918: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x1c2918u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1c291c: 0x640004a  bltz        $s2, . + 4 + (0x4A << 2)
    ctx->pc = 0x1C291Cu;
    {
        const bool branch_taken_0x1c291c = (GPR_S32(ctx, 18) < 0);
        if (branch_taken_0x1c291c) {
            ctx->pc = 0x1C2A48u;
            goto label_1c2a48;
        }
    }
    ctx->pc = 0x1C2924u;
    // 0x1c2924: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x1c2924u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x1c2928: 0x8c42be58  lw          $v0, -0x41A8($v0)
    ctx->pc = 0x1c2928u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x60BE58u));
    // 0x1c292c: 0x242082b  sltu        $at, $s2, $v0
    ctx->pc = 0x1c292cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1c2930: 0x10200045  beqz        $at, . + 4 + (0x45 << 2)
    ctx->pc = 0x1C2930u;
    {
        const bool branch_taken_0x1c2930 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2930) {
            ctx->pc = 0x1C2A48u;
            goto label_1c2a48;
        }
    }
    ctx->pc = 0x1C2938u;
    // 0x1c2938: 0x6200043  bltz        $s1, . + 4 + (0x43 << 2)
    ctx->pc = 0x1C2938u;
    {
        const bool branch_taken_0x1c2938 = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x1c2938) {
            ctx->pc = 0x1C2A48u;
            goto label_1c2a48;
        }
    }
    ctx->pc = 0x1C2940u;
    // 0x1c2940: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x1c2940u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x1c2944: 0x8c42be5c  lw          $v0, -0x41A4($v0)
    ctx->pc = 0x1c2944u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x60BE5Cu));
    // 0x1c2948: 0x222082b  sltu        $at, $s1, $v0
    ctx->pc = 0x1c2948u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1c294c: 0x1020003e  beqz        $at, . + 4 + (0x3E << 2)
    ctx->pc = 0x1C294Cu;
    {
        const bool branch_taken_0x1c294c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c294c) {
            ctx->pc = 0x1C2A48u;
            goto label_1c2a48;
        }
    }
    ctx->pc = 0x1C2954u;
    // 0x1c2954: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x1c2954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1c2958: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x1c2958u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1c295c: 0x8c4200b4  lw          $v0, 0xB4($v0)
    ctx->pc = 0x1c295cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
    // 0x1c2960: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1c2960u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c2964: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x1c2964u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x1c2968: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1c2968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1c296c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1c296cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1c2970: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1c2970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c2974: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c2974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c2978: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1c2978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c297c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c297cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c2980: 0x14620031  bne         $v1, $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x1C2980u;
    {
        const bool branch_taken_0x1c2980 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c2980) {
            ctx->pc = 0x1C2A48u;
            goto label_1c2a48;
        }
    }
    ctx->pc = 0x1C2988u;
    // 0x1c2988: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x1c2988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1c298c: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x1c298cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1c2990: 0x8c4200b4  lw          $v0, 0xB4($v0)
    ctx->pc = 0x1c2990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
    // 0x1c2994: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1c2994u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c2998: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x1c2998u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x1c299c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1c299cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1c29a0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1c29a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1c29a4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1c29a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c29a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c29a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c29ac: 0x84420006  lh          $v0, 0x6($v0)
    ctx->pc = 0x1c29acu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x1c29b0: 0x2bc3c  dsll32      $s7, $v0, 16
    ctx->pc = 0x1c29b0u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1c29b4: 0x17bc3f  dsra32      $s7, $s7, 16
    ctx->pc = 0x1c29b4u;
    SET_GPR_S64(ctx, 23, GPR_S64(ctx, 23) >> (32 + 16));
    // 0x1c29b8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1c29b8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c29bc: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x1C29BCu;
    {
        const bool branch_taken_0x1c29bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c29bc) {
            ctx->pc = 0x1C2A34u;
            goto label_1c2a34;
        }
    }
    ctx->pc = 0x1C29C4u;
label_1c29c4:
    // 0x1c29c4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1c29c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c29c8: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1C29C8u;
    {
        const bool branch_taken_0x1c29c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c29c8) {
            ctx->pc = 0x1C2A1Cu;
            goto label_1c2a1c;
        }
    }
    ctx->pc = 0x1C29D0u;
label_1c29d0:
    // 0x1c29d0: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x1c29d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1c29d4: 0x141880  sll         $v1, $s4, 2
    ctx->pc = 0x1c29d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x1c29d8: 0x8c4200b4  lw          $v0, 0xB4($v0)
    ctx->pc = 0x1c29d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
    // 0x1c29dc: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1c29dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c29e0: 0x131040  sll         $v0, $s3, 1
    ctx->pc = 0x1c29e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x1c29e4: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1c29e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1c29e8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1c29e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1c29ec: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1c29ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c29f0: 0x43a821  addu        $s5, $v0, $v1
    ctx->pc = 0x1c29f0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c29f4: 0x86a20006  lh          $v0, 0x6($s5)
    ctx->pc = 0x1c29f4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 6)));
    // 0x1c29f8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1c29f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1c29fc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1c29fcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1c2a00: 0x14570005  bne         $v0, $s7, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C2A00u;
    {
        const bool branch_taken_0x1c2a00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 23));
        if (branch_taken_0x1c2a00) {
            ctx->pc = 0x1C2A18u;
            goto label_1c2a18;
        }
    }
    ctx->pc = 0x1C2A08u;
    // 0x1c2a08: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x1c2a08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1c2a0c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1c2a0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2a10: 0xc070aac  jal         func_1C2AB0
    ctx->pc = 0x1C2A10u;
    SET_GPR_U32(ctx, 31, 0x1C2A18u);
    ctx->pc = 0x1C2AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2AB0u, 0x1C2A10u, 0x1C2A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2A18u;
label_1c2a18:
    // 0x1c2a18: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1c2a18u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1c2a1c:
    // 0x1c2a1c: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x1c2a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x1c2a20: 0x8c42be58  lw          $v0, -0x41A8($v0)
    ctx->pc = 0x1c2a20u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x60BE58u));
    // 0x1c2a24: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x1c2a24u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1c2a28: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x1C2A28u;
    {
        const bool branch_taken_0x1c2a28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c2a28) {
            ctx->pc = 0x1C29D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c29d0;
        }
    }
    ctx->pc = 0x1C2A30u;
    // 0x1c2a30: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1c2a30u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_1c2a34:
    // 0x1c2a34: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x1c2a34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x1c2a38: 0x8c42be5c  lw          $v0, -0x41A4($v0)
    ctx->pc = 0x1c2a38u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x60BE5Cu));
    // 0x1c2a3c: 0x282102b  sltu        $v0, $s4, $v0
    ctx->pc = 0x1c2a3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1c2a40: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x1C2A40u;
    {
        const bool branch_taken_0x1c2a40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c2a40) {
            ctx->pc = 0x1C29C4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c29c4;
        }
    }
    ctx->pc = 0x1C2A48u;
label_1c2a48:
    // 0x1c2a48: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1c2a48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1c2a4c:
    // 0x1c2a4c: 0x2e020005  sltiu       $v0, $s0, 0x5
    ctx->pc = 0x1c2a4cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x1c2a50: 0x1440ffa8  bnez        $v0, . + 4 + (-0x58 << 2)
    ctx->pc = 0x1C2A50u;
    {
        const bool branch_taken_0x1c2a50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c2a50) {
            ctx->pc = 0x1C28F4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c28f4;
        }
    }
    ctx->pc = 0x1C2A58u;
    // 0x1c2a58: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1c2a58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1c2a5c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1c2a5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c2a60: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x1c2a60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
    // 0x1c2a64: 0x278595e8  addiu       $a1, $gp, -0x6A18
    ctx->pc = 0x1c2a64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940136));
    // 0x1c2a68: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c2a68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2a6c: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1c2a6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c2a70: 0xc08f558  jal         func_23D560
    ctx->pc = 0x1C2A70u;
    SET_GPR_U32(ctx, 31, 0x1C2A78u);
    ctx->pc = 0x23D560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D560u, 0x1C2A70u, 0x1C2A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2A78u;
label_1c2a78:
    // 0x1c2a78: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1c2a78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c2a7c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1c2a7cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1c2a80: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1c2a80u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1c2a84: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1c2a84u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1c2a88: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1c2a88u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c2a8c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1c2a8cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c2a90: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1c2a90u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c2a94: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1c2a94u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c2a98: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c2a98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c2a9c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c2a9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c2aa0: 0x27bd0110  addiu       $sp, $sp, 0x110
    ctx->pc = 0x1c2aa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1c2aa4: 0x3e00008  jr          $ra
    ctx->pc = 0x1C2AA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C2AA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C2AACu;
    // 0x1c2aac: 0x0  nop
    ctx->pc = 0x1c2aacu;
    // NOP
    ctx->pc = 0x1c2ab0u;
}
